#include <MessageQueueDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MessageQueueDriver::init$() {
}

MessageQueueDriver::MessageQueueDriver() {
}

$Class* MessageQueueDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MessageQueueDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MessageQueueDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MessageQueueDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MessageQueueDriver);
	});
	return class$;
}

$Class* MessageQueueDriver::class$ = nullptr;