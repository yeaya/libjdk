#include <java/awt/font/TextLine$Function.h>
#include <java/awt/font/TextLine.h>
#include <jcpp.h>

using $TextLine = ::java::awt::font::TextLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

void TextLine$Function::init$() {
}

TextLine$Function::TextLine$Function() {
}

$Class* TextLine$Function::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TextLine$Function, init$, void)},
		{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, $ABSTRACT, $virtualMethod(TextLine$Function, computeFunction, float, $TextLine*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.awt.font.TextLine$Function",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.font.TextLine"
	};
	$loadClass(TextLine$Function, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextLine$Function);
	});
	return class$;
}

$Class* TextLine$Function::class$ = nullptr;

		} // font
	} // awt
} // java