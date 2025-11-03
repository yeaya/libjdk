#ifndef _javax_script_ScriptContext_h_
#define _javax_script_ScriptContext_h_
//$ interface javax.script.ScriptContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ENGINE_SCOPE")
#undef ENGINE_SCOPE
#pragma push_macro("GLOBAL_SCOPE")
#undef GLOBAL_SCOPE

namespace java {
	namespace io {
		class Reader;
		class Writer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace script {
		class Bindings;
	}
}

namespace javax {
	namespace script {

class $import ScriptContext : public ::java::lang::Object {
	$interface(ScriptContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getAttribute($String* name, int32_t scope) {return nullptr;}
	virtual $Object* getAttribute($String* name) {return nullptr;}
	virtual int32_t getAttributesScope($String* name) {return 0;}
	virtual ::javax::script::Bindings* getBindings(int32_t scope) {return nullptr;}
	virtual ::java::io::Writer* getErrorWriter() {return nullptr;}
	virtual ::java::io::Reader* getReader() {return nullptr;}
	virtual ::java::util::List* getScopes() {return nullptr;}
	virtual ::java::io::Writer* getWriter() {return nullptr;}
	virtual $Object* removeAttribute($String* name, int32_t scope) {return nullptr;}
	virtual void setAttribute($String* name, Object$* value, int32_t scope) {}
	virtual void setBindings(::javax::script::Bindings* bindings, int32_t scope) {}
	virtual void setErrorWriter(::java::io::Writer* writer) {}
	virtual void setReader(::java::io::Reader* reader) {}
	virtual void setWriter(::java::io::Writer* writer) {}
	static const int32_t ENGINE_SCOPE = 100;
	static const int32_t GLOBAL_SCOPE = 200;
};

	} // script
} // javax

#pragma pop_macro("ENGINE_SCOPE")
#pragma pop_macro("GLOBAL_SCOPE")

#endif // _javax_script_ScriptContext_h_