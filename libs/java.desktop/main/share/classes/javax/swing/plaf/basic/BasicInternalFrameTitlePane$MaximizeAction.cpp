#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$MaximizeAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameTitlePane$MaximizeAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.maximizeButtonText"_s)));
}

void BasicInternalFrameTitlePane$MaximizeAction::actionPerformed($ActionEvent* evt) {
	if ($nc(this->this$0->frame)->isMaximizable()) {
		bool var$0 = $nc(this->this$0->frame)->isMaximum();
		if (var$0 && this->this$0->frame->isIcon()) {
			try {
				$nc(this->this$0->frame)->setIcon(false);
			} catch ($PropertyVetoException& e) {
			}
		} else if (!$nc(this->this$0->frame)->isMaximum()) {
			try {
				$nc(this->this$0->frame)->setMaximum(true);
			} catch ($PropertyVetoException& e) {
			}
		} else {
			try {
				$nc(this->this$0->frame)->setMaximum(false);
			} catch ($PropertyVetoException& e) {
			}
		}
	}
}

BasicInternalFrameTitlePane$MaximizeAction::BasicInternalFrameTitlePane$MaximizeAction() {
}

$Class* BasicInternalFrameTitlePane$MaximizeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$MaximizeAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(BasicInternalFrameTitlePane$MaximizeAction, init$, void, $BasicInternalFrameTitlePane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$MaximizeAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MaximizeAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "MaximizeAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MaximizeAction",
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
	$loadClass(BasicInternalFrameTitlePane$MaximizeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicInternalFrameTitlePane$MaximizeAction));
	});
	return class$;
}

$Class* BasicInternalFrameTitlePane$MaximizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax