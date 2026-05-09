#include <java/beans/PropertyChangeListenerProxy.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/EventListener.h>
#include <java/util/EventListenerProxy.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListenerProxy = ::java::util::EventListenerProxy;

namespace java {
	namespace beans {

int32_t PropertyChangeListenerProxy::hashCode() {
	return this->$EventListenerProxy::hashCode();
}

bool PropertyChangeListenerProxy::equals(Object$* arg0) {
	return this->$EventListenerProxy::equals(arg0);
}

$Object* PropertyChangeListenerProxy::clone() {
	return this->$EventListenerProxy::clone();
}

$String* PropertyChangeListenerProxy::toString() {
	return this->$EventListenerProxy::toString();
}

void PropertyChangeListenerProxy::finalize() {
	this->$EventListenerProxy::finalize();
}

void PropertyChangeListenerProxy::init$($String* propertyName, $PropertyChangeListener* listener) {
	$EventListenerProxy::init$(listener);
	$set(this, propertyName, propertyName);
}

void PropertyChangeListenerProxy::propertyChange($PropertyChangeEvent* event) {
	$$sure($PropertyChangeListener, getListener())->propertyChange(event);
}

$String* PropertyChangeListenerProxy::getPropertyName() {
	return this->propertyName;
}

PropertyChangeListenerProxy::PropertyChangeListenerProxy() {
}

$Class* PropertyChangeListenerProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"propertyName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PropertyChangeListenerProxy, propertyName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $method(PropertyChangeListenerProxy, init$, void, $String*, $PropertyChangeListener*)},
		{"getPropertyName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PropertyChangeListenerProxy, getPropertyName, $String*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeListenerProxy, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.PropertyChangeListenerProxy",
		"java.util.EventListenerProxy",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/EventListenerProxy<Ljava/beans/PropertyChangeListener;>;Ljava/beans/PropertyChangeListener;"
	};
	$loadClass(PropertyChangeListenerProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PropertyChangeListenerProxy));
	});
	return class$;
}

$Class* PropertyChangeListenerProxy::class$ = nullptr;

	} // beans
} // java