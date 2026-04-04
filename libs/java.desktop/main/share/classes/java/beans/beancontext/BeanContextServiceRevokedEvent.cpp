#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextEvent = ::java::beans::beancontext::BeanContextEvent;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextServiceRevokedEvent::init$($BeanContextServices* bcs, $Class* sc, bool invalidate) {
	$BeanContextEvent::init$($cast($BeanContext, bcs));
	$set(this, serviceClass, sc);
	this->invalidateRefs = invalidate;
}

$BeanContextServices* BeanContextServiceRevokedEvent::getSourceAsBeanContextServices() {
	return $cast($BeanContextServices, getBeanContext());
}

$Class* BeanContextServiceRevokedEvent::getServiceClass() {
	return this->serviceClass;
}

bool BeanContextServiceRevokedEvent::isServiceClass($Class* service) {
	return $nc(this->serviceClass)->equals(service);
}

bool BeanContextServiceRevokedEvent::isCurrentServiceInvalidNow() {
	return this->invalidateRefs;
}

BeanContextServiceRevokedEvent::BeanContextServiceRevokedEvent() {
}

$Class* BeanContextServiceRevokedEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServiceRevokedEvent, serialVersionUID)},
		{"serviceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(BeanContextServiceRevokedEvent, serviceClass)},
		{"invalidateRefs", "Z", nullptr, $PRIVATE, $field(BeanContextServiceRevokedEvent, invalidateRefs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;Z)V", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;Z)V", $PUBLIC, $method(BeanContextServiceRevokedEvent, init$, void, $BeanContextServices*, $Class*, bool)},
		{"getServiceClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(BeanContextServiceRevokedEvent, getServiceClass, $Class*)},
		{"getSourceAsBeanContextServices", "()Ljava/beans/beancontext/BeanContextServices;", nullptr, $PUBLIC, $virtualMethod(BeanContextServiceRevokedEvent, getSourceAsBeanContextServices, $BeanContextServices*)},
		{"isCurrentServiceInvalidNow", "()Z", nullptr, $PUBLIC, $virtualMethod(BeanContextServiceRevokedEvent, isCurrentServiceInvalidNow, bool)},
		{"isServiceClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC, $virtualMethod(BeanContextServiceRevokedEvent, isServiceClass, bool, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.beancontext.BeanContextServiceRevokedEvent",
		"java.beans.beancontext.BeanContextEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BeanContextServiceRevokedEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServiceRevokedEvent);
	});
	return class$;
}

$Class* BeanContextServiceRevokedEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java