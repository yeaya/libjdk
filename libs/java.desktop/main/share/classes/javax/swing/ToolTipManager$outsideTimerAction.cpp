#include <javax/swing/ToolTipManager$outsideTimerAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace javax {
	namespace swing {

void ToolTipManager$outsideTimerAction::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
}

void ToolTipManager$outsideTimerAction::actionPerformed($ActionEvent* e) {
	this->this$0->showImmediately = false;
}

ToolTipManager$outsideTimerAction::ToolTipManager$outsideTimerAction() {
}

$Class* ToolTipManager$outsideTimerAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$outsideTimerAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PROTECTED, $method(ToolTipManager$outsideTimerAction, init$, void, $ToolTipManager*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ToolTipManager$outsideTimerAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ToolTipManager$outsideTimerAction", "javax.swing.ToolTipManager", "outsideTimerAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.ToolTipManager$outsideTimerAction",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ToolTipManager"
	};
	$loadClass(ToolTipManager$outsideTimerAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolTipManager$outsideTimerAction);
	});
	return class$;
}

$Class* ToolTipManager$outsideTimerAction::class$ = nullptr;

	} // swing
} // javax