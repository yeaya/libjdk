#include <HeadlessJRadioButtonMenuItem$1.h>
#include <HeadlessJRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJRadioButtonMenuItem$1::init$() {
	$Component::init$();
}

HeadlessJRadioButtonMenuItem$1::HeadlessJRadioButtonMenuItem$1() {
}

$Class* HeadlessJRadioButtonMenuItem$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJRadioButtonMenuItem$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJRadioButtonMenuItem",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJRadioButtonMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJRadioButtonMenuItem$1",
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
	$loadClass(HeadlessJRadioButtonMenuItem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJRadioButtonMenuItem$1));
	});
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem$1::class$ = nullptr;