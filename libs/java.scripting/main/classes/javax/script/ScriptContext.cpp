#include <javax/script/ScriptContext.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/util/List.h>
#include <javax/script/Bindings.h>
#include <jcpp.h>

#undef ENGINE_SCOPE
#undef GLOBAL_SCOPE

using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Bindings = ::javax::script::Bindings;

namespace javax {
	namespace script {

$Class* ScriptContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ENGINE_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScriptContext, ENGINE_SCOPE)},
		{"GLOBAL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScriptContext, GLOBAL_SCOPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAttribute", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getAttribute, $Object*, $String*, int32_t)},
		{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getAttribute, $Object*, $String*)},
		{"getAttributesScope", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getAttributesScope, int32_t, $String*)},
		{"getBindings", "(I)Ljavax/script/Bindings;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getBindings, $Bindings*, int32_t)},
		{"getErrorWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getErrorWriter, $Writer*)},
		{"getReader", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getReader, $Reader*)},
		{"getScopes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getScopes, $List*)},
		{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, getWriter, $Writer*)},
		{"removeAttribute", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, removeAttribute, $Object*, $String*, int32_t)},
		{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, setAttribute, void, $String*, Object$*, int32_t)},
		{"setBindings", "(Ljavax/script/Bindings;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, setBindings, void, $Bindings*, int32_t)},
		{"setErrorWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, setErrorWriter, void, $Writer*)},
		{"setReader", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, setReader, void, $Reader*)},
		{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScriptContext, setWriter, void, $Writer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.script.ScriptContext",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScriptContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptContext);
	});
	return class$;
}

$Class* ScriptContext::class$ = nullptr;

	} // script
} // javax