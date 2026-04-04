#include <HeadlessJTable$3.h>
#include <HeadlessJTable.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJTable$3::init$() {
	$Component::init$();
}

HeadlessJTable$3::HeadlessJTable$3() {
}

$Class* HeadlessJTable$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJTable$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJTable",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJTable$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJTable$3",
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
		"HeadlessJTable"
	};
	$loadClass(HeadlessJTable$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJTable$3));
	});
	return class$;
}

$Class* HeadlessJTable$3::class$ = nullptr;