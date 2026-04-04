#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardUpLeftHandler.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSplitPaneUI$KeyboardUpLeftHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardUpLeftHandler::actionPerformed($ActionEvent* ev) {
	if (this->this$0->dividerKeyboardResize) {
		int32_t var$0 = this->this$0->getDividerLocation(this->this$0->splitPane);
		$nc(this->this$0->splitPane)->setDividerLocation($Math::max(0, var$0 - this->this$0->getKeyboardMoveIncrement()));
	}
}

BasicSplitPaneUI$KeyboardUpLeftHandler::BasicSplitPaneUI$KeyboardUpLeftHandler() {
}

$Class* BasicSplitPaneUI$KeyboardUpLeftHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardUpLeftHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(BasicSplitPaneUI$KeyboardUpLeftHandler, init$, void, $BasicSplitPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$KeyboardUpLeftHandler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardUpLeftHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardUpLeftHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardUpLeftHandler",
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
	$loadClass(BasicSplitPaneUI$KeyboardUpLeftHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSplitPaneUI$KeyboardUpLeftHandler);
	});
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardUpLeftHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax