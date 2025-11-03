#ifndef _javax_script_ScriptEngineFactory_h_
#define _javax_script_ScriptEngineFactory_h_
//$ interface javax.script.ScriptEngineFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace script {
		class ScriptEngine;
	}
}

namespace javax {
	namespace script {

class $import ScriptEngineFactory : public ::java::lang::Object {
	$interface(ScriptEngineFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getEngineName() {return nullptr;}
	virtual $String* getEngineVersion() {return nullptr;}
	virtual ::java::util::List* getExtensions() {return nullptr;}
	virtual $String* getLanguageName() {return nullptr;}
	virtual $String* getLanguageVersion() {return nullptr;}
	virtual $String* getMethodCallSyntax($String* obj, $String* m, $StringArray* args) {return nullptr;}
	virtual ::java::util::List* getMimeTypes() {return nullptr;}
	virtual ::java::util::List* getNames() {return nullptr;}
	virtual $String* getOutputStatement($String* toDisplay) {return nullptr;}
	virtual $Object* getParameter($String* key) {return nullptr;}
	virtual $String* getProgram($StringArray* statements) {return nullptr;}
	virtual ::javax::script::ScriptEngine* getScriptEngine() {return nullptr;}
};

	} // script
} // javax

#endif // _javax_script_ScriptEngineFactory_h_