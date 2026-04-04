#include <javax/swing/plaf/basic/BasicTreeUI$TreeIncrementAction.h>
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

void BasicTreeUI$TreeIncrementAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreeIncrementAction::init$(this$0, direction, name, false, true);
}

void BasicTreeUI$TreeIncrementAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->addToSelection = addToSelection;
	this->changeSelection = changeSelection;
}

void BasicTreeUI$TreeIncrementAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$nc($BasicTreeUI::SHARED_ACTION)->increment(this->this$0->tree, this->this$0, this->direction, this->addToSelection, this->changeSelection);
	}
}

bool BasicTreeUI$TreeIncrementAction::isEnabled() {
	return (this->this$0->tree != nullptr && this->this$0->tree->isEnabled());
}

BasicTreeUI$TreeIncrementAction::BasicTreeUI$TreeIncrementAction() {
}

$Class* BasicTreeUI$TreeIncrementAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeIncrementAction, this$0)},
		{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreeIncrementAction, direction)},
		{"addToSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeIncrementAction, addToSelection)},
		{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeIncrementAction, changeSelection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeIncrementAction, init$, void, $BasicTreeUI*, int32_t, $String*)},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(BasicTreeUI$TreeIncrementAction, init$, void, $BasicTreeUI*, int32_t, $String*, bool, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeIncrementAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeIncrementAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeIncrementAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction",
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
	$loadClass(BasicTreeUI$TreeIncrementAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTreeUI$TreeIncrementAction));
	});
	return class$;
}

$Class* BasicTreeUI$TreeIncrementAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax