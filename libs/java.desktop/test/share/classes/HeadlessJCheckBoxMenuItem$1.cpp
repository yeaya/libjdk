#include <HeadlessJCheckBoxMenuItem$1.h>
#include <HeadlessJCheckBoxMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJCheckBoxMenuItem$1::init$() {
	$Component::init$();
}

HeadlessJCheckBoxMenuItem$1::HeadlessJCheckBoxMenuItem$1() {
}

$Class* HeadlessJCheckBoxMenuItem$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJCheckBoxMenuItem$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJCheckBoxMenuItem",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJCheckBoxMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJCheckBoxMenuItem$1",
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
	$loadClass(HeadlessJCheckBoxMenuItem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJCheckBoxMenuItem$1));
	});
	return class$;
}

$Class* HeadlessJCheckBoxMenuItem$1::class$ = nullptr;