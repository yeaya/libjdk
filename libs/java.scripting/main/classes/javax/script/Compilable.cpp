#include <javax/script/Compilable.h>
#include <java/io/Reader.h>
#include <javax/script/CompiledScript.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompiledScript = ::javax::script::CompiledScript;

namespace javax {
	namespace script {

$Class* Compilable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"compile", "(Ljava/lang/String;)Ljavax/script/CompiledScript;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Compilable, compile, $CompiledScript*, $String*), "javax.script.ScriptException"},
		{"compile", "(Ljava/io/Reader;)Ljavax/script/CompiledScript;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Compilable, compile, $CompiledScript*, $Reader*), "javax.script.ScriptException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.script.Compilable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Compilable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Compilable);
	});
	return class$;
}

$Class* Compilable::class$ = nullptr;

	} // script
} // javax