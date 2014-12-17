import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.graphics.Image;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;
import com.haxepunk.utils.Joystick;

class Player extends Entity
{
	var sprite:Spritemap;
	
	var speed:Float = Settings.PLAYER_SPEED;
	var state:String = "still";
	var throwTimer:Float = 0;
	var throwTime:Int = 40;
	var shadow:Shadow;
	var indicator:Image;
	var target:Target;
	var targetAngle:Float = 270.0;
	var addAngle:Float = 0;
	var thrownTime = 0;
	var inputTeamName:String;
	var ballHoldTimer:Int = 0;
	var ballHoldTime:Int = Settings.PLAYER_HOLD_BUTTER_TIMER;
	var timerBar:Bar;
	var indiUp:Bool = false;
	
	var joy:Joystick;
	var joyNum:Int;
	var joyInput:Bool;
	var joyType:String;
	var joyMap:Array<Int>;

	var splat:Sfx;
	var huuang:Sfx;
	var pickup:Sfx;
	
	public var boundX:Int = 60;
	public var boundY:Int = 55;
	public var ballAttached:Bool = false;
	public var team:Int;
	public var b:Ball;
	public var focused:Bool = false;
	public var score:Int = 0;

//		-------INITIALIZER-------	
	public override function new(Team:Int, focus:Bool, bar:Bar, _x:Float, _y:Float, jsInput:Bool = false, jsNum:Int = 0, jsType:String = "")
	{
		//Various
		super(_x, _y);
		team = Team;
		focused = focus;
		timerBar = bar;
		
		if(team == 1) 
		{
			inputTeamName = "t1_";
			sprite = new Spritemap("graphics/game-gfx.png",100,128);
		}
		else if(team == 2) 
		{
			inputTeamName = "t2_";
			sprite = new Spritemap("graphics/game-gfx-2.png",100,128);
		}
		
		//Hitbox
		setHitbox(50,30,15,30);
		sprite.originX = 20;
		sprite.originY = 120;
		
		//Graphics
		sprite.add("still",			[0,5,10,15],10,true);
		sprite.add("move",			[1,6,11,16],10,true);
		sprite.add("wBall_still",	[2,7,12,17],10,true);
		sprite.add("wBall_move",	[3,8,13,18],10,true);
		sprite.add("hasThrown",		[4],0,false);
		sprite.add("getHit",		[9],0,false);
		sprite.play("still");
		
		graphic = sprite;
		
		indicator = new Image("graphics/Arrow.png");
		indicator.originY = sprite.originY + indicator.height;
		indicator.originX = indicator.width/2;
		focused ? indicator.alpha = 1 : indicator.alpha = 0;
		
		addGraphic(indicator);
		
		
		if(x > HXP.halfWidth) sprite.scaleX = -1;
		else sprite.scaleX = 1;
		
		//Audio
		var audioEnd:String = ".ogg";
#if flash	
		audioEnd = ".mp3";
#end
		
		splat  = new Sfx("audio/splat"+audioEnd);
		huuang = new Sfx("audio/huuang"+audioEnd);
		pickup = new Sfx("audio/Pickup"+audioEnd);
		
		//Input
		Input.define("t2_left", 		[Key.LEFT]);
		Input.define("t2_right",		[Key.RIGHT]);
		Input.define("t2_up",	 		[Key.UP]);
		Input.define("t2_down", 		[Key.DOWN]);
		Input.define("t2_throw", 		[Key.K]);
		Input.define("t2_targetDir1", 	[Key.J]);
		Input.define("t2_targetDir2",	[Key.L]);
		
		Input.define("t1_left", 		[Key.A]);
		Input.define("t1_right",		[Key.D]);
		Input.define("t1_up",	 		[Key.W]);
		Input.define("t1_down", 		[Key.S]);
		Input.define("t1_throw", 		[Key.X]);
		Input.define("t1_targetDir1", 	[Key.Z]);
		Input.define("t1_targetDir2", 	[Key.C]);
		
		joyNum = jsNum;
		joyInput = jsInput;	
		joyType = jsType;
		
		if(joyInput) 
		{
			joy = Input.joystick(joyNum);
		}
		
		joyMap = [];
		
		switch(joyType)
		{
			case "ps3":
				joyMap = [
						  PS3_GAMEPAD.X_BUTTON,				//	0	X 
						  PS3_GAMEPAD.L1_BUTTON,			//	1	L1
						  PS3_GAMEPAD.R1_BUTTON,			//	2	R1
						  PS3_GAMEPAD.START_BUTTON, 		//	3	Start
						  PS3_GAMEPAD.SELECT_BUTTON,		//	4	Selecet
						  PS3_GAMEPAD.TRIANGLE_BUTTON		//	5	Triangle
						  ];
			  	
						  
			case "xbox":
				joyMap = [
						  XBOX_GAMEPAD.A_BUTTON,
						  XBOX_GAMEPAD.LB_BUTTON,
						  XBOX_GAMEPAD.RB_BUTTON,
						  XBOX_GAMEPAD.START_BUTTON,
						  XBOX_GAMEPAD.BACK_BUTTON,
						  XBOX_GAMEPAD.Y_BUTTON
						  ];
						 
						  
			default:
				joyMap = [
						  OUYA_GAMEPAD.A_BUTTON,
						  OUYA_GAMEPAD.LB_BUTTON,
						  OUYA_GAMEPAD.RB_BUTTON,
						  OUYA_GAMEPAD.START_BUTTON,
						  OUYA_GAMEPAD.BACK_BUTTON,
						  OUYA_GAMEPAD.Y_BUTTON
						  ];
						  
		}
	}
	
	override function added():Void
	{
		super.added();
		shadow = new Shadow(this);
		target = new Target(this);
		world.add(shadow);
		world.add(target);
	}
	
//		-------UPDATE-------
	override function update():Void
	{
		if(focused) joyInput ? handleJsInput() : handleInput();
		holdBallTiming();
		keepInBounds();
		checkBall();
		checkOtherPlayer();
		ballUpdate();
		updateGraphic();
		shadow.updatePos(x+(5*sprite.scaleX),y);
		shadow.set_layer(layer+1);
		super.update();
	}
	
	
	function checkBall():Void
	{
		var wBall = [];
		world.getClass(Ball,wBall);
		var ball:Ball = collideWith(wBall[0],x,y);
		
		if(ball == null) return;
		else if(!Std.is(ball,Ball) || ball.inAir || ball.beingHeld) return;
		
		b = ball;
		
		ballAttached = true;
		if (b.lastOwner != this) score++;
		b.screenshakeInit(5,5,5);
		
		changePlayer(false);
		pickup.play(0.6,0,false);
	}
	
	function changePlayer(focusThis:Bool):Void
	{
		var wPlayer = [];
		world.getClass(Player,wPlayer);
		for(i in 0...wPlayer.length)
		{
			var p:Player = wPlayer[i];
			if(p.team == team) 
			{
				focusThis ? p.focused = true : p.focused = false;
				p.focused ? p.indicator.alpha = 1 : p.indicator.alpha = 0;
			}
		}
		focusThis ? focused = false : focused = true;
		focusThis ? indicator.alpha = 0 : indicator.alpha = 1;
	}
	
	public function ballUpdate():Void
	{
		if(ballAttached)
		{
			b.x = x;
			b.y = y-99;
			b.attachedToPlayer(this);
		}
	}
	
	function throwBall():Void
	{
		if(throwTimer == 0 || !ballAttached) return;
		b.getThrown(target.x,target.y);
		ballAttached = false;
		throwTimer = 0;
		target.visible = false;
		state = "hasThrown";
		addAngle = 0;
		splat.play(1,0,false);
		huuang.stop();
		changePlayer(true);
	}
	
	function throwCharge():Void
	{
		if(!ballAttached) return;
		
		if(!huuang.playing)huuang.play(1,0,false);
		throwTimer ++;
		
		target.visible = true;
				
		var tx = x + (Math.sin((targetAngle + addAngle) * HXP.RAD) * 50) + Math.sin((targetAngle + addAngle) * HXP.RAD) * throwTimer * 8 ;
		var ty = y + (Math.cos((targetAngle + addAngle) * HXP.RAD) * 50) + Math.cos((targetAngle + addAngle) * HXP.RAD) * throwTimer * 8 ;
		
		target.updatePos(tx,ty);
		
		if (throwTimer > throwTime) throwBall();
	}
	
	function checkOtherPlayer():Void
	{
		
		var wPlayer = [];
		world.getClass(Player,wPlayer);
		
		var p:Player = null;
		
		for (i in 0...wPlayer.length)
		{
			if(wPlayer[i] != this) p = collideWith(wPlayer[i],x,y);
		}
		
		if(p == null) return; 
		
		
		if(!Std.is(p,Player)) return;
			
//TODO: DROP BALL!!!!!
	}
	
	function keepInBounds():Void
	{
		if(x < boundX) x = boundX;
		if(x > HXP.width-boundX) x = HXP.width-boundX;
		
		if(y < boundY) y = boundY;
		if(y > HXP.height-boundY) y = HXP.height-boundY; 
	}
	
	function holdBallTiming():Void
	{
		if(ballAttached)
		{
			ballHoldTimer++;
			if(ballHoldTimer >= ballHoldTime) throwCharge();	
			else timerBar.sprite.scaleX = -(ballHoldTimer / ballHoldTime); 
		}
		else ballHoldTimer = 0;
	}
	
	function handleInput():Void
	{
		if(Input.check(inputTeamName + "left"))
		{
			x -= speed;
			sprite.scaleX = -1;
			shadow.sprite.scaleX = -1;
			targetAngle = 90;
		}
		
		if(Input.check(inputTeamName + "right"))
		{
			x += speed;
			sprite.scaleX = 1;
			shadow.sprite.scaleX = 1;
			targetAngle = 270;
		}
		
		if(Input.check(inputTeamName + "up"))
		{
			y -= speed;
		}
		
		if(Input.check(inputTeamName + "down"))
		{
			y += speed;
		}
		
		
		if(Input.check(inputTeamName + "throw"))
		{
			if(Input.check(inputTeamName + "targetDir1"))
				sprite.scaleX > 0 ? addAngle -= 5 : addAngle += 5;
			
			
			if(Input.check(inputTeamName + "targetDir2"))
				sprite.scaleX > 0 ? addAngle += 5 : addAngle -= 5;
			
			throwCharge();
		}
		
		if(Input.released(inputTeamName + "throw"))
		{
			throwBall();
			addAngle = 0;
		}
	}
	
	function handleJsInput():Void
	{
		x += Input.joystick(joyNum).getAxis(0) * speed;
		y += Input.joystick(joyNum).getAxis(1) * speed;
		
		if(Input.joystick(joyNum).getAxis(0) < 0)
		{
			sprite.scaleX = -1;
			shadow.sprite.scaleX = -1;
			targetAngle = 90;
		}
		
		if(Input.joystick(joyNum).getAxis(0) > 0)
		{
			sprite.scaleX = 1;
			shadow.sprite.scaleX = 1;
			targetAngle = 270;
		}
		
		if(Input.joystick(joyNum).check(joyMap[0]))
		{
			if(Input.joystick(joyNum).check(joyMap[1]))
				sprite.scaleX > 0 ? addAngle -= 5 : addAngle += 5;
			
			
			if(Input.joystick(joyNum).check(joyMap[2]))
				sprite.scaleX > 0 ? addAngle += 5 : addAngle -= 5;
			
			throwCharge();
		}
		
		if(Input.joystick(joyNum).released(joyMap[0]))
		{
			throwBall();
			addAngle = 0;
		}
	}
	
	function updateGraphic():Void
	{
		if(state != "hasThrown")
		{
			if(!joyInput && (Input.check(inputTeamName + "left") || Input.check(inputTeamName + "right") || Input.check(inputTeamName + "up") || Input.check(inputTeamName + "down")))
			{
				state = "moving";
			}
			else if (joyInput && (Input.joystick(joyNum).getAxis(0) != 0 || Input.joystick(joyNum).getAxis(1) != 0))
			{
				state = "moving";
			}
			else
			{
				state = "still";
			}
		}
		else if(thrownTime >= 10) 
		{
			state = "still";
			thrownTime = 0;
		}
		else thrownTime ++;
		
	//Indicator arrow:	
		if (indicator.y > 16 ) indiUp = true;
		else if (indicator.y < 0) indiUp = false;
		
		if (indiUp) indicator.y -= 0.5;
		else indicator.y += 0.5;
		
		
		switch(state)
		{
			case "still":
				ballAttached ? sprite.play("wBall_still") : sprite.play("still");
				
			
			case "moving":
				if(focused) ballAttached ? sprite.play("wBall_move") : sprite.play("move");
				
			case "hasThrown":
				sprite.play("hasThrown");
				
		}	
		
		layer = Math.round(-y);
	}
}