#ifndef INCLUDED_Spawner
#define INCLUDED_Spawner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Bar)
HX_DECLARE_CLASS0(Spawner)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  Spawner_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Spawner_obj OBJ_;
		Spawner_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Spawner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spawner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spawner"); }

		::Bar b;
		::Ball ball;
		bool p1;
		bool p2;
		bool p1Joy;
		int p1JoyNum;
		bool p2Joy;
		int p2JoyNum;
		::com::haxepunk::graphics::Image img;
		::com::haxepunk::graphics::Image modeImg;
		::com::haxepunk::graphics::Image flashTip;
		::com::haxepunk::graphics::Image p1CtrlImg;
		::com::haxepunk::graphics::Image p2CtrlImg;
		::com::haxepunk::Sfx sfx;
		virtual Void added( );

		virtual Void update( );

		virtual Void updateModeState( );
		Dynamic updateModeState_dyn();

		virtual Void updateGraphiclist( );
		Dynamic updateGraphiclist_dyn();

		virtual Void checkKeyPress( );
		Dynamic checkKeyPress_dyn();

		virtual Void checkJoyPress( );
		Dynamic checkJoyPress_dyn();

		virtual Void gameInit( );
		Dynamic gameInit_dyn();

};


#endif /* INCLUDED_Spawner */ 
