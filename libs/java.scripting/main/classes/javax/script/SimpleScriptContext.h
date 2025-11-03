#ifndef _javax_script_SimpleScriptContext_h_
#define _javax_script_SimpleScriptContext_h_
//$ class javax.script.SimpleScriptContext
//$ extends javax.script.ScriptContext

#include <javax/script/ScriptContext.h>

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

class $export SimpleScriptContext : public ::javax::script::ScriptContext {
	$class(SimpleScriptContext, 0, ::javax::script::ScriptContext)
public:
	SimpleScriptContext();
	void init$();
	void init$(::java::io::Reader* reader, ::java::io::Writer* writer, ::java::io::Writer* errorWriter);
	void checkName($String* name);
	virtual $Object* getAttribute($String* name) override;
	virtual $Object* getAttribute($String* name, int32_t scope) override;
	virtual int32_t getAttributesScope($String* name) override;
	virtual ::javax::script::Bindings* getBindings(int32_t scope) override;
	virtual ::java::io::Writer* getErrorWriter() override;
	virtual ::java::io::Reader* getReader() override;
	virtual ::java::util::List* getScopes() override;
	virtual ::java::io::Writer* getWriter() override;
	virtual $Object* removeAttribute($String* name, int32_t scope) override;
	virtual void setAttribute($String* name, Object$* value, int32_t scope) override;
	virtual void setBindings(::javax::script::Bindings* bindings, int32_t scope) override;
	virtual void setErrorWriter(::java::io::Writer* writer) override;
	virtual void setReader(::java::io::Reader* reader) override;
	virtual void setWriter(::java::io::Writer* writer) override;
	::java::io::Writer* writer = nullptr;
	::java::io::Writer* errorWriter = nullptr;
	::java::io::Reader* reader = nullptr;
	::javax::script::Bindings* engineScope = nullptr;
	::javax::script::Bindings* globalScope = nullptr;
	static ::java::util::List* scopes;
};

	} // script
} // javax

#endif // _javax_script_SimpleScriptContext_h_