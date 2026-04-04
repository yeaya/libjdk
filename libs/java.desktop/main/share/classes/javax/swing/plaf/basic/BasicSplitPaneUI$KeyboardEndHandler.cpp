#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardEndHandler.h>
#include <java/awt/Insets.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSplitPaneUI$KeyboardEndHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardEndHandler::actionPerformed($ActionEvent* ev) {
	if (this->this$0->dividerKeyboardResize) {
		$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
		int32_t bottomI = (insets != nullptr) ? insets->bottom : 0;
		int32_t rightI = (insets != nullptr) ? insets->right : 0;
		if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
			$nc(this->this$0->splitPane)->setDividerLocation($nc(this->this$0->splitPane)->getHeight() - bottomI);
		} else {
			$nc(this->this$0->splitPane)->setDividerLocation($nc(this->this$0->splitPane)->getWidth() - rightI);
		}
	}
}

BasicSplitPaneUI$KeyboardEndHandler::BasicSplitPaneUI$KeyboardEndHandler() {
}

$Class* BasicSplitPaneUI$KeyboardEndHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardEndHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(BasicSplitPaneUI$KeyboardEndHandler, init$, void, $BasicSplitPaneUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneUI$KeyboardEndHandler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardEndHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler",
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
	$loadClass(BasicSplitPaneUI$KeyboardEndHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSplitPaneUI$KeyboardEndHandler);
	});
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardEndHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax