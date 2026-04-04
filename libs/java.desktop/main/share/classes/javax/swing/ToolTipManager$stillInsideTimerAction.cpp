#include <javax/swing/ToolTipManager$stillInsideTimerAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Timer.h>
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

void ToolTipManager$stillInsideTimerAction::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
}

void ToolTipManager$stillInsideTimerAction::actionPerformed($ActionEvent* e) {
	this->this$0->hideTipWindow();
	$nc(this->this$0->enterTimer)->stop();
	this->this$0->showImmediately = false;
	$set(this->this$0, insideComponent, nullptr);
	$set(this->this$0, mouseEvent, nullptr);
}

ToolTipManager$stillInsideTimerAction::ToolTipManager$stillInsideTimerAction() {
}

$Class* ToolTipManager$stillInsideTimerAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$stillInsideTimerAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PROTECTED, $method(ToolTipManager$stillInsideTimerAction, init$, void, $ToolTipManager*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ToolTipManager$stillInsideTimerAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ToolTipManager$stillInsideTimerAction", "javax.swing.ToolTipManager", "stillInsideTimerAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.ToolTipManager$stillInsideTimerAction",
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
	$loadClass(ToolTipManager$stillInsideTimerAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolTipManager$stillInsideTimerAction);
	});
	return class$;
}

$Class* ToolTipManager$stillInsideTimerAction::class$ = nullptr;

	} // swing
} // javax