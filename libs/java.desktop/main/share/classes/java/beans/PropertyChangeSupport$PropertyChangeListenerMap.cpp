#include <java/beans/PropertyChangeSupport$PropertyChangeListenerMap.h>
#include <java/beans/ChangeListenerMap.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeListenerProxy.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

#undef EMPTY

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerMap = ::java::beans::ChangeListenerMap;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeListenerProxy = ::java::beans::PropertyChangeListenerProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace beans {

$PropertyChangeListenerArray* PropertyChangeSupport$PropertyChangeListenerMap::EMPTY = nullptr;

void PropertyChangeSupport$PropertyChangeListenerMap::init$() {
	$ChangeListenerMap::init$();
}

$EventListenerArray* PropertyChangeSupport$PropertyChangeListenerMap::newArray(int32_t length) {
	return $cast($EventListenerArray, (0 < length) ? $new($PropertyChangeListenerArray, length) : PropertyChangeSupport$PropertyChangeListenerMap::EMPTY);
}

$PropertyChangeListener* PropertyChangeSupport$PropertyChangeListenerMap::newProxy($String* name, $PropertyChangeListener* listener) {
	return $new($PropertyChangeListenerProxy, name, listener);
}

$PropertyChangeListener* PropertyChangeSupport$PropertyChangeListenerMap::extract($PropertyChangeListener* listener$renamed) {
	$var($PropertyChangeListener, listener, listener$renamed);
	while ($instanceOf($PropertyChangeListenerProxy, listener)) {
		$assign(listener, $cast($PropertyChangeListener, $cast($PropertyChangeListenerProxy, listener)->getListener()));
	}
	return listener;
}

$EventListener* PropertyChangeSupport$PropertyChangeListenerMap::extract($EventListener* listener) {
	return this->extract($cast($PropertyChangeListener, listener));
}

$EventListener* PropertyChangeSupport$PropertyChangeListenerMap::newProxy($String* name, $EventListener* listener) {
	return this->newProxy(name, $cast($PropertyChangeListener, listener));
}

void PropertyChangeSupport$PropertyChangeListenerMap::clinit$($Class* clazz) {
	$assignStatic(PropertyChangeSupport$PropertyChangeListenerMap::EMPTY, $new($PropertyChangeListenerArray, 0));
}

PropertyChangeSupport$PropertyChangeListenerMap::PropertyChangeSupport$PropertyChangeListenerMap() {
}

$Class* PropertyChangeSupport$PropertyChangeListenerMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "[Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyChangeSupport$PropertyChangeListenerMap, EMPTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PropertyChangeSupport$PropertyChangeListenerMap, init$, void)},
		{"extract", "(Ljava/beans/PropertyChangeListener;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $method(PropertyChangeSupport$PropertyChangeListenerMap, extract, $PropertyChangeListener*, $PropertyChangeListener*)},
		{"extract", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PropertyChangeSupport$PropertyChangeListenerMap, extract, $EventListener*, $EventListener*)},
		{"newArray", "(I)[Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(PropertyChangeSupport$PropertyChangeListenerMap, newArray, $EventListenerArray*, int32_t)},
		{"newProxy", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $method(PropertyChangeSupport$PropertyChangeListenerMap, newProxy, $PropertyChangeListener*, $String*, $PropertyChangeListener*)},
		{"newProxy", "(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(PropertyChangeSupport$PropertyChangeListenerMap, newProxy, $EventListener*, $String*, $EventListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.PropertyChangeSupport$PropertyChangeListenerMap", "java.beans.PropertyChangeSupport", "PropertyChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.PropertyChangeSupport$PropertyChangeListenerMap",
		"java.beans.ChangeListenerMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/beans/ChangeListenerMap<Ljava/beans/PropertyChangeListener;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.PropertyChangeSupport"
	};
	$loadClass(PropertyChangeSupport$PropertyChangeListenerMap, name, initialize, &classInfo$$, PropertyChangeSupport$PropertyChangeListenerMap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyChangeSupport$PropertyChangeListenerMap);
	});
	return class$;
}

$Class* PropertyChangeSupport$PropertyChangeListenerMap::class$ = nullptr;

	} // beans
} // java