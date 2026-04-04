#include <HeadlessJScrollBar$3.h>
#include <HeadlessJScrollBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJScrollBar$3::init$() {
	$Component::init$();
}

HeadlessJScrollBar$3::HeadlessJScrollBar$3() {
}

$Class* HeadlessJScrollBar$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJScrollBar$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJScrollBar",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJScrollBar$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJScrollBar$3",
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
		"HeadlessJScrollBar"
	};
	$loadClass(HeadlessJScrollBar$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJScrollBar$3));
	});
	return class$;
}

$Class* HeadlessJScrollBar$3::class$ = nullptr;