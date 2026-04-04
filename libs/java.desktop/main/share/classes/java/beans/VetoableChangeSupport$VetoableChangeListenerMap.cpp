#include <java/beans/VetoableChangeSupport$VetoableChangeListenerMap.h>
#include <java/beans/ChangeListenerMap.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeListenerProxy.h>
#include <java/beans/VetoableChangeSupport.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

#undef EMPTY

using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerMap = ::java::beans::ChangeListenerMap;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeListenerProxy = ::java::beans::VetoableChangeListenerProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace beans {

$VetoableChangeListenerArray* VetoableChangeSupport$VetoableChangeListenerMap::EMPTY = nullptr;

void VetoableChangeSupport$VetoableChangeListenerMap::init$() {
	$ChangeListenerMap::init$();
}

$EventListenerArray* VetoableChangeSupport$VetoableChangeListenerMap::newArray(int32_t length) {
	return $cast($EventListenerArray, (0 < length) ? $new($VetoableChangeListenerArray, length) : VetoableChangeSupport$VetoableChangeListenerMap::EMPTY);
}

$VetoableChangeListener* VetoableChangeSupport$VetoableChangeListenerMap::newProxy($String* name, $VetoableChangeListener* listener) {
	return $new($VetoableChangeListenerProxy, name, listener);
}

$VetoableChangeListener* VetoableChangeSupport$VetoableChangeListenerMap::extract($VetoableChangeListener* listener$renamed) {
	$var($VetoableChangeListener, listener, listener$renamed);
	while ($instanceOf($VetoableChangeListenerProxy, listener)) {
		$assign(listener, $cast($VetoableChangeListener, $cast($VetoableChangeListenerProxy, listener)->getListener()));
	}
	return listener;
}

$EventListener* VetoableChangeSupport$VetoableChangeListenerMap::extract($EventListener* listener) {
	return this->extract($cast($VetoableChangeListener, listener));
}

$EventListener* VetoableChangeSupport$VetoableChangeListenerMap::newProxy($String* name, $EventListener* listener) {
	return this->newProxy(name, $cast($VetoableChangeListener, listener));
}

void VetoableChangeSupport$VetoableChangeListenerMap::clinit$($Class* clazz) {
	$assignStatic(VetoableChangeSupport$VetoableChangeListenerMap::EMPTY, $new($VetoableChangeListenerArray, 0));
}

VetoableChangeSupport$VetoableChangeListenerMap::VetoableChangeSupport$VetoableChangeListenerMap() {
}

$Class* VetoableChangeSupport$VetoableChangeListenerMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "[Ljava/beans/VetoableChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VetoableChangeSupport$VetoableChangeListenerMap, EMPTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(VetoableChangeSupport$VetoableChangeListenerMap, init$, void)},
		{"extract", "(Ljava/beans/VetoableChangeListener;)Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC, $method(VetoableChangeSupport$VetoableChangeListenerMap, extract, $VetoableChangeListener*, $VetoableChangeListener*)},
		{"extract", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(VetoableChangeSupport$VetoableChangeListenerMap, extract, $EventListener*, $EventListener*)},
		{"newArray", "(I)[Ljava/beans/VetoableChangeListener;", nullptr, $PROTECTED, $virtualMethod(VetoableChangeSupport$VetoableChangeListenerMap, newArray, $EventListenerArray*, int32_t)},
		{"newProxy", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)Ljava/beans/VetoableChangeListener;", nullptr, $PROTECTED, $method(VetoableChangeSupport$VetoableChangeListenerMap, newProxy, $VetoableChangeListener*, $String*, $VetoableChangeListener*)},
		{"newProxy", "(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(VetoableChangeSupport$VetoableChangeListenerMap, newProxy, $EventListener*, $String*, $EventListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.VetoableChangeSupport$VetoableChangeListenerMap", "java.beans.VetoableChangeSupport", "VetoableChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.VetoableChangeSupport$VetoableChangeListenerMap",
		"java.beans.ChangeListenerMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/beans/ChangeListenerMap<Ljava/beans/VetoableChangeListener;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.VetoableChangeSupport"
	};
	$loadClass(VetoableChangeSupport$VetoableChangeListenerMap, name, initialize, &classInfo$$, VetoableChangeSupport$VetoableChangeListenerMap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VetoableChangeSupport$VetoableChangeListenerMap);
	});
	return class$;
}

$Class* VetoableChangeSupport$VetoableChangeListenerMap::class$ = nullptr;

	} // beans
} // java