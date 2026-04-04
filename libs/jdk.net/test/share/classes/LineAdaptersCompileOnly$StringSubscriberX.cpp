#include <LineAdaptersCompileOnly$StringSubscriberX.h>
#include <LineAdaptersCompileOnly$StringSubscriber.h>
#include <LineAdaptersCompileOnly.h>
#include <jcpp.h>

using $LineAdaptersCompileOnly$StringSubscriber = ::LineAdaptersCompileOnly$StringSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LineAdaptersCompileOnly$StringSubscriberX::init$() {
	$LineAdaptersCompileOnly$StringSubscriber::init$();
}

int32_t LineAdaptersCompileOnly$StringSubscriberX::getIntegerX() {
	return 5;
}

LineAdaptersCompileOnly$StringSubscriberX::LineAdaptersCompileOnly$StringSubscriberX() {
}

$Class* LineAdaptersCompileOnly$StringSubscriberX::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LineAdaptersCompileOnly$StringSubscriberX, init$, void)},
		{"getIntegerX", "()I", nullptr, 0, $virtualMethod(LineAdaptersCompileOnly$StringSubscriberX, getIntegerX, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LineAdaptersCompileOnly$StringSubscriberX", "LineAdaptersCompileOnly", "StringSubscriberX", $STATIC},
		{"LineAdaptersCompileOnly$StringSubscriber", "LineAdaptersCompileOnly", "StringSubscriber", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LineAdaptersCompileOnly$StringSubscriberX",
		"LineAdaptersCompileOnly$StringSubscriber",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LineAdaptersCompileOnly"
	};
	$loadClass(LineAdaptersCompileOnly$StringSubscriberX, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineAdaptersCompileOnly$StringSubscriberX);
	});
	return class$;
}

$Class* LineAdaptersCompileOnly$StringSubscriberX::class$ = nullptr;