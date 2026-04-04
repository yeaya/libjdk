#include <com/apple/laf/AquaOptionPaneUI$AquaButtonAreaLayout.h>
#include <com/apple/laf/AquaOptionPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonAreaLayout.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicOptionPaneUI$ButtonAreaLayout = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonAreaLayout;

namespace com {
	namespace apple {
		namespace laf {

void AquaOptionPaneUI$AquaButtonAreaLayout::init$(bool syncAllWidths, int32_t padding) {
	$BasicOptionPaneUI$ButtonAreaLayout::init$(true, padding);
}

void AquaOptionPaneUI$AquaButtonAreaLayout::layoutContainer($Container* container) {
	$useLocalObjectStack();
	$var($ComponentArray, children, $nc(container)->getComponents());
	if (children == nullptr || 0 >= children->length) {
		return;
	}
	int32_t numChildren = $nc(children)->length;
	int32_t yLocation = $nc($(container->getInsets()))->top;
	$var($Dimension, maxSize, $new($Dimension, 79, 23));
	for (int32_t i = 0; i < numChildren; ++i) {
		$var($Dimension, sizes, $nc(children->get(i))->getPreferredSize());
		maxSize->width = $Math::max(maxSize->width, $nc(sizes)->width);
		maxSize->height = $Math::max(maxSize->height, sizes->height);
	}
	int32_t xLocation = $nc($(container->getSize()))->width - (maxSize->width * numChildren + (numChildren - 1) * this->padding);
	int32_t xOffset = maxSize->width + this->padding;
	for (int32_t i = numChildren - 1; i >= 0; --i) {
		$nc(children->get(i))->setBounds(xLocation, yLocation, maxSize->width, maxSize->height);
		xLocation += xOffset;
	}
}

$Dimension* AquaOptionPaneUI$AquaButtonAreaLayout::minimumLayoutSize($Container* c) {
	$useLocalObjectStack();
	if (c != nullptr) {
		$var($ComponentArray, children, c->getComponents());
		if (children != nullptr && children->length > 0) {
			int32_t numChildren = children->length;
			$var($Insets, cInsets, c->getInsets());
			int32_t extraHeight = $nc(cInsets)->top + $nc(cInsets)->bottom;
			int32_t extraWidth = cInsets->left + cInsets->right;
			int32_t okCancelButtonWidth = extraWidth + (79 * numChildren) + (numChildren - 1) * this->padding;
			int32_t okbuttonHeight = extraHeight + 23;
			$var($Dimension, minSize, $BasicOptionPaneUI$ButtonAreaLayout::minimumLayoutSize(c));
			int32_t var$0 = $Math::max($nc(minSize)->width, okCancelButtonWidth);
			return $new($Dimension, var$0, $Math::max(minSize->height, okbuttonHeight));
		}
	}
	return $new($Dimension, 0, 0);
}

AquaOptionPaneUI$AquaButtonAreaLayout::AquaOptionPaneUI$AquaButtonAreaLayout() {
}

$Class* AquaOptionPaneUI$AquaButtonAreaLayout::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(AquaOptionPaneUI$AquaButtonAreaLayout, init$, void, bool, int32_t)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(AquaOptionPaneUI$AquaButtonAreaLayout, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaOptionPaneUI$AquaButtonAreaLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaOptionPaneUI$AquaButtonAreaLayout", "com.apple.laf.AquaOptionPaneUI", "AquaButtonAreaLayout", $PUBLIC | $STATIC},
		{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonAreaLayout", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaOptionPaneUI$AquaButtonAreaLayout",
		"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaOptionPaneUI"
	};
	$loadClass(AquaOptionPaneUI$AquaButtonAreaLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaOptionPaneUI$AquaButtonAreaLayout);
	});
	return class$;
}

$Class* AquaOptionPaneUI$AquaButtonAreaLayout::class$ = nullptr;

		} // laf
	} // apple
} // com