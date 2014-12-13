#ifndef INCLUDED_MainScene
#define INCLUDED_MainScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Scene.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(MainScene)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  MainScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef MainScene_obj OBJ_;
		MainScene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MainScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MainScene"); }

		::Ball ball;
		virtual Void begin( );

};


#endif /* INCLUDED_MainScene */ 
