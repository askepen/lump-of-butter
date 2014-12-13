import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Entity;
import com.haxepunk.HXP;

class Dust extends Entity
{
	
	var sprite:Spritemap = new Spritemap("graphics/dust.png",50,50);
	
	public override function new(_x:Float,_y:Float)
	{
		super(_x,_y);
		
		//Graphics
		sprite.add("anim",[0,1,2,3,4,5,6],40,false);
		sprite.play("anim");
		sprite.centerOrigin();
		
		graphic = sprite;
	}
	
	
	override public function update():Void
	{
		super.update();
		if (sprite.complete) world.remove(this);
	}
}