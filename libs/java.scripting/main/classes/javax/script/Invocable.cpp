#include <javax/script/Invocable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace script {

$Class* Invocable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInterface", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Invocable, getInterface, $Object*, $Class*)},
		{"getInterface", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Invocable, getInterface, $Object*, Object$*, $Class*)},
		{"invokeFunction", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Invocable, invokeFunction, $Object*, $String*, $ObjectArray*), "javax.script.ScriptException,java.lang.NoSuchMethodException"},
		{"invokeMethod", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Invocable, invokeMethod, $Object*, Object$*, $String*, $ObjectArray*), "javax.script.ScriptException,java.lang.NoSuchMethodException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.script.Invocable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Invocable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Invocable);
	});
	return class$;
}

$Class* Invocable::class$ = nullptr;

	} // script
} // javax