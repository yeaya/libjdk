#include <javax/swing/JTextField$TextFieldActionPropertyChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;

namespace javax {
	namespace swing {

void JTextField$TextFieldActionPropertyChangeListener::init$($JTextField* tf, $Action* a) {
	$ActionPropertyChangeListener::init$(tf, a);
}

void JTextField$TextFieldActionPropertyChangeListener::actionPropertyChanged($JTextField* textField, $Action* action, $PropertyChangeEvent* e) {
	if ($AbstractAction::shouldReconfigure(e)) {
		$nc(textField)->configurePropertiesFromAction(action);
	} else {
		$nc(textField)->actionPropertyChanged(action, $($nc(e)->getPropertyName()));
	}
}

void JTextField$TextFieldActionPropertyChangeListener::actionPropertyChanged($JComponent* textField, $Action* action, $PropertyChangeEvent* e) {
	this->actionPropertyChanged($cast($JTextField, textField), action, e);
}

JTextField$TextFieldActionPropertyChangeListener::JTextField$TextFieldActionPropertyChangeListener() {
}

$Class* JTextField$TextFieldActionPropertyChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTextField;Ljavax/swing/Action;)V", nullptr, 0, $method(JTextField$TextFieldActionPropertyChangeListener, init$, void, $JTextField*, $Action*)},
		{"actionPropertyChanged", "(Ljavax/swing/JTextField;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED, $virtualMethod(JTextField$TextFieldActionPropertyChangeListener, actionPropertyChanged, void, $JTextField*, $Action*, $PropertyChangeEvent*)},
		{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(JTextField$TextFieldActionPropertyChangeListener, actionPropertyChanged, void, $JComponent*, $Action*, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextField$TextFieldActionPropertyChangeListener", "javax.swing.JTextField", "TextFieldActionPropertyChangeListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTextField$TextFieldActionPropertyChangeListener",
		"javax.swing.ActionPropertyChangeListener",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/ActionPropertyChangeListener<Ljavax/swing/JTextField;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTextField"
	};
	$loadClass(JTextField$TextFieldActionPropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextField$TextFieldActionPropertyChangeListener));
	});
	return class$;
}

$Class* JTextField$TextFieldActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax