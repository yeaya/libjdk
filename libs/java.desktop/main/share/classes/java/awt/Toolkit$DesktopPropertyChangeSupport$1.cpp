#include <java/awt/Toolkit$DesktopPropertyChangeSupport$1.h>
#include <java/awt/Toolkit$DesktopPropertyChangeSupport.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeSupport.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef PROP_CHANGE_SUPPORT_KEY

using $Toolkit$DesktopPropertyChangeSupport = ::java::awt::Toolkit$DesktopPropertyChangeSupport;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void Toolkit$DesktopPropertyChangeSupport$1::init$($Toolkit$DesktopPropertyChangeSupport* this$0, $PropertyChangeEvent* val$evt) {
	$set(this, this$0, this$0);
	$set(this, val$evt, val$evt);
}

void Toolkit$DesktopPropertyChangeSupport$1::run() {
	$useLocalObjectStack();
	$init($Toolkit$DesktopPropertyChangeSupport);
	$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $$nc($AppContext::getAppContext())->get($Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
	if (nullptr != pcs) {
		pcs->firePropertyChange(this->val$evt);
	}
}

Toolkit$DesktopPropertyChangeSupport$1::Toolkit$DesktopPropertyChangeSupport$1() {
}

$Class* Toolkit$DesktopPropertyChangeSupport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Toolkit$DesktopPropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$DesktopPropertyChangeSupport$1, this$0)},
		{"val$evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$DesktopPropertyChangeSupport$1, val$evt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Toolkit$DesktopPropertyChangeSupport;Ljava/beans/PropertyChangeEvent;)V", "()V", 0, $method(Toolkit$DesktopPropertyChangeSupport$1, init$, void, $Toolkit$DesktopPropertyChangeSupport*, $PropertyChangeEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Toolkit$DesktopPropertyChangeSupport$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Toolkit$DesktopPropertyChangeSupport",
		"firePropertyChange",
		"(Ljava/beans/PropertyChangeEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Toolkit$DesktopPropertyChangeSupport", "java.awt.Toolkit", "DesktopPropertyChangeSupport", $PRIVATE | $STATIC},
		{"java.awt.Toolkit$DesktopPropertyChangeSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Toolkit$DesktopPropertyChangeSupport$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Toolkit"
	};
	$loadClass(Toolkit$DesktopPropertyChangeSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Toolkit$DesktopPropertyChangeSupport$1);
	});
	return class$;
}

$Class* Toolkit$DesktopPropertyChangeSupport$1::class$ = nullptr;

	} // awt
} // java