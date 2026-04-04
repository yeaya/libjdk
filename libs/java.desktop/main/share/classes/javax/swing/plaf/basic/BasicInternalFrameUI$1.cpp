#include <javax/swing/plaf/basic/BasicInternalFrameUI$1.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameUI$1::init$($String* name) {
	$UIAction::init$(name);
}

void BasicInternalFrameUI$1::actionPerformed($ActionEvent* evt) {
	$useLocalObjectStack();
	$var($JInternalFrame, iFrame, $cast($JInternalFrame, $nc(evt)->getSource()));
	if ($instanceOf($BasicInternalFrameUI, $$cast($InternalFrameUI, $nc(iFrame)->getUI()))) {
		$var($JComponent, comp, $$sure($BasicInternalFrameUI, $cast($InternalFrameUI, iFrame->getUI()))->getNorthPane());
		if ($instanceOf($BasicInternalFrameTitlePane, comp)) {
			$cast($BasicInternalFrameTitlePane, comp)->showSystemMenu();
		}
	}
}

bool BasicInternalFrameUI$1::accept(Object$* sender) {
	$useLocalObjectStack();
	if ($instanceOf($JInternalFrame, sender)) {
		$var($JInternalFrame, iFrame, $cast($JInternalFrame, sender));
		if ($instanceOf($BasicInternalFrameUI, $$cast($InternalFrameUI, iFrame->getUI()))) {
			return $$sure($BasicInternalFrameUI, $cast($InternalFrameUI, iFrame->getUI()))->isKeyBindingActive();
		}
	}
	return false;
}

BasicInternalFrameUI$1::BasicInternalFrameUI$1() {
}

$Class* BasicInternalFrameUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicInternalFrameUI$1, init$, void, $String*)},
		{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$1, accept, bool, Object$*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicInternalFrameUI",
		"loadActionMap",
		"(Ljavax/swing/plaf/basic/LazyActionMap;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameUI$1",
		"sun.swing.UIAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicInternalFrameUI"
	};
	$loadClass(BasicInternalFrameUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicInternalFrameUI$1);
	});
	return class$;
}

$Class* BasicInternalFrameUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax