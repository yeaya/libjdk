#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardResizeToggleHandler.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JComponent.h>
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

void BasicSplitPaneUI$KeyboardResizeToggleHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardResizeToggleHandler::actionPerformed($ActionEvent* ev) {
	if (!this->this$0->dividerKeyboardResize) {
		$nc(this->this$0->splitPane)->requestFocus();
	}
}

BasicSplitPaneUI$KeyboardResizeToggleHandler::BasicSplitPaneUI$KeyboardResizeToggleHandler() {
}

$Class* BasicSplitPaneUI$KeyboardResizeToggleHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardResizeToggleHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(BasicSplitPaneUI$KeyboardResizeToggleHandler, init$, void, $BasicSplitPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$KeyboardResizeToggleHandler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardResizeToggleHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler",
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
	$loadClass(BasicSplitPaneUI$KeyboardResizeToggleHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSplitPaneUI$KeyboardResizeToggleHandler);
	});
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardResizeToggleHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax