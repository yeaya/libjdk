#include <java/awt/font/NumericShaper$1.h>
#include <java/awt/font/NumericShaper$Range.h>
#include <java/awt/font/NumericShaper.h>
#include <jcpp.h>

using $NumericShaper = ::java::awt::font::NumericShaper;
using $NumericShaper$Range = ::java::awt::font::NumericShaper$Range;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

void NumericShaper$1::init$($NumericShaper* this$0) {
	$set(this, this$0, this$0);
}

int32_t NumericShaper$1::compare($NumericShaper$Range* s1, $NumericShaper$Range* s2) {
	return $nc(s1)->base > $nc(s2)->base ? 1 : s1->base == s2->base ? 0 : -1;
}

int32_t NumericShaper$1::compare(Object$* s1, Object$* s2) {
	return this->compare($cast($NumericShaper$Range, s1), $cast($NumericShaper$Range, s2));
}

NumericShaper$1::NumericShaper$1() {
}

$Class* NumericShaper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/font/NumericShaper;", nullptr, $FINAL | $SYNTHETIC, $field(NumericShaper$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/font/NumericShaper;)V", nullptr, 0, $method(NumericShaper$1, init$, void, $NumericShaper*)},
		{"compare", "(Ljava/awt/font/NumericShaper$Range;Ljava/awt/font/NumericShaper$Range;)I", nullptr, $PUBLIC, $virtualMethod(NumericShaper$1, compare, int32_t, $NumericShaper$Range*, $NumericShaper$Range*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(NumericShaper$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.font.NumericShaper",
		"<init>",
		"(Ljava/awt/font/NumericShaper$Range;Ljava/util/Set;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.font.NumericShaper$1", nullptr, nullptr, 0},
		{"java.awt.font.NumericShaper$Range", "java.awt.font.NumericShaper", "Range", $PUBLIC | $STATIC | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.font.NumericShaper$1",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/awt/font/NumericShaper$Range;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.font.NumericShaper"
	};
	$loadClass(NumericShaper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NumericShaper$1);
	});
	return class$;
}

$Class* NumericShaper$1::class$ = nullptr;

		} // font
	} // awt
} // java