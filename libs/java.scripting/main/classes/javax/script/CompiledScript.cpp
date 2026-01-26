#include <javax/script/CompiledScript.h>

#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <javax/script/Bindings.h>
#include <javax/script/ScriptContext.h>
#include <javax/script/ScriptEngine.h>
#include <javax/script/SimpleScriptContext.h>
#include <jcpp.h>

#undef ENGINE_SCOPE
#undef GLOBAL_SCOPE

using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bindings = ::javax::script::Bindings;
using $ScriptContext = ::javax::script::ScriptContext;
using $ScriptEngine = ::javax::script::ScriptEngine;
using $SimpleScriptContext = ::javax::script::SimpleScriptContext;

namespace javax {
	namespace script {

$MethodInfo _CompiledScript_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CompiledScript, init$, void)},
	{"eval", "(Ljavax/script/ScriptContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompiledScript, eval, $Object*, $ScriptContext*), "javax.script.ScriptException"},
	{"eval", "(Ljavax/script/Bindings;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompiledScript, eval, $Object*, $Bindings*), "javax.script.ScriptException"},
	{"eval", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompiledScript, eval, $Object*), "javax.script.ScriptException"},
	{"getEngine", "()Ljavax/script/ScriptEngine;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompiledScript, getEngine, $ScriptEngine*)},
	{}
};

$ClassInfo _CompiledScript_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.script.CompiledScript",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CompiledScript_MethodInfo_
};

$Object* allocate$CompiledScript($Class* clazz) {
	return $of($alloc(CompiledScript));
}

void CompiledScript::init$() {
}

$Object* CompiledScript::eval($Bindings* bindings) {
	$useLocalCurrentObjectStackCache();
	$var($ScriptContext, ctxt, $nc($(getEngine()))->getContext());
	if (bindings != nullptr) {
		$var($Reader, var$0, $nc(ctxt)->getReader());
		$var($Writer, var$1, ctxt->getWriter());
		$var($SimpleScriptContext, tempctxt, $new($SimpleScriptContext, var$0, var$1, $(ctxt->getErrorWriter())));
		tempctxt->setBindings(bindings, $ScriptContext::ENGINE_SCOPE);
		tempctxt->setBindings($($nc(ctxt)->getBindings($ScriptContext::GLOBAL_SCOPE)), $ScriptContext::GLOBAL_SCOPE);
		$assign(ctxt, tempctxt);
	}
	return $of(eval(ctxt));
}

$Object* CompiledScript::eval() {
	$useLocalCurrentObjectStackCache();
	return $of(eval($($nc($(getEngine()))->getContext())));
}

CompiledScript::CompiledScript() {
}

$Class* CompiledScript::load$($String* name, bool initialize) {
	$loadClass(CompiledScript, name, initialize, &_CompiledScript_ClassInfo_, allocate$CompiledScript);
	return class$;
}

$Class* CompiledScript::class$ = nullptr;

	} // script
} // javax