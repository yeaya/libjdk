#include <javax/swing/JComboBox$ComboBoxActionPropertyChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void JComboBox$ComboBoxActionPropertyChangeListener::init$($JComboBox* b, $Action* a) {
	$ActionPropertyChangeListener::init$(b, a);
}

void JComboBox$ComboBoxActionPropertyChangeListener::actionPropertyChanged($JComboBox* cb, $Action* action, $PropertyChangeEvent* e) {
	if ($AbstractAction::shouldReconfigure(e)) {
		$nc(cb)->configurePropertiesFromAction(action);
	} else {
		$nc(cb)->actionPropertyChanged(action, $($nc(e)->getPropertyName()));
	}
}

void JComboBox$ComboBoxActionPropertyChangeListener::actionPropertyChanged($JComponent* cb, $Action* action, $PropertyChangeEvent* e) {
	this->actionPropertyChanged($cast($JComboBox, cb), action, e);
}

JComboBox$ComboBoxActionPropertyChangeListener::JComboBox$ComboBoxActionPropertyChangeListener() {
}

$Class* JComboBox$ComboBoxActionPropertyChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComboBox;Ljavax/swing/Action;)V", "(Ljavax/swing/JComboBox<*>;Ljavax/swing/Action;)V", 0, $method(JComboBox$ComboBoxActionPropertyChangeListener, init$, void, $JComboBox*, $Action*)},
		{"actionPropertyChanged", "(Ljavax/swing/JComboBox;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", "(Ljavax/swing/JComboBox<*>;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", $PROTECTED, $virtualMethod(JComboBox$ComboBoxActionPropertyChangeListener, actionPropertyChanged, void, $JComboBox*, $Action*, $PropertyChangeEvent*)},
		{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(JComboBox$ComboBoxActionPropertyChangeListener, actionPropertyChanged, void, $JComponent*, $Action*, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComboBox$ComboBoxActionPropertyChangeListener", "javax.swing.JComboBox", "ComboBoxActionPropertyChangeListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComboBox$ComboBoxActionPropertyChangeListener",
		"javax.swing.ActionPropertyChangeListener",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/ActionPropertyChangeListener<Ljavax/swing/JComboBox<*>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComboBox"
	};
	$loadClass(JComboBox$ComboBoxActionPropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JComboBox$ComboBoxActionPropertyChangeListener));
	});
	return class$;
}

$Class* JComboBox$ComboBoxActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax