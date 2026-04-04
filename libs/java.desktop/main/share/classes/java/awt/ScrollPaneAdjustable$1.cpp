#include <java/awt/ScrollPaneAdjustable$1.h>
#include <java/awt/ScrollPaneAdjustable.h>
#include <jcpp.h>

using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void ScrollPaneAdjustable$1::init$() {
}

void ScrollPaneAdjustable$1::setTypedValue($ScrollPaneAdjustable* adj, int32_t v, int32_t type) {
	$nc(adj)->setTypedValue(v, type);
}

ScrollPaneAdjustable$1::ScrollPaneAdjustable$1() {
}

$Class* ScrollPaneAdjustable$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ScrollPaneAdjustable$1, init$, void)},
		{"setTypedValue", "(Ljava/awt/ScrollPaneAdjustable;II)V", nullptr, $PUBLIC, $virtualMethod(ScrollPaneAdjustable$1, setTypedValue, void, $ScrollPaneAdjustable*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.ScrollPaneAdjustable",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.ScrollPaneAdjustable$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor", "sun.awt.AWTAccessor", "ScrollPaneAdjustableAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.ScrollPaneAdjustable$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.ScrollPaneAdjustable"
	};
	$loadClass(ScrollPaneAdjustable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollPaneAdjustable$1);
	});
	return class$;
}

$Class* ScrollPaneAdjustable$1::class$ = nullptr;

	} // awt
} // java