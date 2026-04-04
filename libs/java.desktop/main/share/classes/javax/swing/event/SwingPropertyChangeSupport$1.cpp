#include <javax/swing/event/SwingPropertyChangeSupport$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;

namespace javax {
	namespace swing {
		namespace event {

void SwingPropertyChangeSupport$1::init$($SwingPropertyChangeSupport* this$0, $PropertyChangeEvent* val$evt) {
	$set(this, this$0, this$0);
	$set(this, val$evt, val$evt);
}

void SwingPropertyChangeSupport$1::run() {
	this->this$0->firePropertyChange(this->val$evt);
}

SwingPropertyChangeSupport$1::SwingPropertyChangeSupport$1() {
}

$Class* SwingPropertyChangeSupport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(SwingPropertyChangeSupport$1, this$0)},
		{"val$evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SwingPropertyChangeSupport$1, val$evt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/event/SwingPropertyChangeSupport;Ljava/beans/PropertyChangeEvent;)V", "()V", 0, $method(SwingPropertyChangeSupport$1, init$, void, $SwingPropertyChangeSupport*, $PropertyChangeEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SwingPropertyChangeSupport$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.event.SwingPropertyChangeSupport",
		"firePropertyChange",
		"(Ljava/beans/PropertyChangeEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.SwingPropertyChangeSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.event.SwingPropertyChangeSupport$1",
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
		"javax.swing.event.SwingPropertyChangeSupport"
	};
	$loadClass(SwingPropertyChangeSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingPropertyChangeSupport$1);
	});
	return class$;
}

$Class* SwingPropertyChangeSupport$1::class$ = nullptr;

		} // event
	} // swing
} // javax