#include <javax/script/ScriptContext.h>

#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/util/List.h>
#include <javax/script/Bindings.h>
#include <jcpp.h>

#undef ENGINE_SCOPE
#undef GLOBAL_SCOPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace script {

$FieldInfo _ScriptContext_FieldInfo_[] = {
	{"ENGINE_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScriptContext, ENGINE_SCOPE)},
	{"GLOBAL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScriptContext, GLOBAL_SCOPE)},
	{}
};

$MethodInfo _ScriptContext_MethodInfo_[] = {
	{"getAttribute", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributesScope", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBindings", "(I)Ljavax/script/Bindings;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReader", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT},
	{"getScopes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAttribute", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBindings", "(Ljavax/script/Bindings;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setErrorWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setReader", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScriptContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.script.ScriptContext",
	nullptr,
	nullptr,
	_ScriptContext_FieldInfo_,
	_ScriptContext_MethodInfo_
};

$Object* allocate$ScriptContext($Class* clazz) {
	return $of($alloc(ScriptContext));
}

$Class* ScriptContext::load$($String* name, bool initialize) {
	$loadClass(ScriptContext, name, initialize, &_ScriptContext_ClassInfo_, allocate$ScriptContext);
	return class$;
}

$Class* ScriptContext::class$ = nullptr;

	} // script
} // javax