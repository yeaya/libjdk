#include <javax/swing/AbstractButton$ButtonActionPropertyChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void AbstractButton$ButtonActionPropertyChangeListener::init$($AbstractButton* b, $Action* a) {
	$ActionPropertyChangeListener::init$(b, a);
}

void AbstractButton$ButtonActionPropertyChangeListener::actionPropertyChanged($AbstractButton* button, $Action* action, $PropertyChangeEvent* e) {
	if ($AbstractAction::shouldReconfigure(e)) {
		$nc(button)->configurePropertiesFromAction(action);
	} else {
		$nc(button)->actionPropertyChanged(action, $($nc(e)->getPropertyName()));
	}
}

void AbstractButton$ButtonActionPropertyChangeListener::actionPropertyChanged($JComponent* button, $Action* action, $PropertyChangeEvent* e) {
	this->actionPropertyChanged($cast($AbstractButton, button), action, e);
}

AbstractButton$ButtonActionPropertyChangeListener::AbstractButton$ButtonActionPropertyChangeListener() {
}

$Class* AbstractButton$ButtonActionPropertyChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/AbstractButton;Ljavax/swing/Action;)V", nullptr, 0, $method(AbstractButton$ButtonActionPropertyChangeListener, init$, void, $AbstractButton*, $Action*)},
		{"actionPropertyChanged", "(Ljavax/swing/AbstractButton;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED, $virtualMethod(AbstractButton$ButtonActionPropertyChangeListener, actionPropertyChanged, void, $AbstractButton*, $Action*, $PropertyChangeEvent*)},
		{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(AbstractButton$ButtonActionPropertyChangeListener, actionPropertyChanged, void, $JComponent*, $Action*, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.AbstractButton$ButtonActionPropertyChangeListener", "javax.swing.AbstractButton", "ButtonActionPropertyChangeListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.AbstractButton$ButtonActionPropertyChangeListener",
		"javax.swing.ActionPropertyChangeListener",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/ActionPropertyChangeListener<Ljavax/swing/AbstractButton;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.AbstractButton"
	};
	$loadClass(AbstractButton$ButtonActionPropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractButton$ButtonActionPropertyChangeListener));
	});
	return class$;
}

$Class* AbstractButton$ButtonActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax