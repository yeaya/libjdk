#include <java/beans/VetoableChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$Class* VetoableChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"vetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VetoableChangeListener, vetoableChange, void, $PropertyChangeEvent*), "java.beans.PropertyVetoException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.VetoableChangeListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(VetoableChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VetoableChangeListener);
	});
	return class$;
}

$Class* VetoableChangeListener::class$ = nullptr;

	} // beans
} // java