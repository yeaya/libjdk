#include <HeadlessDefaultListCellRenderer_UIResource$2.h>
#include <HeadlessDefaultListCellRenderer_UIResource.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessDefaultListCellRenderer_UIResource$2::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer_UIResource$2::HeadlessDefaultListCellRenderer_UIResource$2() {
}

$Class* HeadlessDefaultListCellRenderer_UIResource$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessDefaultListCellRenderer_UIResource$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessDefaultListCellRenderer_UIResource",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessDefaultListCellRenderer_UIResource$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessDefaultListCellRenderer_UIResource$2",
		"java.awt.Component",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadlessDefaultListCellRenderer_UIResource"
	};
	$loadClass(HeadlessDefaultListCellRenderer_UIResource$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessDefaultListCellRenderer_UIResource$2));
	});
	return class$;
}

$Class* HeadlessDefaultListCellRenderer_UIResource$2::class$ = nullptr;