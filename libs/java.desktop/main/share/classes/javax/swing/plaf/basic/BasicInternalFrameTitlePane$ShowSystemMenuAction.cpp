#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$ShowSystemMenuAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameTitlePane$ShowSystemMenuAction::init$($BasicInternalFrameTitlePane* this$0, bool show) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->show = show;
}

void BasicInternalFrameTitlePane$ShowSystemMenuAction::actionPerformed($ActionEvent* e) {
	if (this->show) {
		$nc(this->this$0->windowMenu)->doClick();
	} else {
		$nc(this->this$0->windowMenu)->setVisible(false);
	}
}

BasicInternalFrameTitlePane$ShowSystemMenuAction::BasicInternalFrameTitlePane$ShowSystemMenuAction() {
}

$Class* BasicInternalFrameTitlePane$ShowSystemMenuAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$ShowSystemMenuAction, this$0)},
		{"show", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane$ShowSystemMenuAction, show)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;Z)V", nullptr, $PUBLIC, $method(BasicInternalFrameTitlePane$ShowSystemMenuAction, init$, void, $BasicInternalFrameTitlePane*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$ShowSystemMenuAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "ShowSystemMenuAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction",
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
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
	};
	$loadClass(BasicInternalFrameTitlePane$ShowSystemMenuAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicInternalFrameTitlePane$ShowSystemMenuAction));
	});
	return class$;
}

$Class* BasicInternalFrameTitlePane$ShowSystemMenuAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax