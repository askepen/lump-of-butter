#ifndef INCLUDED_Dog
#define INCLUDED_Dog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Dog)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)


class HXCPP_CLASS_ATTRIBUTES  Dog_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Dog_obj OBJ_;
		Dog_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Dog_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dog_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Dog"); }

		::com::haxepunk::graphics::Spritemap sprite;
		::Ball ball;
		::Player p;
		::com::haxepunk::Entity target;
		Float speed;
		bool reachedGoal;
		virtual Void added( );

		virtual Void update( );

		virtual Void chase( );
		Dynamic chase_dyn();

		virtual Void checkBall( );
		Dynamic checkBall_dyn();

		virtual Void checkPlayer( );
		Dynamic checkPlayer_dyn();

};


#endif /* INCLUDED_Dog */ 
