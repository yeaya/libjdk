#include <HeadlessDefaultListCellRenderer$1.h>
#include <HeadlessDefaultListCellRenderer.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessDefaultListCellRenderer$1::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer$1::HeadlessDefaultListCellRenderer$1() {
}

$Class* HeadlessDefaultListCellRenderer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessDefaultListCellRenderer$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessDefaultListCellRenderer",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessDefaultListCellRenderer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessDefaultListCellRenderer$1",
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
		"HeadlessDefaultListCellRenderer"
	};
	$loadClass(HeadlessDefaultListCellRenderer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessDefaultListCellRenderer$1));
	});
	return class$;
}

$Class* HeadlessDefaultListCellRenderer$1::class$ = nullptr;