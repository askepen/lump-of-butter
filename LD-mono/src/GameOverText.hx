import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.Sfx;
import com.haxepunk.graphics.Text;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Graphiclist;

class GameOverText extends Entity
{
	var sfx:Sfx;
	
	public function new (reason:Int, winner:Int)
	{
		super();
		
	//	HXP.screen.color = 0x4ecfef;
		var en = ".ogg";
#if flash
		en = ".mp3";
#end
		sfx = new Sfx("audio/EndGame"+en);	
		
		var img:Image  = new Image("graphics/GameOver.png");
		var t:Text  = new Text("",120,200);
		t.size = 32;
		switch(reason)
		{
			case 0:
				t.text = "NO MORE BUTTER!";
			
			case 1:
				t.text = "YOU THREW THE BUTTER AWAY";
				
			case 2:
				t.text = "THE DOG ATE THE BUTTER";

		}
		
		var winnerImgSrc:String = "";
		var winnerImg:Image;
		
		switch(winner)
		{
			case 0:
				
				winnerImgSrc = "graphics/GameOverDOG.png";
			
			case 1:
				winnerImgSrc = "graphics/GameOverP1.png";
			
			case 2:
				winnerImgSrc = "graphics/GameOverP2.png";
			
			case 3:
				winnerImgSrc = "graphics/GameOverSINGLE.png";
		}
		
		winnerImg = new Image(winnerImgSrc);
		
		name = "gameover";
		
		graphic = new Graphiclist([img,winnerImg,t]);
		
		x = 250;
		y = 170;
	}		
	
	override public function added():Void
	{
		sfx.play(1,0,false);
		super.added();
	}
}
