#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Bar
#include <Bar.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Target
#include <Target.h>
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
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_media_SoundChannel
#include <openfl/_v2/media/SoundChannel.h>
#endif

Void Player_obj::__construct(int Team,bool focus,::Bar bar,Float _x,Float _y,hx::Null< bool >  __o_jsInput,hx::Null< int >  __o_jsNum)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",10,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(Team,"Team")
HX_STACK_ARG(focus,"focus")
HX_STACK_ARG(bar,"bar")
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
HX_STACK_ARG(__o_jsInput,"jsInput")
HX_STACK_ARG(__o_jsNum,"jsNum")
bool jsInput = __o_jsInput.Default(false);
int jsNum = __o_jsNum.Default(0);
{
	HX_STACK_LINE(44)
	this->score = (int)0;
	HX_STACK_LINE(43)
	this->focused = false;
	HX_STACK_LINE(40)
	this->ballAttached = false;
	HX_STACK_LINE(39)
	this->boundY = (int)55;
	HX_STACK_LINE(38)
	this->boundX = (int)60;
	HX_STACK_LINE(28)
	this->indiUp = false;
	HX_STACK_LINE(26)
	this->ballHoldTime = (int)500;
	HX_STACK_LINE(25)
	this->ballHoldTimer = (int)0;
	HX_STACK_LINE(23)
	this->thrownTime = (int)0;
	HX_STACK_LINE(22)
	this->addAngle = (int)0;
	HX_STACK_LINE(21)
	this->targetAngle = 270.0;
	HX_STACK_LINE(17)
	this->throwTime = (int)40;
	HX_STACK_LINE(16)
	this->throwTimer = (int)0;
	HX_STACK_LINE(15)
	this->state = HX_CSTRING("still");
	HX_STACK_LINE(14)
	this->speed = 12.0;
	HX_STACK_LINE(49)
	super::__construct(_x,_y,null(),null());
	HX_STACK_LINE(50)
	this->team = Team;
	HX_STACK_LINE(51)
	this->focused = focus;
	HX_STACK_LINE(52)
	this->timerBar = bar;
	HX_STACK_LINE(54)
	if (((this->team == (int)1))){
		HX_STACK_LINE(56)
		this->inputTeamName = HX_CSTRING("t1_");
		HX_STACK_LINE(57)
		::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
		struct _Function_2_1{
			inline static ::com::haxepunk::ds::Either Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",57,0xa27fc9dd)
				{
					HX_STACK_LINE(57)
					::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
					struct _Function_3_1{
						inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",57,0xa27fc9dd)
							{
								HX_STACK_LINE(57)
								::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(57)
								{
									HX_STACK_LINE(57)
									::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
									HX_STACK_LINE(57)
									if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/game-gfx.png")))){
										HX_STACK_LINE(57)
										::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/game-gfx.png"));		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(57)
										data1 = _g;
									}
									else{
										HX_STACK_LINE(57)
										::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/game-gfx.png"));		HX_STACK_VAR(bitmap,"bitmap");
										HX_STACK_LINE(57)
										if (((bitmap != null()))){
											HX_STACK_LINE(57)
											::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/game-gfx.png"),null());		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(57)
											data1 = _g1;
										}
									}
									HX_STACK_LINE(57)
									data = data1;
								}
								HX_STACK_LINE(57)
								return data;
							}
							return null();
						}
					};
					HX_STACK_LINE(57)
					_g2 = _Function_3_1::Block();
					HX_STACK_LINE(57)
					::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(57)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(57)
					return e;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::com::haxepunk::ds::Either Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",57,0xa27fc9dd)
				{
					HX_STACK_LINE(57)
					::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/game-gfx.png"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(57)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(57)
					return e;
				}
				return null();
			}
		};
		HX_STACK_LINE(57)
		_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
		HX_STACK_LINE(57)
		::com::haxepunk::graphics::Spritemap _g6 = ::com::haxepunk::graphics::Spritemap_obj::__new(_g5,(int)100,(int)128,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(57)
		this->sprite = _g6;
	}
	else{
		HX_STACK_LINE(59)
		if (((this->team == (int)2))){
			HX_STACK_LINE(61)
			this->inputTeamName = HX_CSTRING("t2_");
			HX_STACK_LINE(62)
			::com::haxepunk::ds::Either _g12;		HX_STACK_VAR(_g12,"_g12");
			struct _Function_3_1{
				inline static ::com::haxepunk::ds::Either Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",62,0xa27fc9dd)
					{
						HX_STACK_LINE(62)
						::com::haxepunk::graphics::atlas::AtlasData _g9;		HX_STACK_VAR(_g9,"_g9");
						struct _Function_4_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",62,0xa27fc9dd)
								{
									HX_STACK_LINE(62)
									::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(62)
									{
										HX_STACK_LINE(62)
										::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
										HX_STACK_LINE(62)
										if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/game-gfx-2.png")))){
											HX_STACK_LINE(62)
											::com::haxepunk::graphics::atlas::AtlasData _g7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/game-gfx-2.png"));		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(62)
											data1 = _g7;
										}
										else{
											HX_STACK_LINE(62)
											::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/game-gfx-2.png"));		HX_STACK_VAR(bitmap,"bitmap");
											HX_STACK_LINE(62)
											if (((bitmap != null()))){
												HX_STACK_LINE(62)
												::com::haxepunk::graphics::atlas::AtlasData _g8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/game-gfx-2.png"),null());		HX_STACK_VAR(_g8,"_g8");
												HX_STACK_LINE(62)
												data1 = _g8;
											}
										}
										HX_STACK_LINE(62)
										data = data1;
									}
									HX_STACK_LINE(62)
									return data;
								}
								return null();
							}
						};
						HX_STACK_LINE(62)
						_g9 = _Function_4_1::Block();
						HX_STACK_LINE(62)
						::com::haxepunk::graphics::atlas::TileAtlas _g10 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(62)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g10);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(62)
						return e;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::com::haxepunk::ds::Either Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",62,0xa27fc9dd)
					{
						HX_STACK_LINE(62)
						::openfl::_v2::display::BitmapData _g11 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/game-gfx-2.png"));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(62)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g11);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(62)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(62)
			_g12 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_3_1::Block()) : ::com::haxepunk::ds::Either(_Function_3_2::Block()) );
			HX_STACK_LINE(62)
			::com::haxepunk::graphics::Spritemap _g13 = ::com::haxepunk::graphics::Spritemap_obj::__new(_g12,(int)100,(int)128,null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(62)
			this->sprite = _g13;
		}
	}
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		this->width = (int)50;
		HX_STACK_LINE(66)
		this->height = (int)30;
		HX_STACK_LINE(66)
		this->originX = (int)15;
		HX_STACK_LINE(66)
		this->originY = (int)30;
	}
	HX_STACK_LINE(67)
	this->sprite->originX = (int)20;
	HX_STACK_LINE(68)
	this->sprite->originY = (int)120;
	HX_STACK_LINE(71)
	this->sprite->add(HX_CSTRING("still"),Array_obj< int >::__new().Add((int)0).Add((int)5).Add((int)10).Add((int)15),(int)10,true);
	HX_STACK_LINE(72)
	this->sprite->add(HX_CSTRING("move"),Array_obj< int >::__new().Add((int)1).Add((int)6).Add((int)11).Add((int)16),(int)10,true);
	HX_STACK_LINE(73)
	this->sprite->add(HX_CSTRING("wBall_still"),Array_obj< int >::__new().Add((int)2).Add((int)7).Add((int)12).Add((int)17),(int)10,true);
	HX_STACK_LINE(74)
	this->sprite->add(HX_CSTRING("wBall_move"),Array_obj< int >::__new().Add((int)3).Add((int)8).Add((int)13).Add((int)18),(int)10,true);
	HX_STACK_LINE(75)
	this->sprite->add(HX_CSTRING("hasThrown"),Array_obj< int >::__new().Add((int)4),(int)0,false);
	HX_STACK_LINE(76)
	this->sprite->add(HX_CSTRING("getHit"),Array_obj< int >::__new().Add((int)9),(int)0,false);
	HX_STACK_LINE(77)
	this->sprite->play(HX_CSTRING("still"),null(),null());
	HX_STACK_LINE(79)
	this->set_graphic(this->sprite);
	HX_STACK_LINE(81)
	::com::haxepunk::ds::Either _g19;		HX_STACK_VAR(_g19,"_g19");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",81,0xa27fc9dd)
			{
				HX_STACK_LINE(81)
				::com::haxepunk::graphics::atlas::AtlasData _g16;		HX_STACK_VAR(_g16,"_g16");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",81,0xa27fc9dd)
						{
							HX_STACK_LINE(81)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(81)
							{
								HX_STACK_LINE(81)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(81)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Arrow.png")))){
									HX_STACK_LINE(81)
									::com::haxepunk::graphics::atlas::AtlasData _g14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Arrow.png"));		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(81)
									data1 = _g14;
								}
								else{
									HX_STACK_LINE(81)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Arrow.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(81)
									if (((bitmap != null()))){
										HX_STACK_LINE(81)
										::com::haxepunk::graphics::atlas::AtlasData _g15 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Arrow.png"),null());		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(81)
										data1 = _g15;
									}
								}
								HX_STACK_LINE(81)
								data = data1;
							}
							HX_STACK_LINE(81)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(81)
				_g16 = _Function_2_1::Block();
				HX_STACK_LINE(81)
				::com::haxepunk::graphics::atlas::AtlasRegion _g17 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(81)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g17);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(81)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",81,0xa27fc9dd)
			{
				HX_STACK_LINE(81)
				::openfl::_v2::display::BitmapData _g18 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Arrow.png"));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(81)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g18);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(81)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(81)
	_g19 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(81)
	::com::haxepunk::graphics::Image _g20 = ::com::haxepunk::graphics::Image_obj::__new(_g19,null());		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(81)
	this->indicator = _g20;
	HX_STACK_LINE(82)
	int _g21 = this->indicator->get_height();		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(82)
	Float _g22 = (this->sprite->originY + _g21);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(82)
	this->indicator->originY = _g22;
	HX_STACK_LINE(83)
	int _g23 = this->indicator->get_width();		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(83)
	Float _g24 = (Float(_g23) / Float((int)2));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(83)
	this->indicator->originX = _g24;
	HX_STACK_LINE(84)
	if ((this->focused)){
		HX_STACK_LINE(84)
		this->indicator->set_alpha((int)1);
	}
	else{
		HX_STACK_LINE(84)
		this->indicator->set_alpha((int)0);
	}
	HX_STACK_LINE(86)
	this->addGraphic(this->indicator);
	HX_STACK_LINE(89)
	if (((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) > ::com::haxepunk::HXP_obj::halfWidth))){
		HX_STACK_LINE(89)
		this->sprite->scaleX = (int)-1;
	}
	else{
		HX_STACK_LINE(90)
		this->sprite->scaleX = (int)1;
	}
	HX_STACK_LINE(93)
	::String audioEnd = HX_CSTRING(".ogg");		HX_STACK_VAR(audioEnd,"audioEnd");
	HX_STACK_LINE(98)
	::com::haxepunk::Sfx _g25 = ::com::haxepunk::Sfx_obj::__new((HX_CSTRING("audio/splat") + audioEnd),null());		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(98)
	this->splat = _g25;
	HX_STACK_LINE(99)
	::com::haxepunk::Sfx _g26 = ::com::haxepunk::Sfx_obj::__new((HX_CSTRING("audio/huuang") + audioEnd),null());		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(99)
	this->huuang = _g26;
	HX_STACK_LINE(100)
	::com::haxepunk::Sfx _g27 = ::com::haxepunk::Sfx_obj::__new((HX_CSTRING("audio/Pickup") + audioEnd),null());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(100)
	this->pickup = _g27;
	HX_STACK_LINE(103)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_left"),Array_obj< int >::__new().Add((int)37));
	HX_STACK_LINE(104)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_right"),Array_obj< int >::__new().Add((int)39));
	HX_STACK_LINE(105)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_up"),Array_obj< int >::__new().Add((int)38));
	HX_STACK_LINE(106)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_down"),Array_obj< int >::__new().Add((int)40));
	HX_STACK_LINE(107)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_throw"),Array_obj< int >::__new().Add((int)75));
	HX_STACK_LINE(108)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_targetDir1"),Array_obj< int >::__new().Add((int)74));
	HX_STACK_LINE(109)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t2_targetDir2"),Array_obj< int >::__new().Add((int)76));
	HX_STACK_LINE(111)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_left"),Array_obj< int >::__new().Add((int)65));
	HX_STACK_LINE(112)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_right"),Array_obj< int >::__new().Add((int)68));
	HX_STACK_LINE(113)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_up"),Array_obj< int >::__new().Add((int)87));
	HX_STACK_LINE(114)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_down"),Array_obj< int >::__new().Add((int)83));
	HX_STACK_LINE(115)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_throw"),Array_obj< int >::__new().Add((int)88));
	HX_STACK_LINE(116)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_targetDir1"),Array_obj< int >::__new().Add((int)90));
	HX_STACK_LINE(117)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("t1_targetDir2"),Array_obj< int >::__new().Add((int)67));
	HX_STACK_LINE(119)
	this->joyNum = jsNum;
	HX_STACK_LINE(120)
	this->joyInput = jsInput;
	HX_STACK_LINE(122)
	if ((this->joyInput)){
		HX_STACK_LINE(124)
		::com::haxepunk::utils::Joystick _g28 = ::com::haxepunk::utils::Input_obj::joystick(this->joyNum);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(124)
		this->joy = _g28;
	}
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int Team,bool focus,::Bar bar,Float _x,Float _y,hx::Null< bool >  __o_jsInput,hx::Null< int >  __o_jsNum)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(Team,focus,bar,_x,_y,__o_jsInput,__o_jsNum);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Player_obj::added( ){
{
		HX_STACK_FRAME("Player","added",0x101de413,"Player.added","Player.hx",131,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		this->super::added();
		HX_STACK_LINE(133)
		::Shadow _g = ::Shadow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		this->shadow = _g;
		HX_STACK_LINE(134)
		::Target _g1 = ::Target_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		this->target = _g1;
		HX_STACK_LINE(135)
		this->_scene->add(this->shadow);
		HX_STACK_LINE(136)
		this->_scene->add(this->target);
	}
return null();
}


Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",140,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		if ((this->focused)){
			HX_STACK_LINE(141)
			if ((this->joyInput)){
				HX_STACK_LINE(141)
				this->handleJsInput();
			}
			else{
				HX_STACK_LINE(141)
				this->handleInput();
			}
		}
		HX_STACK_LINE(142)
		this->holdBallTiming();
		HX_STACK_LINE(143)
		this->keepInBounds();
		HX_STACK_LINE(144)
		this->checkBall();
		HX_STACK_LINE(145)
		this->checkOtherPlayer();
		HX_STACK_LINE(146)
		this->ballUpdate();
		HX_STACK_LINE(147)
		this->updateGraphic();
		HX_STACK_LINE(148)
		this->shadow->updatePos((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + ((int)5 * this->sprite->scaleX)),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));
		HX_STACK_LINE(149)
		this->shadow->set_layer((this->_layer + (int)1));
		HX_STACK_LINE(150)
		this->super::update();
	}
return null();
}


Void Player_obj::checkBall( ){
{
		HX_STACK_FRAME("Player","checkBall",0x4ac05fba,"Player.checkBall","Player.hx",154,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		Array< ::Dynamic > wBall = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(wBall,"wBall");
		HX_STACK_LINE(156)
		this->_scene->getClass(hx::ClassOf< ::Ball >(),wBall);
		HX_STACK_LINE(157)
		::Ball ball = this->collideWith(wBall->__get((int)0).StaticCast< ::Ball >(),(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(ball,"ball");
		HX_STACK_LINE(159)
		if (((ball == null()))){
			HX_STACK_LINE(159)
			return null();
		}
		else{
			HX_STACK_LINE(160)
			if (((  ((!(((  ((!((!(::Std_obj::is(ball,hx::ClassOf< ::Ball >())))))) ? bool(ball->inAir) : bool(true) ))))) ? bool(ball->beingHeld) : bool(true) ))){
				HX_STACK_LINE(160)
				return null();
			}
		}
		HX_STACK_LINE(162)
		this->b = ball;
		HX_STACK_LINE(164)
		this->ballAttached = true;
		HX_STACK_LINE(165)
		if (((this->b->lastOwner != hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(165)
			(this->score)++;
		}
		HX_STACK_LINE(166)
		this->b->screenshakeInit((int)5,(int)5,(int)5);
		HX_STACK_LINE(168)
		this->changePlayer(false);
		HX_STACK_LINE(169)
		this->pickup->play(0.6,(int)0,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,checkBall,(void))

Void Player_obj::changePlayer( bool focusThis){
{
		HX_STACK_FRAME("Player","changePlayer",0x3a5775fe,"Player.changePlayer","Player.hx",173,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(focusThis,"focusThis")
		HX_STACK_LINE(174)
		Array< ::Dynamic > wPlayer = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(wPlayer,"wPlayer");
		HX_STACK_LINE(175)
		this->_scene->getClass(hx::ClassOf< ::Player >(),wPlayer);
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			int _g = wPlayer->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(178)
				::Player p = wPlayer->__get(i).StaticCast< ::Player >();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(179)
				if (((p->team == this->team))){
					HX_STACK_LINE(181)
					if ((focusThis)){
						HX_STACK_LINE(181)
						p->focused = true;
					}
					else{
						HX_STACK_LINE(181)
						p->focused = false;
					}
					HX_STACK_LINE(182)
					if ((p->focused)){
						HX_STACK_LINE(182)
						p->indicator->set_alpha((int)1);
					}
					else{
						HX_STACK_LINE(182)
						p->indicator->set_alpha((int)0);
					}
				}
			}
		}
		HX_STACK_LINE(185)
		if ((focusThis)){
			HX_STACK_LINE(185)
			this->focused = false;
		}
		else{
			HX_STACK_LINE(185)
			this->focused = true;
		}
		HX_STACK_LINE(186)
		if ((focusThis)){
			HX_STACK_LINE(186)
			this->indicator->set_alpha((int)0);
		}
		else{
			HX_STACK_LINE(186)
			this->indicator->set_alpha((int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,changePlayer,(void))

Void Player_obj::ballUpdate( ){
{
		HX_STACK_FRAME("Player","ballUpdate",0x51d96935,"Player.ballUpdate","Player.hx",191,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		if ((this->ballAttached)){
			HX_STACK_LINE(193)
			if ((this->followCamera)){
				HX_STACK_LINE(193)
				this->b->x = (this->x + ::com::haxepunk::HXP_obj::camera->x);
			}
			else{
				HX_STACK_LINE(193)
				this->b->x = this->x;
			}
			HX_STACK_LINE(194)
			this->b->y = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - (int)99);
			HX_STACK_LINE(195)
			this->b->attachedToPlayer(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,ballUpdate,(void))

Void Player_obj::throwBall( ){
{
		HX_STACK_FRAME("Player","throwBall",0x1e76ab18,"Player.throwBall","Player.hx",200,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		if (((bool((this->throwTimer == (int)0)) || bool(!(this->ballAttached))))){
			HX_STACK_LINE(201)
			return null();
		}
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::Player_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",202,0xa27fc9dd)
				{
					HX_STACK_LINE(202)
					::Target _this = __this->target;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(202)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::Player_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",202,0xa27fc9dd)
				{
					HX_STACK_LINE(202)
					::Target _this = __this->target;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(202)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(202)
		this->b->getThrown(_Function_1_1::Block(this),_Function_1_2::Block(this));
		HX_STACK_LINE(203)
		this->ballAttached = false;
		HX_STACK_LINE(204)
		this->throwTimer = (int)0;
		HX_STACK_LINE(205)
		this->target->visible = false;
		HX_STACK_LINE(206)
		this->state = HX_CSTRING("hasThrown");
		HX_STACK_LINE(207)
		this->addAngle = (int)0;
		HX_STACK_LINE(208)
		this->splat->play((int)1,(int)0,false);
		HX_STACK_LINE(209)
		this->huuang->stop();
		HX_STACK_LINE(210)
		this->changePlayer(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,throwBall,(void))

Void Player_obj::throwCharge( ){
{
		HX_STACK_FRAME("Player","throwCharge",0x10b29bcd,"Player.throwCharge","Player.hx",214,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(215)
		if ((!(this->ballAttached))){
			HX_STACK_LINE(215)
			return null();
		}
		HX_STACK_LINE(217)
		if ((!(((this->huuang->_channel != null()))))){
			HX_STACK_LINE(217)
			this->huuang->play((int)1,(int)0,false);
		}
		HX_STACK_LINE(218)
		(this->throwTimer)++;
		HX_STACK_LINE(220)
		this->target->visible = true;
		HX_STACK_LINE(222)
		Float _g = ::Math_obj::sin((((this->targetAngle + this->addAngle)) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		Float _g1 = (_g * (int)50);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(222)
		_g2 = (((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + _g1);
		HX_STACK_LINE(222)
		Float _g3 = ::Math_obj::sin((((this->targetAngle + this->addAngle)) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(222)
		Float _g4 = (_g3 * this->throwTimer);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(222)
		Float _g5 = (_g4 * (int)8);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(222)
		Float tx = (_g2 + _g5);		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(223)
		Float _g6 = ::Math_obj::cos((((this->targetAngle + this->addAngle)) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(223)
		Float _g7 = (_g6 * (int)50);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(223)
		Float _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(223)
		_g8 = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + _g7);
		HX_STACK_LINE(223)
		Float _g9 = ::Math_obj::cos((((this->targetAngle + this->addAngle)) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(223)
		Float _g10 = (_g9 * this->throwTimer);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(223)
		Float _g11 = (_g10 * (int)8);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(223)
		Float ty = (_g8 + _g11);		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(225)
		this->target->updatePos(tx,ty);
		HX_STACK_LINE(227)
		if (((this->throwTimer > this->throwTime))){
			HX_STACK_LINE(227)
			this->throwBall();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,throwCharge,(void))

Void Player_obj::checkOtherPlayer( ){
{
		HX_STACK_FRAME("Player","checkOtherPlayer",0xb9c841f6,"Player.checkOtherPlayer","Player.hx",231,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		Array< ::Dynamic > wPlayer = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(wPlayer,"wPlayer");
		HX_STACK_LINE(234)
		this->_scene->getClass(hx::ClassOf< ::Player >(),wPlayer);
		HX_STACK_LINE(236)
		::Player p = null();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(238)
			int _g = wPlayer->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(240)
				if (((wPlayer->__get(i).StaticCast< ::Player >() != hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(240)
					::Player _g2 = this->collideWith(wPlayer->__get(i).StaticCast< ::Player >(),(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(240)
					p = _g2;
				}
			}
		}
		HX_STACK_LINE(243)
		if (((p == null()))){
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(246)
		if ((!(::Std_obj::is(p,hx::ClassOf< ::Player >())))){
			HX_STACK_LINE(246)
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,checkOtherPlayer,(void))

Void Player_obj::keepInBounds( ){
{
		HX_STACK_FRAME("Player","keepInBounds",0x5d80baec,"Player.keepInBounds","Player.hx",252,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		if (((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) < this->boundX))){
			HX_STACK_LINE(253)
			this->x = this->boundX;
		}
		HX_STACK_LINE(254)
		if (((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) > (::com::haxepunk::HXP_obj::width - this->boundX)))){
			HX_STACK_LINE(254)
			this->x = (::com::haxepunk::HXP_obj::width - this->boundX);
		}
		HX_STACK_LINE(256)
		if (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) < this->boundY))){
			HX_STACK_LINE(256)
			this->y = this->boundY;
		}
		HX_STACK_LINE(257)
		if (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) > (::com::haxepunk::HXP_obj::height - this->boundY)))){
			HX_STACK_LINE(257)
			this->y = (::com::haxepunk::HXP_obj::height - this->boundY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,keepInBounds,(void))

Void Player_obj::holdBallTiming( ){
{
		HX_STACK_FRAME("Player","holdBallTiming",0x5f00d255,"Player.holdBallTiming","Player.hx",262,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		if ((this->ballAttached)){
			HX_STACK_LINE(264)
			(this->ballHoldTimer)++;
			HX_STACK_LINE(265)
			if (((this->ballHoldTimer >= this->ballHoldTime))){
				HX_STACK_LINE(265)
				this->throwCharge();
			}
			else{
				HX_STACK_LINE(266)
				this->timerBar->sprite->scaleX = -(((Float(this->ballHoldTimer) / Float(this->ballHoldTime))));
			}
		}
		else{
			HX_STACK_LINE(268)
			this->ballHoldTimer = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,holdBallTiming,(void))

Void Player_obj::handleInput( ){
{
		HX_STACK_FRAME("Player","handleInput",0x012c3ed5,"Player.handleInput","Player.hx",272,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("left")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		if ((::com::haxepunk::utils::Input_obj::check(_g))){
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(275)
				::Player _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(275)
				_g1->x = (((  ((_g1->followCamera)) ? Float((_g1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g1->x) )) - this->speed);
			}
			HX_STACK_LINE(276)
			this->sprite->scaleX = (int)-1;
			HX_STACK_LINE(277)
			this->shadow->sprite->scaleX = (int)-1;
			HX_STACK_LINE(278)
			this->targetAngle = (int)90;
		}
		HX_STACK_LINE(281)
		::com::haxepunk::ds::Either _g1 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("right")));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		if ((::com::haxepunk::utils::Input_obj::check(_g1))){
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				::Player _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(283)
				_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + this->speed);
			}
			HX_STACK_LINE(284)
			this->sprite->scaleX = (int)1;
			HX_STACK_LINE(285)
			this->shadow->sprite->scaleX = (int)1;
			HX_STACK_LINE(286)
			this->targetAngle = (int)270;
		}
		HX_STACK_LINE(289)
		::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("up")));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(289)
		if ((::com::haxepunk::utils::Input_obj::check(_g2))){
			HX_STACK_LINE(291)
			::Player _g3 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(291)
			_g3->y = (((  ((_g3->followCamera)) ? Float((_g3->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g3->y) )) - this->speed);
		}
		HX_STACK_LINE(294)
		::com::haxepunk::ds::Either _g3 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("down")));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(294)
		if ((::com::haxepunk::utils::Input_obj::check(_g3))){
			HX_STACK_LINE(296)
			::Player _g4 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(296)
			_g4->y = (((  ((_g4->followCamera)) ? Float((_g4->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g4->y) )) + this->speed);
		}
		HX_STACK_LINE(300)
		::com::haxepunk::ds::Either _g4 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("throw")));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(300)
		if ((::com::haxepunk::utils::Input_obj::check(_g4))){
			HX_STACK_LINE(302)
			::com::haxepunk::ds::Either _g5 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("targetDir1")));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(302)
			if ((::com::haxepunk::utils::Input_obj::check(_g5))){
				HX_STACK_LINE(303)
				if (((this->sprite->scaleX > (int)0))){
					HX_STACK_LINE(303)
					hx::SubEq(this->addAngle,(int)5);
				}
				else{
					HX_STACK_LINE(303)
					hx::AddEq(this->addAngle,(int)5);
				}
			}
			HX_STACK_LINE(306)
			::com::haxepunk::ds::Either _g6 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("targetDir2")));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(306)
			if ((::com::haxepunk::utils::Input_obj::check(_g6))){
				HX_STACK_LINE(307)
				if (((this->sprite->scaleX > (int)0))){
					HX_STACK_LINE(307)
					hx::AddEq(this->addAngle,(int)5);
				}
				else{
					HX_STACK_LINE(307)
					hx::SubEq(this->addAngle,(int)5);
				}
			}
			HX_STACK_LINE(309)
			this->throwCharge();
		}
		HX_STACK_LINE(312)
		::com::haxepunk::ds::Either _g7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((this->inputTeamName + HX_CSTRING("throw")));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(312)
		if ((::com::haxepunk::utils::Input_obj::released(_g7))){
			HX_STACK_LINE(314)
			this->throwBall();
			HX_STACK_LINE(315)
			this->addAngle = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,handleInput,(void))

Void Player_obj::handleJsInput( ){
{
		HX_STACK_FRAME("Player","handleJsInput",0x83f3e20c,"Player.handleJsInput","Player.hx",320,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(321)
				{
					HX_STACK_LINE(321)
					::com::haxepunk::utils::Joystick _this = ::com::haxepunk::utils::Input_obj::joystick(this->joyNum);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(321)
					if ((((int)0 >= _this->axis->length))){
						HX_STACK_LINE(321)
						_g1 = (int)0;
					}
					else{
						HX_STACK_LINE(321)
						Float _g2 = ::Math_obj::abs(_this->axis->__get((int)0));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(321)
						if (((_g2 < 0.15))){
							HX_STACK_LINE(321)
							_g1 = (int)0;
						}
						else{
							HX_STACK_LINE(321)
							_g1 = _this->axis->__get((int)0);
						}
					}
				}
				HX_STACK_LINE(321)
				Float _g2 = (_g1 * this->speed);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(321)
				Float v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(321)
				v = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + _g2);
				HX_STACK_LINE(321)
				_g->x = v;
			}
		}
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				Float _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					::com::haxepunk::utils::Joystick _this = ::com::haxepunk::utils::Input_obj::joystick(this->joyNum);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(322)
					if ((((int)1 >= _this->axis->length))){
						HX_STACK_LINE(322)
						_g4 = (int)0;
					}
					else{
						HX_STACK_LINE(322)
						Float _g3 = ::Math_obj::abs(_this->axis->__get((int)1));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(322)
						if (((_g3 < 0.15))){
							HX_STACK_LINE(322)
							_g4 = (int)0;
						}
						else{
							HX_STACK_LINE(322)
							_g4 = _this->axis->__get((int)1);
						}
					}
				}
				HX_STACK_LINE(322)
				Float _g5 = (_g4 * this->speed);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(322)
				Float v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(322)
				v = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + _g5);
				HX_STACK_LINE(322)
				_g->y = v;
			}
		}
		HX_STACK_LINE(324)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::com::haxepunk::utils::Joystick _this = ::com::haxepunk::utils::Input_obj::joystick(this->joyNum);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(324)
			if ((((int)0 >= _this->axis->length))){
				HX_STACK_LINE(324)
				_g7 = (int)0;
			}
			else{
				HX_STACK_LINE(324)
				Float _g6 = ::Math_obj::abs(_this->axis->__get((int)0));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(324)
				if (((_g6 < 0.15))){
					HX_STACK_LINE(324)
					_g7 = (int)0;
				}
				else{
					HX_STACK_LINE(324)
					_g7 = _this->axis->__get((int)0);
				}
			}
		}
		HX_STACK_LINE(324)
		if (((_g7 < (int)0))){
			HX_STACK_LINE(326)
			this->sprite->scaleX = (int)-1;
			HX_STACK_LINE(327)
			this->shadow->sprite->scaleX = (int)-1;
			HX_STACK_LINE(328)
			this->targetAngle = (int)90;
		}
		HX_STACK_LINE(331)
		Float _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			::com::haxepunk::utils::Joystick _this = ::com::haxepunk::utils::Input_obj::joystick(this->joyNum);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(331)
			if ((((int)0 >= _this->axis->length))){
				HX_STACK_LINE(331)
				_g9 = (int)0;
			}
			else{
				HX_STACK_LINE(331)
				Float _g8 = ::Math_obj::abs(_this->axis->__get((int)0));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(331)
				if (((_g8 < 0.15))){
					HX_STACK_LINE(331)
					_g9 = (int)0;
				}
				else{
					HX_STACK_LINE(331)
					_g9 = _this->axis->__get((int)0);
				}
			}
		}
		HX_STACK_LINE(331)
		if (((_g9 > (int)0))){
			HX_STACK_LINE(333)
			this->sprite->scaleX = (int)1;
			HX_STACK_LINE(334)
			this->shadow->sprite->scaleX = (int)1;
			HX_STACK_LINE(335)
			this->targetAngle = (int)270;
		}
		HX_STACK_LINE(338)
		if (((  ((!(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->check((int)14)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->check((int)0)) : bool(true) ))){
			HX_STACK_LINE(340)
			if (((  ((!(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->check((int)10)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->check((int)4)) : bool(true) ))){
				HX_STACK_LINE(341)
				if (((this->sprite->scaleX > (int)0))){
					HX_STACK_LINE(341)
					hx::SubEq(this->addAngle,(int)5);
				}
				else{
					HX_STACK_LINE(341)
					hx::AddEq(this->addAngle,(int)5);
				}
			}
			HX_STACK_LINE(344)
			if (((  ((!(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->check((int)11)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->check((int)5)) : bool(true) ))){
				HX_STACK_LINE(345)
				if (((this->sprite->scaleX > (int)0))){
					HX_STACK_LINE(345)
					hx::AddEq(this->addAngle,(int)5);
				}
				else{
					HX_STACK_LINE(345)
					hx::SubEq(this->addAngle,(int)5);
				}
			}
			HX_STACK_LINE(347)
			this->throwCharge();
		}
		HX_STACK_LINE(350)
		if (((  ((!(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->released((int)14)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(this->joyNum)->released((int)0)) : bool(true) ))){
			HX_STACK_LINE(352)
			this->throwBall();
			HX_STACK_LINE(353)
			this->addAngle = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,handleJsInput,(void))

Void Player_obj::updateGraphic( ){
{
		HX_STACK_FRAME("Player","updateGraphic",0x26bbd9f2,"Player.updateGraphic","Player.hx",358,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		if (((this->state != HX_CSTRING("hasThrown")))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::Player_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",361,0xa27fc9dd)
					{
						HX_STACK_LINE(361)
						::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((__this->inputTeamName + HX_CSTRING("left")));		HX_STACK_VAR(_g,"_g");
						struct _Function_3_1{
							inline static bool Block( hx::ObjectPtr< ::Player_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",361,0xa27fc9dd)
								{
									HX_STACK_LINE(361)
									::com::haxepunk::ds::Either _g1 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((__this->inputTeamName + HX_CSTRING("right")));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(361)
									return ::com::haxepunk::utils::Input_obj::check(_g1);
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static bool Block( hx::ObjectPtr< ::Player_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",361,0xa27fc9dd)
								{
									HX_STACK_LINE(361)
									::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((__this->inputTeamName + HX_CSTRING("up")));		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(361)
									return ::com::haxepunk::utils::Input_obj::check(_g2);
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static bool Block( hx::ObjectPtr< ::Player_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",361,0xa27fc9dd)
								{
									HX_STACK_LINE(361)
									::com::haxepunk::ds::Either _g3 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft((__this->inputTeamName + HX_CSTRING("down")));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(361)
									return ::com::haxepunk::utils::Input_obj::check(_g3);
								}
								return null();
							}
						};
						HX_STACK_LINE(361)
						return (  ((!(((  ((!(((  ((!(::com::haxepunk::utils::Input_obj::check(_g)))) ? bool(_Function_3_1::Block(__this)) : bool(true) ))))) ? bool(_Function_3_2::Block(__this)) : bool(true) ))))) ? bool(_Function_3_3::Block(__this)) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(361)
			if (((  ((!(this->joyInput))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(363)
				this->state = HX_CSTRING("moving");
			}
			else{
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::Player_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",365,0xa27fc9dd)
						{
							HX_STACK_LINE(365)
							Float _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::com::haxepunk::utils::Joystick _this = ::com::haxepunk::utils::Input_obj::joystick(__this->joyNum);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(365)
								if ((((int)0 >= _this->axis->length))){
									HX_STACK_LINE(365)
									_g5 = (int)0;
								}
								else{
									HX_STACK_LINE(365)
									Float _g4 = ::Math_obj::abs(_this->axis->__get((int)0));		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(365)
									if (((_g4 < 0.15))){
										HX_STACK_LINE(365)
										_g5 = (int)0;
									}
									else{
										HX_STACK_LINE(365)
										_g5 = _this->axis->__get((int)0);
									}
								}
							}
							struct _Function_4_1{
								inline static bool Block( hx::ObjectPtr< ::Player_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",365,0xa27fc9dd)
									{
										HX_STACK_LINE(365)
										Float _g7;		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(365)
										{
											HX_STACK_LINE(365)
											::com::haxepunk::utils::Joystick _this = ::com::haxepunk::utils::Input_obj::joystick(__this->joyNum);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(365)
											if ((((int)1 >= _this->axis->length))){
												HX_STACK_LINE(365)
												_g7 = (int)0;
											}
											else{
												HX_STACK_LINE(365)
												Float _g6 = ::Math_obj::abs(_this->axis->__get((int)1));		HX_STACK_VAR(_g6,"_g6");
												HX_STACK_LINE(365)
												if (((_g6 < 0.15))){
													HX_STACK_LINE(365)
													_g7 = (int)0;
												}
												else{
													HX_STACK_LINE(365)
													_g7 = _this->axis->__get((int)1);
												}
											}
										}
										HX_STACK_LINE(365)
										return (_g7 != (int)0);
									}
									return null();
								}
							};
							HX_STACK_LINE(365)
							return (  ((!(((_g5 != (int)0))))) ? bool(_Function_4_1::Block(__this)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(365)
				if (((  ((this->joyInput)) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(367)
					this->state = HX_CSTRING("moving");
				}
				else{
					HX_STACK_LINE(371)
					this->state = HX_CSTRING("still");
				}
			}
		}
		else{
			HX_STACK_LINE(374)
			if (((this->thrownTime >= (int)10))){
				HX_STACK_LINE(376)
				this->state = HX_CSTRING("still");
				HX_STACK_LINE(377)
				this->thrownTime = (int)0;
			}
			else{
				HX_STACK_LINE(379)
				(this->thrownTime)++;
			}
		}
		HX_STACK_LINE(382)
		if (((this->indicator->y > (int)16))){
			HX_STACK_LINE(382)
			this->indiUp = true;
		}
		else{
			HX_STACK_LINE(383)
			if (((this->indicator->y < (int)0))){
				HX_STACK_LINE(383)
				this->indiUp = false;
			}
		}
		HX_STACK_LINE(385)
		if ((this->indiUp)){
			HX_STACK_LINE(385)
			::com::haxepunk::graphics::Image _g = this->indicator;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(385)
			_g->y = (_g->y - 0.5);
		}
		else{
			HX_STACK_LINE(386)
			::com::haxepunk::graphics::Image _g = this->indicator;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(386)
			_g->y = (_g->y + 0.5);
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			::String _g = this->state;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(389)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("still"))){
				HX_STACK_LINE(392)
				if ((this->ballAttached)){
					HX_STACK_LINE(392)
					this->sprite->play(HX_CSTRING("wBall_still"),null(),null());
				}
				else{
					HX_STACK_LINE(392)
					this->sprite->play(HX_CSTRING("still"),null(),null());
				}
			}
			else if (  ( _switch_1==HX_CSTRING("moving"))){
				HX_STACK_LINE(396)
				if ((this->focused)){
					HX_STACK_LINE(396)
					if ((this->ballAttached)){
						HX_STACK_LINE(396)
						this->sprite->play(HX_CSTRING("wBall_move"),null(),null());
					}
					else{
						HX_STACK_LINE(396)
						this->sprite->play(HX_CSTRING("move"),null(),null());
					}
				}
			}
			else if (  ( _switch_1==HX_CSTRING("hasThrown"))){
				HX_STACK_LINE(399)
				this->sprite->play(HX_CSTRING("hasThrown"),null(),null());
			}
		}
		HX_STACK_LINE(403)
		int _g8 = ::Math_obj::round(-(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ))));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(403)
		this->set_layer(_g8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateGraphic,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(throwTimer,"throwTimer");
	HX_MARK_MEMBER_NAME(throwTime,"throwTime");
	HX_MARK_MEMBER_NAME(shadow,"shadow");
	HX_MARK_MEMBER_NAME(indicator,"indicator");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetAngle,"targetAngle");
	HX_MARK_MEMBER_NAME(addAngle,"addAngle");
	HX_MARK_MEMBER_NAME(thrownTime,"thrownTime");
	HX_MARK_MEMBER_NAME(inputTeamName,"inputTeamName");
	HX_MARK_MEMBER_NAME(ballHoldTimer,"ballHoldTimer");
	HX_MARK_MEMBER_NAME(ballHoldTime,"ballHoldTime");
	HX_MARK_MEMBER_NAME(timerBar,"timerBar");
	HX_MARK_MEMBER_NAME(indiUp,"indiUp");
	HX_MARK_MEMBER_NAME(joy,"joy");
	HX_MARK_MEMBER_NAME(joyNum,"joyNum");
	HX_MARK_MEMBER_NAME(joyInput,"joyInput");
	HX_MARK_MEMBER_NAME(splat,"splat");
	HX_MARK_MEMBER_NAME(huuang,"huuang");
	HX_MARK_MEMBER_NAME(pickup,"pickup");
	HX_MARK_MEMBER_NAME(boundX,"boundX");
	HX_MARK_MEMBER_NAME(boundY,"boundY");
	HX_MARK_MEMBER_NAME(ballAttached,"ballAttached");
	HX_MARK_MEMBER_NAME(team,"team");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(focused,"focused");
	HX_MARK_MEMBER_NAME(score,"score");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(throwTimer,"throwTimer");
	HX_VISIT_MEMBER_NAME(throwTime,"throwTime");
	HX_VISIT_MEMBER_NAME(shadow,"shadow");
	HX_VISIT_MEMBER_NAME(indicator,"indicator");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetAngle,"targetAngle");
	HX_VISIT_MEMBER_NAME(addAngle,"addAngle");
	HX_VISIT_MEMBER_NAME(thrownTime,"thrownTime");
	HX_VISIT_MEMBER_NAME(inputTeamName,"inputTeamName");
	HX_VISIT_MEMBER_NAME(ballHoldTimer,"ballHoldTimer");
	HX_VISIT_MEMBER_NAME(ballHoldTime,"ballHoldTime");
	HX_VISIT_MEMBER_NAME(timerBar,"timerBar");
	HX_VISIT_MEMBER_NAME(indiUp,"indiUp");
	HX_VISIT_MEMBER_NAME(joy,"joy");
	HX_VISIT_MEMBER_NAME(joyNum,"joyNum");
	HX_VISIT_MEMBER_NAME(joyInput,"joyInput");
	HX_VISIT_MEMBER_NAME(splat,"splat");
	HX_VISIT_MEMBER_NAME(huuang,"huuang");
	HX_VISIT_MEMBER_NAME(pickup,"pickup");
	HX_VISIT_MEMBER_NAME(boundX,"boundX");
	HX_VISIT_MEMBER_NAME(boundY,"boundY");
	HX_VISIT_MEMBER_NAME(ballAttached,"ballAttached");
	HX_VISIT_MEMBER_NAME(team,"team");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(focused,"focused");
	HX_VISIT_MEMBER_NAME(score,"score");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"joy") ) { return joy; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"team") ) { return team; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"splat") ) { return splat; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"shadow") ) { return shadow; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"indiUp") ) { return indiUp; }
		if (HX_FIELD_EQ(inName,"joyNum") ) { return joyNum; }
		if (HX_FIELD_EQ(inName,"huuang") ) { return huuang; }
		if (HX_FIELD_EQ(inName,"pickup") ) { return pickup; }
		if (HX_FIELD_EQ(inName,"boundX") ) { return boundX; }
		if (HX_FIELD_EQ(inName,"boundY") ) { return boundY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"focused") ) { return focused; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAngle") ) { return addAngle; }
		if (HX_FIELD_EQ(inName,"timerBar") ) { return timerBar; }
		if (HX_FIELD_EQ(inName,"joyInput") ) { return joyInput; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"throwTime") ) { return throwTime; }
		if (HX_FIELD_EQ(inName,"indicator") ) { return indicator; }
		if (HX_FIELD_EQ(inName,"checkBall") ) { return checkBall_dyn(); }
		if (HX_FIELD_EQ(inName,"throwBall") ) { return throwBall_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwTimer") ) { return throwTimer; }
		if (HX_FIELD_EQ(inName,"thrownTime") ) { return thrownTime; }
		if (HX_FIELD_EQ(inName,"ballUpdate") ) { return ballUpdate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetAngle") ) { return targetAngle; }
		if (HX_FIELD_EQ(inName,"throwCharge") ) { return throwCharge_dyn(); }
		if (HX_FIELD_EQ(inName,"handleInput") ) { return handleInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ballHoldTime") ) { return ballHoldTime; }
		if (HX_FIELD_EQ(inName,"ballAttached") ) { return ballAttached; }
		if (HX_FIELD_EQ(inName,"changePlayer") ) { return changePlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"keepInBounds") ) { return keepInBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputTeamName") ) { return inputTeamName; }
		if (HX_FIELD_EQ(inName,"ballHoldTimer") ) { return ballHoldTimer; }
		if (HX_FIELD_EQ(inName,"handleJsInput") ) { return handleJsInput_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGraphic") ) { return updateGraphic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"holdBallTiming") ) { return holdBallTiming_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkOtherPlayer") ) { return checkOtherPlayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"joy") ) { joy=inValue.Cast< ::com::haxepunk::utils::Joystick >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"team") ) { team=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splat") ) { splat=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow") ) { shadow=inValue.Cast< ::Shadow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::Target >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indiUp") ) { indiUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joyNum") ) { joyNum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"huuang") ) { huuang=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pickup") ) { pickup=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundX") ) { boundX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundY") ) { boundY=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"focused") ) { focused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAngle") ) { addAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timerBar") ) { timerBar=inValue.Cast< ::Bar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joyInput") ) { joyInput=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"throwTime") ) { throwTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indicator") ) { indicator=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwTimer") ) { throwTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thrownTime") ) { thrownTime=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetAngle") ) { targetAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ballHoldTime") ) { ballHoldTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballAttached") ) { ballAttached=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputTeamName") ) { inputTeamName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballHoldTimer") ) { ballHoldTimer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("throwTimer"));
	outFields->push(HX_CSTRING("throwTime"));
	outFields->push(HX_CSTRING("shadow"));
	outFields->push(HX_CSTRING("indicator"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("targetAngle"));
	outFields->push(HX_CSTRING("addAngle"));
	outFields->push(HX_CSTRING("thrownTime"));
	outFields->push(HX_CSTRING("inputTeamName"));
	outFields->push(HX_CSTRING("ballHoldTimer"));
	outFields->push(HX_CSTRING("ballHoldTime"));
	outFields->push(HX_CSTRING("timerBar"));
	outFields->push(HX_CSTRING("indiUp"));
	outFields->push(HX_CSTRING("joy"));
	outFields->push(HX_CSTRING("joyNum"));
	outFields->push(HX_CSTRING("joyInput"));
	outFields->push(HX_CSTRING("splat"));
	outFields->push(HX_CSTRING("huuang"));
	outFields->push(HX_CSTRING("pickup"));
	outFields->push(HX_CSTRING("boundX"));
	outFields->push(HX_CSTRING("boundY"));
	outFields->push(HX_CSTRING("ballAttached"));
	outFields->push(HX_CSTRING("team"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("focused"));
	outFields->push(HX_CSTRING("score"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Player_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_CSTRING("speed")},
	{hx::fsString,(int)offsetof(Player_obj,state),HX_CSTRING("state")},
	{hx::fsFloat,(int)offsetof(Player_obj,throwTimer),HX_CSTRING("throwTimer")},
	{hx::fsInt,(int)offsetof(Player_obj,throwTime),HX_CSTRING("throwTime")},
	{hx::fsObject /*::Shadow*/ ,(int)offsetof(Player_obj,shadow),HX_CSTRING("shadow")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Player_obj,indicator),HX_CSTRING("indicator")},
	{hx::fsObject /*::Target*/ ,(int)offsetof(Player_obj,target),HX_CSTRING("target")},
	{hx::fsFloat,(int)offsetof(Player_obj,targetAngle),HX_CSTRING("targetAngle")},
	{hx::fsFloat,(int)offsetof(Player_obj,addAngle),HX_CSTRING("addAngle")},
	{hx::fsInt,(int)offsetof(Player_obj,thrownTime),HX_CSTRING("thrownTime")},
	{hx::fsString,(int)offsetof(Player_obj,inputTeamName),HX_CSTRING("inputTeamName")},
	{hx::fsInt,(int)offsetof(Player_obj,ballHoldTimer),HX_CSTRING("ballHoldTimer")},
	{hx::fsInt,(int)offsetof(Player_obj,ballHoldTime),HX_CSTRING("ballHoldTime")},
	{hx::fsObject /*::Bar*/ ,(int)offsetof(Player_obj,timerBar),HX_CSTRING("timerBar")},
	{hx::fsBool,(int)offsetof(Player_obj,indiUp),HX_CSTRING("indiUp")},
	{hx::fsObject /*::com::haxepunk::utils::Joystick*/ ,(int)offsetof(Player_obj,joy),HX_CSTRING("joy")},
	{hx::fsInt,(int)offsetof(Player_obj,joyNum),HX_CSTRING("joyNum")},
	{hx::fsBool,(int)offsetof(Player_obj,joyInput),HX_CSTRING("joyInput")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,splat),HX_CSTRING("splat")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,huuang),HX_CSTRING("huuang")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,pickup),HX_CSTRING("pickup")},
	{hx::fsInt,(int)offsetof(Player_obj,boundX),HX_CSTRING("boundX")},
	{hx::fsInt,(int)offsetof(Player_obj,boundY),HX_CSTRING("boundY")},
	{hx::fsBool,(int)offsetof(Player_obj,ballAttached),HX_CSTRING("ballAttached")},
	{hx::fsInt,(int)offsetof(Player_obj,team),HX_CSTRING("team")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Player_obj,b),HX_CSTRING("b")},
	{hx::fsBool,(int)offsetof(Player_obj,focused),HX_CSTRING("focused")},
	{hx::fsInt,(int)offsetof(Player_obj,score),HX_CSTRING("score")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("speed"),
	HX_CSTRING("state"),
	HX_CSTRING("throwTimer"),
	HX_CSTRING("throwTime"),
	HX_CSTRING("shadow"),
	HX_CSTRING("indicator"),
	HX_CSTRING("target"),
	HX_CSTRING("targetAngle"),
	HX_CSTRING("addAngle"),
	HX_CSTRING("thrownTime"),
	HX_CSTRING("inputTeamName"),
	HX_CSTRING("ballHoldTimer"),
	HX_CSTRING("ballHoldTime"),
	HX_CSTRING("timerBar"),
	HX_CSTRING("indiUp"),
	HX_CSTRING("joy"),
	HX_CSTRING("joyNum"),
	HX_CSTRING("joyInput"),
	HX_CSTRING("splat"),
	HX_CSTRING("huuang"),
	HX_CSTRING("pickup"),
	HX_CSTRING("boundX"),
	HX_CSTRING("boundY"),
	HX_CSTRING("ballAttached"),
	HX_CSTRING("team"),
	HX_CSTRING("b"),
	HX_CSTRING("focused"),
	HX_CSTRING("score"),
	HX_CSTRING("added"),
	HX_CSTRING("update"),
	HX_CSTRING("checkBall"),
	HX_CSTRING("changePlayer"),
	HX_CSTRING("ballUpdate"),
	HX_CSTRING("throwBall"),
	HX_CSTRING("throwCharge"),
	HX_CSTRING("checkOtherPlayer"),
	HX_CSTRING("keepInBounds"),
	HX_CSTRING("holdBallTiming"),
	HX_CSTRING("handleInput"),
	HX_CSTRING("handleJsInput"),
	HX_CSTRING("updateGraphic"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

