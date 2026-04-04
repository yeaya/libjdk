#include <HeadlessJSpinner$3.h>
#include <HeadlessJSpinner.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJSpinner$3::init$() {
	$Component::init$();
}

HeadlessJSpinner$3::HeadlessJSpinner$3() {
}

$Class* HeadlessJSpinner$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJSpinner$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJSpinner",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJSpinner$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJSpinner$3",
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
		"HeadlessJSpinner"
	};
	$loadClass(HeadlessJSpinner$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJSpinner$3));
	});
	return class$;
}

$Class* HeadlessJSpinner$3::class$ = nullptr;