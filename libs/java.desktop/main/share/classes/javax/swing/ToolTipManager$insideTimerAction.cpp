#include <javax/swing/ToolTipManager$insideTimerAction.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
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

void ToolTipManager$insideTimerAction::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
}

void ToolTipManager$insideTimerAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->insideComponent != nullptr && this->this$0->insideComponent->isShowing()) {
		if (this->this$0->toolTipText == nullptr && this->this$0->mouseEvent != nullptr) {
			$set(this->this$0, toolTipText, this->this$0->insideComponent->getToolTipText(this->this$0->mouseEvent));
			$set(this->this$0, preferredLocation, $nc(this->this$0->insideComponent)->getToolTipLocation(this->this$0->mouseEvent));
		}
		if (this->this$0->toolTipText != nullptr) {
			this->this$0->showImmediately = true;
			this->this$0->showTipWindow();
		} else {
			$set(this->this$0, insideComponent, nullptr);
			$set(this->this$0, toolTipText, nullptr);
			$set(this->this$0, preferredLocation, nullptr);
			$set(this->this$0, mouseEvent, nullptr);
			this->this$0->hideTipWindow();
		}
	}
}

ToolTipManager$insideTimerAction::ToolTipManager$insideTimerAction() {
}

$Class* ToolTipManager$insideTimerAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$insideTimerAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PROTECTED, $method(ToolTipManager$insideTimerAction, init$, void, $ToolTipManager*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ToolTipManager$insideTimerAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ToolTipManager$insideTimerAction", "javax.swing.ToolTipManager", "insideTimerAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.ToolTipManager$insideTimerAction",
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
	$loadClass(ToolTipManager$insideTimerAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolTipManager$insideTimerAction);
	});
	return class$;
}

$Class* ToolTipManager$insideTimerAction::class$ = nullptr;

	} // swing
} // javax