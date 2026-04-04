#include <FlowAdaptersCompileOnly$BBPublisher.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

void FlowAdaptersCompileOnly$BBPublisher::init$() {
}

void FlowAdaptersCompileOnly$BBPublisher::subscribe($Flow$Subscriber* subscriber) {
}

FlowAdaptersCompileOnly$BBPublisher::FlowAdaptersCompileOnly$BBPublisher() {
}

$Class* FlowAdaptersCompileOnly$BBPublisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$BBPublisher, init$, void)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$BBPublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$BBPublisher", "FlowAdaptersCompileOnly", "BBPublisher", $STATIC},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$BBPublisher",
		"java.lang.Object",
		"java.util.concurrent.Flow$Publisher",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FlowAdaptersCompileOnly"
	};
	$loadClass(FlowAdaptersCompileOnly$BBPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$BBPublisher);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$BBPublisher::class$ = nullptr;