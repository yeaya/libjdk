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

$MethodInfo _BeanContextChild_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, addPropertyChangeListener, void, $String*, $PropertyChangeListener*)},
	{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, addVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
	{"getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, getBeanContext, $BeanContext*)},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, removePropertyChangeListener, void, $String*, $PropertyChangeListener*)},
	{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, removeVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
	{"setBeanContext", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChild, setBeanContext, void, $BeanContext*), "java.beans.PropertyVetoException"},
	{}
};

$ClassInfo _BeanContextChild_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextChild",
	nullptr,
	nullptr,
	nullptr,
	_BeanContextChild_MethodInfo_
};

$Object* allocate$BeanContextChild($Class* clazz) {
	return $of($alloc(BeanContextChild));
}

$Class* BeanContextChild::load$($String* name, bool initialize) {
	$loadClass(BeanContextChild, name, initialize, &_BeanContextChild_ClassInfo_, allocate$BeanContextChild);
	return class$;
}

$Class* BeanContextChild::class$ = nullptr;

		} // beancontext
	} // beans
} // java