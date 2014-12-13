#include <hxcpp.h>

#ifndef INCLUDED_Dust
#include <Dust.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif

Void Dust_obj::__construct(Float _x,Float _y)
{
HX_STACK_FRAME("Dust","new",0x16f70084,"Dust.new","Dust.hx",5,0x57597b6c)
HX_STACK_THIS(this)
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
{
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::Spritemap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dust.hx",8,0x57597b6c)
			{
				HX_STACK_LINE(8)
				::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
				struct _Function_2_1{
					inline static ::com::haxepunk::ds::Either Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dust.hx",8,0x57597b6c)
						{
							HX_STACK_LINE(8)
							::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_3_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dust.hx",8,0x57597b6c)
									{
										HX_STACK_LINE(8)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(8)
										{
											HX_STACK_LINE(8)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(8)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/dust.png")))){
												HX_STACK_LINE(8)
												::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/dust.png"));		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(8)
												data1 = _g;
											}
											else{
												HX_STACK_LINE(8)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/dust.png"));		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(8)
												if (((bitmap != null()))){
													HX_STACK_LINE(8)
													::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/dust.png"),null());		HX_STACK_VAR(_g1,"_g1");
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
							::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
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
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dust.hx",8,0x57597b6c)
						{
							HX_STACK_LINE(8)
							::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/dust.png"));		HX_STACK_VAR(_g4,"_g4");
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
				return ::com::haxepunk::graphics::Spritemap_obj::__new(_g5,(int)50,(int)50,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(8)
	this->sprite = _Function_1_1::Block();
	HX_STACK_LINE(12)
	super::__construct(_x,_y,null(),null());
	HX_STACK_LINE(15)
	this->sprite->add(HX_CSTRING("anim"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)20,false);
	HX_STACK_LINE(16)
	this->sprite->play(HX_CSTRING("anim"),null(),null());
	HX_STACK_LINE(17)
	this->sprite->centerOrigin();
	HX_STACK_LINE(19)
	this->set_graphic(this->sprite);
}
;
	return null();
}

//Dust_obj::~Dust_obj() { }

Dynamic Dust_obj::__CreateEmpty() { return  new Dust_obj; }
hx::ObjectPtr< Dust_obj > Dust_obj::__new(Float _x,Float _y)
{  hx::ObjectPtr< Dust_obj > result = new Dust_obj();
	result->__construct(_x,_y);
	return result;}

Dynamic Dust_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dust_obj > result = new Dust_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Dust_obj::update( ){
{
		HX_STACK_FRAME("Dust","update",0xca4c0465,"Dust.update","Dust.hx",24,0x57597b6c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::update();
		HX_STACK_LINE(26)
		if ((this->sprite->complete)){
			HX_STACK_LINE(26)
			this->_scene->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}



Dust_obj::Dust_obj()
{
}

void Dust_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dust);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dust_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Dust_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Dust_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dust_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Dust_obj,sprite),HX_CSTRING("sprite")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dust_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dust_obj::__mClass,"__mClass");
};

#endif

Class Dust_obj::__mClass;

void Dust_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Dust"), hx::TCanCast< Dust_obj> ,sStaticFields,sMemberFields,
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

void Dust_obj::__boot()
{
}

