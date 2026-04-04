#include <com/apple/laf/AquaSplitPaneDividerUI$DividerLayout.h>
#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DividerLayout.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $AquaSplitPaneDividerUI = ::com::apple::laf::AquaSplitPaneDividerUI;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider$DividerLayout = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DividerLayout;

namespace com {
	namespace apple {
		namespace laf {

void AquaSplitPaneDividerUI$DividerLayout::init$($AquaSplitPaneDividerUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSplitPaneDivider$DividerLayout::init$(this$0);
}

void AquaSplitPaneDividerUI$DividerLayout::layoutContainer($Container* c) {
	$useLocalObjectStack();
	int32_t maxSize = this->this$0->getMaxDividerSize();
	$var($Dimension, size, this->this$0->getSize());
	bool var$0 = $AquaSplitPaneDividerUI::access$000(this->this$0) == nullptr;
	if (var$0 || $AquaSplitPaneDividerUI::access$100(this->this$0) == nullptr || !$equals(c, this->this$0)) {
		return;
	}
	if (!$$nc($AquaSplitPaneDividerUI::access$200(this->this$0))->isOneTouchExpandable()) {
		$$nc($AquaSplitPaneDividerUI::access$300(this->this$0))->setBounds(-5, -5, 1, 1);
		$$nc($AquaSplitPaneDividerUI::access$400(this->this$0))->setBounds(-5, -5, 1, 1);
		return;
	}
	int32_t blockSize = $Math::min(this->this$0->getDividerSize(), 9);
	if ($AquaSplitPaneDividerUI::access$500(this->this$0) == $JSplitPane::VERTICAL_SPLIT) {
		int32_t yPosition = 0;
		if ($nc(size)->height > maxSize) {
			int32_t diff = size->height - maxSize;
			yPosition = diff / 2;
		}
		int32_t xPosition = 9 + 2;
		$$nc($AquaSplitPaneDividerUI::access$600(this->this$0))->setBounds(xPosition, yPosition, 9, blockSize);
		xPosition -= (9 + 2);
		$$nc($AquaSplitPaneDividerUI::access$700(this->this$0))->setBounds(xPosition, yPosition, 9, blockSize);
	} else {
		int32_t xPosition = 0;
		if ($nc(size)->width > maxSize) {
			int32_t diff = size->width - maxSize;
			xPosition = diff / 2;
		}
		int32_t yPosition = 9 + 2;
		$$nc($AquaSplitPaneDividerUI::access$800(this->this$0))->setBounds(xPosition, yPosition, blockSize, 9);
		yPosition -= (9 + 2);
		$$nc($AquaSplitPaneDividerUI::access$900(this->this$0))->setBounds(xPosition, yPosition, blockSize, 9);
	}
}

AquaSplitPaneDividerUI$DividerLayout::AquaSplitPaneDividerUI$DividerLayout() {
}

$Class* AquaSplitPaneDividerUI$DividerLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaSplitPaneDividerUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSplitPaneDividerUI$DividerLayout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)V", nullptr, $PROTECTED, $method(AquaSplitPaneDividerUI$DividerLayout, init$, void, $AquaSplitPaneDividerUI*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(AquaSplitPaneDividerUI$DividerLayout, layoutContainer, void, $Container*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSplitPaneDividerUI$DividerLayout", "com.apple.laf.AquaSplitPaneDividerUI", "DividerLayout", $PROTECTED},
		{"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DividerLayout", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaSplitPaneDividerUI$DividerLayout",
		"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSplitPaneDividerUI"
	};
	$loadClass(AquaSplitPaneDividerUI$DividerLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSplitPaneDividerUI$DividerLayout);
	});
	return class$;
}

$Class* AquaSplitPaneDividerUI$DividerLayout::class$ = nullptr;

		} // laf
	} // apple
} // com