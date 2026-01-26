#include <javax/script/ScriptEngine.h>

#include <java/io/Reader.h>
#include <javax/script/Bindings.h>
#include <javax/script/ScriptContext.h>
#include <javax/script/ScriptEngineFactory.h>
#include <jcpp.h>

#undef ARGV
#undef ENGINE
#undef ENGINE_VERSION
#undef FILENAME
#undef LANGUAGE
#undef LANGUAGE_VERSION
#undef NAME

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bindings = ::javax::script::Bindings;
using $ScriptContext = ::javax::script::ScriptContext;
using $ScriptEngineFactory = ::javax::script::ScriptEngineFactory;

namespace javax {
	namespace script {

$FieldInfo _ScriptEngine_FieldInfo_[] = {
	{"ARGV", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, ARGV)},
	{"FILENAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, FILENAME)},
	{"ENGINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, ENGINE)},
	{"ENGINE_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, ENGINE_VERSION)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, NAME)},
	{"LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, LANGUAGE)},
	{"LANGUAGE_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScriptEngine, LANGUAGE_VERSION)},
	{}
};

$MethodInfo _ScriptEngine_MethodInfo_[] = {
	{"createBindings", "()Ljavax/script/Bindings;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, createBindings, $Bindings*)},
	{"eval", "(Ljava/lang/String;Ljavax/script/ScriptContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, eval, $Object*, $String*, $ScriptContext*), "javax.script.ScriptException"},
	{"eval", "(Ljava/io/Reader;Ljavax/script/ScriptContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, eval, $Object*, $Reader*, $ScriptContext*), "javax.script.ScriptException"},
	{"eval", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, eval, $Object*, $String*), "javax.script.ScriptException"},
	{"eval", "(Ljava/io/Reader;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, eval, $Object*, $Reader*), "javax.script.ScriptException"},
	{"eval", "(Ljava/lang/String;Ljavax/script/Bindings;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, eval, $Object*, $String*, $Bindings*), "javax.script.ScriptException"},
	{"eval", "(Ljava/io/Reader;Ljavax/script/Bindings;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, eval, $Object*, $Reader*, $Bindings*), "javax.script.ScriptException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, get, $Object*, $String*)},
	{"getBindings", "(I)Ljavax/script/Bindings;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, getBindings, $Bindings*, int32_t)},
	{"getContext", "()Ljavax/script/ScriptContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, getContext, $ScriptContext*)},
	{"getFactory", "()Ljavax/script/ScriptEngineFactory;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, getFactory, $ScriptEngineFactory*)},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, put, void, $String*, Object$*)},
	{"setBindings", "(Ljavax/script/Bindings;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, setBindings, void, $Bindings*, int32_t)},
	{"setContext", "(Ljavax/script/ScriptContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngine, setContext, void, $ScriptContext*)},
	{}
};

$ClassInfo _ScriptEngine_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.script.ScriptEngine",
	nullptr,
	nullptr,
	_ScriptEngine_FieldInfo_,
	_ScriptEngine_MethodInfo_
};

$Object* allocate$ScriptEngine($Class* clazz) {
	return $of($alloc(ScriptEngine));
}

$String* ScriptEngine::ARGV = nullptr;
$String* ScriptEngine::FILENAME = nullptr;
$String* ScriptEngine::ENGINE = nullptr;
$String* ScriptEngine::ENGINE_VERSION = nullptr;
$String* ScriptEngine::NAME = nullptr;
$String* ScriptEngine::LANGUAGE = nullptr;
$String* ScriptEngine::LANGUAGE_VERSION = nullptr;

void clinit$ScriptEngine($Class* class$) {
	$assignStatic(ScriptEngine::ARGV, "javax.script.argv"_s);
	$assignStatic(ScriptEngine::FILENAME, "javax.script.filename"_s);
	$assignStatic(ScriptEngine::ENGINE, "javax.script.engine"_s);
	$assignStatic(ScriptEngine::ENGINE_VERSION, "javax.script.engine_version"_s);
	$assignStatic(ScriptEngine::NAME, "javax.script.name"_s);
	$assignStatic(ScriptEngine::LANGUAGE, "javax.script.language"_s);
	$assignStatic(ScriptEngine::LANGUAGE_VERSION, "javax.script.language_version"_s);
}

$Class* ScriptEngine::load$($String* name, bool initialize) {
	$loadClass(ScriptEngine, name, initialize, &_ScriptEngine_ClassInfo_, clinit$ScriptEngine, allocate$ScriptEngine);
	return class$;
}

$Class* ScriptEngine::class$ = nullptr;

	} // script
} // javax