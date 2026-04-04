#include <java/awt/font/TextLine$4.h>
#include <java/awt/font/TextLine$Function.h>
#include <java/awt/font/TextLine.h>
#include <sun/font/TextLineComponent.h>
#include <jcpp.h>

using $TextLine = ::java::awt::font::TextLine;
using $TextLine$Function = ::java::awt::font::TextLine$Function;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextLineComponent = ::sun::font::TextLineComponent;

namespace java {
	namespace awt {
		namespace font {

void TextLine$4::init$() {
	$TextLine$Function::init$();
}

float TextLine$4::computeFunction($TextLine* line, int32_t componentIndex, int32_t indexInArray) {
	$var($TextLineComponent, tlc, $nc($nc(line)->fComponents)->get(componentIndex));
	float charPos = $nc(tlc)->getCharY(indexInArray);
	return charPos + line->getComponentShift(componentIndex);
}

TextLine$4::TextLine$4() {
}

$Class* TextLine$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TextLine$4, init$, void)},
		{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, 0, $virtualMethod(TextLine$4, computeFunction, float, $TextLine*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.font.TextLine",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.font.TextLine$4", nullptr, nullptr, 0},
		{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.font.TextLine$4",
		"java.awt.font.TextLine$Function",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.font.TextLine"
	};
	$loadClass(TextLine$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextLine$4);
	});
	return class$;
}

$Class* TextLine$4::class$ = nullptr;

		} // font
	} // awt
} // java