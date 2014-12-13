import com.haxepunk.graphics.Image;
import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.utils.Joystick;

class Pauser extends Entity
{
	
	public var sprite:Image = new Image("graphics/Paused.png");
	public var paused:Bool = false;
	
	var allEnts:Array<Entity> = [];
	
	public override function new()
	{
		super();
		//Graphics
		graphic = sprite;
		
		layer = -2000;
		sprite.alpha = 0;
	}
	
	
	override public function update():Void
	{
		allEnts = [];
		world.getAll(allEnts);
		allEnts.remove(this);
		
		if (Input.pressed(Key.ENTER))
			paused ? un_pause() : pause();
		
		for (i in 0...Input.joysticks) 
			if (Input.joystick(i).pressed(PS3_GAMEPAD.START_BUTTON) || Input.joystick(i).pressed(XBOX_GAMEPAD.START_BUTTON)) 
				paused ? un_pause() : pause();
		
		
		super.update();
	}
	
	public function pause():Void
	{
		paused = true;
		
		sprite.alpha = 1;
		
		for (i in 0...allEnts.length) 
		{
			allEnts[i].active = false;
		}
	}
	
	public function un_pause():Void
	{
		paused = false;
		
		sprite.alpha = 0;
		
		for (i in 0...allEnts.length) allEnts[i].active = true;
	}
}