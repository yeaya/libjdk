#include <HeadlessJRadioButtonMenuItem$3.h>
#include <HeadlessJRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJRadioButtonMenuItem$3::init$() {
	$Component::init$();
}

HeadlessJRadioButtonMenuItem$3::HeadlessJRadioButtonMenuItem$3() {
}

$Class* HeadlessJRadioButtonMenuItem$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJRadioButtonMenuItem$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJRadioButtonMenuItem",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJRadioButtonMenuItem$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJRadioButtonMenuItem$3",
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
	$loadClass(HeadlessJRadioButtonMenuItem$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJRadioButtonMenuItem$3));
	});
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem$3::class$ = nullptr;