#include <java/awt/font/NumericShaper$Range$1.h>
#include <java/awt/font/NumericShaper$Range.h>
#include <jcpp.h>

using $NumericShaper$Range = ::java::awt::font::NumericShaper$Range;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

void NumericShaper$Range$1::init$($String* $enum$name, int32_t $enum$ordinal, int32_t base, int32_t start, int32_t end) {
	$NumericShaper$Range::init$($enum$name, $enum$ordinal, base, start, end);
}

char16_t NumericShaper$Range$1::getNumericBase() {
	return 1;
}

NumericShaper$Range$1::NumericShaper$Range$1() {
}

$Class* NumericShaper$Range$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;IIII)V", nullptr, $PRIVATE, $method(NumericShaper$Range$1, init$, void, $String*, int32_t, int32_t, int32_t, int32_t)},
		{"getNumericBase", "()C", nullptr, 0, $virtualMethod(NumericShaper$Range$1, getNumericBase, char16_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.font.NumericShaper$Range",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.font.NumericShaper$Range", "java.awt.font.NumericShaper", "Range", $PUBLIC | $STATIC | $ENUM},
		{"java.awt.font.NumericShaper$Range$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.awt.font.NumericShaper$Range$1",
		"java.awt.font.NumericShaper$Range",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.font.NumericShaper"
	};
	$loadClass(NumericShaper$Range$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NumericShaper$Range$1));
	});
	return class$;
}

$Class* NumericShaper$Range$1::class$ = nullptr;

		} // font
	} // awt
} // java