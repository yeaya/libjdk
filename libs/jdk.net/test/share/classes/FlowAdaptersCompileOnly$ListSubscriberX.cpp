#include <FlowAdaptersCompileOnly$ListSubscriberX.h>

#include <FlowAdaptersCompileOnly$ListSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly$ListSubscriber = ::FlowAdaptersCompileOnly$ListSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FlowAdaptersCompileOnly$ListSubscriberX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$ListSubscriberX, init$, void)},
	{"getIntegerX", "()I", nullptr, 0, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriberX, getIntegerX, int32_t)},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$ListSubscriberX_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$ListSubscriberX", "FlowAdaptersCompileOnly", "ListSubscriberX", $STATIC},
	{"FlowAdaptersCompileOnly$ListSubscriber", "FlowAdaptersCompileOnly", "ListSubscriber", $STATIC},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$ListSubscriberX_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$ListSubscriberX",
	"FlowAdaptersCompileOnly$ListSubscriber",
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly$ListSubscriberX_MethodInfo_,
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly$ListSubscriberX_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$ListSubscriberX($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$ListSubscriberX));
}

void FlowAdaptersCompileOnly$ListSubscriberX::init$() {
	$FlowAdaptersCompileOnly$ListSubscriber::init$();
}

int32_t FlowAdaptersCompileOnly$ListSubscriberX::getIntegerX() {
	return 5;
}

FlowAdaptersCompileOnly$ListSubscriberX::FlowAdaptersCompileOnly$ListSubscriberX() {
}

$Class* FlowAdaptersCompileOnly$ListSubscriberX::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$ListSubscriberX, name, initialize, &_FlowAdaptersCompileOnly$ListSubscriberX_ClassInfo_, allocate$FlowAdaptersCompileOnly$ListSubscriberX);
	return class$;
}

$Class* FlowAdaptersCompileOnly$ListSubscriberX::class$ = nullptr;