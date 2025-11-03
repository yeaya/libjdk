#ifndef _javax_script_AbstractScriptEngine_h_
#define _javax_script_AbstractScriptEngine_h_
//$ class javax.script.AbstractScriptEngine
//$ extends javax.script.ScriptEngine

#include <javax/script/ScriptEngine.h>

namespace java {
	namespace io {
		class Reader;
	}
}
namespace javax {
	namespace script {
		class Bindings;
		class ScriptContext;
	}
}

namespace javax {
	namespace script {

class $import AbstractScriptEngine : public ::javax::script::ScriptEngine {
	$class(AbstractScriptEngine, $NO_CLASS_INIT, ::javax::script::ScriptEngine)
public:
	AbstractScriptEngine();
	using ::javax::script::ScriptEngine::eval;
	void init$();
	void init$(::javax::script::Bindings* n);
	virtual $Object* eval(::java::io::Reader* reader, ::javax::script::Bindings* bindings) override;
	virtual $Object* eval($String* script, ::javax::script::Bindings* bindings) override;
	virtual $Object* eval(::java::io::Reader* reader) override;
	virtual $Object* eval($String* script) override;
	virtual $Object* get($String* key) override;
	virtual ::javax::script::Bindings* getBindings(int32_t scope) override;
	virtual ::javax::script::ScriptContext* getContext() override;
	virtual ::javax::script::ScriptContext* getScriptContext(::javax::script::Bindings* nn);
	virtual void put($String* key, Object$* value) override;
	virtual void setBindings(::javax::script::Bindings* bindings, int32_t scope) override;
	virtual void setContext(::javax::script::ScriptContext* ctxt) override;
	::javax::script::ScriptContext* context = nullptr;
};

	} // script
} // javax

#endif // _javax_script_AbstractScriptEngine_h_