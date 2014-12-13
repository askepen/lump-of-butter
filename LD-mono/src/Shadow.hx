import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

class Shadow extends Entity
{
	public var sprite:Image = new Image("graphics/shadow.png");
	
	var p:Entity;
	
	public override function new(parent:Entity)
	{
		super(300, 102);
		//Graphics
		graphic = sprite;
		sprite.alpha = 0.3;
		sprite.originX = 20;
		sprite.originY = 5;
		p = parent;
	}
	
	public function updatePos(newX:Float, newY:Float):Void
	{	
		x = newX;
		y = newY;
	}
	
	override public function update():Void
	{
	//	layer = Math.round(-y);
		super.update();
	}
}