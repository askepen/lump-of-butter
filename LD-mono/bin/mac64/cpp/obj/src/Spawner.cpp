#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Bar
#include <Bar.h>
#endif
#ifndef INCLUDED_Dog
#include <Dog.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Pauser
#include <Pauser.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Spawner
#include <Spawner.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
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
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void Spawner_obj::__construct()
{
HX_STACK_FRAME("Spawner","new",0x6f4b483a,"Spawner.new","Spawner.hx",11,0x10921c76)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",29,0x10921c76)
			{
				HX_STACK_LINE(29)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",29,0x10921c76)
						{
							HX_STACK_LINE(29)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",29,0x10921c76)
									{
										HX_STACK_LINE(29)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(29)
										{
											HX_STACK_LINE(29)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(29)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P2_Key_Ctrl.png")))){
												HX_STACK_LINE(29)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(29)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(29)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(29)
												if (((bitmap != null()))){
													HX_STACK_LINE(29)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P2_Key_Ctrl.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(29)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(29)
											data = data1;
										}
										HX_STACK_LINE(29)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(29)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(29)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(29)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(29)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",29,0x10921c76)
						{
							HX_STACK_LINE(29)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(29)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(29)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(29)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(29)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	this->p2CtrlImg = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",28,0x10921c76)
			{
				HX_STACK_LINE(28)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",28,0x10921c76)
						{
							HX_STACK_LINE(28)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",28,0x10921c76)
									{
										HX_STACK_LINE(28)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(28)
										{
											HX_STACK_LINE(28)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(28)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P1_Key_Ctrl.png")))){
												HX_STACK_LINE(28)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(28)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(28)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(28)
												if (((bitmap != null()))){
													HX_STACK_LINE(28)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P1_Key_Ctrl.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(28)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(28)
											data = data1;
										}
										HX_STACK_LINE(28)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(28)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(28)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(28)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(28)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",28,0x10921c76)
						{
							HX_STACK_LINE(28)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(28)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(28)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(28)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(28)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	this->p1CtrlImg = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",27,0x10921c76)
			{
				HX_STACK_LINE(27)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",27,0x10921c76)
						{
							HX_STACK_LINE(27)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",27,0x10921c76)
									{
										HX_STACK_LINE(27)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(27)
										{
											HX_STACK_LINE(27)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(27)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/FlashTip.png")))){
												HX_STACK_LINE(27)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/FlashTip.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(27)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(27)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/FlashTip.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(27)
												if (((bitmap != null()))){
													HX_STACK_LINE(27)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/FlashTip.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(27)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(27)
											data = data1;
										}
										HX_STACK_LINE(27)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(27)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(27)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(27)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(27)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",27,0x10921c76)
						{
							HX_STACK_LINE(27)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/FlashTip.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(27)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(27)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(27)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(27)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	this->flashTip = _Function_1_3::Block();
	struct _Function_1_4{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",26,0x10921c76)
			{
				HX_STACK_LINE(26)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",26,0x10921c76)
						{
							HX_STACK_LINE(26)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",26,0x10921c76)
									{
										HX_STACK_LINE(26)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(26)
										{
											HX_STACK_LINE(26)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(26)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ModeSingleplayerP1.png")))){
												HX_STACK_LINE(26)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ModeSingleplayerP1.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(26)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(26)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeSingleplayerP1.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(26)
												if (((bitmap != null()))){
													HX_STACK_LINE(26)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ModeSingleplayerP1.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(26)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(26)
											data = data1;
										}
										HX_STACK_LINE(26)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(26)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(26)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(26)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(26)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",26,0x10921c76)
						{
							HX_STACK_LINE(26)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeSingleplayerP1.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(26)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(26)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(26)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(26)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(26)
	this->modeImg = _Function_1_4::Block();
	struct _Function_1_5{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",25,0x10921c76)
			{
				HX_STACK_LINE(25)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",25,0x10921c76)
						{
							HX_STACK_LINE(25)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",25,0x10921c76)
									{
										HX_STACK_LINE(25)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(25)
										{
											HX_STACK_LINE(25)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(25)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Splash.png")))){
												HX_STACK_LINE(25)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Splash.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(25)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(25)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Splash.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(25)
												if (((bitmap != null()))){
													HX_STACK_LINE(25)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Splash.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(25)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(25)
											data = data1;
										}
										HX_STACK_LINE(25)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(25)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(25)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(25)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(25)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",25,0x10921c76)
						{
							HX_STACK_LINE(25)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Splash.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(25)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(25)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(25)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(25)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(25)
	this->img = _Function_1_5::Block();
	HX_STACK_LINE(23)
	this->p2JoyNum = (int)-1;
	HX_STACK_LINE(22)
	this->p2Joy = false;
	HX_STACK_LINE(20)
	this->p1JoyNum = (int)-1;
	HX_STACK_LINE(19)
	this->p1Joy = false;
	HX_STACK_LINE(17)
	this->p2 = false;
	HX_STACK_LINE(16)
	this->p1 = false;
	HX_STACK_LINE(14)
	this->ball = ::Ball_obj::__new();
	HX_STACK_LINE(13)
	this->b = ::Bar_obj::__new();
	HX_STACK_LINE(35)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(37)
	this->updateModeState();
	HX_STACK_LINE(38)
	this->updateGraphiclist();
	HX_STACK_LINE(40)
	::String en = HX_CSTRING(".ogg");		HX_STACK_VAR(en,"en");
	HX_STACK_LINE(45)
	::com::haxepunk::Sfx _g = ::com::haxepunk::Sfx_obj::__new((HX_CSTRING("audio/StartGame") + en),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	this->sfx = _g;
	HX_STACK_LINE(47)
	this->set_name(HX_CSTRING("splash"));
}
;
	return null();
}

//Spawner_obj::~Spawner_obj() { }

Dynamic Spawner_obj::__CreateEmpty() { return  new Spawner_obj; }
hx::ObjectPtr< Spawner_obj > Spawner_obj::__new()
{  hx::ObjectPtr< Spawner_obj > result = new Spawner_obj();
	result->__construct();
	return result;}

Dynamic Spawner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spawner_obj > result = new Spawner_obj();
	result->__construct();
	return result;}

Void Spawner_obj::added( ){
{
		HX_STACK_FRAME("Spawner","added",0xd1ec771a,"Spawner.added","Spawner.hx",52,0x10921c76)
		HX_STACK_THIS(this)
	}
return null();
}


Void Spawner_obj::update( ){
{
		HX_STACK_FRAME("Spawner","update",0xc4eaf26f,"Spawner.update","Spawner.hx",57,0x10921c76)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->checkKeyPress();
		HX_STACK_LINE(59)
		this->checkJoyPress();
		HX_STACK_LINE(62)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)13);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		if (((  ((!(((  ((!(::com::haxepunk::utils::Input_obj::pressed(_g)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(this->p1JoyNum)->pressed((int)3)) : bool(true) ))))) ? bool(::com::haxepunk::utils::Input_obj::joystick(this->p1JoyNum)->pressed((int)8)) : bool(true) ))){
			HX_STACK_LINE(64)
			this->gameInit();
		}
	}
return null();
}


Void Spawner_obj::updateModeState( ){
{
		HX_STACK_FRAME("Spawner","updateModeState",0x0a93933f,"Spawner.updateModeState","Spawner.hx",70,0x10921c76)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->modeImg->set_alpha((int)1);
		HX_STACK_LINE(73)
		if (((bool(this->p1) && bool(this->p2)))){
			HX_STACK_LINE(73)
			::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static ::com::haxepunk::ds::Either Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",73,0x10921c76)
					{
						HX_STACK_LINE(73)
						::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
						struct _Function_3_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",73,0x10921c76)
								{
									HX_STACK_LINE(73)
									::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
										HX_STACK_LINE(73)
										if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ModeMultiplayer.png")))){
											HX_STACK_LINE(73)
											::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ModeMultiplayer.png"));		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(73)
											data1 = _g;
										}
										else{
											HX_STACK_LINE(73)
											::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeMultiplayer.png"));		HX_STACK_VAR(bitmap,"bitmap");
											HX_STACK_LINE(73)
											if (((bitmap != null()))){
												HX_STACK_LINE(73)
												::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ModeMultiplayer.png"),null());		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(73)
												data1 = _g1;
											}
										}
										HX_STACK_LINE(73)
										data = data1;
									}
									HX_STACK_LINE(73)
									return data;
								}
								return null();
							}
						};
						HX_STACK_LINE(73)
						_g2 = _Function_3_1::Block();
						HX_STACK_LINE(73)
						::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(73)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(73)
						return e;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::com::haxepunk::ds::Either Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",73,0x10921c76)
					{
						HX_STACK_LINE(73)
						::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeMultiplayer.png"));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(73)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(73)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(73)
			_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
			HX_STACK_LINE(73)
			::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(73)
			this->modeImg = _g6;
		}
		else{
			HX_STACK_LINE(75)
			if ((this->p1)){
				HX_STACK_LINE(75)
				::com::haxepunk::ds::Either _g12;		HX_STACK_VAR(_g12,"_g12");
				struct _Function_3_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",75,0x10921c76)
						{
							HX_STACK_LINE(75)
							::com::haxepunk::graphics::atlas::AtlasData _g9;		HX_STACK_VAR(_g9,"_g9");
							struct _Function_4_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",75,0x10921c76)
									{
										HX_STACK_LINE(75)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(75)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ModeSingleplayerP1.png")))){
												HX_STACK_LINE(75)
												::com::haxepunk::graphics::atlas::AtlasData _g7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ModeSingleplayerP1.png"));		HX_STACK_VAR(_g7,"_g7");
												HX_STACK_LINE(75)
												data1 = _g7;
											}
											else{
												HX_STACK_LINE(75)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeSingleplayerP1.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(75)
												if (((bitmap != null()))){
													HX_STACK_LINE(75)
													::com::haxepunk::graphics::atlas::AtlasData _g8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ModeSingleplayerP1.png"),null());		HX_STACK_VAR(_g8,"_g8");
													HX_STACK_LINE(75)
													data1 = _g8;
												}
											}
											HX_STACK_LINE(75)
											data = data1;
										}
										HX_STACK_LINE(75)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(75)
							_g9 = _Function_4_1::Block();
							HX_STACK_LINE(75)
							::com::haxepunk::graphics::atlas::AtlasRegion _g10 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g9);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(75)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g10);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(75)
							return e;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",75,0x10921c76)
						{
							HX_STACK_LINE(75)
							::openfl::_v2::display::BitmapData _g11 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeSingleplayerP1.png"));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(75)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g11);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(75)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(75)
				_g12 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_3_1::Block()) : ::com::haxepunk::ds::Either(_Function_3_2::Block()) );
				HX_STACK_LINE(75)
				::com::haxepunk::graphics::Image _g13 = ::com::haxepunk::graphics::Image_obj::__new(_g12,null());		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(75)
				this->modeImg = _g13;
			}
			else{
				HX_STACK_LINE(77)
				if ((this->p2)){
					HX_STACK_LINE(77)
					::com::haxepunk::ds::Either _g19;		HX_STACK_VAR(_g19,"_g19");
					struct _Function_4_1{
						inline static ::com::haxepunk::ds::Either Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",77,0x10921c76)
							{
								HX_STACK_LINE(77)
								::com::haxepunk::graphics::atlas::AtlasData _g16;		HX_STACK_VAR(_g16,"_g16");
								struct _Function_5_1{
									inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",77,0x10921c76)
										{
											HX_STACK_LINE(77)
											::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(77)
											{
												HX_STACK_LINE(77)
												::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
												HX_STACK_LINE(77)
												if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/ModeSingleplayerP2.png")))){
													HX_STACK_LINE(77)
													::com::haxepunk::graphics::atlas::AtlasData _g14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/ModeSingleplayerP2.png"));		HX_STACK_VAR(_g14,"_g14");
													HX_STACK_LINE(77)
													data1 = _g14;
												}
												else{
													HX_STACK_LINE(77)
													::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeSingleplayerP2.png"));		HX_STACK_VAR(bitmap,"bitmap");
													HX_STACK_LINE(77)
													if (((bitmap != null()))){
														HX_STACK_LINE(77)
														::com::haxepunk::graphics::atlas::AtlasData _g15 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/ModeSingleplayerP2.png"),null());		HX_STACK_VAR(_g15,"_g15");
														HX_STACK_LINE(77)
														data1 = _g15;
													}
												}
												HX_STACK_LINE(77)
												data = data1;
											}
											HX_STACK_LINE(77)
											return data;
										}
										return null();
									}
								};
								HX_STACK_LINE(77)
								_g16 = _Function_5_1::Block();
								HX_STACK_LINE(77)
								::com::haxepunk::graphics::atlas::AtlasRegion _g17 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g16);		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(77)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g17);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(77)
								return e;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::com::haxepunk::ds::Either Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",77,0x10921c76)
							{
								HX_STACK_LINE(77)
								::openfl::_v2::display::BitmapData _g18 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/ModeSingleplayerP2.png"));		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(77)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g18);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(77)
								return e;
							}
							return null();
						}
					};
					HX_STACK_LINE(77)
					_g19 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_4_1::Block()) : ::com::haxepunk::ds::Either(_Function_4_2::Block()) );
					HX_STACK_LINE(77)
					::com::haxepunk::graphics::Image _g20 = ::com::haxepunk::graphics::Image_obj::__new(_g19,null());		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(77)
					this->modeImg = _g20;
				}
				else{
					HX_STACK_LINE(79)
					this->modeImg->set_alpha((int)0);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spawner_obj,updateModeState,(void))

Void Spawner_obj::updateGraphiclist( ){
{
		HX_STACK_FRAME("Spawner","updateGraphiclist",0xe1ea58d7,"Spawner.updateGraphiclist","Spawner.hx",83,0x10921c76)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::com::haxepunk::graphics::Graphiclist _g = ::com::haxepunk::graphics::Graphiclist_obj::__new(Array_obj< ::Dynamic >::__new().Add(this->modeImg).Add(this->p1CtrlImg).Add(this->p2CtrlImg).Add(this->img));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->set_graphic(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spawner_obj,updateGraphiclist,(void))

Void Spawner_obj::checkKeyPress( ){
{
		HX_STACK_FRAME("Spawner","checkKeyPress",0x8045e2a6,"Spawner.checkKeyPress","Spawner.hx",88,0x10921c76)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)88);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g))){
			HX_STACK_LINE(91)
			if ((this->p1Joy)){
				HX_STACK_LINE(93)
				this->p1Joy = false;
				HX_STACK_LINE(94)
				this->p1JoyNum = (int)-1;
				HX_STACK_LINE(95)
				this->p1 = true;
				HX_STACK_LINE(97)
				::com::haxepunk::ds::Either _g6;		HX_STACK_VAR(_g6,"_g6");
				struct _Function_3_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",97,0x10921c76)
						{
							HX_STACK_LINE(97)
							::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
							struct _Function_4_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",97,0x10921c76)
									{
										HX_STACK_LINE(97)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(97)
										{
											HX_STACK_LINE(97)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(97)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P1_Key_Ctrl.png")))){
												HX_STACK_LINE(97)
												::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(97)
												data1 = _g1;
											}
											else{
												HX_STACK_LINE(97)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(97)
												if (((bitmap != null()))){
													HX_STACK_LINE(97)
													::com::haxepunk::graphics::atlas::AtlasData _g2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P1_Key_Ctrl.png"),null());		HX_STACK_VAR(_g2,"_g2");
													HX_STACK_LINE(97)
													data1 = _g2;
												}
											}
											HX_STACK_LINE(97)
											data = data1;
										}
										HX_STACK_LINE(97)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(97)
							_g3 = _Function_4_1::Block();
							HX_STACK_LINE(97)
							::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(97)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(97)
							return e;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",97,0x10921c76)
						{
							HX_STACK_LINE(97)
							::openfl::_v2::display::BitmapData _g5 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(97)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g5);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(97)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(97)
				_g6 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_3_1::Block()) : ::com::haxepunk::ds::Either(_Function_3_2::Block()) );
				HX_STACK_LINE(97)
				::com::haxepunk::graphics::Image _g7 = ::com::haxepunk::graphics::Image_obj::__new(_g6,null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(97)
				this->p1CtrlImg = _g7;
			}
			else{
				HX_STACK_LINE(99)
				if ((!(this->p1))){
					HX_STACK_LINE(101)
					this->p1Joy = false;
					HX_STACK_LINE(102)
					this->p1JoyNum = (int)-1;
					HX_STACK_LINE(103)
					this->p1 = true;
					HX_STACK_LINE(105)
					::com::haxepunk::ds::Either _g13;		HX_STACK_VAR(_g13,"_g13");
					struct _Function_4_1{
						inline static ::com::haxepunk::ds::Either Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",105,0x10921c76)
							{
								HX_STACK_LINE(105)
								::com::haxepunk::graphics::atlas::AtlasData _g10;		HX_STACK_VAR(_g10,"_g10");
								struct _Function_5_1{
									inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",105,0x10921c76)
										{
											HX_STACK_LINE(105)
											::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(105)
											{
												HX_STACK_LINE(105)
												::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
												HX_STACK_LINE(105)
												if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P1_Key_Ctrl.png")))){
													HX_STACK_LINE(105)
													::com::haxepunk::graphics::atlas::AtlasData _g8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(_g8,"_g8");
													HX_STACK_LINE(105)
													data1 = _g8;
												}
												else{
													HX_STACK_LINE(105)
													::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
													HX_STACK_LINE(105)
													if (((bitmap != null()))){
														HX_STACK_LINE(105)
														::com::haxepunk::graphics::atlas::AtlasData _g9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P1_Key_Ctrl.png"),null());		HX_STACK_VAR(_g9,"_g9");
														HX_STACK_LINE(105)
														data1 = _g9;
													}
												}
												HX_STACK_LINE(105)
												data = data1;
											}
											HX_STACK_LINE(105)
											return data;
										}
										return null();
									}
								};
								HX_STACK_LINE(105)
								_g10 = _Function_5_1::Block();
								HX_STACK_LINE(105)
								::com::haxepunk::graphics::atlas::AtlasRegion _g11 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g10);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(105)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g11);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(105)
								return e;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::com::haxepunk::ds::Either Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",105,0x10921c76)
							{
								HX_STACK_LINE(105)
								::openfl::_v2::display::BitmapData _g12 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Key_Ctrl.png"));		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(105)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g12);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(105)
								return e;
							}
							return null();
						}
					};
					HX_STACK_LINE(105)
					_g13 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_4_1::Block()) : ::com::haxepunk::ds::Either(_Function_4_2::Block()) );
					HX_STACK_LINE(105)
					::com::haxepunk::graphics::Image _g14 = ::com::haxepunk::graphics::Image_obj::__new(_g13,null());		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(105)
					this->p1CtrlImg = _g14;
				}
				else{
					HX_STACK_LINE(107)
					this->p1 = false;
				}
			}
			HX_STACK_LINE(109)
			this->updateModeState();
			HX_STACK_LINE(110)
			this->updateGraphiclist();
		}
		else{
			HX_STACK_LINE(112)
			::com::haxepunk::ds::Either _g15 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)75);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(112)
			if ((::com::haxepunk::utils::Input_obj::pressed(_g15))){
				HX_STACK_LINE(114)
				if ((this->p2Joy)){
					HX_STACK_LINE(116)
					this->p2Joy = false;
					HX_STACK_LINE(117)
					this->p2JoyNum = (int)-1;
					HX_STACK_LINE(118)
					this->p2 = true;
					HX_STACK_LINE(120)
					::com::haxepunk::ds::Either _g21;		HX_STACK_VAR(_g21,"_g21");
					struct _Function_4_1{
						inline static ::com::haxepunk::ds::Either Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",120,0x10921c76)
							{
								HX_STACK_LINE(120)
								::com::haxepunk::graphics::atlas::AtlasData _g18;		HX_STACK_VAR(_g18,"_g18");
								struct _Function_5_1{
									inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",120,0x10921c76)
										{
											HX_STACK_LINE(120)
											::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(120)
											{
												HX_STACK_LINE(120)
												::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
												HX_STACK_LINE(120)
												if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P2_Key_Ctrl.png")))){
													HX_STACK_LINE(120)
													::com::haxepunk::graphics::atlas::AtlasData _g16 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(_g16,"_g16");
													HX_STACK_LINE(120)
													data1 = _g16;
												}
												else{
													HX_STACK_LINE(120)
													::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
													HX_STACK_LINE(120)
													if (((bitmap != null()))){
														HX_STACK_LINE(120)
														::com::haxepunk::graphics::atlas::AtlasData _g17 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P2_Key_Ctrl.png"),null());		HX_STACK_VAR(_g17,"_g17");
														HX_STACK_LINE(120)
														data1 = _g17;
													}
												}
												HX_STACK_LINE(120)
												data = data1;
											}
											HX_STACK_LINE(120)
											return data;
										}
										return null();
									}
								};
								HX_STACK_LINE(120)
								_g18 = _Function_5_1::Block();
								HX_STACK_LINE(120)
								::com::haxepunk::graphics::atlas::AtlasRegion _g19 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g18);		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(120)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g19);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(120)
								return e;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::com::haxepunk::ds::Either Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",120,0x10921c76)
							{
								HX_STACK_LINE(120)
								::openfl::_v2::display::BitmapData _g20 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(120)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g20);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(120)
								return e;
							}
							return null();
						}
					};
					HX_STACK_LINE(120)
					_g21 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_4_1::Block()) : ::com::haxepunk::ds::Either(_Function_4_2::Block()) );
					HX_STACK_LINE(120)
					::com::haxepunk::graphics::Image _g22 = ::com::haxepunk::graphics::Image_obj::__new(_g21,null());		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(120)
					this->p2CtrlImg = _g22;
				}
				else{
					HX_STACK_LINE(122)
					if ((!(this->p2))){
						HX_STACK_LINE(124)
						this->p2Joy = false;
						HX_STACK_LINE(125)
						this->p2JoyNum = (int)-1;
						HX_STACK_LINE(126)
						this->p2 = true;
						HX_STACK_LINE(128)
						::com::haxepunk::ds::Either _g28;		HX_STACK_VAR(_g28,"_g28");
						struct _Function_5_1{
							inline static ::com::haxepunk::ds::Either Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",128,0x10921c76)
								{
									HX_STACK_LINE(128)
									::com::haxepunk::graphics::atlas::AtlasData _g25;		HX_STACK_VAR(_g25,"_g25");
									struct _Function_6_1{
										inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",128,0x10921c76)
											{
												HX_STACK_LINE(128)
												::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
												HX_STACK_LINE(128)
												{
													HX_STACK_LINE(128)
													::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
													HX_STACK_LINE(128)
													if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P2_Key_Ctrl.png")))){
														HX_STACK_LINE(128)
														::com::haxepunk::graphics::atlas::AtlasData _g23 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(_g23,"_g23");
														HX_STACK_LINE(128)
														data1 = _g23;
													}
													else{
														HX_STACK_LINE(128)
														::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
														HX_STACK_LINE(128)
														if (((bitmap != null()))){
															HX_STACK_LINE(128)
															::com::haxepunk::graphics::atlas::AtlasData _g24 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P2_Key_Ctrl.png"),null());		HX_STACK_VAR(_g24,"_g24");
															HX_STACK_LINE(128)
															data1 = _g24;
														}
													}
													HX_STACK_LINE(128)
													data = data1;
												}
												HX_STACK_LINE(128)
												return data;
											}
											return null();
										}
									};
									HX_STACK_LINE(128)
									_g25 = _Function_6_1::Block();
									HX_STACK_LINE(128)
									::com::haxepunk::graphics::atlas::AtlasRegion _g26 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g25);		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(128)
									::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g26);		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(128)
									return e;
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static ::com::haxepunk::ds::Either Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",128,0x10921c76)
								{
									HX_STACK_LINE(128)
									::openfl::_v2::display::BitmapData _g27 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Key_Ctrl.png"));		HX_STACK_VAR(_g27,"_g27");
									HX_STACK_LINE(128)
									::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g27);		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(128)
									return e;
								}
								return null();
							}
						};
						HX_STACK_LINE(128)
						_g28 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_5_1::Block()) : ::com::haxepunk::ds::Either(_Function_5_2::Block()) );
						HX_STACK_LINE(128)
						::com::haxepunk::graphics::Image _g29 = ::com::haxepunk::graphics::Image_obj::__new(_g28,null());		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(128)
						this->p2CtrlImg = _g29;
					}
					else{
						HX_STACK_LINE(130)
						this->p2 = false;
					}
				}
				HX_STACK_LINE(132)
				this->updateModeState();
				HX_STACK_LINE(133)
				this->updateGraphiclist();
			}
		}
		HX_STACK_LINE(136)
		if ((this->p1)){
			HX_STACK_LINE(136)
			this->p1CtrlImg->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(137)
			this->p1CtrlImg->set_alpha((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spawner_obj,checkKeyPress,(void))

Void Spawner_obj::checkJoyPress( ){
{
		HX_STACK_FRAME("Spawner","checkJoyPress",0xe6ea1411,"Spawner.checkJoyPress","Spawner.hx",142,0x10921c76)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		int _g = ::com::haxepunk::utils::Input_obj::get_joysticks();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		if (((_g > (int)0))){
			HX_STACK_LINE(145)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(145)
			int _g2 = ::com::haxepunk::utils::Input_obj::get_joysticks();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(145)
			while((true)){
				HX_STACK_LINE(145)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(145)
					break;
				}
				HX_STACK_LINE(145)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(147)
				if (((  ((!(::com::haxepunk::utils::Input_obj::joystick(i)->pressed((int)14)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(i)->pressed((int)0)) : bool(true) ))){
					HX_STACK_LINE(149)
					if (((bool(this->p1) && bool((i == this->p1JoyNum))))){
						HX_STACK_LINE(151)
						this->p1Joy = false;
						HX_STACK_LINE(152)
						this->p1JoyNum = (int)-1;
						HX_STACK_LINE(153)
						this->p1 = false;
					}
					else{
						HX_STACK_LINE(155)
						if (((bool(this->p2) && bool((i == this->p2JoyNum))))){
							HX_STACK_LINE(157)
							this->p2Joy = false;
							HX_STACK_LINE(158)
							this->p2JoyNum = (int)-1;
							HX_STACK_LINE(159)
							this->p2 = false;
						}
						else{
							HX_STACK_LINE(161)
							if (((bool(!(this->p1Joy)) && bool((i != this->p2JoyNum))))){
								HX_STACK_LINE(164)
								this->p1Joy = true;
								HX_STACK_LINE(165)
								this->p1JoyNum = i;
								HX_STACK_LINE(166)
								this->p1 = true;
								HX_STACK_LINE(168)
								::com::haxepunk::ds::Either _g6;		HX_STACK_VAR(_g6,"_g6");
								struct _Function_7_1{
									inline static ::com::haxepunk::ds::Either Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",168,0x10921c76)
										{
											HX_STACK_LINE(168)
											::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
											struct _Function_8_1{
												inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",168,0x10921c76)
													{
														HX_STACK_LINE(168)
														::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
														HX_STACK_LINE(168)
														{
															HX_STACK_LINE(168)
															::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
															HX_STACK_LINE(168)
															if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P1_Joy_Ctrl.png")))){
																HX_STACK_LINE(168)
																::com::haxepunk::graphics::atlas::AtlasData _g11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P1_Joy_Ctrl.png"));		HX_STACK_VAR(_g11,"_g11");
																HX_STACK_LINE(168)
																data1 = _g11;
															}
															else{
																HX_STACK_LINE(168)
																::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Joy_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
																HX_STACK_LINE(168)
																if (((bitmap != null()))){
																	HX_STACK_LINE(168)
																	::com::haxepunk::graphics::atlas::AtlasData _g21 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P1_Joy_Ctrl.png"),null());		HX_STACK_VAR(_g21,"_g21");
																	HX_STACK_LINE(168)
																	data1 = _g21;
																}
															}
															HX_STACK_LINE(168)
															data = data1;
														}
														HX_STACK_LINE(168)
														return data;
													}
													return null();
												}
											};
											HX_STACK_LINE(168)
											_g3 = _Function_8_1::Block();
											HX_STACK_LINE(168)
											::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(168)
											::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(168)
											return e;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static ::com::haxepunk::ds::Either Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",168,0x10921c76)
										{
											HX_STACK_LINE(168)
											::openfl::_v2::display::BitmapData _g5 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P1_Joy_Ctrl.png"));		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(168)
											::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g5);		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(168)
											return e;
										}
										return null();
									}
								};
								HX_STACK_LINE(168)
								_g6 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_7_1::Block()) : ::com::haxepunk::ds::Either(_Function_7_2::Block()) );
								HX_STACK_LINE(168)
								::com::haxepunk::graphics::Image _g7 = ::com::haxepunk::graphics::Image_obj::__new(_g6,null());		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(168)
								this->p1CtrlImg = _g7;
							}
							else{
								HX_STACK_LINE(170)
								if (((bool(!(this->p2Joy)) && bool((i != this->p1JoyNum))))){
									HX_STACK_LINE(173)
									this->p2Joy = true;
									HX_STACK_LINE(174)
									this->p2JoyNum = i;
									HX_STACK_LINE(175)
									this->p2 = true;
									HX_STACK_LINE(177)
									::com::haxepunk::ds::Either _g13;		HX_STACK_VAR(_g13,"_g13");
									struct _Function_8_1{
										inline static ::com::haxepunk::ds::Either Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",177,0x10921c76)
											{
												HX_STACK_LINE(177)
												::com::haxepunk::graphics::atlas::AtlasData _g10;		HX_STACK_VAR(_g10,"_g10");
												struct _Function_9_1{
													inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",177,0x10921c76)
														{
															HX_STACK_LINE(177)
															::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
															HX_STACK_LINE(177)
															{
																HX_STACK_LINE(177)
																::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
																HX_STACK_LINE(177)
																if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/P2_Joy_Ctrl.png")))){
																	HX_STACK_LINE(177)
																	::com::haxepunk::graphics::atlas::AtlasData _g8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/P2_Joy_Ctrl.png"));		HX_STACK_VAR(_g8,"_g8");
																	HX_STACK_LINE(177)
																	data1 = _g8;
																}
																else{
																	HX_STACK_LINE(177)
																	::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Joy_Ctrl.png"));		HX_STACK_VAR(bitmap,"bitmap");
																	HX_STACK_LINE(177)
																	if (((bitmap != null()))){
																		HX_STACK_LINE(177)
																		::com::haxepunk::graphics::atlas::AtlasData _g9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/P2_Joy_Ctrl.png"),null());		HX_STACK_VAR(_g9,"_g9");
																		HX_STACK_LINE(177)
																		data1 = _g9;
																	}
																}
																HX_STACK_LINE(177)
																data = data1;
															}
															HX_STACK_LINE(177)
															return data;
														}
														return null();
													}
												};
												HX_STACK_LINE(177)
												_g10 = _Function_9_1::Block();
												HX_STACK_LINE(177)
												::com::haxepunk::graphics::atlas::AtlasRegion _g11 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g10);		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(177)
												::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g11);		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(177)
												return e;
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static ::com::haxepunk::ds::Either Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Spawner.hx",177,0x10921c76)
											{
												HX_STACK_LINE(177)
												::openfl::_v2::display::BitmapData _g12 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/P2_Joy_Ctrl.png"));		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(177)
												::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g12);		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(177)
												return e;
											}
											return null();
										}
									};
									HX_STACK_LINE(177)
									_g13 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_8_1::Block()) : ::com::haxepunk::ds::Either(_Function_8_2::Block()) );
									HX_STACK_LINE(177)
									::com::haxepunk::graphics::Image _g14 = ::com::haxepunk::graphics::Image_obj::__new(_g13,null());		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(177)
									this->p2CtrlImg = _g14;
								}
							}
						}
					}
					HX_STACK_LINE(180)
					this->updateModeState();
					HX_STACK_LINE(181)
					this->updateGraphiclist();
				}
			}
		}
		HX_STACK_LINE(186)
		if ((this->p2)){
			HX_STACK_LINE(186)
			this->p2CtrlImg->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(187)
			this->p2CtrlImg->set_alpha((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spawner_obj,checkJoyPress,(void))

Void Spawner_obj::gameInit( ){
{
		HX_STACK_FRAME("Spawner","gameInit",0x45470e08,"Spawner.gameInit","Spawner.hx",193,0x10921c76)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		if (((bool(!(this->p2)) && bool(this->p1)))){
			HX_STACK_LINE(195)
			::Pauser _g = ::Pauser_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			this->_scene->add(_g);
			HX_STACK_LINE(197)
			this->_scene->add(this->b);
			HX_STACK_LINE(199)
			::Player _g1 = ::Player_obj::__new((int)1,false,this->b,(int)900,(int)700,this->p1Joy,this->p1JoyNum);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			this->_scene->add(_g1);
			HX_STACK_LINE(200)
			::Player _g2 = ::Player_obj::__new((int)1,true,this->b,(int)100,(int)700,this->p1Joy,this->p1JoyNum);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(200)
			this->_scene->add(_g2);
			HX_STACK_LINE(202)
			::com::haxepunk::Entity _g3 = this->_scene->getInstance(HX_CSTRING("ball"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(202)
			if (((_g3 == null()))){
				HX_STACK_LINE(202)
				this->_scene->add(this->ball);
			}
			HX_STACK_LINE(203)
			::com::haxepunk::Entity _g4 = this->_scene->getInstance(HX_CSTRING("splash"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(203)
			if (((_g4 != null()))){
				HX_STACK_LINE(203)
				::com::haxepunk::Entity _g5 = this->_scene->getInstance(HX_CSTRING("splash"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(203)
				this->_scene->remove(_g5);
			}
			HX_STACK_LINE(205)
			::Dog _g6 = ::Dog_obj::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(205)
			this->_scene->add(_g6);
			HX_STACK_LINE(207)
			this->sfx->play(0.7,(int)0,false);
		}
		else{
			HX_STACK_LINE(210)
			if (((bool(this->p2) && bool(!(this->p1))))){
				HX_STACK_LINE(212)
				::Pauser _g7 = ::Pauser_obj::__new();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(212)
				this->_scene->add(_g7);
				HX_STACK_LINE(214)
				this->_scene->add(this->b);
				HX_STACK_LINE(216)
				::Player _g8 = ::Player_obj::__new((int)2,false,this->b,(int)900,(int)700,this->p2Joy,this->p2JoyNum);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(216)
				this->_scene->add(_g8);
				HX_STACK_LINE(217)
				::Player _g9 = ::Player_obj::__new((int)2,true,this->b,(int)100,(int)700,this->p2Joy,this->p2JoyNum);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(217)
				this->_scene->add(_g9);
				HX_STACK_LINE(219)
				::com::haxepunk::Entity _g10 = this->_scene->getInstance(HX_CSTRING("ball"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(219)
				if (((_g10 == null()))){
					HX_STACK_LINE(219)
					this->_scene->add(this->ball);
				}
				HX_STACK_LINE(220)
				::com::haxepunk::Entity _g11 = this->_scene->getInstance(HX_CSTRING("splash"));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(220)
				if (((_g11 != null()))){
					HX_STACK_LINE(220)
					::com::haxepunk::Entity _g12 = this->_scene->getInstance(HX_CSTRING("splash"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(220)
					this->_scene->remove(_g12);
				}
				HX_STACK_LINE(222)
				::Dog _g13 = ::Dog_obj::__new();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(222)
				this->_scene->add(_g13);
				HX_STACK_LINE(224)
				this->sfx->play(0.7,(int)0,false);
			}
			else{
				HX_STACK_LINE(226)
				if (((bool(this->p2) && bool(this->p1)))){
					HX_STACK_LINE(228)
					::Pauser _g14 = ::Pauser_obj::__new();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(228)
					this->_scene->add(_g14);
					HX_STACK_LINE(230)
					this->_scene->add(this->b);
					HX_STACK_LINE(232)
					::Player _g15 = ::Player_obj::__new((int)2,false,this->b,(int)900,(int)100,this->p1Joy,this->p1JoyNum);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(232)
					this->_scene->add(_g15);
					HX_STACK_LINE(233)
					::Player _g16 = ::Player_obj::__new((int)2,true,this->b,(int)100,(int)100,this->p1Joy,this->p1JoyNum);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(233)
					this->_scene->add(_g16);
					HX_STACK_LINE(235)
					::Player _g17 = ::Player_obj::__new((int)1,false,this->b,(int)900,(int)700,this->p2Joy,this->p2JoyNum);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(235)
					this->_scene->add(_g17);
					HX_STACK_LINE(236)
					::Player _g18 = ::Player_obj::__new((int)1,true,this->b,(int)100,(int)700,this->p2Joy,this->p2JoyNum);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(236)
					this->_scene->add(_g18);
					HX_STACK_LINE(238)
					::com::haxepunk::Entity _g19 = this->_scene->getInstance(HX_CSTRING("ball"));		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(238)
					if (((_g19 == null()))){
						HX_STACK_LINE(238)
						this->_scene->add(this->ball);
					}
					HX_STACK_LINE(239)
					::com::haxepunk::Entity _g20 = this->_scene->getInstance(HX_CSTRING("splash"));		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(239)
					if (((_g20 != null()))){
						HX_STACK_LINE(239)
						::com::haxepunk::Entity _g21 = this->_scene->getInstance(HX_CSTRING("splash"));		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(239)
						this->_scene->remove(_g21);
					}
					HX_STACK_LINE(241)
					this->sfx->play(0.7,(int)0,false);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spawner_obj,gameInit,(void))


Spawner_obj::Spawner_obj()
{
}

void Spawner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spawner);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(p2,"p2");
	HX_MARK_MEMBER_NAME(p1Joy,"p1Joy");
	HX_MARK_MEMBER_NAME(p1JoyNum,"p1JoyNum");
	HX_MARK_MEMBER_NAME(p2Joy,"p2Joy");
	HX_MARK_MEMBER_NAME(p2JoyNum,"p2JoyNum");
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(modeImg,"modeImg");
	HX_MARK_MEMBER_NAME(flashTip,"flashTip");
	HX_MARK_MEMBER_NAME(p1CtrlImg,"p1CtrlImg");
	HX_MARK_MEMBER_NAME(p2CtrlImg,"p2CtrlImg");
	HX_MARK_MEMBER_NAME(sfx,"sfx");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spawner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(p2,"p2");
	HX_VISIT_MEMBER_NAME(p1Joy,"p1Joy");
	HX_VISIT_MEMBER_NAME(p1JoyNum,"p1JoyNum");
	HX_VISIT_MEMBER_NAME(p2Joy,"p2Joy");
	HX_VISIT_MEMBER_NAME(p2JoyNum,"p2JoyNum");
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(modeImg,"modeImg");
	HX_VISIT_MEMBER_NAME(flashTip,"flashTip");
	HX_VISIT_MEMBER_NAME(p1CtrlImg,"p1CtrlImg");
	HX_VISIT_MEMBER_NAME(p2CtrlImg,"p2CtrlImg");
	HX_VISIT_MEMBER_NAME(sfx,"sfx");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Spawner_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		if (HX_FIELD_EQ(inName,"p2") ) { return p2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return img; }
		if (HX_FIELD_EQ(inName,"sfx") ) { return sfx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"p1Joy") ) { return p1Joy; }
		if (HX_FIELD_EQ(inName,"p2Joy") ) { return p2Joy; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modeImg") ) { return modeImg; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"p1JoyNum") ) { return p1JoyNum; }
		if (HX_FIELD_EQ(inName,"p2JoyNum") ) { return p2JoyNum; }
		if (HX_FIELD_EQ(inName,"flashTip") ) { return flashTip; }
		if (HX_FIELD_EQ(inName,"gameInit") ) { return gameInit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"p1CtrlImg") ) { return p1CtrlImg; }
		if (HX_FIELD_EQ(inName,"p2CtrlImg") ) { return p2CtrlImg; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkKeyPress") ) { return checkKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"checkJoyPress") ) { return checkJoyPress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateModeState") ) { return updateModeState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateGraphiclist") ) { return updateGraphiclist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spawner_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Bar >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2") ) { p2=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sfx") ) { sfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"p1Joy") ) { p1Joy=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2Joy") ) { p2Joy=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modeImg") ) { modeImg=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"p1JoyNum") ) { p1JoyNum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2JoyNum") ) { p2JoyNum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashTip") ) { flashTip=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"p1CtrlImg") ) { p1CtrlImg=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2CtrlImg") ) { p2CtrlImg=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spawner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("p1"));
	outFields->push(HX_CSTRING("p2"));
	outFields->push(HX_CSTRING("p1Joy"));
	outFields->push(HX_CSTRING("p1JoyNum"));
	outFields->push(HX_CSTRING("p2Joy"));
	outFields->push(HX_CSTRING("p2JoyNum"));
	outFields->push(HX_CSTRING("img"));
	outFields->push(HX_CSTRING("modeImg"));
	outFields->push(HX_CSTRING("flashTip"));
	outFields->push(HX_CSTRING("p1CtrlImg"));
	outFields->push(HX_CSTRING("p2CtrlImg"));
	outFields->push(HX_CSTRING("sfx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Bar*/ ,(int)offsetof(Spawner_obj,b),HX_CSTRING("b")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Spawner_obj,ball),HX_CSTRING("ball")},
	{hx::fsBool,(int)offsetof(Spawner_obj,p1),HX_CSTRING("p1")},
	{hx::fsBool,(int)offsetof(Spawner_obj,p2),HX_CSTRING("p2")},
	{hx::fsBool,(int)offsetof(Spawner_obj,p1Joy),HX_CSTRING("p1Joy")},
	{hx::fsInt,(int)offsetof(Spawner_obj,p1JoyNum),HX_CSTRING("p1JoyNum")},
	{hx::fsBool,(int)offsetof(Spawner_obj,p2Joy),HX_CSTRING("p2Joy")},
	{hx::fsInt,(int)offsetof(Spawner_obj,p2JoyNum),HX_CSTRING("p2JoyNum")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Spawner_obj,img),HX_CSTRING("img")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Spawner_obj,modeImg),HX_CSTRING("modeImg")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Spawner_obj,flashTip),HX_CSTRING("flashTip")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Spawner_obj,p1CtrlImg),HX_CSTRING("p1CtrlImg")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Spawner_obj,p2CtrlImg),HX_CSTRING("p2CtrlImg")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Spawner_obj,sfx),HX_CSTRING("sfx")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("b"),
	HX_CSTRING("ball"),
	HX_CSTRING("p1"),
	HX_CSTRING("p2"),
	HX_CSTRING("p1Joy"),
	HX_CSTRING("p1JoyNum"),
	HX_CSTRING("p2Joy"),
	HX_CSTRING("p2JoyNum"),
	HX_CSTRING("img"),
	HX_CSTRING("modeImg"),
	HX_CSTRING("flashTip"),
	HX_CSTRING("p1CtrlImg"),
	HX_CSTRING("p2CtrlImg"),
	HX_CSTRING("sfx"),
	HX_CSTRING("added"),
	HX_CSTRING("update"),
	HX_CSTRING("updateModeState"),
	HX_CSTRING("updateGraphiclist"),
	HX_CSTRING("checkKeyPress"),
	HX_CSTRING("checkJoyPress"),
	HX_CSTRING("gameInit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spawner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spawner_obj::__mClass,"__mClass");
};

#endif

Class Spawner_obj::__mClass;

void Spawner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Spawner"), hx::TCanCast< Spawner_obj> ,sStaticFields,sMemberFields,
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

void Spawner_obj::__boot()
{
}

