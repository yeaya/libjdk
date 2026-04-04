#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/beancontext/BeanContext.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextChild::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, addPropertyChangeListener, void, $String*, $PropertyChangeListener*)},
		{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, addVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
		{"getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, getBeanContext, $BeanContext*)},
		{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, removePropertyChangeListener, void, $String*, $PropertyChangeListener*)},
		{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, removeVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
		{"setBeanContext", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, setBeanContext, void, $BeanContext*), "java.beans.PropertyVetoException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextChild",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextChild, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextChild);
	});
	return class$;
}

$Class* BeanContextChild::class$ = nullptr;

		} // beancontext
	} // beans
} // java