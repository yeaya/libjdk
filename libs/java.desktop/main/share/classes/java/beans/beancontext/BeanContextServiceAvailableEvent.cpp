#include <java/beans/beancontext/BeanContextServiceAvailableEvent.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextEvent = ::java::beans::beancontext::BeanContextEvent;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextServiceAvailableEvent::init$($BeanContextServices* bcs, $Class* sc) {
	$BeanContextEvent::init$($cast($BeanContext, bcs));
	$set(this, serviceClass, sc);
}

$BeanContextServices* BeanContextServiceAvailableEvent::getSourceAsBeanContextServices() {
	return $cast($BeanContextServices, getBeanContext());
}

$Class* BeanContextServiceAvailableEvent::getServiceClass() {
	return this->serviceClass;
}

$Iterator* BeanContextServiceAvailableEvent::getCurrentServiceSelectors() {
	return $$sure($BeanContextServices, getSource())->getCurrentServiceSelectors(this->serviceClass);
}

BeanContextServiceAvailableEvent::BeanContextServiceAvailableEvent() {
}

$Class* BeanContextServiceAvailableEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServiceAvailableEvent, serialVersionUID)},
		{"serviceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(BeanContextServiceAvailableEvent, serviceClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;)V", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;)V", $PUBLIC, $method(BeanContextServiceAvailableEvent, init$, void, $BeanContextServices*, $Class*)},
		{"getCurrentServiceSelectors", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<*>;", $PUBLIC, $virtualMethod(BeanContextServiceAvailableEvent, getCurrentServiceSelectors, $Iterator*)},
		{"getServiceClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(BeanContextServiceAvailableEvent, getServiceClass, $Class*)},
		{"getSourceAsBeanContextServices", "()Ljava/beans/beancontext/BeanContextServices;", nullptr, $PUBLIC, $virtualMethod(BeanContextServiceAvailableEvent, getSourceAsBeanContextServices, $BeanContextServices*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.beancontext.BeanContextServiceAvailableEvent",
		"java.beans.beancontext.BeanContextEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BeanContextServiceAvailableEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServiceAvailableEvent);
	});
	return class$;
}

$Class* BeanContextServiceAvailableEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java