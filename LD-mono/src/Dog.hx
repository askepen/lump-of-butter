import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Spritemap;

class Dog extends Entity
{
	var sprite:Spritemap = new Spritemap("graphics/Dog-sheet.png",128,128);
	public var ball:Ball;
	var p:Player;
	var target:Entity;
	var speed:Float = Settings.DOG_SPEED;
	var reachedGoal:Bool = false;
	
	public override function new()
	{
		super(400, 800);
		//Graphic
		sprite.add("idle",[0,1,2,3],10,true);
		sprite.add("run",[4,5,6,7],10,true);
		sprite.play("run");
		
		setHitbox(39,36,18,38);
		sprite.originX = 60;
		sprite.originY = 108;
		graphic = sprite;
		
		type = "dog";
		name = "dog";
	}
	
	override public function added():Void
	{
		chase();
		
		super.added();
	}
	
	override public function update():Void
	{	
		if (ball != null && !ball.no_more_butter) chase();
		
		checkBall();
		checkPlayer();
		layer = Math.round(-y);
		
		if( ball != null && ball.no_more_butter)
			reachedGoal = true;
			
		if ( reachedGoal ) sprite.play("idle");
		
		
		super.update();
	}
	
	function chase():Void
	{
		p = null;
		
		var dasBall = [];
		world.getClass(Ball,dasBall);
		ball = dasBall[0];
	
		if(ball.beingHeld)
		{
			target = ball.lastOwner;
		}
		else 
		{
			target = ball;
		}
		
		
		var angle = HXP.angle(x,y,target.x,target.y);
		var _x = speed * Math.cos(angle * HXP.RAD);
		var _y = speed * Math.sin(angle * HXP.RAD);
		
/*		if (ball.beingHeld)
		{
			_x = 0;
			_y = 0;
			sprite.play("idle");
		}
		else sprite.play("run");*/
		
		
		if(!reachedGoal)
		{	
			x += _x;
			y += _y;
			
		}
		
		_x < 0 && _x != 0 ? sprite.scaleX = -1 : sprite.scaleX = 1;
		
	}
	
	function checkBall():Void
	{
		
		if(ball != null && world.getInstance("gameover") == null && !ball.beingHeld)
		{
			if(collideWith(ball,x,y) != null)
			{
				ball.visible = false;
				ball.shadow.visible = false;
				
				if(ball.p != null && ball.p.ballAttached)
				{
					ball.p.ballAttached = false;
					ball.x = 2000;
					
					ball.p.ballUpdate();
				}
				else ball.x = 2000;
				
				ball.no_more_butter = true;
				reachedGoal = true;
				
				if(world.getInstance("gameover") != null) return;
				else world.add(new GameOverText(2,0));
			}
		}
	}
	
	function checkPlayer():Void
	{
		p = ball.lastOwner;
		
		if(p != null && world.getInstance("gameover") == null && ball.beingHeld)
		{
			if(collideWith(p,x,y) != null)
			{
				ball.visible = false;
				ball.shadow.visible = false;
				
				if(ball.p != null && ball.p.ballAttached)
				{
					ball.p.ballAttached = false;
					ball.x = 2000;
					
					ball.p.ballUpdate();
				}
				else ball.x = 2000;
				
				ball.no_more_butter = true;
				reachedGoal = true;
				
				if(world.getInstance("gameover") != null) return;
				else world.add(new GameOverText(2,0));
			}
		}
	}
}