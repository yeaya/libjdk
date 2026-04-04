#include <javax/swing/plaf/basic/BasicTreeUI$TreeTraverseAction.h>
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

void BasicTreeUI$TreeTraverseAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreeTraverseAction::init$(this$0, direction, name, true);
}

void BasicTreeUI$TreeTraverseAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->changeSelection = changeSelection;
}

void BasicTreeUI$TreeTraverseAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$nc($BasicTreeUI::SHARED_ACTION)->traverse(this->this$0->tree, this->this$0, this->direction, this->changeSelection);
	}
}

bool BasicTreeUI$TreeTraverseAction::isEnabled() {
	return (this->this$0->tree != nullptr && this->this$0->tree->isEnabled());
}

BasicTreeUI$TreeTraverseAction::BasicTreeUI$TreeTraverseAction() {
}

$Class* BasicTreeUI$TreeTraverseAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeTraverseAction, this$0)},
		{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreeTraverseAction, direction)},
		{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreeTraverseAction, changeSelection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeTraverseAction, init$, void, $BasicTreeUI*, int32_t, $String*)},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;Z)V", nullptr, $PRIVATE, $method(BasicTreeUI$TreeTraverseAction, init$, void, $BasicTreeUI*, int32_t, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeTraverseAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeTraverseAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeTraverseAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction",
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
	$loadClass(BasicTreeUI$TreeTraverseAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTreeUI$TreeTraverseAction));
	});
	return class$;
}

$Class* BasicTreeUI$TreeTraverseAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax