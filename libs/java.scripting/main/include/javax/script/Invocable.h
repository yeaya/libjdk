#ifndef _javax_script_Invocable_h_
#define _javax_script_Invocable_h_
//$ interface javax.script.Invocable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace script {

class $import Invocable : public ::java::lang::Object {
	$interface(Invocable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getInterface($Class* clasz) {return nullptr;}
	virtual $Object* getInterface(Object$* thiz, $Class* clasz) {return nullptr;}
	virtual $Object* invokeFunction($String* name, $ObjectArray* args) {return nullptr;}
	virtual $Object* invokeMethod(Object$* thiz, $String* name, $ObjectArray* args) {return nullptr;}
};

	} // script
} // javax

#endif // _javax_script_Invocable_h_