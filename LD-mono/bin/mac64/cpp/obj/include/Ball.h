#ifndef INCLUDED_Ball
#define INCLUDED_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Shadow)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Graphiclist)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)


class HXCPP_CLASS_ATTRIBUTES  Ball_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ball_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ball_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ball"); }

		::com::haxepunk::graphics::Spritemap sprite;
		::com::haxepunk::graphics::Graphiclist trail;
		::String state;
		::Player p;
		Float flyspeed;
		Float tx;
		Float ty;
		bool drawTrail;
		int shakeTime;
		int shakeTimer;
		Float shakeAmountX;
		Float shakeAmountY;
		bool screenshakeOn;
		bool inAir;
		::Shadow shadow;
		::Player lastOwner;
		bool beingHeld;
		virtual Void added( );

		virtual Void update( );

		virtual Void attachedToPlayer( ::Player player);
		Dynamic attachedToPlayer_dyn();

		virtual Void checkEndCondition( );
		Dynamic checkEndCondition_dyn();

		virtual Void getThrown( Float x,Float y);
		Dynamic getThrown_dyn();

		virtual Void updateGraphic( );
		Dynamic updateGraphic_dyn();

		virtual int getWinner( hx::Null< bool >  butterThrownAway);
		Dynamic getWinner_dyn();

		virtual Void updateTrail( );
		Dynamic updateTrail_dyn();

		virtual Void screenshakeInit( Float amountX,Float amountY,int time);
		Dynamic screenshakeInit_dyn();

		virtual Void screenshake( );
		Dynamic screenshake_dyn();

		virtual Void normCam( );
		Dynamic normCam_dyn();

};


#endif /* INCLUDED_Ball */ 
