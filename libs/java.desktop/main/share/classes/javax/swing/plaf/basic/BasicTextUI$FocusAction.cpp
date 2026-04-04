#include <javax/swing/plaf/basic/BasicTextUI$FocusAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTextUI$FocusAction::init$($BasicTextUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicTextUI$FocusAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->editor)->requestFocus();
}

bool BasicTextUI$FocusAction::isEnabled() {
	return $nc(this->this$0->editor)->isEditable();
}

BasicTextUI$FocusAction::BasicTextUI$FocusAction() {
}

$Class* BasicTextUI$FocusAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTextUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextUI$FocusAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTextUI;)V", nullptr, 0, $method(BasicTextUI$FocusAction, init$, void, $BasicTextUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTextUI$FocusAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTextUI$FocusAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextUI$FocusAction", "javax.swing.plaf.basic.BasicTextUI", "FocusAction", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextUI$FocusAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTextUI"
	};
	$loadClass(BasicTextUI$FocusAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextUI$FocusAction));
	});
	return class$;
}

$Class* BasicTextUI$FocusAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax