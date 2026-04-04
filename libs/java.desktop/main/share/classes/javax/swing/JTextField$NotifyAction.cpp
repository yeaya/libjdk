#include <javax/swing/JTextField$NotifyAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

void JTextField$NotifyAction::init$() {
	$TextAction::init$("notify-field-accept"_s);
}

void JTextField$NotifyAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JTextField, target)) {
		$var($JTextField, field, $cast($JTextField, target));
		field->postActionEvent();
	}
}

bool JTextField$NotifyAction::isEnabled() {
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JTextField, target)) {
		return $cast($JTextField, target)->hasActionListener();
	}
	return false;
}

JTextField$NotifyAction::JTextField$NotifyAction() {
}

$Class* JTextField$NotifyAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextField$NotifyAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextField$NotifyAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextField$NotifyAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextField$NotifyAction", "javax.swing.JTextField", "NotifyAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTextField$NotifyAction",
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
		"javax.swing.JTextField"
	};
	$loadClass(JTextField$NotifyAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextField$NotifyAction));
	});
	return class$;
}

$Class* JTextField$NotifyAction::class$ = nullptr;

	} // swing
} // javax