#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Splash
#include <Splash.h>
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

Void Splash_obj::__construct()
{
HX_STACK_FRAME("Splash","new",0x801f65f9,"Splash.new","Splash.hx",8,0x39f93b97)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(11)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Splash.hx",11,0x39f93b97)
			{
				HX_STACK_LINE(11)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Splash.hx",11,0x39f93b97)
						{
							HX_STACK_LINE(11)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(11)
							{
								HX_STACK_LINE(11)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(11)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Splash.png")))){
									HX_STACK_LINE(11)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Splash.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(11)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(11)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Splash.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(11)
									if (((bitmap != null()))){
										HX_STACK_LINE(11)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Splash.png"),null());		HX_STACK_VAR(_g1,"_g1");
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
				_g2 = _Function_2_1::Block();
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
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Splash.hx",11,0x39f93b97)
			{
				HX_STACK_LINE(11)
				::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Splash.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(11)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(11)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(11)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(11)
	::com::haxepunk::graphics::Image img = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(img,"img");
	HX_STACK_LINE(13)
	this->set_graphic(img);
	HX_STACK_LINE(14)
	this->set_name(HX_CSTRING("splash"));
}
;
	return null();
}

//Splash_obj::~Splash_obj() { }

Dynamic Splash_obj::__CreateEmpty() { return  new Splash_obj; }
hx::ObjectPtr< Splash_obj > Splash_obj::__new()
{  hx::ObjectPtr< Splash_obj > result = new Splash_obj();
	result->__construct();
	return result;}

Dynamic Splash_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Splash_obj > result = new Splash_obj();
	result->__construct();
	return result;}


Splash_obj::Splash_obj()
{
}

Dynamic Splash_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Splash_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Splash_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Splash_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Splash_obj::__mClass,"__mClass");
};

#endif

Class Splash_obj::__mClass;

void Splash_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Splash"), hx::TCanCast< Splash_obj> ,sStaticFields,sMemberFields,
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

void Splash_obj::__boot()
{
}

