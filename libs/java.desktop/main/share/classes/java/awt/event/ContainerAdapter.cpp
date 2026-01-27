#include <java/awt/event/ContainerAdapter.h>

#include <java/awt/event/ContainerEvent.h>
#include <jcpp.h>

using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _ContainerAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ContainerAdapter, init$, void)},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContainerAdapter, componentAdded, void, $ContainerEvent*)},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContainerAdapter, componentRemoved, void, $ContainerEvent*)},
	{}
};

$ClassInfo _ContainerAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.ContainerAdapter",
	"java.lang.Object",
	"java.awt.event.ContainerListener",
	nullptr,
	_ContainerAdapter_MethodInfo_
};

$Object* allocate$ContainerAdapter($Class* clazz) {
	return $of($alloc(ContainerAdapter));
}

void ContainerAdapter::init$() {
}

void ContainerAdapter::componentAdded($ContainerEvent* e) {
}

void ContainerAdapter::componentRemoved($ContainerEvent* e) {
}

ContainerAdapter::ContainerAdapter() {
}

$Class* ContainerAdapter::load$($String* name, bool initialize) {
	$loadClass(ContainerAdapter, name, initialize, &_ContainerAdapter_ClassInfo_, allocate$ContainerAdapter);
	return class$;
}

$Class* ContainerAdapter::class$ = nullptr;

		} // event
	} // awt
} // java