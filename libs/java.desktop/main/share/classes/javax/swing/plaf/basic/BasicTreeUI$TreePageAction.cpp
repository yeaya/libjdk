#include <javax/swing/plaf/basic/BasicTreeUI$TreePageAction.h>
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

void BasicTreeUI$TreePageAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name) {
	BasicTreeUI$TreePageAction::init$(this$0, direction, name, false, true);
}

void BasicTreeUI$TreePageAction::init$($BasicTreeUI* this$0, int32_t direction, $String* name, bool addToSelection, bool changeSelection) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->direction = direction;
	this->addToSelection = addToSelection;
	this->changeSelection = changeSelection;
}

void BasicTreeUI$TreePageAction::actionPerformed($ActionEvent* e) {
	if (this->this$0->tree != nullptr) {
		$nc($BasicTreeUI::SHARED_ACTION)->page(this->this$0->tree, this->this$0, this->direction, this->addToSelection, this->changeSelection);
	}
}

bool BasicTreeUI$TreePageAction::isEnabled() {
	return (this->this$0->tree != nullptr && this->this$0->tree->isEnabled());
}

BasicTreeUI$TreePageAction::BasicTreeUI$TreePageAction() {
}

$Class* BasicTreeUI$TreePageAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreePageAction, this$0)},
		{"direction", "I", nullptr, $PROTECTED, $field(BasicTreeUI$TreePageAction, direction)},
		{"addToSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreePageAction, addToSelection)},
		{"changeSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$TreePageAction, changeSelection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreePageAction, init$, void, $BasicTreeUI*, int32_t, $String*)},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;ILjava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(BasicTreeUI$TreePageAction, init$, void, $BasicTreeUI*, int32_t, $String*, bool, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreePageAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreePageAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreePageAction", "javax.swing.plaf.basic.BasicTreeUI", "TreePageAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreePageAction",
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
	$loadClass(BasicTreeUI$TreePageAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTreeUI$TreePageAction));
	});
	return class$;
}

$Class* BasicTreeUI$TreePageAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax