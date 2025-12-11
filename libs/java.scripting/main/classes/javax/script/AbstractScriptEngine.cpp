#include <javax/script/AbstractScriptEngine.h>

#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <javax/script/Bindings.h>
#include <javax/script/ScriptContext.h>
#include <javax/script/SimpleScriptContext.h>
#include <jcpp.h>

#undef ENGINE_SCOPE
#undef GLOBAL_SCOPE

using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Bindings = ::javax::script::Bindings;
using $ScriptContext = ::javax::script::ScriptContext;
using $SimpleScriptContext = ::javax::script::SimpleScriptContext;

namespace javax {
	namespace script {

$FieldInfo _AbstractScriptEngine_FieldInfo_[] = {
	{"context", "Ljavax/script/ScriptContext;", nullptr, $PROTECTED, $field(AbstractScriptEngine, context)},
	{}
};

$MethodInfo _AbstractScriptEngine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractScriptEngine::*)()>(&AbstractScriptEngine::init$))},
	{"<init>", "(Ljavax/script/Bindings;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractScriptEngine::*)($Bindings*)>(&AbstractScriptEngine::init$))},
	{"eval", "(Ljava/io/Reader;Ljavax/script/Bindings;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.script.ScriptException"},
	{"eval", "(Ljava/lang/String;Ljavax/script/Bindings;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.script.ScriptException"},
	{"eval", "(Ljava/io/Reader;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.script.ScriptException"},
	{"eval", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.script.ScriptException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBindings", "(I)Ljavax/script/Bindings;", nullptr, $PUBLIC},
	{"getContext", "()Ljavax/script/ScriptContext;", nullptr, $PUBLIC},
	{"getScriptContext", "(Ljavax/script/Bindings;)Ljavax/script/ScriptContext;", nullptr, $PROTECTED},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setBindings", "(Ljavax/script/Bindings;I)V", nullptr, $PUBLIC},
	{"setContext", "(Ljavax/script/ScriptContext;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractScriptEngine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.script.AbstractScriptEngine",
	"java.lang.Object",
	"javax.script.ScriptEngine",
	_AbstractScriptEngine_FieldInfo_,
	_AbstractScriptEngine_MethodInfo_
};

$Object* allocate$AbstractScriptEngine($Class* clazz) {
	return $of($alloc(AbstractScriptEngine));
}

void AbstractScriptEngine::init$() {
	$set(this, context, $new($SimpleScriptContext));
}

void AbstractScriptEngine::init$($Bindings* n) {
	AbstractScriptEngine::init$();
	if (n == nullptr) {
		$throwNew($NullPointerException, "n is null"_s);
	}
	$nc(this->context)->setBindings(n, $ScriptContext::ENGINE_SCOPE);
}

void AbstractScriptEngine::setContext($ScriptContext* ctxt) {
	if (ctxt == nullptr) {
		$throwNew($NullPointerException, "null context"_s);
	}
	$set(this, context, ctxt);
}

$ScriptContext* AbstractScriptEngine::getContext() {
	return this->context;
}

$Bindings* AbstractScriptEngine::getBindings(int32_t scope) {
	if (scope == $ScriptContext::GLOBAL_SCOPE) {
		return $nc(this->context)->getBindings($ScriptContext::GLOBAL_SCOPE);
	} else if (scope == $ScriptContext::ENGINE_SCOPE) {
		return $nc(this->context)->getBindings($ScriptContext::ENGINE_SCOPE);
	} else {
		$throwNew($IllegalArgumentException, "Invalid scope value."_s);
	}
}

void AbstractScriptEngine::setBindings($Bindings* bindings, int32_t scope) {
	if (scope == $ScriptContext::GLOBAL_SCOPE) {
		$nc(this->context)->setBindings(bindings, $ScriptContext::GLOBAL_SCOPE);
	} else if (scope == $ScriptContext::ENGINE_SCOPE) {
		$nc(this->context)->setBindings(bindings, $ScriptContext::ENGINE_SCOPE);
	} else {
		$throwNew($IllegalArgumentException, "Invalid scope value."_s);
	}
}

void AbstractScriptEngine::put($String* key, Object$* value) {
	$var($Bindings, nn, getBindings($ScriptContext::ENGINE_SCOPE));
	if (nn != nullptr) {
		nn->put(key, value);
	}
}

$Object* AbstractScriptEngine::get($String* key) {
	$var($Bindings, nn, getBindings($ScriptContext::ENGINE_SCOPE));
	if (nn != nullptr) {
		return $of(nn->get(key));
	}
	return $of(nullptr);
}

$Object* AbstractScriptEngine::eval($Reader* reader, $Bindings* bindings) {
	$var($ScriptContext, ctxt, getScriptContext(bindings));
	return $of(eval(reader, ctxt));
}

$Object* AbstractScriptEngine::eval($String* script, $Bindings* bindings) {
	$var($ScriptContext, ctxt, getScriptContext(bindings));
	return $of(eval(script, ctxt));
}

$Object* AbstractScriptEngine::eval($Reader* reader) {
	return $of(eval(reader, this->context));
}

$Object* AbstractScriptEngine::eval($String* script) {
	return $of(eval(script, this->context));
}

$ScriptContext* AbstractScriptEngine::getScriptContext($Bindings* nn) {
	$useLocalCurrentObjectStackCache();
	$var($Reader, var$0, $nc(this->context)->getReader());
	$var($Writer, var$1, $nc(this->context)->getWriter());
	$var($SimpleScriptContext, ctxt, $new($SimpleScriptContext, var$0, var$1, $($nc(this->context)->getErrorWriter())));
	$var($Bindings, gs, getBindings($ScriptContext::GLOBAL_SCOPE));
	if (gs != nullptr) {
		ctxt->setBindings(gs, $ScriptContext::GLOBAL_SCOPE);
	}
	if (nn != nullptr) {
		ctxt->setBindings(nn, $ScriptContext::ENGINE_SCOPE);
	} else {
		$throwNew($NullPointerException, "Engine scope Bindings may not be null."_s);
	}
	return ctxt;
}

AbstractScriptEngine::AbstractScriptEngine() {
}

$Class* AbstractScriptEngine::load$($String* name, bool initialize) {
	$loadClass(AbstractScriptEngine, name, initialize, &_AbstractScriptEngine_ClassInfo_, allocate$AbstractScriptEngine);
	return class$;
}

$Class* AbstractScriptEngine::class$ = nullptr;

	} // script
} // javax