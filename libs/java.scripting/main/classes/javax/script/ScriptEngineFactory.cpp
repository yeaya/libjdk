#include <javax/script/ScriptEngineFactory.h>

#include <java/util/List.h>
#include <javax/script/ScriptEngine.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ScriptEngine = ::javax::script::ScriptEngine;

namespace javax {
	namespace script {

$MethodInfo _ScriptEngineFactory_MethodInfo_[] = {
	{"getEngineName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getEngineName, $String*)},
	{"getEngineVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getEngineVersion, $String*)},
	{"getExtensions", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getExtensions, $List*)},
	{"getLanguageName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getLanguageName, $String*)},
	{"getLanguageVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getLanguageVersion, $String*)},
	{"getMethodCallSyntax", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getMethodCallSyntax, $String*, $String*, $String*, $StringArray*)},
	{"getMimeTypes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getMimeTypes, $List*)},
	{"getNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getNames, $List*)},
	{"getOutputStatement", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getOutputStatement, $String*, $String*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getParameter, $Object*, $String*)},
	{"getProgram", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getProgram, $String*, $StringArray*)},
	{"getScriptEngine", "()Ljavax/script/ScriptEngine;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptEngineFactory, getScriptEngine, $ScriptEngine*)},
	{}
};

$ClassInfo _ScriptEngineFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.script.ScriptEngineFactory",
	nullptr,
	nullptr,
	nullptr,
	_ScriptEngineFactory_MethodInfo_
};

$Object* allocate$ScriptEngineFactory($Class* clazz) {
	return $of($alloc(ScriptEngineFactory));
}

$Class* ScriptEngineFactory::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineFactory, name, initialize, &_ScriptEngineFactory_ClassInfo_, allocate$ScriptEngineFactory);
	return class$;
}

$Class* ScriptEngineFactory::class$ = nullptr;

	} // script
} // javax