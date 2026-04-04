#include <javax/tools/DocumentationTool$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/DocumentationTool$Location.h>
#include <javax/tools/DocumentationTool.h>
#include <jcpp.h>

#undef DOCUMENTATION_OUTPUT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DocumentationTool$Location = ::javax::tools::DocumentationTool$Location;

namespace javax {
	namespace tools {

$ints* DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location = nullptr;

void DocumentationTool$1::clinit$($Class* clazz) {
	$assignStatic(DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location, $new($ints, $($DocumentationTool$Location::values())->length));
	{
		try {
			DocumentationTool$1::$SwitchMap$javax$tools$DocumentationTool$Location->set($DocumentationTool$Location::DOCUMENTATION_OUTPUT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocumentationTool$1::DocumentationTool$1() {
}

$Class* DocumentationTool$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$tools$DocumentationTool$Location", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocumentationTool$1, $SwitchMap$javax$tools$DocumentationTool$Location)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.tools.DocumentationTool",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.DocumentationTool$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.tools.DocumentationTool$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.tools.DocumentationTool"
	};
	$loadClass(DocumentationTool$1, name, initialize, &classInfo$$, DocumentationTool$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentationTool$1);
	});
	return class$;
}

$Class* DocumentationTool$1::class$ = nullptr;

	} // tools
} // javax