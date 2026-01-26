#include <javax/script/Invocable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace script {

$MethodInfo _Invocable_MethodInfo_[] = {
	{"getInterface", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Invocable, getInterface, $Object*, $Class*)},
	{"getInterface", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Invocable, getInterface, $Object*, Object$*, $Class*)},
	{"invokeFunction", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Invocable, invokeFunction, $Object*, $String*, $ObjectArray*), "javax.script.ScriptException,java.lang.NoSuchMethodException"},
	{"invokeMethod", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Invocable, invokeMethod, $Object*, Object$*, $String*, $ObjectArray*), "javax.script.ScriptException,java.lang.NoSuchMethodException"},
	{}
};

$ClassInfo _Invocable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.script.Invocable",
	nullptr,
	nullptr,
	nullptr,
	_Invocable_MethodInfo_
};

$Object* allocate$Invocable($Class* clazz) {
	return $of($alloc(Invocable));
}

$Class* Invocable::load$($String* name, bool initialize) {
	$loadClass(Invocable, name, initialize, &_Invocable_ClassInfo_, allocate$Invocable);
	return class$;
}

$Class* Invocable::class$ = nullptr;

	} // script
} // javax