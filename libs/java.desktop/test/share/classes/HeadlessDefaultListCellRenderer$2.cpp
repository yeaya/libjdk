#include <HeadlessDefaultListCellRenderer$2.h>
#include <HeadlessDefaultListCellRenderer.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessDefaultListCellRenderer$2::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer$2::HeadlessDefaultListCellRenderer$2() {
}

$Class* HeadlessDefaultListCellRenderer$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessDefaultListCellRenderer$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessDefaultListCellRenderer",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessDefaultListCellRenderer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessDefaultListCellRenderer$2",
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
	$loadClass(HeadlessDefaultListCellRenderer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessDefaultListCellRenderer$2));
	});
	return class$;
}

$Class* HeadlessDefaultListCellRenderer$2::class$ = nullptr;