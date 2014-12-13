#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Pauser
#include <Pauser.h>
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

Void Pauser_obj::__construct()
{
HX_STACK_FRAME("Pauser","new",0xfb65f3ce,"Pauser.new","Pauser.hx",8,0x06ddff62)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->allEnts = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(12)
	this->paused = false;
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Pauser.hx",11,0x06ddff62)
			{
				HX_STACK_LINE(11)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Pauser.hx",11,0x06ddff62)
						{
							HX_STACK_LINE(11)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Pauser.hx",11,0x06ddff62)
									{
										HX_STACK_LINE(11)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(11)
										{
											HX_STACK_LINE(11)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(11)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Paused.png")))){
												HX_STACK_LINE(11)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Paused.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(11)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(11)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Paused.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(11)
												if (((bitmap != null()))){
													HX_STACK_LINE(11)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Paused.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(11)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(11)
											data = data1;
										}
										HX_STACK_LINE(11)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(11)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(11)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(11)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(11)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Pauser.hx",11,0x06ddff62)
						{
							HX_STACK_LINE(11)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Paused.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(11)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(11)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(11)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(11)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(11)
	this->sprite = _Function_1_1::Block();
	HX_STACK_LINE(18)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(20)
	this->set_graphic(this->sprite);
	HX_STACK_LINE(22)
	this->set_layer((int)-2000);
	HX_STACK_LINE(23)
	this->sprite->set_alpha((int)0);
}
;
	return null();
}

//Pauser_obj::~Pauser_obj() { }

Dynamic Pauser_obj::__CreateEmpty() { return  new Pauser_obj; }
hx::ObjectPtr< Pauser_obj > Pauser_obj::__new()
{  hx::ObjectPtr< Pauser_obj > result = new Pauser_obj();
	result->__construct();
	return result;}

Dynamic Pauser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pauser_obj > result = new Pauser_obj();
	result->__construct();
	return result;}

Void Pauser_obj::update( ){
{
		HX_STACK_FRAME("Pauser","update",0xae60bb5b,"Pauser.update","Pauser.hx",28,0x06ddff62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->allEnts = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(30)
		this->_scene->getAll(this->allEnts);
		HX_STACK_LINE(31)
		this->allEnts->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(33)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)13);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g))){
			HX_STACK_LINE(34)
			if ((this->paused)){
				HX_STACK_LINE(34)
				this->un_pause();
			}
			else{
				HX_STACK_LINE(34)
				this->pause();
			}
		}
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			int _g2 = ::com::haxepunk::utils::Input_obj::get_joysticks();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(36)
			while((true)){
				HX_STACK_LINE(36)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(36)
					break;
				}
				HX_STACK_LINE(36)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(37)
				if (((  ((!(::com::haxepunk::utils::Input_obj::joystick(i)->pressed((int)3)))) ? bool(::com::haxepunk::utils::Input_obj::joystick(i)->pressed((int)8)) : bool(true) ))){
					HX_STACK_LINE(38)
					if ((this->paused)){
						HX_STACK_LINE(38)
						this->un_pause();
					}
					else{
						HX_STACK_LINE(38)
						this->pause();
					}
				}
			}
		}
		HX_STACK_LINE(41)
		this->super::update();
	}
return null();
}


Void Pauser_obj::pause( ){
{
		HX_STACK_FRAME("Pauser","pause",0x3bcc31e4,"Pauser.pause","Pauser.hx",45,0x06ddff62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->paused = true;
		HX_STACK_LINE(48)
		this->sprite->set_alpha((int)1);
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			int _g = this->allEnts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				this->allEnts->__get(i).StaticCast< ::com::haxepunk::Entity >()->active = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pauser_obj,pause,(void))

Void Pauser_obj::un_pause( ){
{
		HX_STACK_FRAME("Pauser","un_pause",0xd816fb22,"Pauser.un_pause","Pauser.hx",57,0x06ddff62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->paused = false;
		HX_STACK_LINE(60)
		this->sprite->set_alpha((int)0);
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			int _g = this->allEnts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(62)
				this->allEnts->__get(i).StaticCast< ::com::haxepunk::Entity >()->active = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pauser_obj,un_pause,(void))


Pauser_obj::Pauser_obj()
{
}

void Pauser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pauser);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(allEnts,"allEnts");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pauser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(allEnts,"allEnts");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Pauser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"allEnts") ) { return allEnts; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"un_pause") ) { return un_pause_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pauser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"allEnts") ) { allEnts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pauser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("allEnts"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Pauser_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsBool,(int)offsetof(Pauser_obj,paused),HX_CSTRING("paused")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Pauser_obj,allEnts),HX_CSTRING("allEnts")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("paused"),
	HX_CSTRING("allEnts"),
	HX_CSTRING("update"),
	HX_CSTRING("pause"),
	HX_CSTRING("un_pause"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pauser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pauser_obj::__mClass,"__mClass");
};

#endif

Class Pauser_obj::__mClass;

void Pauser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Pauser"), hx::TCanCast< Pauser_obj> ,sStaticFields,sMemberFields,
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

void Pauser_obj::__boot()
{
}

