#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$RestoreAction.h>
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

void BasicInternalFrameTitlePane$RestoreAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.restoreButtonText"_s)));
}

void BasicInternalFrameTitlePane$RestoreAction::actionPerformed($ActionEvent* evt) {
	bool var$1 = $nc(this->this$0->frame)->isMaximizable();
	bool var$0 = var$1 && this->this$0->frame->isMaximum();
	if (var$0 && this->this$0->frame->isIcon()) {
		try {
			$nc(this->this$0->frame)->setIcon(false);
		} catch ($PropertyVetoException& e) {
		}
	} else {
		bool var$2 = $nc(this->this$0->frame)->isMaximizable();
		if (var$2 && this->this$0->frame->isMaximum()) {
			try {
				$nc(this->this$0->frame)->setMaximum(false);
			} catch ($PropertyVetoException& e) {
			}
		} else {
			bool var$3 = $nc(this->this$0->frame)->isIconifiable();
			if (var$3 && this->this$0->frame->isIcon()) {
				try {
					$nc(this->this$0->frame)->setIcon(false);
				} catch ($PropertyVetoException& e) {
				}
			}
		}
	}
}

BasicInternalFrameTitlePane$RestoreAction::BasicInternalFrameTitlePane$RestoreAction() {
}

$Class* BasicInternalFrameTitlePane$RestoreAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$RestoreAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(BasicInternalFrameTitlePane$RestoreAction, init$, void, $BasicInternalFrameTitlePane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$RestoreAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$RestoreAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "RestoreAction", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$RestoreAction",
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
	$loadClass(BasicInternalFrameTitlePane$RestoreAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicInternalFrameTitlePane$RestoreAction));
	});
	return class$;
}

$Class* BasicInternalFrameTitlePane$RestoreAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax