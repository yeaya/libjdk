#include <HeadlessJRadioButtonMenuItem$2.h>
#include <HeadlessJRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJRadioButtonMenuItem$2::init$() {
	$Component::init$();
}

HeadlessJRadioButtonMenuItem$2::HeadlessJRadioButtonMenuItem$2() {
}

$Class* HeadlessJRadioButtonMenuItem$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJRadioButtonMenuItem$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJRadioButtonMenuItem",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJRadioButtonMenuItem$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJRadioButtonMenuItem$2",
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
		"HeadlessJRadioButtonMenuItem"
	};
	$loadClass(HeadlessJRadioButtonMenuItem$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJRadioButtonMenuItem$2));
	});
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem$2::class$ = nullptr;