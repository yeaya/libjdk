#include <FlowAdaptersCompileOnly$MBBPublisher.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

void FlowAdaptersCompileOnly$MBBPublisher::init$() {
}

void FlowAdaptersCompileOnly$MBBPublisher::subscribe($Flow$Subscriber* subscriber) {
}

FlowAdaptersCompileOnly$MBBPublisher::FlowAdaptersCompileOnly$MBBPublisher() {
}

$Class* FlowAdaptersCompileOnly$MBBPublisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$MBBPublisher, init$, void)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/MappedByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$MBBPublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$MBBPublisher", "FlowAdaptersCompileOnly", "MBBPublisher", $STATIC},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$MBBPublisher",
		"java.lang.Object",
		"java.util.concurrent.Flow$Publisher",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<Ljava/nio/MappedByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FlowAdaptersCompileOnly"
	};
	$loadClass(FlowAdaptersCompileOnly$MBBPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$MBBPublisher);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$MBBPublisher::class$ = nullptr;