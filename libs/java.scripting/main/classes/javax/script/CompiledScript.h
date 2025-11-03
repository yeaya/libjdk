#ifndef _javax_script_CompiledScript_h_
#define _javax_script_CompiledScript_h_
//$ class javax.script.CompiledScript
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace script {
		class Bindings;
		class ScriptContext;
		class ScriptEngine;
	}
}

namespace javax {
	namespace script {

class $export CompiledScript : public ::java::lang::Object {
	$class(CompiledScript, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompiledScript();
	void init$();
	virtual $Object* eval(::javax::script::ScriptContext* context) {return nullptr;}
	virtual $Object* eval(::javax::script::Bindings* bindings);
	virtual $Object* eval();
	virtual ::javax::script::ScriptEngine* getEngine() {return nullptr;}
};

	} // script
} // javax

#endif // _javax_script_CompiledScript_h_