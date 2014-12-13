import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Image;
import com.haxepunk.Entity;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;
import com.haxepunk.utils.Joystick;
import com.haxepunk.graphics.Graphiclist;

class Spawner extends Entity
{
	public var b:Bar = new Bar();
	public var ball:Ball = new Ball();
	
	var p1:Bool = false;
	var p2:Bool = false;
	
	var p1Joy:Bool = false;
	var p1JoyNum:Int = -1;
	
	var p2Joy:Bool = false;
	var p2JoyNum:Int = -1;
	
	var img:Image  = new Image("graphics/Splash.png");
	var modeImg:Image  = new Image("graphics/ModeSingleplayerP1.png");
	var flashTip:Image  = new Image("graphics/FlashTip.png");
	var p1CtrlImg:Image = new Image("graphics/P1_Key_Ctrl.png");
	var p2CtrlImg:Image = new Image("graphics/P2_Key_Ctrl.png");
	
	var sfx:Sfx;
	
	public override function new()
	{
		super();
		
		updateModeState();
		updateGraphiclist();
		
		var en:String = ".ogg";
#if flash
		en = ".mp3";
		addGraphic(flashTip);
#end
		sfx = new Sfx("audio/StartGame"+en);
		
		name = "splash";
		
	}
	
	override public function added():Void
	{
		
	}
	
	public override function update():Void
	{			
		checkKeyPress();
		checkJoyPress();
		
//Initialize game if Enter or Start is pressed	
		if (Input.pressed(Key.ENTER) || Input.joystick(p1JoyNum).pressed(PS3_GAMEPAD.START_BUTTON) || Input.joystick(p1JoyNum).pressed(XBOX_GAMEPAD.START_BUTTON) ) 
		{
			gameInit();
		}
		
	}
	
	function updateModeState():Void
	{
		modeImg.alpha = 1;
		
		if ( p1 && p2 ) modeImg = new Image("graphics/ModeMultiplayer.png");
		
		else if ( p1) 	modeImg = new Image("graphics/ModeSingleplayerP1.png");
		
		else if ( p2) 	modeImg = new Image("graphics/ModeSingleplayerP2.png");
		
		else modeImg.alpha = 0;
	}
	
	function updateGraphiclist():Void
	{
		graphic = new Graphiclist([modeImg,p1CtrlImg,p2CtrlImg,img]);
	}
	
	function checkKeyPress():Void
	{
		if( Input.pressed(Key.X) ) 
		{
			if(p1Joy)
			{
				p1Joy = false;
				p1JoyNum = -1;
				p1 = true;
				
				p1CtrlImg = new Image("graphics/P1_Key_Ctrl.png");
			}
			else if(!p1)
			{
				p1Joy = false;
				p1JoyNum = -1;
				p1 = true;
				
				p1CtrlImg = new Image("graphics/P1_Key_Ctrl.png");
			}
			else p1 = false;
			
			updateModeState();
			updateGraphiclist();
		}
		else if( Input.pressed(Key.K) )
		{
			if(p2Joy)
			{
				p2Joy = false;
				p2JoyNum = -1; 
				p2 = true;
				
				p2CtrlImg = new Image("graphics/P2_Key_Ctrl.png");
			}
			else if(!p2)
			{
				p2Joy = false;
				p2JoyNum = -1; 
				p2 = true;
				
				p2CtrlImg = new Image("graphics/P2_Key_Ctrl.png");
			}
			else p2 = false;
			
			updateModeState();
			updateGraphiclist();
		}
		
		if(p1) p1CtrlImg.alpha = 1;
		else p1CtrlImg.alpha = 0;
		
	}
	
	function checkJoyPress():Void
	{
		if (Input.joysticks > 0)
		{
			for ( i in 0...Input.joysticks) 
			{
				if( Input.joystick(i).pressed(PS3_GAMEPAD.X_BUTTON) || Input.joystick(i).pressed(XBOX_GAMEPAD.A_BUTTON) )
				{
					if (p1 && i == p1JoyNum) 
					{
						p1Joy = false;
						p1JoyNum = -1;
						p1 = false;
					}
					else if (p2 && i == p2JoyNum) 
					{
						p2Joy = false;
						p2JoyNum = -1;
						p2 = false;
					}
					else if (!p1Joy && i != p2JoyNum) 
					{
						
						p1Joy = true;
						p1JoyNum = i;
						p1 = true;
						
						p1CtrlImg = new Image("graphics/P1_Joy_Ctrl.png");
					}
					else if (!p2Joy && i != p1JoyNum)
					{
						
						p2Joy = true;
						p2JoyNum = i; 
						p2 = true;
						
						p2CtrlImg = new Image("graphics/P2_Joy_Ctrl.png");
					}
					
					updateModeState();
					updateGraphiclist();
				}
			}
		}
		
		if(p2) p2CtrlImg.alpha = 1;
		else p2CtrlImg.alpha = 0;
		
	}
	
	function gameInit():Void
	{
		if(!p2 && p1) //Player 1 - single player
		{
			world.add(new Pauser());
			
			world.add(b);
			
			world.add(new Player(1,false, b,900,700,p1Joy,p1JoyNum));
			world.add(new Player(1,true,  b,100,700,p1Joy,p1JoyNum));
			
			if(world.getInstance("ball") == null) world.add(ball);
			if(world.getInstance("splash") != null) world.remove(world.getInstance("splash"));
			
			world.add(new Dog());
			
			sfx.play(0.7,0,false);
			
		}
		else if(p2 && !p1) //Player 2 - single player
		{
			world.add(new Pauser());
			
			world.add(b);
			
			world.add(new Player(2,false, b,900,700,p2Joy,p2JoyNum));
			world.add(new Player(2,true,  b,100,700,p2Joy,p2JoyNum));
			
			if(world.getInstance("ball") == null) world.add(ball);
			if(world.getInstance("splash") != null) world.remove(world.getInstance("splash"));
			
			world.add(new Dog());
			
			sfx.play(0.7,0,false);
		}
		else if(p2 && p1) //multi-player
		{	
			world.add(new Pauser());
			
			world.add(b);
			
			world.add(new Player(2,false, b,900,100,p2Joy,p1JoyNum));
			world.add(new Player(2,true,  b,100,100,p2Joy,p1JoyNum));
			
			world.add(new Player(1,false, b,900,700,p1Joy,p2JoyNum));
			world.add(new Player(1,true,  b,100,700,p1Joy,p2JoyNum));
			
			if(world.getInstance("ball") == null) world.add(ball);
			if(world.getInstance("splash") != null) world.remove(world.getInstance("splash"));
			
			sfx.play(0.7,0,false);
			
		}
	}
}