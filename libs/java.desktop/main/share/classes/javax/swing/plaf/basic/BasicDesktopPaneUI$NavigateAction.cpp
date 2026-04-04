#include <javax/swing/plaf/basic/BasicDesktopPaneUI$NavigateAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDesktopPaneUI$NavigateAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$NavigateAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$nc(dp)->selectFrame(true);
}

bool BasicDesktopPaneUI$NavigateAction::isEnabled() {
	return true;
}

BasicDesktopPaneUI$NavigateAction::BasicDesktopPaneUI$NavigateAction() {
}

$Class* BasicDesktopPaneUI$NavigateAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$NavigateAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(BasicDesktopPaneUI$NavigateAction, init$, void, $BasicDesktopPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$NavigateAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$NavigateAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "NavigateAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction",
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
	$loadClass(BasicDesktopPaneUI$NavigateAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicDesktopPaneUI$NavigateAction));
	});
	return class$;
}

$Class* BasicDesktopPaneUI$NavigateAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax