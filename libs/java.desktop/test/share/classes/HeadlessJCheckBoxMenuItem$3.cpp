#include <HeadlessJCheckBoxMenuItem$3.h>
#include <HeadlessJCheckBoxMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJCheckBoxMenuItem$3::init$() {
	$Component::init$();
}

HeadlessJCheckBoxMenuItem$3::HeadlessJCheckBoxMenuItem$3() {
}

$Class* HeadlessJCheckBoxMenuItem$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJCheckBoxMenuItem$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJCheckBoxMenuItem",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJCheckBoxMenuItem$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJCheckBoxMenuItem$3",
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
		"HeadlessJCheckBoxMenuItem"
	};
	$loadClass(HeadlessJCheckBoxMenuItem$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJCheckBoxMenuItem$3));
	});
	return class$;
}

$Class* HeadlessJCheckBoxMenuItem$3::class$ = nullptr;