#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_media_SoundChannel
#include <openfl/_v2/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace com{
namespace haxepunk{

Void Sfx_obj::__construct(Dynamic source,Dynamic complete)
{
HX_STACK_FRAME("com.haxepunk.Sfx","new",0x811824de,"com.haxepunk.Sfx.new","com/haxepunk/Sfx.hx",12,0xd93e4032)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(complete,"complete")
{
	HX_STACK_LINE(338)
	this->_position = (int)0;
	HX_STACK_LINE(332)
	this->_pan = (int)0;
	HX_STACK_LINE(331)
	this->_volume = (int)1;
	HX_STACK_LINE(28)
	::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->_transform = _g;
	HX_STACK_LINE(29)
	this->_volume = (int)1;
	HX_STACK_LINE(30)
	this->_pan = (int)0;
	HX_STACK_LINE(31)
	this->_position = (int)0;
	HX_STACK_LINE(32)
	this->_type = HX_CSTRING("");
	HX_STACK_LINE(34)
	if (((source == null()))){
		HX_STACK_LINE(35)
		HX_STACK_DO_THROW(HX_CSTRING("Invalid source Sound."));
	}
	HX_STACK_LINE(37)
	if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(39)
		::openfl::_v2::media::Sound _g1 = ::openfl::_v2::Assets_obj::getSound(source,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		this->_sound = _g1;
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::String key = source;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(40)
			::com::haxepunk::Sfx_obj::_sounds->set(key,this->_sound);
		}
	}
	else{
		HX_STACK_LINE(44)
		::Class _g2 = ::Type_obj::getClass(source);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		::String className = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(45)
		::openfl::_v2::media::Sound _g3 = ::com::haxepunk::Sfx_obj::_sounds->get(className);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(45)
		this->_sound = _g3;
		HX_STACK_LINE(46)
		if (((this->_sound == null()))){
			HX_STACK_LINE(48)
			this->_sound = source;
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::openfl::_v2::media::Sound value = source;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(49)
				::com::haxepunk::Sfx_obj::_sounds->set(className,value);
			}
		}
	}
	HX_STACK_LINE(53)
	this->complete = complete;
}
;
	return null();
}

//Sfx_obj::~Sfx_obj() { }

Dynamic Sfx_obj::__CreateEmpty() { return  new Sfx_obj; }
hx::ObjectPtr< Sfx_obj > Sfx_obj::__new(Dynamic source,Dynamic complete)
{  hx::ObjectPtr< Sfx_obj > result = new Sfx_obj();
	result->__construct(source,complete);
	return result;}

Dynamic Sfx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sfx_obj > result = new Sfx_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Sfx_obj::play( hx::Null< Float >  __o_volume,hx::Null< Float >  __o_pan,hx::Null< bool >  __o_loop){
Float volume = __o_volume.Default(1);
Float pan = __o_pan.Default(0);
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("com.haxepunk.Sfx","play",0x755fc7b6,"com.haxepunk.Sfx.play","com/haxepunk/Sfx.hx",63,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(volume,"volume")
	HX_STACK_ARG(pan,"pan")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(64)
		if (((this->_sound == null()))){
			HX_STACK_LINE(64)
			return null();
		}
		HX_STACK_LINE(65)
		if (((this->_channel != null()))){
			HX_STACK_LINE(65)
			this->stop();
		}
		HX_STACK_LINE(66)
		Float _g = ::com::haxepunk::HXP_obj::clamp(pan,(int)-1,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		this->_pan = _g;
		HX_STACK_LINE(67)
		if (((volume < (int)0))){
			HX_STACK_LINE(67)
			this->_volume = (int)0;
		}
		else{
			HX_STACK_LINE(67)
			this->_volume = volume;
		}
		HX_STACK_LINE(68)
		Float _g1 = ::com::haxepunk::Sfx_obj::getPan(this->_type);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		Float _g2 = (this->_pan + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(68)
		Float _g3 = ::com::haxepunk::HXP_obj::clamp(_g2,(int)-1,(int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(68)
		this->_filteredPan = _g3;
		HX_STACK_LINE(69)
		Float _g4 = ::com::haxepunk::Sfx_obj::getVolume(this->_type);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(69)
		Float _g5 = (this->_volume * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(69)
		Float _g6 = ::Math_obj::max((int)0,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(69)
		this->_filteredVol = _g6;
		HX_STACK_LINE(70)
		this->_transform->pan = this->_filteredPan;
		HX_STACK_LINE(71)
		this->_transform->volume = this->_filteredVol;
		HX_STACK_LINE(75)
		::openfl::_v2::media::SoundChannel _g7 = this->_sound->play((int)0,(  ((loop)) ? int((int)-1) : int((int)0) ),this->_transform);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(75)
		this->_channel = _g7;
		HX_STACK_LINE(77)
		if (((this->_channel != null()))){
			HX_STACK_LINE(79)
			this->addPlaying();
			HX_STACK_LINE(80)
			this->_channel->addEventListener(::openfl::_v2::events::Event_obj::SOUND_COMPLETE,this->onComplete_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(82)
		this->_looping = loop;
		HX_STACK_LINE(83)
		this->_position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sfx_obj,play,(void))

Void Sfx_obj::loop( hx::Null< Float >  __o_vol,hx::Null< Float >  __o_pan){
Float vol = __o_vol.Default(1);
Float pan = __o_pan.Default(0);
	HX_STACK_FRAME("com.haxepunk.Sfx","loop",0x72bd4026,"com.haxepunk.Sfx.loop","com/haxepunk/Sfx.hx",93,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vol,"vol")
	HX_STACK_ARG(pan,"pan")
{
		HX_STACK_LINE(93)
		this->play(vol,pan,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sfx_obj,loop,(void))

bool Sfx_obj::stop( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","stop",0x776189c4,"com.haxepunk.Sfx.stop","com/haxepunk/Sfx.hx",102,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	if ((!(((this->_channel != null()))))){
		HX_STACK_LINE(103)
		return false;
	}
	HX_STACK_LINE(104)
	this->removePlaying();
	HX_STACK_LINE(105)
	Float _g = this->_channel->get_position();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(105)
	this->_position = _g;
	HX_STACK_LINE(106)
	this->_channel->removeEventListener(::openfl::_v2::events::Event_obj::SOUND_COMPLETE,this->onComplete_dyn(),null());
	HX_STACK_LINE(107)
	this->_channel->stop();
	HX_STACK_LINE(108)
	this->_channel = null();
	HX_STACK_LINE(109)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,stop,return )

Void Sfx_obj::resume( ){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","resume",0x337577ef,"com.haxepunk.Sfx.resume","com/haxepunk/Sfx.hx",116,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		::openfl::_v2::media::SoundChannel _g = this->_sound->play(this->_position,(  ((this->_looping)) ? int((int)-1) : int((int)0) ),this->_transform);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->_channel = _g;
		HX_STACK_LINE(122)
		if (((this->_channel != null()))){
			HX_STACK_LINE(124)
			this->addPlaying();
			HX_STACK_LINE(125)
			this->_channel->addEventListener(::openfl::_v2::events::Event_obj::SOUND_COMPLETE,this->onComplete_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(127)
		this->_position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,resume,(void))

Void Sfx_obj::onComplete( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","onComplete",0xf1812c3a,"com.haxepunk.Sfx.onComplete","com/haxepunk/Sfx.hx",132,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(133)
		if ((this->_looping)){
			HX_STACK_LINE(133)
			this->loop(this->_volume,this->_pan);
		}
		else{
			HX_STACK_LINE(134)
			this->stop();
		}
		HX_STACK_LINE(136)
		this->_position = (int)0;
		HX_STACK_LINE(137)
		if (((this->complete_dyn() != null()))){
			HX_STACK_LINE(137)
			this->complete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,onComplete,(void))

Void Sfx_obj::addPlaying( ){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","addPlaying",0x85a4928f,"com.haxepunk.Sfx.addPlaying","com/haxepunk/Sfx.hx",142,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		Array< ::Dynamic > list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(144)
		if ((!(::com::haxepunk::Sfx_obj::_typePlaying->exists(this->_type)))){
			HX_STACK_LINE(146)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			list = _g;
			HX_STACK_LINE(147)
			::com::haxepunk::Sfx_obj::_typePlaying->set(this->_type,list);
		}
		else{
			HX_STACK_LINE(151)
			Array< ::Dynamic > _g1 = ::com::haxepunk::Sfx_obj::_typePlaying->get(this->_type);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			list = _g1;
		}
		HX_STACK_LINE(153)
		list->push(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,addPlaying,(void))

Void Sfx_obj::removePlaying( ){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","removePlaying",0x69408988,"com.haxepunk.Sfx.removePlaying","com/haxepunk/Sfx.hx",159,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		if ((::com::haxepunk::Sfx_obj::_typePlaying->exists(this->_type))){
			HX_STACK_LINE(161)
			::com::haxepunk::Sfx_obj::_typePlaying->get(this->_type)->__Field(HX_CSTRING("remove"),true)(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,removePlaying,(void))

Float Sfx_obj::get_volume( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_volume",0xe3dcf0e5,"com.haxepunk.Sfx.get_volume","com/haxepunk/Sfx.hx",169,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	return this->_volume;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_volume,return )

Float Sfx_obj::set_volume( Float value){
	HX_STACK_FRAME("com.haxepunk.Sfx","set_volume",0xe75a8f59,"com.haxepunk.Sfx.set_volume","com/haxepunk/Sfx.hx",171,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(172)
	if (((value < (int)0))){
		HX_STACK_LINE(172)
		value = (int)0;
	}
	HX_STACK_LINE(173)
	if (((bool((this->_channel == null())) || bool((this->_volume == value))))){
		HX_STACK_LINE(173)
		return value;
	}
	HX_STACK_LINE(174)
	this->_volume = value;
	HX_STACK_LINE(175)
	Float _g = ::com::haxepunk::Sfx_obj::getVolume(this->_type);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(175)
	Float filteredVol = (value * _g);		HX_STACK_VAR(filteredVol,"filteredVol");
	HX_STACK_LINE(176)
	if (((filteredVol < (int)0))){
		HX_STACK_LINE(176)
		filteredVol = (int)0;
	}
	HX_STACK_LINE(177)
	if (((this->_filteredVol == filteredVol))){
		HX_STACK_LINE(177)
		return value;
	}
	HX_STACK_LINE(178)
	Float _g1 = this->_transform->volume = filteredVol;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(178)
	this->_filteredVol = _g1;
	HX_STACK_LINE(179)
	this->_channel->set_soundTransform(this->_transform);
	HX_STACK_LINE(180)
	return this->_volume;
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,set_volume,return )

Float Sfx_obj::get_pan( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_pan",0x8ec58572,"com.haxepunk.Sfx.get_pan","com/haxepunk/Sfx.hx",187,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	return this->_pan;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_pan,return )

Float Sfx_obj::set_pan( Float value){
	HX_STACK_FRAME("com.haxepunk.Sfx","set_pan",0x81c7167e,"com.haxepunk.Sfx.set_pan","com/haxepunk/Sfx.hx",189,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	Float _g = ::com::haxepunk::HXP_obj::clamp(value,(int)-1,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(190)
	value = _g;
	HX_STACK_LINE(191)
	if (((bool((this->_channel == null())) || bool((this->_pan == value))))){
		HX_STACK_LINE(191)
		return value;
	}
	HX_STACK_LINE(192)
	Float _g1 = ::com::haxepunk::Sfx_obj::getPan(this->_type);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	Float _g2 = (value + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(192)
	Float filteredPan = ::com::haxepunk::HXP_obj::clamp(_g2,(int)-1,(int)1);		HX_STACK_VAR(filteredPan,"filteredPan");
	HX_STACK_LINE(193)
	if (((this->_filteredPan == filteredPan))){
		HX_STACK_LINE(193)
		return value;
	}
	HX_STACK_LINE(194)
	this->_pan = value;
	HX_STACK_LINE(195)
	Float _g3 = this->_transform->pan = filteredPan;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(195)
	this->_filteredPan = _g3;
	HX_STACK_LINE(196)
	this->_channel->set_soundTransform(this->_transform);
	HX_STACK_LINE(197)
	return this->_pan;
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,set_pan,return )

::String Sfx_obj::get_type( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_type",0x60c65105,"com.haxepunk.Sfx.get_type","com/haxepunk/Sfx.hx",205,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_type,return )

::String Sfx_obj::set_type( ::String value){
	HX_STACK_FRAME("com.haxepunk.Sfx","set_type",0x0f23aa79,"com.haxepunk.Sfx.set_type","com/haxepunk/Sfx.hx",207,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(208)
	if (((this->_type == value))){
		HX_STACK_LINE(208)
		return value;
	}
	HX_STACK_LINE(209)
	if (((this->_channel != null()))){
		HX_STACK_LINE(211)
		this->removePlaying();
		HX_STACK_LINE(212)
		this->_type = value;
		HX_STACK_LINE(213)
		this->addPlaying();
		HX_STACK_LINE(215)
		Float _g = this->get_pan();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		this->set_pan(_g);
		HX_STACK_LINE(216)
		Float _g1 = this->get_volume();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		this->set_volume(_g1);
	}
	else{
		HX_STACK_LINE(220)
		this->_type = value;
	}
	HX_STACK_LINE(222)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,set_type,return )

bool Sfx_obj::get_playing( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_playing",0xfe1c7203,"com.haxepunk.Sfx.get_playing","com/haxepunk/Sfx.hx",229,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	return (this->_channel != null());
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_playing,return )

Float Sfx_obj::get_position( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_position",0xdacc8074,"com.haxepunk.Sfx.get_position","com/haxepunk/Sfx.hx",235,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	Float _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(235)
	if (((this->_channel != null()))){
		HX_STACK_LINE(235)
		_g = this->_channel->get_position();
	}
	else{
		HX_STACK_LINE(235)
		_g = this->_position;
	}
	HX_STACK_LINE(235)
	return (Float(_g) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_position,return )

Float Sfx_obj::get_length( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_length",0x23915bf1,"com.haxepunk.Sfx.get_length","com/haxepunk/Sfx.hx",241,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	Float _g = this->_sound->get_length();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(241)
	return (Float(_g) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_length,return )

Float Sfx_obj::getPan( ::String type){
	HX_STACK_FRAME("com.haxepunk.Sfx","getPan",0xce1598a9,"com.haxepunk.Sfx.getPan","com/haxepunk/Sfx.hx",251,0xd93e4032)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(252)
	if ((::com::haxepunk::Sfx_obj::_typeTransforms->exists(type))){
		HX_STACK_LINE(254)
		::openfl::media::SoundTransform transform = ::com::haxepunk::Sfx_obj::_typeTransforms->get(type);		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(255)
		if (((transform != null()))){
			HX_STACK_LINE(255)
			return transform->pan;
		}
		else{
			HX_STACK_LINE(255)
			return (int)0;
		}
	}
	HX_STACK_LINE(257)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,getPan,return )

Float Sfx_obj::getVolume( ::String type){
	HX_STACK_FRAME("com.haxepunk.Sfx","getVolume",0xc9f57a0e,"com.haxepunk.Sfx.getVolume","com/haxepunk/Sfx.hx",268,0xd93e4032)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(269)
	if ((::com::haxepunk::Sfx_obj::_typeTransforms->exists(type))){
		HX_STACK_LINE(271)
		::openfl::media::SoundTransform transform = ::com::haxepunk::Sfx_obj::_typeTransforms->get(type);		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(272)
		if (((transform != null()))){
			HX_STACK_LINE(272)
			return transform->volume;
		}
		else{
			HX_STACK_LINE(272)
			return (int)1;
		}
	}
	HX_STACK_LINE(274)
	return (int)1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,getVolume,return )

Void Sfx_obj::setPan( ::String type,Float pan){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","setPan",0x9a5ded1d,"com.haxepunk.Sfx.setPan","com/haxepunk/Sfx.hx",285,0xd93e4032)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pan,"pan")
		HX_STACK_LINE(286)
		::openfl::media::SoundTransform transform = ::com::haxepunk::Sfx_obj::_typeTransforms->get(type);		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(287)
		if (((transform == null()))){
			HX_STACK_LINE(289)
			::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			transform = _g;
			HX_STACK_LINE(290)
			::com::haxepunk::Sfx_obj::_typeTransforms->set(type,transform);
		}
		HX_STACK_LINE(292)
		Float _g1 = ::com::haxepunk::HXP_obj::clamp(pan,(int)-1,(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(292)
		transform->pan = _g1;
		HX_STACK_LINE(294)
		if ((::com::haxepunk::Sfx_obj::_typePlaying->exists(type))){
			HX_STACK_LINE(296)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			Array< ::Dynamic > _g11 = ::com::haxepunk::Sfx_obj::_typePlaying->get(type);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(296)
			while((true)){
				HX_STACK_LINE(296)
				if ((!(((_g < _g11->length))))){
					HX_STACK_LINE(296)
					break;
				}
				HX_STACK_LINE(296)
				::com::haxepunk::Sfx sfx = _g11->__get(_g).StaticCast< ::com::haxepunk::Sfx >();		HX_STACK_VAR(sfx,"sfx");
				HX_STACK_LINE(296)
				++(_g);
				HX_STACK_LINE(298)
				Float _g2 = sfx->get_pan();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(298)
				sfx->set_pan(_g2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sfx_obj,setPan,(void))

Void Sfx_obj::setVolume( ::String type,Float volume){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","setVolume",0xad46661a,"com.haxepunk.Sfx.setVolume","com/haxepunk/Sfx.hx",311,0xd93e4032)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(volume,"volume")
		HX_STACK_LINE(312)
		::openfl::media::SoundTransform transform = ::com::haxepunk::Sfx_obj::_typeTransforms->get(type);		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(313)
		if (((transform == null()))){
			HX_STACK_LINE(315)
			::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(315)
			transform = _g;
			HX_STACK_LINE(316)
			::com::haxepunk::Sfx_obj::_typeTransforms->set(type,transform);
		}
		HX_STACK_LINE(318)
		if (((volume < (int)0))){
			HX_STACK_LINE(318)
			transform->volume = (int)0;
		}
		else{
			HX_STACK_LINE(318)
			transform->volume = volume;
		}
		HX_STACK_LINE(320)
		if ((::com::haxepunk::Sfx_obj::_typePlaying->exists(type))){
			HX_STACK_LINE(322)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			Array< ::Dynamic > _g1 = ::com::haxepunk::Sfx_obj::_typePlaying->get(type);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			while((true)){
				HX_STACK_LINE(322)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(322)
					break;
				}
				HX_STACK_LINE(322)
				::com::haxepunk::Sfx sfx = _g1->__get(_g).StaticCast< ::com::haxepunk::Sfx >();		HX_STACK_VAR(sfx,"sfx");
				HX_STACK_LINE(322)
				++(_g);
				HX_STACK_LINE(324)
				Float _g11 = sfx->get_volume();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(324)
				sfx->set_volume(_g11);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sfx_obj,setVolume,(void))

::haxe::ds::StringMap Sfx_obj::_sounds;

::haxe::ds::StringMap Sfx_obj::_typePlaying;

::haxe::ds::StringMap Sfx_obj::_typeTransforms;


Sfx_obj::Sfx_obj()
{
}

void Sfx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sfx);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_pan,"_pan");
	HX_MARK_MEMBER_NAME(_filteredVol,"_filteredVol");
	HX_MARK_MEMBER_NAME(_filteredPan,"_filteredPan");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_looping,"_looping");
	HX_MARK_END_CLASS();
}

void Sfx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_pan,"_pan");
	HX_VISIT_MEMBER_NAME(_filteredVol,"_filteredVol");
	HX_VISIT_MEMBER_NAME(_filteredPan,"_filteredPan");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_looping,"_looping");
}

Dynamic Sfx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getPan") ) { return getPan_dyn(); }
		if (HX_FIELD_EQ(inName,"setPan") ) { return setPan_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"_sound") ) { return _sound; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sounds") ) { return _sounds; }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"_channel") ) { return _channel; }
		if (HX_FIELD_EQ(inName,"_looping") ) { return _looping; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getVolume") ) { return getVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"addPlaying") ) { return addPlaying_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_typePlaying") ) { return _typePlaying; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"_filteredVol") ) { return _filteredVol; }
		if (HX_FIELD_EQ(inName,"_filteredPan") ) { return _filteredPan; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removePlaying") ) { return removePlaying_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_typeTransforms") ) { return _typeTransforms; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sfx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast< ::openfl::_v2::media::Sound >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sounds") ) { _sounds=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast< ::openfl::_v2::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_looping") ) { _looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_typePlaying") ) { _typePlaying=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filteredVol") ) { _filteredVol=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filteredPan") ) { _filteredPan=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_typeTransforms") ) { _typeTransforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sfx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("pan"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_volume"));
	outFields->push(HX_CSTRING("_pan"));
	outFields->push(HX_CSTRING("_filteredVol"));
	outFields->push(HX_CSTRING("_filteredPan"));
	outFields->push(HX_CSTRING("_sound"));
	outFields->push(HX_CSTRING("_channel"));
	outFields->push(HX_CSTRING("_transform"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_looping"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getPan"),
	HX_CSTRING("getVolume"),
	HX_CSTRING("setPan"),
	HX_CSTRING("setVolume"),
	HX_CSTRING("_sounds"),
	HX_CSTRING("_typePlaying"),
	HX_CSTRING("_typeTransforms"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sfx_obj,complete),HX_CSTRING("complete")},
	{hx::fsBool,(int)offsetof(Sfx_obj,playing),HX_CSTRING("playing")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,position),HX_CSTRING("position")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,length),HX_CSTRING("length")},
	{hx::fsString,(int)offsetof(Sfx_obj,_type),HX_CSTRING("_type")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_volume),HX_CSTRING("_volume")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_pan),HX_CSTRING("_pan")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_filteredVol),HX_CSTRING("_filteredVol")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_filteredPan),HX_CSTRING("_filteredPan")},
	{hx::fsObject /*::openfl::_v2::media::Sound*/ ,(int)offsetof(Sfx_obj,_sound),HX_CSTRING("_sound")},
	{hx::fsObject /*::openfl::_v2::media::SoundChannel*/ ,(int)offsetof(Sfx_obj,_channel),HX_CSTRING("_channel")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(Sfx_obj,_transform),HX_CSTRING("_transform")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_position),HX_CSTRING("_position")},
	{hx::fsBool,(int)offsetof(Sfx_obj,_looping),HX_CSTRING("_looping")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("complete"),
	HX_CSTRING("play"),
	HX_CSTRING("loop"),
	HX_CSTRING("stop"),
	HX_CSTRING("resume"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("addPlaying"),
	HX_CSTRING("removePlaying"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("get_type"),
	HX_CSTRING("set_type"),
	HX_CSTRING("playing"),
	HX_CSTRING("get_playing"),
	HX_CSTRING("position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("length"),
	HX_CSTRING("get_length"),
	HX_CSTRING("_type"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_filteredVol"),
	HX_CSTRING("_filteredPan"),
	HX_CSTRING("_sound"),
	HX_CSTRING("_channel"),
	HX_CSTRING("_transform"),
	HX_CSTRING("_position"),
	HX_CSTRING("_looping"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sfx_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sfx_obj::_sounds,"_sounds");
	HX_MARK_MEMBER_NAME(Sfx_obj::_typePlaying,"_typePlaying");
	HX_MARK_MEMBER_NAME(Sfx_obj::_typeTransforms,"_typeTransforms");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sfx_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sfx_obj::_sounds,"_sounds");
	HX_VISIT_MEMBER_NAME(Sfx_obj::_typePlaying,"_typePlaying");
	HX_VISIT_MEMBER_NAME(Sfx_obj::_typeTransforms,"_typeTransforms");
};

#endif

Class Sfx_obj::__mClass;

void Sfx_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Sfx"), hx::TCanCast< Sfx_obj> ,sStaticFields,sMemberFields,
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

void Sfx_obj::__boot()
{
	_sounds= ::haxe::ds::StringMap_obj::__new();
	_typePlaying= ::haxe::ds::StringMap_obj::__new();
	_typeTransforms= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
