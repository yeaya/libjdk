#include <HeadlessJTree$4.h>
#include <HeadlessJTree.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJTree$4::init$() {
	$Component::init$();
}

HeadlessJTree$4::HeadlessJTree$4() {
}

$Class* HeadlessJTree$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJTree$4, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJTree",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJTree$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJTree$4",
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
		"HeadlessJTree"
	};
	$loadClass(HeadlessJTree$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJTree$4));
	});
	return class$;
}

$Class* HeadlessJTree$4::class$ = nullptr;