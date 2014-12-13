#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_GameOverText
#include <GameOverText.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Shadow
#include <Shadow.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void Ball_obj::__construct()
{
HX_STACK_FRAME("Ball","new",0xfd30aa91,"Ball.new","Ball.hx",10,0xf7f391ff)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->beingHeld = false;
	HX_STACK_LINE(28)
	this->inAir = false;
	HX_STACK_LINE(20)
	this->drawTrail = false;
	HX_STACK_LINE(17)
	this->flyspeed = 16.0;
	HX_STACK_LINE(15)
	this->state = HX_CSTRING("still");
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::Spritemap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",12,0xf7f391ff)
			{
				HX_STACK_LINE(12)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",12,0xf7f391ff)
						{
							HX_STACK_LINE(12)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",12,0xf7f391ff)
									{
										HX_STACK_LINE(12)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(12)
										{
											HX_STACK_LINE(12)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(12)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ball-gfx.png")))){
												HX_STACK_LINE(12)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ball-gfx.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(12)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(12)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ball-gfx.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(12)
												if (((bitmap != null()))){
													HX_STACK_LINE(12)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ball-gfx.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(12)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(12)
											data = data1;
										}
										HX_STACK_LINE(12)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(12)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(12)
							::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(12)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(12)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",12,0xf7f391ff)
						{
							HX_STACK_LINE(12)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ball-gfx.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(12)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(12)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(12)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(12)
				return ::com::haxepunk::graphics::Spritemap_obj::__new(_g5,(int)50,(int)50,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	this->sprite = _Function_1_1::Block();
	HX_STACK_LINE(35)
	super::__construct(::com::haxepunk::HXP_obj::halfWidth,::com::haxepunk::HXP_obj::halfHeight,null(),null());
	HX_STACK_LINE(37)
	this->sprite->add(HX_CSTRING("fly"),Array_obj< int >::__new().Add((int)0),(int)0,false);
	HX_STACK_LINE(38)
	this->sprite->add(HX_CSTRING("still"),Array_obj< int >::__new().Add((int)1),(int)0,false);
	HX_STACK_LINE(39)
	this->sprite->play(HX_CSTRING("still"),null(),null());
	HX_STACK_LINE(41)
	::com::haxepunk::graphics::Graphiclist _g = ::com::haxepunk::graphics::Graphiclist_obj::__new(Array_obj< ::Dynamic >::__new().Add(this->sprite));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	this->trail = _g;
	HX_STACK_LINE(43)
	this->set_graphic(this->trail);
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		this->width = (int)30;
		HX_STACK_LINE(46)
		this->height = (int)20;
		HX_STACK_LINE(46)
		this->originX = (int)15;
		HX_STACK_LINE(46)
		this->originY = (int)20;
	}
	HX_STACK_LINE(47)
	this->sprite->originX = (int)25;
	HX_STACK_LINE(48)
	this->sprite->originY = (int)40;
	HX_STACK_LINE(49)
	this->set_type(HX_CSTRING("ball"));
	HX_STACK_LINE(50)
	this->set_name(HX_CSTRING("ball"));
}
;
	return null();
}

//Ball_obj::~Ball_obj() { }

Dynamic Ball_obj::__CreateEmpty() { return  new Ball_obj; }
hx::ObjectPtr< Ball_obj > Ball_obj::__new()
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct();
	return result;}

Dynamic Ball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct();
	return result;}

Void Ball_obj::added( ){
{
		HX_STACK_FRAME("Ball","added",0xadb05d31,"Ball.added","Ball.hx",54,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::added();
		HX_STACK_LINE(56)
		::Shadow _g = ::Shadow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->shadow = _g;
		HX_STACK_LINE(57)
		this->_scene->add(this->shadow);
	}
return null();
}


Void Ball_obj::update( ){
{
		HX_STACK_FRAME("Ball","update",0x34906078,"Ball.update","Ball.hx",61,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->updateGraphic();
		HX_STACK_LINE(63)
		this->shadow->updatePos((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));
		HX_STACK_LINE(64)
		this->shadow->set_layer((this->_layer + (int)1));
		HX_STACK_LINE(65)
		this->checkEndCondition();
		HX_STACK_LINE(66)
		if ((this->screenshakeOn)){
			HX_STACK_LINE(66)
			this->screenshake();
		}
		else{
			HX_STACK_LINE(67)
			this->normCam();
		}
		HX_STACK_LINE(68)
		this->super::update();
	}
return null();
}


Void Ball_obj::attachedToPlayer( ::Player player){
{
		HX_STACK_FRAME("Ball","attachedToPlayer",0xe947bdef,"Ball.attachedToPlayer","Ball.hx",72,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(73)
		this->p = player;
		HX_STACK_LINE(74)
		this->lastOwner = this->p;
		HX_STACK_LINE(75)
		this->beingHeld = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ball_obj,attachedToPlayer,(void))

Void Ball_obj::checkEndCondition( ){
{
		HX_STACK_FRAME("Ball","checkEndCondition",0xaaf4d119,"Ball.checkEndCondition","Ball.hx",79,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::com::haxepunk::graphics::Spritemap _g = this->sprite;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			_g->_scale = (_g->_scale - 0.0002);
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::com::haxepunk::graphics::Image _g = this->shadow->sprite;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			_g->_scale = (_g->_scale - 0.0002);
		}
		HX_STACK_LINE(83)
		if (((this->sprite->_scale < 0.2))){
			HX_STACK_LINE(85)
			::com::haxepunk::Entity _g = this->_scene->getInstance(HX_CSTRING("gameover"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			if (((_g == null()))){
				HX_STACK_LINE(85)
				int _g1 = this->getWinner(null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(85)
				::GameOverText _g2 = ::GameOverText_obj::__new((int)0,_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				this->_scene->add(_g2);
			}
			HX_STACK_LINE(86)
			this->x = (int)2000;
			HX_STACK_LINE(87)
			this->sprite->_scale = (int)0;
		}
		else{
			HX_STACK_LINE(89)
			if (((bool((this->p != null())) && bool(((bool((bool((bool((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) < this->p->boundX)) || bool((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) > (::com::haxepunk::HXP_obj::width - this->p->boundX))))) || bool(((  ((this->p->ballAttached)) ? bool(((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + (int)100) < this->p->boundY)) : bool((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) < (this->p->boundY - (int)20))) ))))) || bool((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) > (::com::haxepunk::HXP_obj::height - this->p->boundY))))))))){
				HX_STACK_LINE(91)
				::com::haxepunk::Entity _g3 = this->_scene->getInstance(HX_CSTRING("gameover"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(91)
				if (((_g3 == null()))){
					HX_STACK_LINE(93)
					int _g4 = this->getWinner(true);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(93)
					::GameOverText _g5 = ::GameOverText_obj::__new((int)1,_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(93)
					this->_scene->add(_g5);
					HX_STACK_LINE(94)
					this->x = (int)2000;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,checkEndCondition,(void))

Void Ball_obj::getThrown( Float x,Float y){
{
		HX_STACK_FRAME("Ball","getThrown",0x51afc2af,"Ball.getThrown","Ball.hx",101,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(102)
		this->x = x;
		HX_STACK_LINE(103)
		this->y = y;
		HX_STACK_LINE(104)
		this->beingHeld = false;
		HX_STACK_LINE(105)
		this->drawTrail = true;
		HX_STACK_LINE(106)
		this->screenshakeInit((int)2,(int)15,(int)7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Ball_obj,getThrown,(void))

Void Ball_obj::updateGraphic( ){
{
		HX_STACK_FRAME("Ball","updateGraphic",0x7939a110,"Ball.updateGraphic","Ball.hx",110,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		if (((this->p != null()))){
			HX_STACK_LINE(113)
			if ((this->p->ballAttached)){
				HX_STACK_LINE(115)
				this->shadow->visible = false;
				HX_STACK_LINE(116)
				this->state = HX_CSTRING("fly");
				struct _Function_3_1{
					inline static Float Block( hx::ObjectPtr< ::Ball_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",117,0xf7f391ff)
						{
							HX_STACK_LINE(117)
							::Player _this = __this->p;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(117)
							return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(117)
				int _g = -(::Math_obj::round((_Function_3_1::Block(this) - (int)1)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(117)
				this->set_layer(_g);
			}
			else{
				HX_STACK_LINE(121)
				this->shadow->visible = true;
				HX_STACK_LINE(122)
				this->state = HX_CSTRING("still");
				HX_STACK_LINE(123)
				int _g1 = -(::Math_obj::round((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(123)
				this->set_layer(_g1);
			}
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::String _g = this->state;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("still"))){
				HX_STACK_LINE(132)
				this->sprite->play(HX_CSTRING("still"),null(),null());
			}
			else if (  ( _switch_1==HX_CSTRING("fly"))){
				HX_STACK_LINE(135)
				this->sprite->play(HX_CSTRING("fly"),null(),null());
			}
		}
		HX_STACK_LINE(139)
		if ((this->drawTrail)){
			HX_STACK_LINE(141)
			this->updateTrail();
			HX_STACK_LINE(142)
			this->drawTrail = false;
		}
		else{
			HX_STACK_LINE(144)
			this->set_graphic(this->sprite);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,updateGraphic,(void))

int Ball_obj::getWinner( hx::Null< bool >  __o_butterThrownAway){
bool butterThrownAway = __o_butterThrownAway.Default(false);
	HX_STACK_FRAME("Ball","getWinner",0x1582bfe6,"Ball.getWinner","Ball.hx",148,0xf7f391ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(butterThrownAway,"butterThrownAway")
{
		HX_STACK_LINE(149)
		int highestScore = (int)0;		HX_STACK_VAR(highestScore,"highestScore");
		HX_STACK_LINE(150)
		::Player bestPlayer = null();		HX_STACK_VAR(bestPlayer,"bestPlayer");
		HX_STACK_LINE(151)
		bool noWinner = true;		HX_STACK_VAR(noWinner,"noWinner");
		HX_STACK_LINE(152)
		Array< ::Dynamic > wPlayer = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(wPlayer,"wPlayer");
		HX_STACK_LINE(153)
		int team1 = (int)0;		HX_STACK_VAR(team1,"team1");
		HX_STACK_LINE(154)
		int team2 = (int)0;		HX_STACK_VAR(team2,"team2");
		HX_STACK_LINE(156)
		this->_scene->getClass(hx::ClassOf< ::Player >(),wPlayer);
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			int _g = wPlayer->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(160)
				::Player p = wPlayer->__get(i).StaticCast< ::Player >();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(161)
				if (((bool((p == this->lastOwner)) && bool(butterThrownAway)))){
					HX_STACK_LINE(161)
					continue;
				}
				else{
					HX_STACK_LINE(162)
					if (((p->team == (int)1))){
						HX_STACK_LINE(162)
						hx::AddEq(team1,p->score);
					}
					else{
						HX_STACK_LINE(163)
						if (((p->team == (int)2))){
							HX_STACK_LINE(163)
							hx::AddEq(team2,p->score);
						}
					}
				}
			}
		}
		HX_STACK_LINE(166)
		if (((bool((this->p->team == this->lastOwner->team)) && bool(butterThrownAway)))){
			HX_STACK_LINE(168)
			::com::haxepunk::Entity _g = this->_scene->getInstance(HX_CSTRING("dog"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			if (((_g == null()))){
				HX_STACK_LINE(168)
				if (((this->p->team == (int)1))){
					HX_STACK_LINE(168)
					return (int)2;
				}
				else{
					HX_STACK_LINE(168)
					return (int)1;
				}
			}
			else{
				HX_STACK_LINE(169)
				return (int)0;
			}
		}
		else{
			HX_STACK_LINE(173)
			if (((team1 != team2))){
				HX_STACK_LINE(173)
				if (((team1 > team2))){
					HX_STACK_LINE(173)
					return (int)1;
				}
				else{
					HX_STACK_LINE(173)
					return (int)2;
				}
			}
			else{
				HX_STACK_LINE(174)
				return (int)0;
			}
		}
		HX_STACK_LINE(166)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Ball_obj,getWinner,return )

Void Ball_obj::updateTrail( ){
{
		HX_STACK_FRAME("Ball","updateTrail",0x2833f02e,"Ball.updateTrail","Ball.hx",179,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		if (((this->lastOwner == null()))){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(182)
		int l = (int)16;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(184)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::Ball_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",184,0xf7f391ff)
					{
						HX_STACK_LINE(184)
						::Player _this = __this->lastOwner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(184)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::Ball_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",184,0xf7f391ff)
					{
						HX_STACK_LINE(184)
						::Player _this = __this->lastOwner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(184)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(184)
			Float _g = ::Math_obj::atan2((_Function_2_1::Block(this) - ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + (int)50))),(_Function_2_2::Block(this) - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			Float a = (_g * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(184)
			if (((a < (int)0))){
				HX_STACK_LINE(184)
				_g1 = (a + (int)360);
			}
			else{
				HX_STACK_LINE(184)
				_g1 = a;
			}
		}
		HX_STACK_LINE(184)
		Float _g2 = (_g1 * ((Float(::Math_obj::PI) / Float((int)-180))));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(184)
		Float _g3 = ::Math_obj::cos(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(184)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			Float x1;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(184)
			if ((this->followCamera)){
				HX_STACK_LINE(184)
				x1 = (this->x + ::com::haxepunk::HXP_obj::camera->x);
			}
			else{
				HX_STACK_LINE(184)
				x1 = this->x;
			}
			HX_STACK_LINE(184)
			Float y1;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(184)
			y1 = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + (int)50);
			HX_STACK_LINE(184)
			Float x2;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				::Player _this = this->lastOwner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(184)
				if ((_this->followCamera)){
					HX_STACK_LINE(184)
					x2 = (_this->x + ::com::haxepunk::HXP_obj::camera->x);
				}
				else{
					HX_STACK_LINE(184)
					x2 = _this->x;
				}
			}
			HX_STACK_LINE(184)
			Float y2;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				::Player _this = this->lastOwner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(184)
				if ((_this->followCamera)){
					HX_STACK_LINE(184)
					y2 = (_this->y + ::com::haxepunk::HXP_obj::camera->y);
				}
				else{
					HX_STACK_LINE(184)
					y2 = _this->y;
				}
			}
			HX_STACK_LINE(184)
			_g4 = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
		}
		HX_STACK_LINE(184)
		Float _g5 = (Float(_g4) / Float(l));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(184)
		Float lengthX = (_g3 * _g5);		HX_STACK_VAR(lengthX,"lengthX");
		HX_STACK_LINE(185)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(185)
		{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::Ball_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",185,0xf7f391ff)
					{
						HX_STACK_LINE(185)
						::Player _this = __this->lastOwner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(185)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::Ball_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",185,0xf7f391ff)
					{
						HX_STACK_LINE(185)
						::Player _this = __this->lastOwner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(185)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(185)
			Float _g6 = ::Math_obj::atan2((_Function_2_1::Block(this) - ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + (int)50))),(_Function_2_2::Block(this) - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ))));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(185)
			Float a = (_g6 * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(185)
			if (((a < (int)0))){
				HX_STACK_LINE(185)
				_g7 = (a + (int)360);
			}
			else{
				HX_STACK_LINE(185)
				_g7 = a;
			}
		}
		HX_STACK_LINE(185)
		Float _g8 = (_g7 * ((Float(::Math_obj::PI) / Float((int)-180))));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(185)
		Float _g9 = ::Math_obj::sin(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(185)
		Float _g10;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			Float x1;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(185)
			if ((this->followCamera)){
				HX_STACK_LINE(185)
				x1 = (this->x + ::com::haxepunk::HXP_obj::camera->x);
			}
			else{
				HX_STACK_LINE(185)
				x1 = this->x;
			}
			HX_STACK_LINE(185)
			Float y1;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(185)
			y1 = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + (int)50);
			HX_STACK_LINE(185)
			Float x2;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				::Player _this = this->lastOwner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(185)
				if ((_this->followCamera)){
					HX_STACK_LINE(185)
					x2 = (_this->x + ::com::haxepunk::HXP_obj::camera->x);
				}
				else{
					HX_STACK_LINE(185)
					x2 = _this->x;
				}
			}
			HX_STACK_LINE(185)
			Float y2;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				::Player _this = this->lastOwner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(185)
				if ((_this->followCamera)){
					HX_STACK_LINE(185)
					y2 = (_this->y + ::com::haxepunk::HXP_obj::camera->y);
				}
				else{
					HX_STACK_LINE(185)
					y2 = _this->y;
				}
			}
			HX_STACK_LINE(185)
			_g10 = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
		}
		HX_STACK_LINE(185)
		Float _g11 = (Float(_g10) / Float(l));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(185)
		Float lengthY = (_g9 * _g11);		HX_STACK_VAR(lengthY,"lengthY");
		HX_STACK_LINE(187)
		Array< ::Dynamic > gfxL = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(gfxL,"gfxL");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				if ((!(((_g < l))))){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(188)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(190)
				::com::haxepunk::ds::Either _g17;		HX_STACK_VAR(_g17,"_g17");
				struct _Function_3_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",190,0xf7f391ff)
						{
							HX_STACK_LINE(190)
							::com::haxepunk::graphics::atlas::AtlasData _g14;		HX_STACK_VAR(_g14,"_g14");
							struct _Function_4_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",190,0xf7f391ff)
									{
										HX_STACK_LINE(190)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(190)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ball-gfx.png")))){
												HX_STACK_LINE(190)
												::com::haxepunk::graphics::atlas::AtlasData _g12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ball-gfx.png"));		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(190)
												data1 = _g12;
											}
											else{
												HX_STACK_LINE(190)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ball-gfx.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(190)
												if (((bitmap != null()))){
													HX_STACK_LINE(190)
													::com::haxepunk::graphics::atlas::AtlasData _g13 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ball-gfx.png"),null());		HX_STACK_VAR(_g13,"_g13");
													HX_STACK_LINE(190)
													data1 = _g13;
												}
											}
											HX_STACK_LINE(190)
											data = data1;
										}
										HX_STACK_LINE(190)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(190)
							_g14 = _Function_4_1::Block();
							HX_STACK_LINE(190)
							::com::haxepunk::graphics::atlas::AtlasRegion _g15 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g14);		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(190)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g15);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(190)
							return e;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Ball.hx",190,0xf7f391ff)
						{
							HX_STACK_LINE(190)
							::openfl::_v2::display::BitmapData _g16 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ball-gfx.png"));		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(190)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g16);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(190)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(190)
				_g17 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_3_1::Block()) : ::com::haxepunk::ds::Either(_Function_3_2::Block()) );
				HX_STACK_LINE(190)
				::openfl::_v2::geom::Rectangle _g18 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)50,(int)50);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(190)
				::com::haxepunk::graphics::Image trailImg = ::com::haxepunk::graphics::Image_obj::__new(_g17,_g18);		HX_STACK_VAR(trailImg,"trailImg");
				HX_STACK_LINE(191)
				trailImg->originX = (int)25;
				HX_STACK_LINE(192)
				trailImg->originY = (int)40;
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(193)
					::com::haxepunk::graphics::Image _g12 = trailImg;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(193)
					_g12->x = (_g12->x + (i * lengthX));
				}
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					::com::haxepunk::graphics::Image _g12 = trailImg;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(194)
					_g12->y = (_g12->y + (i * lengthY));
				}
				HX_STACK_LINE(195)
				trailImg->_scale = this->sprite->_scale;
				HX_STACK_LINE(196)
				trailImg->set_alpha(((Float(((l - i))) / Float(l)) * 0.5));
				HX_STACK_LINE(197)
				gfxL[i] = trailImg;
			}
		}
		HX_STACK_LINE(199)
		gfxL->push(this->sprite);
		HX_STACK_LINE(200)
		::com::haxepunk::graphics::Graphiclist _g19 = ::com::haxepunk::graphics::Graphiclist_obj::__new(gfxL);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(200)
		this->trail = _g19;
		HX_STACK_LINE(201)
		this->set_graphic(this->trail);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,updateTrail,(void))

Void Ball_obj::screenshakeInit( Float amountX,Float amountY,int time){
{
		HX_STACK_FRAME("Ball","screenshakeInit",0xaa70f7bb,"Ball.screenshakeInit","Ball.hx",205,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amountX,"amountX")
		HX_STACK_ARG(amountY,"amountY")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(206)
		this->shakeTime = time;
		HX_STACK_LINE(207)
		this->shakeAmountX = amountX;
		HX_STACK_LINE(208)
		this->shakeAmountY = amountY;
		HX_STACK_LINE(209)
		this->screenshakeOn = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Ball_obj,screenshakeInit,(void))

Void Ball_obj::screenshake( ){
{
		HX_STACK_FRAME("Ball","screenshake",0xccf0af0b,"Ball.screenshake","Ball.hx",213,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		(this->shakeTime)--;
		HX_STACK_LINE(215)
		if (((this->shakeTime <= (int)0))){
			HX_STACK_LINE(215)
			this->screenshakeOn = false;
		}
		HX_STACK_LINE(216)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		Float _g1 = (_g - 0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		Float _g2 = ((this->shakeAmountX * (int)2) * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(216)
		Float _g3 = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(216)
		this->_scene->camera->x = _g3;
		HX_STACK_LINE(217)
		Float _g4 = ::Math_obj::random();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(217)
		Float _g5 = (_g4 - 0.5);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(217)
		Float _g6 = ((this->shakeAmountY * (int)2) * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(217)
		Float _g7 = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(217)
		this->_scene->camera->y = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,screenshake,(void))

Void Ball_obj::normCam( ){
{
		HX_STACK_FRAME("Ball","normCam",0x57b7e9e4,"Ball.normCam","Ball.hx",221,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		this->_scene->camera->x = (int)0;
		HX_STACK_LINE(223)
		this->_scene->camera->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,normCam,(void))


Ball_obj::Ball_obj()
{
}

void Ball_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ball);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(trail,"trail");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(flyspeed,"flyspeed");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(drawTrail,"drawTrail");
	HX_MARK_MEMBER_NAME(shakeTime,"shakeTime");
	HX_MARK_MEMBER_NAME(shakeTimer,"shakeTimer");
	HX_MARK_MEMBER_NAME(shakeAmountX,"shakeAmountX");
	HX_MARK_MEMBER_NAME(shakeAmountY,"shakeAmountY");
	HX_MARK_MEMBER_NAME(screenshakeOn,"screenshakeOn");
	HX_MARK_MEMBER_NAME(inAir,"inAir");
	HX_MARK_MEMBER_NAME(shadow,"shadow");
	HX_MARK_MEMBER_NAME(lastOwner,"lastOwner");
	HX_MARK_MEMBER_NAME(beingHeld,"beingHeld");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ball_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(trail,"trail");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(flyspeed,"flyspeed");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(drawTrail,"drawTrail");
	HX_VISIT_MEMBER_NAME(shakeTime,"shakeTime");
	HX_VISIT_MEMBER_NAME(shakeTimer,"shakeTimer");
	HX_VISIT_MEMBER_NAME(shakeAmountX,"shakeAmountX");
	HX_VISIT_MEMBER_NAME(shakeAmountY,"shakeAmountY");
	HX_VISIT_MEMBER_NAME(screenshakeOn,"screenshakeOn");
	HX_VISIT_MEMBER_NAME(inAir,"inAir");
	HX_VISIT_MEMBER_NAME(shadow,"shadow");
	HX_VISIT_MEMBER_NAME(lastOwner,"lastOwner");
	HX_VISIT_MEMBER_NAME(beingHeld,"beingHeld");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trail") ) { return trail; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"inAir") ) { return inAir; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"shadow") ) { return shadow; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normCam") ) { return normCam_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flyspeed") ) { return flyspeed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawTrail") ) { return drawTrail; }
		if (HX_FIELD_EQ(inName,"shakeTime") ) { return shakeTime; }
		if (HX_FIELD_EQ(inName,"lastOwner") ) { return lastOwner; }
		if (HX_FIELD_EQ(inName,"beingHeld") ) { return beingHeld; }
		if (HX_FIELD_EQ(inName,"getThrown") ) { return getThrown_dyn(); }
		if (HX_FIELD_EQ(inName,"getWinner") ) { return getWinner_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shakeTimer") ) { return shakeTimer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTrail") ) { return updateTrail_dyn(); }
		if (HX_FIELD_EQ(inName,"screenshake") ) { return screenshake_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shakeAmountX") ) { return shakeAmountX; }
		if (HX_FIELD_EQ(inName,"shakeAmountY") ) { return shakeAmountY; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenshakeOn") ) { return screenshakeOn; }
		if (HX_FIELD_EQ(inName,"updateGraphic") ) { return updateGraphic_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenshakeInit") ) { return screenshakeInit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"attachedToPlayer") ) { return attachedToPlayer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkEndCondition") ) { return checkEndCondition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trail") ) { trail=inValue.Cast< ::com::haxepunk::graphics::Graphiclist >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inAir") ) { inAir=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow") ) { shadow=inValue.Cast< ::Shadow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flyspeed") ) { flyspeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawTrail") ) { drawTrail=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeTime") ) { shakeTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastOwner") ) { lastOwner=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beingHeld") ) { beingHeld=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shakeTimer") ) { shakeTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shakeAmountX") ) { shakeAmountX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeAmountY") ) { shakeAmountY=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenshakeOn") ) { screenshakeOn=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("trail"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("p"));
	outFields->push(HX_CSTRING("flyspeed"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("drawTrail"));
	outFields->push(HX_CSTRING("shakeTime"));
	outFields->push(HX_CSTRING("shakeTimer"));
	outFields->push(HX_CSTRING("shakeAmountX"));
	outFields->push(HX_CSTRING("shakeAmountY"));
	outFields->push(HX_CSTRING("screenshakeOn"));
	outFields->push(HX_CSTRING("inAir"));
	outFields->push(HX_CSTRING("shadow"));
	outFields->push(HX_CSTRING("lastOwner"));
	outFields->push(HX_CSTRING("beingHeld"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Ball_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::com::haxepunk::graphics::Graphiclist*/ ,(int)offsetof(Ball_obj,trail),HX_CSTRING("trail")},
	{hx::fsString,(int)offsetof(Ball_obj,state),HX_CSTRING("state")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Ball_obj,p),HX_CSTRING("p")},
	{hx::fsFloat,(int)offsetof(Ball_obj,flyspeed),HX_CSTRING("flyspeed")},
	{hx::fsFloat,(int)offsetof(Ball_obj,tx),HX_CSTRING("tx")},
	{hx::fsFloat,(int)offsetof(Ball_obj,ty),HX_CSTRING("ty")},
	{hx::fsBool,(int)offsetof(Ball_obj,drawTrail),HX_CSTRING("drawTrail")},
	{hx::fsInt,(int)offsetof(Ball_obj,shakeTime),HX_CSTRING("shakeTime")},
	{hx::fsInt,(int)offsetof(Ball_obj,shakeTimer),HX_CSTRING("shakeTimer")},
	{hx::fsFloat,(int)offsetof(Ball_obj,shakeAmountX),HX_CSTRING("shakeAmountX")},
	{hx::fsFloat,(int)offsetof(Ball_obj,shakeAmountY),HX_CSTRING("shakeAmountY")},
	{hx::fsBool,(int)offsetof(Ball_obj,screenshakeOn),HX_CSTRING("screenshakeOn")},
	{hx::fsBool,(int)offsetof(Ball_obj,inAir),HX_CSTRING("inAir")},
	{hx::fsObject /*::Shadow*/ ,(int)offsetof(Ball_obj,shadow),HX_CSTRING("shadow")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Ball_obj,lastOwner),HX_CSTRING("lastOwner")},
	{hx::fsBool,(int)offsetof(Ball_obj,beingHeld),HX_CSTRING("beingHeld")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("trail"),
	HX_CSTRING("state"),
	HX_CSTRING("p"),
	HX_CSTRING("flyspeed"),
	HX_CSTRING("tx"),
	HX_CSTRING("ty"),
	HX_CSTRING("drawTrail"),
	HX_CSTRING("shakeTime"),
	HX_CSTRING("shakeTimer"),
	HX_CSTRING("shakeAmountX"),
	HX_CSTRING("shakeAmountY"),
	HX_CSTRING("screenshakeOn"),
	HX_CSTRING("inAir"),
	HX_CSTRING("shadow"),
	HX_CSTRING("lastOwner"),
	HX_CSTRING("beingHeld"),
	HX_CSTRING("added"),
	HX_CSTRING("update"),
	HX_CSTRING("attachedToPlayer"),
	HX_CSTRING("checkEndCondition"),
	HX_CSTRING("getThrown"),
	HX_CSTRING("updateGraphic"),
	HX_CSTRING("getWinner"),
	HX_CSTRING("updateTrail"),
	HX_CSTRING("screenshakeInit"),
	HX_CSTRING("screenshake"),
	HX_CSTRING("normCam"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#endif

Class Ball_obj::__mClass;

void Ball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ball"), hx::TCanCast< Ball_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Ball_obj::__boot()
{
}

