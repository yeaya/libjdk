#include <java/beans/beancontext/BeanContextSupport$2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/beancontext/BeanContextSupport.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextSupport$2::init$($BeanContextSupport* this$0) {
	$set(this, this$0, this$0);
}

void BeanContextSupport$2::vetoableChange($PropertyChangeEvent* pce) {
	this->this$0->vetoableChange(pce);
}

BeanContextSupport$2::BeanContextSupport$2() {
}

$Class* BeanContextSupport$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/beancontext/BeanContextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextSupport$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContextSupport;)V", nullptr, 0, $method(BeanContextSupport$2, init$, void, $BeanContextSupport*)},
		{"vetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BeanContextSupport$2, vetoableChange, void, $PropertyChangeEvent*), "java.beans.PropertyVetoException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.beancontext.BeanContextSupport",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.beancontext.BeanContextSupport$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.beancontext.BeanContextSupport$2",
		"java.lang.Object",
		"java.beans.VetoableChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.beancontext.BeanContextSupport"
	};
	$loadClass(BeanContextSupport$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextSupport$2);
	});
	return class$;
}

$Class* BeanContextSupport$2::class$ = nullptr;

		} // beancontext
	} // beans
} // java