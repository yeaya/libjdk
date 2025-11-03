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
	{"getEngineName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEngineVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExtensions", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getLanguageName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLanguageVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMethodCallSyntax", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getMimeTypes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getOutputStatement", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProgram", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getScriptEngine", "()Ljavax/script/ScriptEngine;", nullptr, $PUBLIC | $ABSTRACT},
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