#include <java/beans/Customizer.h>
#include <java/beans/PropertyChangeListener.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$Class* Customizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Customizer, addPropertyChangeListener, void, $PropertyChangeListener*)},
		{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Customizer, removePropertyChangeListener, void, $PropertyChangeListener*)},
		{"setObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Customizer, setObject, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.Customizer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Customizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Customizer);
	});
	return class$;
}

$Class* Customizer::class$ = nullptr;

	} // beans
} // java