import com.haxepunk.Engine;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;

class Main extends Engine
{
	public var music:Sfx;
	
	override public function init()
	{
#if debug
		HXP.console.enable();
#end
		HXP.scene = new MainScene();
		
		var audioEnd:String = ".ogg";
#if flash	
		audioEnd = ".mp3";
#end
		music = new Sfx("audio/theme"+audioEnd);
		music.play(0.6,0,true);
		
		
	}

	public static function main() { new Main(); }
	
	
	public override function update():Void
	{
		
		if(Input.pressed(Key.R)) HXP.scene = new MainScene();
		if(Input.pressed(Key.M)) music.volume == 0 ? music.volume = 0.6 : music.volume = 0;
		
/*		if(Input.pressed(Key.F)) 
		{
			HXP.fullscreen = true;
			
			HXP.screen.scaleX = Math.min(HXP.windowWidth / 1000, HXP.windowHeight / 800);
			HXP.screen.scaleY = Math.min(HXP.windowWidth / 1000, HXP.windowHeight / 800);
			
		}
		if(Input.pressed(Key.ESCAPE)) 
		{
			HXP.fullscreen = false;
			HXP.screen.scale = 1;
		}*/
		super.update();
	}	
}