#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextEvent::init$($BeanContext* bc) {
	$EventObject::init$(bc);
}

$BeanContext* BeanContextEvent::getBeanContext() {
	return $cast($BeanContext, getSource());
}

void BeanContextEvent::setPropagatedFrom($BeanContext* bc) {
	$synchronized(this) {
		$set(this, propagatedFrom, bc);
	}
}

$BeanContext* BeanContextEvent::getPropagatedFrom() {
	$synchronized(this) {
		return this->propagatedFrom;
	}
}

bool BeanContextEvent::isPropagated() {
	$synchronized(this) {
		return this->propagatedFrom != nullptr;
	}
}

BeanContextEvent::BeanContextEvent() {
}

$Class* BeanContextEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextEvent, serialVersionUID)},
		{"propagatedFrom", "Ljava/beans/beancontext/BeanContext;", nullptr, $PROTECTED, $field(BeanContextEvent, propagatedFrom)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PROTECTED, $method(BeanContextEvent, init$, void, $BeanContext*)},
		{"getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC, $virtualMethod(BeanContextEvent, getBeanContext, $BeanContext*)},
		{"getPropagatedFrom", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BeanContextEvent, getPropagatedFrom, $BeanContext*)},
		{"isPropagated", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BeanContextEvent, isPropagated, bool)},
		{"setPropagatedFrom", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BeanContextEvent, setPropagatedFrom, void, $BeanContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.beans.beancontext.BeanContextEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BeanContextEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextEvent);
	});
	return class$;
}

$Class* BeanContextEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java