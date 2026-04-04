#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$Class* PropertyChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyChangeListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.PropertyChangeListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(PropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyChangeListener);
	});
	return class$;
}

$Class* PropertyChangeListener::class$ = nullptr;

	} // beans
} // java