#include <HeadlessJToolBar_Separator$3.h>
#include <HeadlessJToolBar_Separator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJToolBar_Separator$3::init$() {
	$Component::init$();
}

HeadlessJToolBar_Separator$3::HeadlessJToolBar_Separator$3() {
}

$Class* HeadlessJToolBar_Separator$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJToolBar_Separator$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJToolBar_Separator",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJToolBar_Separator$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJToolBar_Separator$3",
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
		"HeadlessJToolBar_Separator"
	};
	$loadClass(HeadlessJToolBar_Separator$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJToolBar_Separator$3));
	});
	return class$;
}

$Class* HeadlessJToolBar_Separator$3::class$ = nullptr;