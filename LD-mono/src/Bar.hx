import com.haxepunk.graphics.Image;
import com.haxepunk.Entity;
import com.haxepunk.HXP;

class Bar extends Entity
{
	
	public var sprite:Image = new Image("graphics/Bar.png");
	
	var p:Player;
	
	public override function new()
	{
		super(363+sprite.width, 772);
		//Graphics
		graphic = sprite;
		sprite.scaleX = -1;
	}
	
	
	override public function update():Void
	{
	//	sprite.scaleX-= 0.001;
		super.update();
	}
}