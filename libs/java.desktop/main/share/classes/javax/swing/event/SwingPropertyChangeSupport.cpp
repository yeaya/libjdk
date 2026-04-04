#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeSupport.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/SwingPropertyChangeSupport$1.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingPropertyChangeSupport$1 = ::javax::swing::event::SwingPropertyChangeSupport$1;

namespace javax {
	namespace swing {
		namespace event {

void SwingPropertyChangeSupport::init$(Object$* sourceBean) {
	SwingPropertyChangeSupport::init$(sourceBean, false);
}

void SwingPropertyChangeSupport::init$(Object$* sourceBean, bool notifyOnEDT) {
	$PropertyChangeSupport::init$(sourceBean);
	this->notifyOnEDT = notifyOnEDT;
}

void SwingPropertyChangeSupport::firePropertyChange($PropertyChangeEvent* evt) {
	if (evt == nullptr) {
		$throwNew($NullPointerException);
	}
	bool var$0 = !isNotifyOnEDT();
	if (var$0 || $SwingUtilities::isEventDispatchThread()) {
		$PropertyChangeSupport::firePropertyChange(evt);
	} else {
		$SwingUtilities::invokeLater($$new($SwingPropertyChangeSupport$1, this, evt));
	}
}

bool SwingPropertyChangeSupport::isNotifyOnEDT() {
	return this->notifyOnEDT;
}

SwingPropertyChangeSupport::SwingPropertyChangeSupport() {
}

$Class* SwingPropertyChangeSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingPropertyChangeSupport, serialVersionUID)},
		{"notifyOnEDT", "Z", nullptr, $PRIVATE | $FINAL, $field(SwingPropertyChangeSupport, notifyOnEDT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(SwingPropertyChangeSupport, init$, void, Object$*)},
		{"<init>", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(SwingPropertyChangeSupport, init$, void, Object$*, bool)},
		{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwingPropertyChangeSupport, firePropertyChange, void, $PropertyChangeEvent*)},
		{"isNotifyOnEDT", "()Z", nullptr, $PUBLIC, $method(SwingPropertyChangeSupport, isNotifyOnEDT, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.SwingPropertyChangeSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.event.SwingPropertyChangeSupport",
		"java.beans.PropertyChangeSupport",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.event.SwingPropertyChangeSupport$1"
	};
	$loadClass(SwingPropertyChangeSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingPropertyChangeSupport);
	});
	return class$;
}

$Class* SwingPropertyChangeSupport::class$ = nullptr;

		} // event
	} // swing
} // javax