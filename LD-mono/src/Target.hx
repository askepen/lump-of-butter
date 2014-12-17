import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

class Target extends Entity
{
	var sprite:Image = new Image("graphics/target.png");
	
	var p:Entity;
	
	public override function new(parent:Entity)
	{
		super(300, 102);
		//Graphics
		graphic = sprite;
		sprite.originX = 30;
		sprite.originY = 5;
		p = parent;
		visible = false;
	}
	
	public function updatePos(newX:Float, newY:Float):Void
	{	
		x = newX;
		y = newY;
		layer = Math.round(-y);
	}
	
	override public function update():Void
	{
		if(world.getInstance("gameover") != null) visible = false;
		
		super.update();
	}
}