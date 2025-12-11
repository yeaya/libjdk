#include <javax/script/Compilable.h>

#include <java/io/Reader.h>
#include <javax/script/CompiledScript.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace script {

$MethodInfo _Compilable_MethodInfo_[] = {
	{"compile", "(Ljava/lang/String;)Ljavax/script/CompiledScript;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.script.ScriptException"},
	{"compile", "(Ljava/io/Reader;)Ljavax/script/CompiledScript;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.script.ScriptException"},
	{}
};

$ClassInfo _Compilable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.script.Compilable",
	nullptr,
	nullptr,
	nullptr,
	_Compilable_MethodInfo_
};

$Object* allocate$Compilable($Class* clazz) {
	return $of($alloc(Compilable));
}

$Class* Compilable::load$($String* name, bool initialize) {
	$loadClass(Compilable, name, initialize, &_Compilable_ClassInfo_, allocate$Compilable);
	return class$;
}

$Class* Compilable::class$ = nullptr;

	} // script
} // javax