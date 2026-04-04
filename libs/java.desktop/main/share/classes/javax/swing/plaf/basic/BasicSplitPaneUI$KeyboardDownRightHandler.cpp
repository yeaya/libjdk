#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardDownRightHandler.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSplitPaneUI$KeyboardDownRightHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardDownRightHandler::actionPerformed($ActionEvent* ev) {
	if (this->this$0->dividerKeyboardResize) {
		int32_t var$0 = this->this$0->getDividerLocation(this->this$0->splitPane);
		$nc(this->this$0->splitPane)->setDividerLocation(var$0 + this->this$0->getKeyboardMoveIncrement());
	}
}

BasicSplitPaneUI$KeyboardDownRightHandler::BasicSplitPaneUI$KeyboardDownRightHandler() {
}

$Class* BasicSplitPaneUI$KeyboardDownRightHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardDownRightHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(BasicSplitPaneUI$KeyboardDownRightHandler, init$, void, $BasicSplitPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$KeyboardDownRightHandler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardDownRightHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardDownRightHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardDownRightHandler",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicSplitPaneUI"
	};
	$loadClass(BasicSplitPaneUI$KeyboardDownRightHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSplitPaneUI$KeyboardDownRightHandler);
	});
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardDownRightHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax