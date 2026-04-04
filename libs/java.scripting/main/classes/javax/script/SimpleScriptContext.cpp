#include <javax/script/SimpleScriptContext.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/script/Bindings.h>
#include <javax/script/ScriptContext.h>
#include <javax/script/SimpleBindings.h>
#include <jcpp.h>

#undef ENGINE_SCOPE
#undef GLOBAL_SCOPE

using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Bindings = ::javax::script::Bindings;
using $ScriptContext = ::javax::script::ScriptContext;
using $SimpleBindings = ::javax::script::SimpleBindings;

namespace javax {
	namespace script {

$List* SimpleScriptContext::scopes = nullptr;

void SimpleScriptContext::init$() {
	$useLocalObjectStack();
	$var($Reader, var$0, $new($InputStreamReader, $System::in));
	$var($Writer, var$1, $new($PrintWriter, $System::out, true));
	SimpleScriptContext::init$(var$0, var$1, $$new($PrintWriter, $System::err, true));
	$set(this, engineScope, $new($SimpleBindings));
	$set(this, globalScope, nullptr);
}

void SimpleScriptContext::init$($Reader* reader, $Writer* writer, $Writer* errorWriter) {
	$set(this, reader, reader);
	$set(this, writer, writer);
	$set(this, errorWriter, errorWriter);
}

void SimpleScriptContext::setBindings($Bindings* bindings, int32_t scope) {
	switch (scope) {
	case $ScriptContext::ENGINE_SCOPE:
		if (bindings == nullptr) {
			$throwNew($NullPointerException, "Engine scope cannot be null."_s);
		}
		$set(this, engineScope, bindings);
		break;
	case $ScriptContext::GLOBAL_SCOPE:
		$set(this, globalScope, bindings);
		break;
	default:
		$throwNew($IllegalArgumentException, "Invalid scope value."_s);
	}
}

$Object* SimpleScriptContext::getAttribute($String* name) {
	checkName(name);
	if ($nc(this->engineScope)->containsKey(name)) {
		return getAttribute(name, $ScriptContext::ENGINE_SCOPE);
	} else if (this->globalScope != nullptr && this->globalScope->containsKey(name)) {
		return getAttribute(name, $ScriptContext::GLOBAL_SCOPE);
	}
	return nullptr;
}

$Object* SimpleScriptContext::getAttribute($String* name, int32_t scope) {
	checkName(name);
	switch (scope) {
	case $ScriptContext::ENGINE_SCOPE:
		return $nc(this->engineScope)->get(name);
	case $ScriptContext::GLOBAL_SCOPE:
		if (this->globalScope != nullptr) {
			return this->globalScope->get(name);
		}
		return nullptr;
	default:
		$throwNew($IllegalArgumentException, "Illegal scope value."_s);
	}
}

$Object* SimpleScriptContext::removeAttribute($String* name, int32_t scope) {
	$useLocalObjectStack();
	checkName(name);
	switch (scope) {
	case $ScriptContext::ENGINE_SCOPE:
		if (getBindings($ScriptContext::ENGINE_SCOPE) != nullptr) {
			return $$nc(getBindings($ScriptContext::ENGINE_SCOPE))->remove(name);
		}
		return nullptr;
	case $ScriptContext::GLOBAL_SCOPE:
		if (getBindings($ScriptContext::GLOBAL_SCOPE) != nullptr) {
			return $$nc(getBindings($ScriptContext::GLOBAL_SCOPE))->remove(name);
		}
		return nullptr;
	default:
		$throwNew($IllegalArgumentException, "Illegal scope value."_s);
	}
}

void SimpleScriptContext::setAttribute($String* name, Object$* value, int32_t scope) {
	checkName(name);
	switch (scope) {
	case $ScriptContext::ENGINE_SCOPE:
		$nc(this->engineScope)->put(name, value);
		return;
	case $ScriptContext::GLOBAL_SCOPE:
		if (this->globalScope != nullptr) {
			this->globalScope->put(name, value);
		}
		return;
	default:
		$throwNew($IllegalArgumentException, "Illegal scope value."_s);
	}
}

$Writer* SimpleScriptContext::getWriter() {
	return this->writer;
}

$Reader* SimpleScriptContext::getReader() {
	return this->reader;
}

void SimpleScriptContext::setReader($Reader* reader) {
	$set(this, reader, reader);
}

void SimpleScriptContext::setWriter($Writer* writer) {
	$set(this, writer, writer);
}

$Writer* SimpleScriptContext::getErrorWriter() {
	return this->errorWriter;
}

void SimpleScriptContext::setErrorWriter($Writer* writer) {
	$set(this, errorWriter, writer);
}

int32_t SimpleScriptContext::getAttributesScope($String* name) {
	checkName(name);
	if ($nc(this->engineScope)->containsKey(name)) {
		return $ScriptContext::ENGINE_SCOPE;
	} else if (this->globalScope != nullptr && this->globalScope->containsKey(name)) {
		return $ScriptContext::GLOBAL_SCOPE;
	} else {
		return -1;
	}
}

$Bindings* SimpleScriptContext::getBindings(int32_t scope) {
	if (scope == $ScriptContext::ENGINE_SCOPE) {
		return this->engineScope;
	} else if (scope == $ScriptContext::GLOBAL_SCOPE) {
		return this->globalScope;
	} else {
		$throwNew($IllegalArgumentException, "Illegal scope value."_s);
	}
}

$List* SimpleScriptContext::getScopes() {
	return SimpleScriptContext::scopes;
}

void SimpleScriptContext::checkName($String* name) {
	$Objects::requireNonNull(name);
	if (name->isEmpty()) {
		$throwNew($IllegalArgumentException, "name cannot be empty"_s);
	}
}

void SimpleScriptContext::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($Object, var$0, $Integer::valueOf($ScriptContext::ENGINE_SCOPE));
	$assignStatic(SimpleScriptContext::scopes, $List::of(var$0, $($Integer::valueOf($ScriptContext::GLOBAL_SCOPE))));
}

SimpleScriptContext::SimpleScriptContext() {
}

$Class* SimpleScriptContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"writer", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(SimpleScriptContext, writer)},
		{"errorWriter", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(SimpleScriptContext, errorWriter)},
		{"reader", "Ljava/io/Reader;", nullptr, $PROTECTED, $field(SimpleScriptContext, reader)},
		{"engineScope", "Ljavax/script/Bindings;", nullptr, $PROTECTED, $field(SimpleScriptContext, engineScope)},
		{"globalScope", "Ljavax/script/Bindings;", nullptr, $PROTECTED, $field(SimpleScriptContext, globalScope)},
		{"scopes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SimpleScriptContext, scopes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleScriptContext, init$, void)},
		{"<init>", "(Ljava/io/Reader;Ljava/io/Writer;Ljava/io/Writer;)V", nullptr, 0, $method(SimpleScriptContext, init$, void, $Reader*, $Writer*, $Writer*)},
		{"checkName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(SimpleScriptContext, checkName, void, $String*)},
		{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getAttribute, $Object*, $String*)},
		{"getAttribute", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getAttribute, $Object*, $String*, int32_t)},
		{"getAttributesScope", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getAttributesScope, int32_t, $String*)},
		{"getBindings", "(I)Ljavax/script/Bindings;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getBindings, $Bindings*, int32_t)},
		{"getErrorWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getErrorWriter, $Writer*)},
		{"getReader", "()Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getReader, $Reader*)},
		{"getScopes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(SimpleScriptContext, getScopes, $List*)},
		{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, getWriter, $Writer*)},
		{"removeAttribute", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, removeAttribute, $Object*, $String*, int32_t)},
		{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, setAttribute, void, $String*, Object$*, int32_t)},
		{"setBindings", "(Ljavax/script/Bindings;I)V", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, setBindings, void, $Bindings*, int32_t)},
		{"setErrorWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, setErrorWriter, void, $Writer*)},
		{"setReader", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, setReader, void, $Reader*)},
		{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(SimpleScriptContext, setWriter, void, $Writer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.script.SimpleScriptContext",
		"java.lang.Object",
		"javax.script.ScriptContext",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleScriptContext, name, initialize, &classInfo$$, SimpleScriptContext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleScriptContext);
	});
	return class$;
}

$Class* SimpleScriptContext::class$ = nullptr;

	} // script
} // javax