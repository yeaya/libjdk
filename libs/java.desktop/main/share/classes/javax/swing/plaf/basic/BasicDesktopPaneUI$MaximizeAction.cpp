#include <javax/swing/plaf/basic/BasicDesktopPaneUI$MaximizeAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

#undef MAXIMIZE
#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $BasicDesktopPaneUI$Actions = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDesktopPaneUI$MaximizeAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$MaximizeAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$init($BasicDesktopPaneUI);
	$init($BasicDesktopPaneUI$Actions);
	$nc($BasicDesktopPaneUI::SHARED_ACTION)->setState(dp, $BasicDesktopPaneUI$Actions::MAXIMIZE);
}

bool BasicDesktopPaneUI$MaximizeAction::isEnabled() {
	$var($JInternalFrame, iFrame, $nc(this->this$0->desktop)->getSelectedFrame());
	if (iFrame != nullptr) {
		return iFrame->isMaximizable();
	}
	return false;
}

BasicDesktopPaneUI$MaximizeAction::BasicDesktopPaneUI$MaximizeAction() {
}

$Class* BasicDesktopPaneUI$MaximizeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$MaximizeAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(BasicDesktopPaneUI$MaximizeAction, init$, void, $BasicDesktopPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$MaximizeAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$MaximizeAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MaximizeAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction",
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
		"javax.swing.plaf.basic.BasicDesktopPaneUI"
	};
	$loadClass(BasicDesktopPaneUI$MaximizeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicDesktopPaneUI$MaximizeAction));
	});
	return class$;
}

$Class* BasicDesktopPaneUI$MaximizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax