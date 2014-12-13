#include <hxcpp.h>

#ifndef INCLUDED_Bar
#include <Bar.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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

Void Bar_obj::__construct()
{
HX_STACK_FRAME("Bar","new",0x43906025,"Bar.new","Bar.hx",5,0x88e9aaeb)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::Image Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Bar.hx",8,0x88e9aaeb)
			{
				HX_STACK_LINE(8)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Bar.hx",8,0x88e9aaeb)
						{
							HX_STACK_LINE(8)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Bar.hx",8,0x88e9aaeb)
									{
										HX_STACK_LINE(8)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(8)
										{
											HX_STACK_LINE(8)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(8)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/Bar.png")))){
												HX_STACK_LINE(8)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/Bar.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(8)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(8)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Bar.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(8)
												if (((bitmap != null()))){
													HX_STACK_LINE(8)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/Bar.png"),null());		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(8)
													data1 = _g1;
												}
											}
											HX_STACK_LINE(8)
											data = data1;
										}
										HX_STACK_LINE(8)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(8)
							_g2 = _Function_3_1::Block();
							HX_STACK_LINE(8)
							::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(8)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(8)
							return e;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Bar.hx",8,0x88e9aaeb)
						{
							HX_STACK_LINE(8)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/Bar.png"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(8)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(8)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(8)
				_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block()) : ::com::haxepunk::ds::Either(_Function_2_2::Block()) );
				HX_STACK_LINE(8)
				return ::com::haxepunk::graphics::Image_obj::__new(_g5,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(8)
	this->sprite = _Function_1_1::Block();
	HX_STACK_LINE(14)
	int _g = this->sprite->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	int _g1 = ((int)363 + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14)
	super::__construct(_g1,(int)772,null(),null());
	HX_STACK_LINE(16)
	this->set_graphic(this->sprite);
	HX_STACK_LINE(17)
	this->sprite->scaleX = (int)-1;
}
;
	return null();
}

//Bar_obj::~Bar_obj() { }

Dynamic Bar_obj::__CreateEmpty() { return  new Bar_obj; }
hx::ObjectPtr< Bar_obj > Bar_obj::__new()
{  hx::ObjectPtr< Bar_obj > result = new Bar_obj();
	result->__construct();
	return result;}

Dynamic Bar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bar_obj > result = new Bar_obj();
	result->__construct();
	return result;}

Void Bar_obj::update( ){
{
		HX_STACK_FRAME("Bar","update",0xf9035f64,"Bar.update","Bar.hx",24,0x88e9aaeb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->super::update();
	}
return null();
}



Bar_obj::Bar_obj()
{
}

void Bar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bar);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(p,"p");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(p,"p");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("p"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Bar_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Bar_obj,p),HX_CSTRING("p")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("p"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bar_obj::__mClass,"__mClass");
};

#endif

Class Bar_obj::__mClass;

void Bar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Bar"), hx::TCanCast< Bar_obj> ,sStaticFields,sMemberFields,
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

void Bar_obj::__boot()
{
}

