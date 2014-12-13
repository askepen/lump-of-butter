#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_MainScene
#include <MainScene.h>
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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
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

Void MainScene_obj::__construct()
{
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",8,0xb84de26b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->ball = ::Ball_obj::__new();
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//MainScene_obj::~MainScene_obj() { }

Dynamic MainScene_obj::__CreateEmpty() { return  new MainScene_obj; }
hx::ObjectPtr< MainScene_obj > MainScene_obj::__new()
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Dynamic MainScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Void MainScene_obj::begin( ){
{
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",13,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		::com::haxepunk::HXP_obj::screen->set_color((int)15787477);
		HX_STACK_LINE(16)
		::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
		struct _Function_1_1{
			inline static ::com::haxepunk::ds::Either Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MainScene.hx",16,0xb84de26b)
				{
					HX_STACK_LINE(16)
					::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
					struct _Function_2_1{
						inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MainScene.hx",16,0xb84de26b)
							{
								HX_STACK_LINE(16)
								::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(16)
								{
									HX_STACK_LINE(16)
									::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
									HX_STACK_LINE(16)
									if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Background.png")))){
										HX_STACK_LINE(16)
										::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Background.png"));		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(16)
										data1 = _g;
									}
									else{
										HX_STACK_LINE(16)
										::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Background.png"));		HX_STACK_VAR(bitmap,"bitmap");
										HX_STACK_LINE(16)
										if (((bitmap != null()))){
											HX_STACK_LINE(16)
											::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Background.png"),null());		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(16)
											data1 = _g1;
										}
									}
									HX_STACK_LINE(16)
									data = data1;
								}
								HX_STACK_LINE(16)
								return data;
							}
							return null();
						}
					};
					HX_STACK_LINE(16)
					_g2 = _Function_2_1::Block();
					HX_STACK_LINE(16)
					::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(16)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(16)
					return e;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::com::haxepunk::ds::Either Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MainScene.hx",16,0xb84de26b)
				{
					HX_STACK_LINE(16)
					::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Background.png"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(16)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(16)
					return e;
				}
				return null();
			}
		};
		HX_STACK_LINE(16)
		_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
		HX_STACK_LINE(16)
		::com::haxepunk::graphics::Image img = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(img,"img");
		HX_STACK_LINE(17)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new((int)0,(int)0,img,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(18)
		this->add(e);
		HX_STACK_LINE(19)
		::Spawner _g6 = ::Spawner_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(19)
		this->add(_g6);
		HX_STACK_LINE(20)
		this->super::begin();
	}
return null();
}



MainScene_obj::MainScene_obj()
{
}

void MainScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainScene);
	HX_MARK_MEMBER_NAME(ball,"ball");
	::com::haxepunk::Scene_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ball,"ball");
	::com::haxepunk::Scene_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ball"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Ball*/ ,(int)offsetof(MainScene_obj,ball),HX_CSTRING("ball")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ball"),
	HX_CSTRING("begin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#endif

Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MainScene"), hx::TCanCast< MainScene_obj> ,sStaticFields,sMemberFields,
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

void MainScene_obj::__boot()
{
}

