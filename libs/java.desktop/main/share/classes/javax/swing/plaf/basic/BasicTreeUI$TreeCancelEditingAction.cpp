#include <javax/swing/plaf/basic/BasicTreeUI$TreeCancelEditingAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$TreeCancelEditingAction::init$($BasicTreeUI* this$0, $String* name) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicTreeUI$TreeCancelEditingAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$nc($BasicTreeUI::SHARED_ACTION)->cancelEditing(this->this$0->tree, this->this$0);
	}
}

bool BasicTreeUI$TreeCancelEditingAction::isEnabled() {
	bool var$0 = this->this$0->tree != nullptr && this->this$0->tree->isEnabled();
	return (var$0 && this->this$0->isEditing(this->this$0->tree));
}

BasicTreeUI$TreeCancelEditingAction::BasicTreeUI$TreeCancelEditingAction() {
}

$Class* BasicTreeUI$TreeCancelEditingAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeCancelEditingAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeCancelEditingAction, init$, void, $BasicTreeUI*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeCancelEditingAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeCancelEditingAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeCancelEditingAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction",
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
		"javax.swing.plaf.basic.BasicTreeUI"
	};
	$loadClass(BasicTreeUI$TreeCancelEditingAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTreeUI$TreeCancelEditingAction));
	});
	return class$;
}

$Class* BasicTreeUI$TreeCancelEditingAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax