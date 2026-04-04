#include <java/beans/beancontext/BeanContextSupport$1.h>
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

void BeanContextSupport$1::init$($BeanContextSupport* this$0) {
	$set(this, this$0, this$0);
}

void BeanContextSupport$1::propertyChange($PropertyChangeEvent* pce) {
	this->this$0->propertyChange(pce);
}

BeanContextSupport$1::BeanContextSupport$1() {
}

$Class* BeanContextSupport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/beancontext/BeanContextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextSupport$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContextSupport;)V", nullptr, 0, $method(BeanContextSupport$1, init$, void, $BeanContextSupport*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BeanContextSupport$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.beancontext.BeanContextSupport",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.beancontext.BeanContextSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.beancontext.BeanContextSupport$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
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
	$loadClass(BeanContextSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextSupport$1);
	});
	return class$;
}

$Class* BeanContextSupport$1::class$ = nullptr;

		} // beancontext
	} // beans
} // java