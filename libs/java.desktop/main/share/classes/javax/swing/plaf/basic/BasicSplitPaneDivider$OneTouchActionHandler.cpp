#include <javax/swing/plaf/basic/BasicSplitPaneDivider$OneTouchActionHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSplitPaneDivider$OneTouchActionHandler::init$($BasicSplitPaneDivider* this$0, bool toMinimum) {
	$set(this, this$0, this$0);
	this->toMinimum = toMinimum;
}

void BasicSplitPaneDivider$OneTouchActionHandler::actionPerformed($ActionEvent* e) {
	$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
	int32_t lastLoc = $nc(this->this$0->splitPane)->getLastDividerLocation();
	int32_t currentLoc = $nc(this->this$0->splitPaneUI)->getDividerLocation(this->this$0->splitPane);
	int32_t newLoc = 0;
	if (this->toMinimum) {
		if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
			int32_t var$0 = currentLoc;
			int32_t var$2 = $nc(this->this$0->splitPane)->getHeight() - $nc(insets)->bottom;
			int32_t var$1 = (var$2 - this->this$0->getHeight());
			if (var$0 >= var$1) {
				int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
				newLoc = $Math::min(lastLoc, maxLoc);
				$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
			} else {
				newLoc = insets->top;
				$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
			}
		} else {
			int32_t var$3 = currentLoc;
			int32_t var$5 = $nc(this->this$0->splitPane)->getWidth() - $nc(insets)->right;
			int32_t var$4 = (var$5 - this->this$0->getWidth());
			if (var$3 >= var$4) {
				int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
				newLoc = $Math::min(lastLoc, maxLoc);
				$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
			} else {
				newLoc = insets->left;
				$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
			}
		}
	} else if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
		if (currentLoc == $nc(insets)->top) {
			int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
			newLoc = $Math::min(lastLoc, maxLoc);
			$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
		} else {
			int32_t var$6 = $nc(this->this$0->splitPane)->getHeight();
			newLoc = var$6 - this->this$0->getHeight() - insets->top;
			$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
		}
	} else if (currentLoc == $nc(insets)->left) {
		int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
		newLoc = $Math::min(lastLoc, maxLoc);
		$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
	} else {
		int32_t var$7 = $nc(this->this$0->splitPane)->getWidth();
		newLoc = var$7 - this->this$0->getWidth() - insets->left;
		$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
	}
	if (currentLoc != newLoc) {
		$nc(this->this$0->splitPane)->setDividerLocation(newLoc);
		$nc(this->this$0->splitPane)->setLastDividerLocation(currentLoc);
	}
}

BasicSplitPaneDivider$OneTouchActionHandler::BasicSplitPaneDivider$OneTouchActionHandler() {
}

$Class* BasicSplitPaneDivider$OneTouchActionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$OneTouchActionHandler, this$0)},
		{"toMinimum", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneDivider$OneTouchActionHandler, toMinimum)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;Z)V", nullptr, 0, $method(BasicSplitPaneDivider$OneTouchActionHandler, init$, void, $BasicSplitPaneDivider*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSplitPaneDivider$OneTouchActionHandler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler", "javax.swing.plaf.basic.BasicSplitPaneDivider", "OneTouchActionHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler",
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
		"javax.swing.plaf.basic.BasicSplitPaneDivider"
	};
	$loadClass(BasicSplitPaneDivider$OneTouchActionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSplitPaneDivider$OneTouchActionHandler);
	});
	return class$;
}

$Class* BasicSplitPaneDivider$OneTouchActionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax