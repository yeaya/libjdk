#include <javax/swing/plaf/basic/BasicTreeUI$TreeHomeAction.h>
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

void BasicTreeUI$TreeHomeAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreeHomeAction::init$(this$0, direction, name, false, true);
}

void BasicTreeUI$TreeHomeAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->changeSelection = changeSelection;
	this->addToSelection = addToSelection;
}

void BasicTreeUI$TreeHomeAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$nc($BasicTreeUI::SHARED_ACTION)->home(this->this$0->tree, this->this$0, this->direction, this->addToSelection, this->changeSelection);
	}
}

bool BasicTreeUI$TreeHomeAction::isEnabled() {
	return (this->this$0->tree != nullptr && this->this$0->tree->isEnabled());
}

BasicTreeUI$TreeHomeAction::BasicTreeUI$TreeHomeAction() {
}

$Class* BasicTreeUI$TreeHomeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeHomeAction, this$0)},
		{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreeHomeAction, direction)},
		{"addToSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeHomeAction, addToSelection)},
		{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeHomeAction, changeSelection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeHomeAction, init$, void, $BasicTreeUI*, int32_t, $String*)},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(BasicTreeUI$TreeHomeAction, init$, void, $BasicTreeUI*, int32_t, $String*, bool, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeHomeAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeHomeAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeHomeAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeHomeAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeHomeAction",
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
	$loadClass(BasicTreeUI$TreeHomeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTreeUI$TreeHomeAction));
	});
	return class$;
}

$Class* BasicTreeUI$TreeHomeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax