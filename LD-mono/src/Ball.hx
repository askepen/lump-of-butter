import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.graphics.Image;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.graphics.Graphiclist;
import flash.geom.Rectangle;

class Ball extends Entity
{
	var sprite:Spritemap = new Spritemap("graphics/ball-gfx.png",50,50);
	var trail:Graphiclist;
	
	var state:String = "still";
	var flyspeed:Float = 16.0;
	var tx:Float;
	var ty:Float;
	var drawTrail:Bool = false;
	
	var shakeTime:Int;
	var shakeTimer:Int;
	var shakeAmountX:Float;
	var shakeAmountY:Float;
	var screenshakeOn:Bool;
	
	public var p:Player;
	public var inAir:Bool = false;
	public var shadow:Shadow;
	public var lastOwner:Player;
	public var beingHeld:Bool = false;
	public var no_more_butter:Bool = false;
	
	public override function new()
	{
		super(HXP.halfWidth, HXP.halfHeight);
		//Graphics
		sprite.add("fly",[0],0,false);
		sprite.add("still",[1],0,false);
		sprite.play("still");
		
		trail = new Graphiclist([sprite]);
		
		graphic = trail;
		
		//Hitbox
		setHitbox(30,20,15,20);
		sprite.originX = 25;
		sprite.originY = 40;
		type = "ball";
		name = "ball";
	}
	
	override function added():Void
	{
		super.added();
		shadow = new Shadow(this);
		world.add(shadow);
	}
	
	override function update():Void
	{
		updateGraphic();
		shadow.updatePos(x,y);
		shadow.set_layer(layer+1);
		checkEndCondition();
		if (screenshakeOn) screenshake();
		else normCam();
		super.update();
	}
	
	public function attachedToPlayer(player:Player):Void
	{
		p = player;
		lastOwner = p;
		beingHeld = true;
	}
	
	function checkEndCondition():Void
	{
		sprite.scale -= 0.00035;
		shadow.sprite.scale = sprite.scale;
		
		if(sprite.scale < 0.2)  
		{
			if(world.getInstance("gameover") == null) world.add(new GameOverText(0,getWinner()));
			
			if(p != null && p.ballAttached)
			{
				p.ballAttached = false;
				x = 2000;
				
				p.ballUpdate();
			}
			else x = 2000;
			
			no_more_butter = true;
			
			sprite.scale = 0;
		}
		else if ((p != null ) && (x < p.boundX - 10 || x > HXP.width + 10 - p.boundX || (p.ballAttached ? (y+100 < p.boundY) : (y < p.boundY-25 )) || y > HXP.height + 25 - p.boundY ))
		{
			no_more_butter = true;
			
			if(world.getInstance("gameover") == null)
			{
				world.add(new GameOverText(1,getWinner(true)));
				
				if(p != null && p.ballAttached)
				{
					p.ballAttached = false;
					x = 2000;
					
					p.ballUpdate();
				}
				else x = 2000;
			}
		}
	}
	
	
	public function getThrown(x:Float,y:Float):Void
	{
		this.x = x;
		this.y = y;
		beingHeld = false;
		drawTrail = true;
		screenshakeInit(2,15,7);
		world.add( new Dust(x,y));
	}
	
	function updateGraphic():Void
	{
		if(p !=null )
		{
			if(p.ballAttached) 
			{
				shadow.visible = false;
				state = "fly";
				layer = -Math.round(p.y -1);
			}
			else 
			{
				shadow.visible = true;
				state = "still";
				layer = -Math.round(y);
			}
			
			
		}
		
		switch(state)
		{
			case "still":
				sprite.play("still");	
				
			case "fly":
				sprite.play("fly");	
				
		}	
		
		if(drawTrail)
		{
			updateTrail();
			drawTrail = false;
		}
		else graphic = sprite;
	}
	
	function getWinner(butterThrownAway:Bool = false):Int
	{
		var highestScore = 0;
		var bestPlayer:Player = null;
		var noWinner:Bool = true;
		var wPlayer = [];
		var team1 = 0;
		var team2 = 0;
		
		world.getClass(Player,wPlayer);
		
		for(i in 0...wPlayer.length)
		{
			var p:Player = wPlayer[i];
			if ( p == lastOwner && butterThrownAway) continue;
			else if (p.team == 1) team1 += p.score;
			else if (p.team == 2) team2 += p.score;
		}
		
		if ( p.team == lastOwner.team && butterThrownAway )
		{
			if(world.getInstance("dog") == null) p.team == 1 ? return 2 : return 1;
			else return 0;
		}
		else 
		{
			if (team1 != team2) team1 > team2 ? return 1 : return 2;
			else return 0;
		}
	}
	
	function updateTrail():Void
	{
		if(lastOwner == null) return;
		
		var l = 16;
		
		var lengthX:Float = Math.cos(HXP.angle(x,y+50,lastOwner.x,lastOwner.y) * HXP.RAD) * ( HXP.distance(x,y+50,lastOwner.x,lastOwner.y) / l);
		var lengthY:Float = Math.sin(HXP.angle(x,y+50,lastOwner.x,lastOwner.y) * HXP.RAD) * ( HXP.distance(x,y+50,lastOwner.x,lastOwner.y) / l);
	
		var gfxL:Array<com.haxepunk.Graphic> = [];
		for (i in 0...l)
		{
			var trailImg:Image = new Image("graphics/ball-gfx.png", new Rectangle(0,0,50,50));
			trailImg.originX = 25;
			trailImg.originY = 40;
			trailImg.x += i * lengthX;
			trailImg.y += i * lengthY;
			trailImg.scale = sprite.scale;
			trailImg.alpha =   ((l-i) / l) * 0.5 ;
			gfxL[i] = trailImg;
		}
		gfxL.push(sprite);
		trail = new Graphiclist(gfxL);
		graphic = trail;
	}
	
	public function screenshakeInit(amountX:Float, amountY:Float, time:Int):Void
	{
		shakeTime = time;
		shakeAmountX = amountX;
		shakeAmountY = amountY;
		screenshakeOn = true;
	}
	
	function screenshake():Void
	{
		shakeTime--;
		if(shakeTime <= 0) screenshakeOn = false;
		world.camera.x = 0 + (shakeAmountX*2*(Math.random()-0.5));
		world.camera.y = 0 + (shakeAmountY*2*(Math.random()-0.5));
	}
	
	function normCam():Void
	{
		world.camera.x = 0;
		world.camera.y = 0;
	}
}