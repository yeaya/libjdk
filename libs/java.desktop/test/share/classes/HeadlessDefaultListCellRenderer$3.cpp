#include <HeadlessDefaultListCellRenderer$3.h>
#include <HeadlessDefaultListCellRenderer.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessDefaultListCellRenderer$3::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer$3::HeadlessDefaultListCellRenderer$3() {
}

$Class* HeadlessDefaultListCellRenderer$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessDefaultListCellRenderer$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessDefaultListCellRenderer",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessDefaultListCellRenderer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessDefaultListCellRenderer$3",
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
	$loadClass(HeadlessDefaultListCellRenderer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessDefaultListCellRenderer$3));
	});
	return class$;
}

$Class* HeadlessDefaultListCellRenderer$3::class$ = nullptr;