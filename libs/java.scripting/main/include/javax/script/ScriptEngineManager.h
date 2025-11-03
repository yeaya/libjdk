#ifndef _javax_script_ScriptEngineManager_h_
#define _javax_script_ScriptEngineManager_h_
//$ class javax.script.ScriptEngineManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("COMPARATOR")
#undef COMPARATOR
#pragma push_macro("DEBUG")
#undef DEBUG

namespace java {
	namespace lang {
		class ClassLoader;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Comparator;
		class HashMap;
		class List;
		class Map;
		class ServiceLoader;
		class TreeSet;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace javax {
	namespace script {
		class Bindings;
		class ScriptEngine;
		class ScriptEngineFactory;
	}
}

namespace javax {
	namespace script {

class $import ScriptEngineManager : public ::java::lang::Object {
	$class(ScriptEngineManager, 0, ::java::lang::Object)
public:
	ScriptEngineManager();
	void init$();
	void init$(::java::lang::ClassLoader* loader);
	static void associateFactory(::java::util::Map* associations, $String* association, ::javax::script::ScriptEngineFactory* factory);
	static void debugPrint($Throwable* exp);
	virtual $Object* get($String* key);
	virtual ::javax::script::Bindings* getBindings();
	::javax::script::ScriptEngine* getEngineBy($String* selector, ::java::util::Map* associations, ::java::util::function::Function* valuesFn);
	virtual ::javax::script::ScriptEngine* getEngineByExtension($String* extension);
	virtual ::javax::script::ScriptEngine* getEngineByMimeType($String* mimeType);
	virtual ::javax::script::ScriptEngine* getEngineByName($String* shortName);
	virtual ::java::util::List* getEngineFactories();
	::java::util::ServiceLoader* getServiceLoader(::java::lang::ClassLoader* loader);
	void initEngines(::java::lang::ClassLoader* loader);
	static bool lambda$getEngineBy$1(::java::util::function::Function* valuesFn, $String* selector, ::javax::script::ScriptEngineFactory* spi);
	::javax::script::ScriptEngine* lambda$getEngineBy$2(::javax::script::ScriptEngineFactory* spi);
	::java::util::ServiceLoader* lambda$initEngines$0(::java::lang::ClassLoader* loader);
	virtual void put($String* key, Object$* value);
	virtual void registerEngineExtension($String* extension, ::javax::script::ScriptEngineFactory* factory);
	virtual void registerEngineMimeType($String* type, ::javax::script::ScriptEngineFactory* factory);
	virtual void registerEngineName($String* name, ::javax::script::ScriptEngineFactory* factory);
	static void reportException($String* msg, $Throwable* exp);
	virtual void setBindings(::javax::script::Bindings* bindings);
	static const bool DEBUG = false;
	static ::java::util::Comparator* COMPARATOR;
	::java::util::TreeSet* engineSpis = nullptr;
	::java::util::HashMap* nameAssociations = nullptr;
	::java::util::HashMap* extensionAssociations = nullptr;
	::java::util::HashMap* mimeTypeAssociations = nullptr;
	::javax::script::Bindings* globalScope = nullptr;
};

	} // script
} // javax

#pragma pop_macro("COMPARATOR")
#pragma pop_macro("DEBUG")

#endif // _javax_script_ScriptEngineManager_h_