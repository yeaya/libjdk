#include <FlowAdaptersCompileOnly$ListSubscriberX.h>
#include <FlowAdaptersCompileOnly$ListSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly$ListSubscriber = ::FlowAdaptersCompileOnly$ListSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FlowAdaptersCompileOnly$ListSubscriberX::init$() {
	$FlowAdaptersCompileOnly$ListSubscriber::init$();
}

int32_t FlowAdaptersCompileOnly$ListSubscriberX::getIntegerX() {
	return 5;
}

FlowAdaptersCompileOnly$ListSubscriberX::FlowAdaptersCompileOnly$ListSubscriberX() {
}

$Class* FlowAdaptersCompileOnly$ListSubscriberX::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$ListSubscriberX, init$, void)},
		{"getIntegerX", "()I", nullptr, 0, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriberX, getIntegerX, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$ListSubscriberX", "FlowAdaptersCompileOnly", "ListSubscriberX", $STATIC},
		{"FlowAdaptersCompileOnly$ListSubscriber", "FlowAdaptersCompileOnly", "ListSubscriber", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$ListSubscriberX",
		"FlowAdaptersCompileOnly$ListSubscriber",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FlowAdaptersCompileOnly"
	};
	$loadClass(FlowAdaptersCompileOnly$ListSubscriberX, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$ListSubscriberX);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$ListSubscriberX::class$ = nullptr;