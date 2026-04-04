#include <javax/swing/plaf/basic/BasicDesktopPaneUI$OpenAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

#undef RESTORE
#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $BasicDesktopPaneUI$Actions = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDesktopPaneUI$OpenAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$OpenAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$init($BasicDesktopPaneUI);
	$init($BasicDesktopPaneUI$Actions);
	$nc($BasicDesktopPaneUI::SHARED_ACTION)->setState(dp, $BasicDesktopPaneUI$Actions::RESTORE);
}

bool BasicDesktopPaneUI$OpenAction::isEnabled() {
	return true;
}

BasicDesktopPaneUI$OpenAction::BasicDesktopPaneUI$OpenAction() {
}

$Class* BasicDesktopPaneUI$OpenAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$OpenAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(BasicDesktopPaneUI$OpenAction, init$, void, $BasicDesktopPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$OpenAction, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$OpenAction, isEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "OpenAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction",
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
	$loadClass(BasicDesktopPaneUI$OpenAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicDesktopPaneUI$OpenAction));
	});
	return class$;
}

$Class* BasicDesktopPaneUI$OpenAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax