#include <javax/swing/JFormattedTextField$CancelAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

void JFormattedTextField$CancelAction::init$() {
	$TextAction::init$("reset-field-edit"_s);
}

void JFormattedTextField$CancelAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JFormattedTextField, target)) {
		$var($JFormattedTextField, ftf, $cast($JFormattedTextField, target));
		ftf->setValue($(ftf->getValue()));
	}
}

bool JFormattedTextField$CancelAction::isEnabled() {
	$useLocalObjectStack();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JFormattedTextField, target)) {
		$var($JFormattedTextField, ftf, $cast($JFormattedTextField, target));
		if (!ftf->isEdited()) {
			return false;
		}
		return true;
	}
	return $TextAction::isEnabled();
}

JFormattedTextField$CancelAction::JFormattedTextField$CancelAction() {
}

$Class* JFormattedTextField$CancelAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFormattedTextField$CancelAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$CancelAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$CancelAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFormattedTextField$CancelAction", "javax.swing.JFormattedTextField", "CancelAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JFormattedTextField$CancelAction",
		"javax.swing.text.TextAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JFormattedTextField"
	};
	$loadClass(JFormattedTextField$CancelAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFormattedTextField$CancelAction));
	});
	return class$;
}

$Class* JFormattedTextField$CancelAction::class$ = nullptr;

	} // swing
} // javax