#ifndef INCLUDED_Dust
#define INCLUDED_Dust

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Dust)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)


class HXCPP_CLASS_ATTRIBUTES  Dust_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Dust_obj OBJ_;
		Dust_obj();
		Void __construct(Float _x,Float _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Dust_obj > __new(Float _x,Float _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dust_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Dust"); }

		::com::haxepunk::graphics::Spritemap sprite;
		virtual Void update( );

};


#endif /* INCLUDED_Dust */ 
