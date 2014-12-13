#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Bar)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Shadow)
HX_DECLARE_CLASS0(Target)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS3(com,haxepunk,utils,Joystick)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(int Team,bool focus,::Bar bar,Float _x,Float _y,hx::Null< bool >  __o_jsInput,hx::Null< int >  __o_jsNum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Player_obj > __new(int Team,bool focus,::Bar bar,Float _x,Float _y,hx::Null< bool >  __o_jsInput,hx::Null< int >  __o_jsNum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		::com::haxepunk::graphics::Spritemap sprite;
		Float speed;
		::String state;
		Float throwTimer;
		int throwTime;
		::Shadow shadow;
		::com::haxepunk::graphics::Image indicator;
		::Target target;
		Float targetAngle;
		Float addAngle;
		int thrownTime;
		::String inputTeamName;
		int ballHoldTimer;
		int ballHoldTime;
		::Bar timerBar;
		bool indiUp;
		::com::haxepunk::utils::Joystick joy;
		int joyNum;
		bool joyInput;
		::com::haxepunk::Sfx splat;
		::com::haxepunk::Sfx huuang;
		::com::haxepunk::Sfx pickup;
		int boundX;
		int boundY;
		bool ballAttached;
		int team;
		::Ball b;
		bool focused;
		int score;
		virtual Void added( );

		virtual Void update( );

		virtual Void checkBall( );
		Dynamic checkBall_dyn();

		virtual Void changePlayer( bool focusThis);
		Dynamic changePlayer_dyn();

		virtual Void ballUpdate( );
		Dynamic ballUpdate_dyn();

		virtual Void throwBall( );
		Dynamic throwBall_dyn();

		virtual Void throwCharge( );
		Dynamic throwCharge_dyn();

		virtual Void checkOtherPlayer( );
		Dynamic checkOtherPlayer_dyn();

		virtual Void keepInBounds( );
		Dynamic keepInBounds_dyn();

		virtual Void holdBallTiming( );
		Dynamic holdBallTiming_dyn();

		virtual Void handleInput( );
		Dynamic handleInput_dyn();

		virtual Void handleJsInput( );
		Dynamic handleJsInput_dyn();

		virtual Void updateGraphic( );
		Dynamic updateGraphic_dyn();

};


#endif /* INCLUDED_Player */ 
