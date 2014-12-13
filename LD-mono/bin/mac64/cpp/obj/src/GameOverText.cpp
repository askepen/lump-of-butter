#include <hxcpp.h>

#ifndef INCLUDED_GameOverText
#include <GameOverText.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
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

Void GameOverText_obj::__construct(int reason,int winner)
{
HX_STACK_FRAME("GameOverText","new",0xa87ac8c5,"GameOverText.new","GameOverText.hx",13,0x3d99364b)
HX_STACK_THIS(this)
HX_STACK_ARG(reason,"reason")
HX_STACK_ARG(winner,"winner")
{
	HX_STACK_LINE(14)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(17)
	::String en = HX_CSTRING(".ogg");		HX_STACK_VAR(en,"en");
	HX_STACK_LINE(21)
	::com::haxepunk::Sfx _g = ::com::haxepunk::Sfx_obj::__new((HX_CSTRING("audio/EndGame") + en),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	this->sfx = _g;
	HX_STACK_LINE(23)
	::com::haxepunk::ds::Either _g6;		HX_STACK_VAR(_g6,"_g6");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOverText.hx",23,0x3d99364b)
			{
				HX_STACK_LINE(23)
				::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOverText.hx",23,0x3d99364b)
						{
							HX_STACK_LINE(23)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(23)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/GameOver.png")))){
									HX_STACK_LINE(23)
									::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/GameOver.png"));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(23)
									data1 = _g1;
								}
								else{
									HX_STACK_LINE(23)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/GameOver.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(23)
									if (((bitmap != null()))){
										HX_STACK_LINE(23)
										::com::haxepunk::graphics::atlas::AtlasData _g2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/GameOver.png"),null());		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(23)
										data1 = _g2;
									}
								}
								HX_STACK_LINE(23)
								data = data1;
							}
							HX_STACK_LINE(23)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(23)
				_g3 = _Function_2_1::Block();
				HX_STACK_LINE(23)
				::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(23)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(23)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOverText.hx",23,0x3d99364b)
			{
				HX_STACK_LINE(23)
				::openfl::_v2::display::BitmapData _g5 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/GameOver.png"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(23)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g5);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(23)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	_g6 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(23)
	::com::haxepunk::graphics::Image img = ::com::haxepunk::graphics::Image_obj::__new(_g6,null());		HX_STACK_VAR(img,"img");
	HX_STACK_LINE(24)
	::com::haxepunk::graphics::Text t = ::com::haxepunk::graphics::Text_obj::__new(HX_CSTRING(""),(int)120,(int)200,null(),null(),null());		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(25)
	t->set_size((int)32);
	HX_STACK_LINE(26)
	switch( (int)(reason)){
		case (int)0: {
			HX_STACK_LINE(29)
			t->set_text(HX_CSTRING("NO MORE BUTTER!"));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(32)
			t->set_text(HX_CSTRING("YOU THREW THE BUTTER AWAY"));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(35)
			t->set_text(HX_CSTRING("THE DOG ATE THE BUTTER"));
		}
		;break;
	}
	HX_STACK_LINE(39)
	::String winnerImgSrc = HX_CSTRING("");		HX_STACK_VAR(winnerImgSrc,"winnerImgSrc");
	HX_STACK_LINE(40)
	::com::haxepunk::graphics::Image winnerImg;		HX_STACK_VAR(winnerImg,"winnerImg");
	HX_STACK_LINE(42)
	switch( (int)(winner)){
		case (int)0: {
			HX_STACK_LINE(46)
			winnerImgSrc = HX_CSTRING("graphics/GameOverDOG.png");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(49)
			winnerImgSrc = HX_CSTRING("graphics/GameOverP1.png");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(52)
			winnerImgSrc = HX_CSTRING("graphics/GameOverP2.png");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(55)
			winnerImgSrc = HX_CSTRING("graphics/GameOverSINGLE.png");
		}
		;break;
	}
	HX_STACK_LINE(58)
	::com::haxepunk::ds::Either _g12;		HX_STACK_VAR(_g12,"_g12");
	struct _Function_1_3{
		inline static ::com::haxepunk::ds::Either Block( ::String &winnerImgSrc){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOverText.hx",58,0x3d99364b)
			{
				HX_STACK_LINE(58)
				::com::haxepunk::graphics::atlas::AtlasData _g9;		HX_STACK_VAR(_g9,"_g9");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::String &winnerImgSrc){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOverText.hx",58,0x3d99364b)
						{
							HX_STACK_LINE(58)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(58)
							{
								HX_STACK_LINE(58)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(58)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(winnerImgSrc))){
									HX_STACK_LINE(58)
									::com::haxepunk::graphics::atlas::AtlasData _g7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(winnerImgSrc);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(58)
									data1 = _g7;
								}
								else{
									HX_STACK_LINE(58)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(winnerImgSrc);		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(58)
									if (((bitmap != null()))){
										HX_STACK_LINE(58)
										::com::haxepunk::graphics::atlas::AtlasData _g8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,winnerImgSrc,null());		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(58)
										data1 = _g8;
									}
								}
								HX_STACK_LINE(58)
								data = data1;
							}
							HX_STACK_LINE(58)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(58)
				_g9 = _Function_2_1::Block(winnerImgSrc);
				HX_STACK_LINE(58)
				::com::haxepunk::graphics::atlas::AtlasRegion _g10 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(58)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g10);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(58)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::com::haxepunk::ds::Either Block( ::String &winnerImgSrc){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOverText.hx",58,0x3d99364b)
			{
				HX_STACK_LINE(58)
				::openfl::_v2::display::BitmapData _g11 = ::com::haxepunk::HXP_obj::getBitmap(winnerImgSrc);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(58)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g11);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(58)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(58)
	_g12 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_3::Block(winnerImgSrc)) : ::com::haxepunk::ds::Either(_Function_1_4::Block(winnerImgSrc)) );
	HX_STACK_LINE(58)
	::com::haxepunk::graphics::Image _g13 = ::com::haxepunk::graphics::Image_obj::__new(_g12,null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(58)
	winnerImg = _g13;
	HX_STACK_LINE(60)
	this->set_name(HX_CSTRING("gameover"));
	HX_STACK_LINE(62)
	::com::haxepunk::graphics::Graphiclist _g14 = ::com::haxepunk::graphics::Graphiclist_obj::__new(Array_obj< ::Dynamic >::__new().Add(img).Add(winnerImg).Add(t));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(62)
	this->set_graphic(_g14);
	HX_STACK_LINE(64)
	this->x = (int)250;
	HX_STACK_LINE(65)
	this->y = (int)170;
}
;
	return null();
}

//GameOverText_obj::~GameOverText_obj() { }

Dynamic GameOverText_obj::__CreateEmpty() { return  new GameOverText_obj; }
hx::ObjectPtr< GameOverText_obj > GameOverText_obj::__new(int reason,int winner)
{  hx::ObjectPtr< GameOverText_obj > result = new GameOverText_obj();
	result->__construct(reason,winner);
	return result;}

Dynamic GameOverText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOverText_obj > result = new GameOverText_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void GameOverText_obj::added( ){
{
		HX_STACK_FRAME("GameOverText","added",0x56657065,"GameOverText.added","GameOverText.hx",69,0x3d99364b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->sfx->play((int)1,(int)0,false);
		HX_STACK_LINE(71)
		this->super::added();
	}
return null();
}



GameOverText_obj::GameOverText_obj()
{
}

void GameOverText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverText);
	HX_MARK_MEMBER_NAME(sfx,"sfx");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sfx,"sfx");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOverText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sfx") ) { return sfx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOverText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sfx") ) { sfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sfx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(GameOverText_obj,sfx),HX_CSTRING("sfx")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sfx"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverText_obj::__mClass,"__mClass");
};

#endif

Class GameOverText_obj::__mClass;

void GameOverText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameOverText"), hx::TCanCast< GameOverText_obj> ,sStaticFields,sMemberFields,
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

void GameOverText_obj::__boot()
{
}

