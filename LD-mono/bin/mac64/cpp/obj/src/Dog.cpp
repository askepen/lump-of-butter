#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Dog
#include <Dog.h>
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

Void Dog_obj::__construct()
{
HX_STACK_FRAME("Dog","new",0xda51f94e,"Dog.new","Dog.hx",5,0x5df729e2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->reachedGoal = false;
	HX_STACK_LINE(11)
	this->speed = (int)5;
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::Spritemap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",7,0x5df729e2)
			{
				HX_STACK_LINE(7)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",7,0x5df729e2)
						{
							HX_STACK_LINE(7)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",7,0x5df729e2)
									{
										HX_STACK_LINE(7)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(7)
										{
											HX_STACK_LINE(7)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(7)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Dog-sheet.png")))){
												HX_STACK_LINE(7)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Dog-sheet.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(7)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(7)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Dog-sheet.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(7)
												if (((bitmap != null()))){
													HX_STACK_LINE(7)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Dog-sheet.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(7)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(7)
											data = data1;
										}
										HX_STACK_LINE(7)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(7)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(7)
							::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(7)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(7)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",7,0x5df729e2)
						{
							HX_STACK_LINE(7)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Dog-sheet.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(7)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(7)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(7)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(7)
				return ::com::haxepunk::graphics::Spritemap_obj::__new(_g5,(int)128,(int)128,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(7)
	this->sprite = _Function_1_1::Block();
	HX_STACK_LINE(16)
	super::__construct((int)400,(int)800,null(),null());
	HX_STACK_LINE(18)
	this->sprite->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)10,true);
	HX_STACK_LINE(19)
	this->sprite->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)10,true);
	HX_STACK_LINE(20)
	this->sprite->play(HX_CSTRING("run"),null(),null());
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		this->width = (int)39;
		HX_STACK_LINE(22)
		this->height = (int)36;
		HX_STACK_LINE(22)
		this->originX = (int)18;
		HX_STACK_LINE(22)
		this->originY = (int)38;
	}
	HX_STACK_LINE(23)
	this->sprite->originX = (int)60;
	HX_STACK_LINE(24)
	this->sprite->originY = (int)108;
	HX_STACK_LINE(25)
	this->set_graphic(this->sprite);
	HX_STACK_LINE(27)
	this->set_type(HX_CSTRING("dog"));
	HX_STACK_LINE(28)
	this->set_name(HX_CSTRING("dog"));
}
;
	return null();
}

//Dog_obj::~Dog_obj() { }

Dynamic Dog_obj::__CreateEmpty() { return  new Dog_obj; }
hx::ObjectPtr< Dog_obj > Dog_obj::__new()
{  hx::ObjectPtr< Dog_obj > result = new Dog_obj();
	result->__construct();
	return result;}

Dynamic Dog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dog_obj > result = new Dog_obj();
	result->__construct();
	return result;}

Void Dog_obj::added( ){
{
		HX_STACK_FRAME("Dog","added",0x10d0952e,"Dog.added","Dog.hx",32,0x5df729e2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->chase();
		HX_STACK_LINE(35)
		this->super::added();
	}
return null();
}


Void Dog_obj::update( ){
{
		HX_STACK_FRAME("Dog","update",0x8da125db,"Dog.update","Dog.hx",39,0x5df729e2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		if (((this->ball != null()))){
			HX_STACK_LINE(40)
			this->chase();
		}
		HX_STACK_LINE(42)
		this->checkBall();
		HX_STACK_LINE(43)
		this->checkPlayer();
		HX_STACK_LINE(44)
		int _g = ::Math_obj::round(-(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->set_layer(_g);
		HX_STACK_LINE(45)
		this->super::update();
	}
return null();
}


Void Dog_obj::chase( ){
{
		HX_STACK_FRAME("Dog","chase",0x3a405e1c,"Dog.chase","Dog.hx",49,0x5df729e2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->p = null();
		HX_STACK_LINE(52)
		Array< ::Dynamic > dasBall = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(dasBall,"dasBall");
		HX_STACK_LINE(53)
		this->_scene->getClass(hx::ClassOf< ::Ball >(),dasBall);
		HX_STACK_LINE(54)
		this->ball = dasBall->__get((int)0).StaticCast< ::Ball >();
		HX_STACK_LINE(56)
		if ((this->ball->beingHeld)){
			HX_STACK_LINE(58)
			this->target = this->ball->lastOwner;
		}
		else{
			HX_STACK_LINE(62)
			this->target = this->ball;
		}
		HX_STACK_LINE(66)
		Float angle;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(66)
		{
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::Dog_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",66,0x5df729e2)
					{
						HX_STACK_LINE(66)
						::com::haxepunk::Entity _this = __this->target;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::Dog_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",66,0x5df729e2)
					{
						HX_STACK_LINE(66)
						::com::haxepunk::Entity _this = __this->target;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(66)
			Float _g = ::Math_obj::atan2((_Function_2_1::Block(this) - ((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ))),(_Function_2_2::Block(this) - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			Float a = (_g * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(66)
			if (((a < (int)0))){
				HX_STACK_LINE(66)
				angle = (a + (int)360);
			}
			else{
				HX_STACK_LINE(66)
				angle = a;
			}
		}
		HX_STACK_LINE(67)
		Float _g1 = ::Math_obj::cos((angle * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		Float _x = (this->speed * _g1);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(68)
		Float _g2 = ::Math_obj::sin((angle * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(68)
		Float _y = (this->speed * _g2);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(79)
		if ((!(this->reachedGoal))){
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				::Dog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(81)
				_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + _x);
			}
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				::Dog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + _y);
			}
		}
		else{
			HX_STACK_LINE(85)
			this->sprite->play(HX_CSTRING("idle"),null(),null());
		}
		HX_STACK_LINE(87)
		if (((bool((_x < (int)0)) && bool((_x != (int)0))))){
			HX_STACK_LINE(87)
			this->sprite->scaleX = (int)-1;
		}
		else{
			HX_STACK_LINE(87)
			this->sprite->scaleX = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Dog_obj,chase,(void))

Void Dog_obj::checkBall( ){
{
		HX_STACK_FRAME("Dog","checkBall",0x04f13a55,"Dog.checkBall","Dog.hx",94,0x5df729e2)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::Dog_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",94,0x5df729e2)
				{
					HX_STACK_LINE(94)
					::com::haxepunk::Entity _g = __this->_scene->getInstance(HX_CSTRING("gameover"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(94)
					return (_g == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		if (((  (((  (((this->ball != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(!(this->ball->beingHeld)) : bool(false) ))){
			HX_STACK_LINE(97)
			::Ball _g1 = this->collideWith(this->ball,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(97)
			if (((_g1 != null()))){
				HX_STACK_LINE(99)
				this->ball->visible = false;
				HX_STACK_LINE(100)
				this->ball->shadow->visible = false;
				HX_STACK_LINE(102)
				::com::haxepunk::Entity _g2 = this->_scene->getInstance(HX_CSTRING("gameover"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(102)
				if (((_g2 != null()))){
					HX_STACK_LINE(102)
					return null();
				}
				else{
					HX_STACK_LINE(103)
					::GameOverText _g3 = ::GameOverText_obj::__new((int)2,(int)0);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(103)
					this->_scene->add(_g3);
				}
			}
		}
		else{
			HX_STACK_LINE(106)
			::Ball _g4 = this->collideWith(this->ball,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(106)
			if (((_g4 != null()))){
				HX_STACK_LINE(108)
				this->reachedGoal = true;
			}
			else{
				HX_STACK_LINE(112)
				this->reachedGoal = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Dog_obj,checkBall,(void))

Void Dog_obj::checkPlayer( ){
{
		HX_STACK_FRAME("Dog","checkPlayer",0xf6a08537,"Dog.checkPlayer","Dog.hx",117,0x5df729e2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->p = this->ball->lastOwner;
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::Dog_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",120,0x5df729e2)
				{
					HX_STACK_LINE(120)
					::com::haxepunk::Entity _g = __this->_scene->getInstance(HX_CSTRING("gameover"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(120)
					return (_g == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(120)
		if (((  (((  (((this->p != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(this->ball->beingHeld) : bool(false) ))){
			HX_STACK_LINE(123)
			::Player _g1 = this->collideWith(this->p,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			if (((_g1 != null()))){
				HX_STACK_LINE(125)
				this->ball->visible = false;
				HX_STACK_LINE(126)
				this->ball->shadow->visible = false;
				HX_STACK_LINE(128)
				::com::haxepunk::Entity _g2 = this->_scene->getInstance(HX_CSTRING("gameover"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(128)
				if (((_g2 != null()))){
					HX_STACK_LINE(128)
					return null();
				}
				else{
					HX_STACK_LINE(129)
					::GameOverText _g3 = ::GameOverText_obj::__new((int)2,(int)0);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(129)
					this->_scene->add(_g3);
				}
			}
		}
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::Dog_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dog.hx",134,0x5df729e2)
				{
					HX_STACK_LINE(134)
					::Player _g4 = __this->collideWith(__this->p,(  ((__this->followCamera)) ? Float((__this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(__this->x) ),(  ((__this->followCamera)) ? Float((__this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(__this->y) ));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(134)
					return (_g4 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(134)
		if (((  (((  (((this->p != null()))) ? bool(_Function_1_2::Block(this)) : bool(false) ))) ? bool(this->ball->beingHeld) : bool(false) ))){
			HX_STACK_LINE(136)
			this->reachedGoal = true;
		}
		else{
			HX_STACK_LINE(140)
			this->reachedGoal = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Dog_obj,checkPlayer,(void))


Dog_obj::Dog_obj()
{
}

void Dog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dog);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(reachedGoal,"reachedGoal");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(reachedGoal,"reachedGoal");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Dog_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		if (HX_FIELD_EQ(inName,"chase") ) { return chase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkBall") ) { return checkBall_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reachedGoal") ) { return reachedGoal; }
		if (HX_FIELD_EQ(inName,"checkPlayer") ) { return checkPlayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Dog_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reachedGoal") ) { reachedGoal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("p"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("reachedGoal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Dog_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Dog_obj,ball),HX_CSTRING("ball")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Dog_obj,p),HX_CSTRING("p")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Dog_obj,target),HX_CSTRING("target")},
	{hx::fsFloat,(int)offsetof(Dog_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(Dog_obj,reachedGoal),HX_CSTRING("reachedGoal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("ball"),
	HX_CSTRING("p"),
	HX_CSTRING("target"),
	HX_CSTRING("speed"),
	HX_CSTRING("reachedGoal"),
	HX_CSTRING("added"),
	HX_CSTRING("update"),
	HX_CSTRING("chase"),
	HX_CSTRING("checkBall"),
	HX_CSTRING("checkPlayer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dog_obj::__mClass,"__mClass");
};

#endif

Class Dog_obj::__mClass;

void Dog_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Dog"), hx::TCanCast< Dog_obj> ,sStaticFields,sMemberFields,
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

void Dog_obj::__boot()
{
}

