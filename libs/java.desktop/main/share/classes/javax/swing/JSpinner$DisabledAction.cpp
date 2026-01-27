#include <javax/swing/JSpinner$DisabledAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JSpinner.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _JSpinner$DisabledAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(JSpinner$DisabledAction, init$, void)},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, actionPerformed, void, $ActionEvent*)},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, getValue, $Object*, $String*)},
	{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, isEnabled, bool)},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, putValue, void, $String*, Object$*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$DisabledAction, setEnabled, void, bool)},
	{}
};

$InnerClassInfo _JSpinner$DisabledAction_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$DisabledAction", "javax.swing.JSpinner", "DisabledAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JSpinner$DisabledAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JSpinner$DisabledAction",
	"java.lang.Object",
	"javax.swing.Action",
	nullptr,
	_JSpinner$DisabledAction_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$DisabledAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$DisabledAction($Class* clazz) {
	return $of($alloc(JSpinner$DisabledAction));
}

void JSpinner$DisabledAction::init$() {
}

$Object* JSpinner$DisabledAction::getValue($String* key) {
	return $of(nullptr);
}

void JSpinner$DisabledAction::putValue($String* key, Object$* value) {
}

void JSpinner$DisabledAction::setEnabled(bool b) {
}

bool JSpinner$DisabledAction::isEnabled() {
	return false;
}

void JSpinner$DisabledAction::addPropertyChangeListener($PropertyChangeListener* l) {
}

void JSpinner$DisabledAction::removePropertyChangeListener($PropertyChangeListener* l) {
}

void JSpinner$DisabledAction::actionPerformed($ActionEvent* ae) {
}

JSpinner$DisabledAction::JSpinner$DisabledAction() {
}

$Class* JSpinner$DisabledAction::load$($String* name, bool initialize) {
	$loadClass(JSpinner$DisabledAction, name, initialize, &_JSpinner$DisabledAction_ClassInfo_, allocate$JSpinner$DisabledAction);
	return class$;
}

$Class* JSpinner$DisabledAction::class$ = nullptr;

	} // swing
} // javax