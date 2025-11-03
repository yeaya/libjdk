#ifndef _javax_script_ScriptEngine_h_
#define _javax_script_ScriptEngine_h_
//$ interface javax.script.ScriptEngine
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARGV")
#undef ARGV
#pragma push_macro("ENGINE")
#undef ENGINE
#pragma push_macro("ENGINE_VERSION")
#undef ENGINE_VERSION
#pragma push_macro("FILENAME")
#undef FILENAME
#pragma push_macro("LANGUAGE")
#undef LANGUAGE
#pragma push_macro("LANGUAGE_VERSION")
#undef LANGUAGE_VERSION
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class Reader;
	}
}
namespace javax {
	namespace script {
		class Bindings;
		class ScriptContext;
		class ScriptEngineFactory;
	}
}

namespace javax {
	namespace script {

class $export ScriptEngine : public ::java::lang::Object {
	$interface(ScriptEngine, 0, ::java::lang::Object)
public:
	virtual ::javax::script::Bindings* createBindings() {return nullptr;}
	virtual $Object* eval($String* script, ::javax::script::ScriptContext* context) {return nullptr;}
	virtual $Object* eval(::java::io::Reader* reader, ::javax::script::ScriptContext* context) {return nullptr;}
	virtual $Object* eval($String* script) {return nullptr;}
	virtual $Object* eval(::java::io::Reader* reader) {return nullptr;}
	virtual $Object* eval($String* script, ::javax::script::Bindings* n) {return nullptr;}
	virtual $Object* eval(::java::io::Reader* reader, ::javax::script::Bindings* n) {return nullptr;}
	virtual $Object* get($String* key) {return nullptr;}
	virtual ::javax::script::Bindings* getBindings(int32_t scope) {return nullptr;}
	virtual ::javax::script::ScriptContext* getContext() {return nullptr;}
	virtual ::javax::script::ScriptEngineFactory* getFactory() {return nullptr;}
	virtual void put($String* key, Object$* value) {}
	virtual void setBindings(::javax::script::Bindings* bindings, int32_t scope) {}
	virtual void setContext(::javax::script::ScriptContext* context) {}
	static $String* ARGV;
	static $String* FILENAME;
	static $String* ENGINE;
	static $String* ENGINE_VERSION;
	static $String* NAME;
	static $String* LANGUAGE;
	static $String* LANGUAGE_VERSION;
};

	} // script
} // javax

#pragma pop_macro("ARGV")
#pragma pop_macro("ENGINE")
#pragma pop_macro("ENGINE_VERSION")
#pragma pop_macro("FILENAME")
#pragma pop_macro("LANGUAGE")
#pragma pop_macro("LANGUAGE_VERSION")
#pragma pop_macro("NAME")

#endif // _javax_script_ScriptEngine_h_