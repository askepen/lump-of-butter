package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("graphics/debug/console_debug.png", "graphics/debug/console_debug.png");
			type.set ("graphics/debug/console_debug.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_hidden.png", "graphics/debug/console_hidden.png");
			type.set ("graphics/debug/console_hidden.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_logo.png", "graphics/debug/console_logo.png");
			type.set ("graphics/debug/console_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_output.png", "graphics/debug/console_output.png");
			type.set ("graphics/debug/console_output.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_pause.png", "graphics/debug/console_pause.png");
			type.set ("graphics/debug/console_pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_play.png", "graphics/debug/console_play.png");
			type.set ("graphics/debug/console_play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_step.png", "graphics/debug/console_step.png");
			type.set ("graphics/debug/console_step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_visible.png", "graphics/debug/console_visible.png");
			type.set ("graphics/debug/console_visible.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/preloader/haxepunk.png", "graphics/preloader/haxepunk.png");
			type.set ("graphics/preloader/haxepunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("font/04B_03__.ttf", "font/04B_03__.ttf");
			type.set ("font/04B_03__.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("font/04B_03__.ttf.png", "font/04B_03__.ttf.png");
			type.set ("font/04B_03__.ttf.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/Background.png", "graphics/Background.png");
			type.set ("graphics/Background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/ball-gfx.png", "graphics/ball-gfx.png");
			type.set ("graphics/ball-gfx.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/Bar.png", "graphics/Bar.png");
			type.set ("graphics/Bar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/Dog-sheet.png", "graphics/Dog-sheet.png");
			type.set ("graphics/Dog-sheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/game-gfx-2.png", "graphics/game-gfx-2.png");
			type.set ("graphics/game-gfx-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/game-gfx.png", "graphics/game-gfx.png");
			type.set ("graphics/game-gfx.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/GameOver.png", "graphics/GameOver.png");
			type.set ("graphics/GameOver.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/GameOverDOG.png", "graphics/GameOverDOG.png");
			type.set ("graphics/GameOverDOG.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/GameOverP1.png", "graphics/GameOverP1.png");
			type.set ("graphics/GameOverP1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/GameOverP2.png", "graphics/GameOverP2.png");
			type.set ("graphics/GameOverP2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/GameOverSINGLE.png", "graphics/GameOverSINGLE.png");
			type.set ("graphics/GameOverSINGLE.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/shadow.png", "graphics/shadow.png");
			type.set ("graphics/shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/Splash.png", "graphics/Splash.png");
			type.set ("graphics/Splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/target.png", "graphics/target.png");
			type.set ("graphics/target.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("audio/EndGame.ogg", "audio/EndGame.ogg");
			type.set ("audio/EndGame.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/huuang.ogg", "audio/huuang.ogg");
			type.set ("audio/huuang.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/Pickup.ogg", "audio/Pickup.ogg");
			type.set ("audio/Pickup.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/splat.ogg", "audio/splat.ogg");
			type.set ("audio/splat.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/StartGame.ogg", "audio/StartGame.ogg");
			type.set ("audio/StartGame.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/theme.ogg", "audio/theme.ogg");
			type.set ("audio/theme.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("font/04B_03__.ttf", "font/04B_03__.ttf");
			type.set ("font/04B_03__.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
