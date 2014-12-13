import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Image;
import com.haxepunk.Entity;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

class MainScene extends Scene
{
	public var ball:Ball = new Ball();
	
	public override function begin()
	{
		HXP.screen.color = 0xf0e5d5;
		
		var img = new Image("graphics/Background.png");
		var e:Entity = new Entity(0,0,img);
		add(e);
		add(new Spawner());
		super.begin();
	}
	
	
}