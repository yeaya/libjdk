#include <com/apple/laf/AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout.h>
#include <com/apple/laf/AquaTabbedPaneTabState.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef TOP

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::init$(this$0);
}

int32_t AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::preferredTabAreaWidth(int32_t tabPlacement, int32_t height) {
	if (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT) {
		return $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::preferredTabAreaHeight(tabPlacement, height);
	}
	return $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::preferredTabAreaWidth(tabPlacement, height);
}

int32_t AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::preferredTabAreaHeight(int32_t tabPlacement, int32_t width) {
	if (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT) {
		return $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::preferredTabAreaWidth(tabPlacement, width);
	}
	return $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::preferredTabAreaHeight(tabPlacement, width);
}

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::calculateTabRects(int32_t tabPlacement, int32_t tabCount) {
	$useLocalObjectStack();
	if (tabCount <= 0) {
		return;
	}
	superCalculateTabRects(tabPlacement, tabCount);
	if ($nc(this->this$0->rects)->length <= 0) {
		return;
	}
	$var($RectangleArray, var$0, this->this$0->rects);
	$var($Dimension, var$1, $nc(this->this$0->tabPane)->getSize());
	$nc(this->this$0->visibleTabState)->alignRectsRunFor(var$0, var$1, tabPlacement, $AquaUtils::isLeftToRight(this->this$0->tabPane));
}

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::padTabRun(int32_t tabPlacement, int32_t start, int32_t end, int32_t max) {
	$useLocalObjectStack();
	if (tabPlacement == $SwingConstants::TOP || tabPlacement == $SwingConstants::BOTTOM) {
		$AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout::padTabRun(tabPlacement, start, end, max);
		return;
	}
	$var($Rectangle, lastRect, $nc(this->this$0->rects)->get(end));
	int32_t runHeight = ($nc(lastRect)->y + $nc(lastRect)->height) - $nc(this->this$0->rects->get(start))->y;
	int32_t deltaHeight = max - (lastRect->y + lastRect->height);
	float factor = (float)deltaHeight / (float)runHeight;
	for (int32_t i = start; i <= end; ++i) {
		$var($Rectangle, pastRect, this->this$0->rects->get(i));
		if (i > start) {
			$nc(pastRect)->y = $nc(this->this$0->rects->get(i - 1))->y + $nc(this->this$0->rects->get(i - 1))->height;
		}
		$nc(pastRect)->height += $Math::round($nc(pastRect)->height * factor);
	}
	lastRect->height = max - lastRect->y;
}

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::superCalculateTabRects(int32_t tabPlacement, int32_t tabCount) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Dimension, size, $nc(this->this$0->tabPane)->getSize());
		$var($Insets, insets, $nc(this->this$0->tabPane)->getInsets());
		$var($Insets, localTabAreaInsets, this->this$0->getTabAreaInsets(tabPlacement));
		int32_t returnAt = 0;
		int32_t x = 0;
		int32_t y = 0;
		switch (tabPlacement) {
		case $SwingConstants::LEFT:
			this->this$0->maxTabWidth = this->this$0->calculateMaxTabHeight(tabPlacement);
			x = $nc(insets)->left + $nc(localTabAreaInsets)->left;
			y = insets->top + localTabAreaInsets->top;
			returnAt = $nc(size)->height - (insets->bottom + localTabAreaInsets->bottom);
			break;
		case $SwingConstants::RIGHT:
			this->this$0->maxTabWidth = this->this$0->calculateMaxTabHeight(tabPlacement);
			x = $nc(size)->width - $nc(insets)->right - $nc(localTabAreaInsets)->right - this->this$0->maxTabWidth - 1;
			y = insets->top + localTabAreaInsets->top;
			returnAt = size->height - (insets->bottom + localTabAreaInsets->bottom);
			break;
		case $SwingConstants::BOTTOM:
			this->this$0->maxTabHeight = this->this$0->calculateMaxTabHeight(tabPlacement);
			x = $nc(insets)->left + $nc(localTabAreaInsets)->left;
			y = $nc(size)->height - insets->bottom - localTabAreaInsets->bottom - this->this$0->maxTabHeight;
			returnAt = size->width - (insets->right + localTabAreaInsets->right);
			break;
		case $SwingConstants::TOP:
		default:
			this->this$0->maxTabHeight = this->this$0->calculateMaxTabHeight(tabPlacement);
			x = $nc(insets)->left + $nc(localTabAreaInsets)->left;
			y = insets->top + localTabAreaInsets->top;
			returnAt = $nc(size)->width - (insets->right + localTabAreaInsets->right);
			break;
		}
		this->this$0->tabRunOverlay = this->this$0->getTabRunOverlay(tabPlacement);
		this->this$0->runCount = 0;
		this->this$0->selectedRun = 0;
		if (tabCount == 0) {
			return;
		}
		$var($FontMetrics, metrics, this->this$0->getFontMetrics());
		bool verticalTabRuns = (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT);
		int32_t selectedIndex = $nc(this->this$0->tabPane)->getSelectedIndex();
		$nc(this->this$0->visibleTabState)->setNeedsScrollers(false);
		for (int32_t i = 0; i < tabCount; ++i) {
			$var($Rectangle, rect, $nc(this->this$0->rects)->get(i));
			if (verticalTabRuns) {
				calculateVerticalTabRunRect(rect, metrics, tabPlacement, returnAt, i, x, y);
				if ($nc(rect)->y + $nc(rect)->height > returnAt) {
					this->this$0->visibleTabState->setNeedsScrollers(true);
				}
			} else {
				calculateHorizontalTabRunRect(rect, metrics, tabPlacement, returnAt, i, x, y);
				if ($nc(rect)->x + $nc(rect)->width > returnAt) {
					this->this$0->visibleTabState->setNeedsScrollers(true);
				}
			}
		}
		this->this$0->visibleTabState->relayoutForScrolling(this->this$0->rects, x, y, returnAt, selectedIndex, verticalTabRuns, tabCount, $AquaUtils::isLeftToRight(this->this$0->tabPane));
		if (!$AquaUtils::isLeftToRight(this->this$0->tabPane) && !verticalTabRuns) {
			int32_t rightMargin = $nc(size)->width - ($nc(insets)->right + $nc(localTabAreaInsets)->right);
			for (int32_t i = 0; i < tabCount; ++i) {
				$nc($nc(this->this$0->rects)->get(i))->x = rightMargin - $nc($nc(this->this$0->rects)->get(i))->x - $nc($nc(this->this$0->rects)->get(i))->width;
			}
		}
	}
}

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::calculateHorizontalTabRunRect($Rectangle* rect, $FontMetrics* metrics, int32_t tabPlacement, int32_t returnAt, int32_t i, int32_t x, int32_t y) {
	if (i > 0) {
		$nc(rect)->x = $nc($nc(this->this$0->rects)->get(i - 1))->x + $nc($nc(this->this$0->rects)->get(i - 1))->width;
	} else {
		$nc(this->this$0->tabRuns)->set(0, 0);
		this->this$0->runCount = 1;
		this->this$0->maxTabWidth = 0;
		$nc(rect)->x = x;
	}
	$nc(rect)->width = this->this$0->calculateTabWidth(tabPlacement, i, metrics);
	this->this$0->maxTabWidth = $Math::max(this->this$0->maxTabWidth, rect->width);
	rect->y = y;
	rect->height = this->this$0->maxTabHeight;
}

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::calculateVerticalTabRunRect($Rectangle* rect, $FontMetrics* metrics, int32_t tabPlacement, int32_t returnAt, int32_t i, int32_t x, int32_t y) {
	if (i > 0) {
		$nc(rect)->y = $nc($nc(this->this$0->rects)->get(i - 1))->y + $nc($nc(this->this$0->rects)->get(i - 1))->height;
	} else {
		$nc(this->this$0->tabRuns)->set(0, 0);
		this->this$0->runCount = 1;
		this->this$0->maxTabHeight = 0;
		$nc(rect)->y = y;
	}
	$nc(rect)->height = this->this$0->calculateTabWidth(tabPlacement, i, metrics);
	this->this$0->maxTabHeight = $Math::max(this->this$0->maxTabHeight, rect->height);
	rect->x = x;
	rect->width = this->this$0->maxTabWidth;
}

void AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::layoutTabComponents() {
	$useLocalObjectStack();
	$var($Container, tabContainer, getTabContainer());
	if (tabContainer == nullptr) {
		return;
	}
	int32_t placement = $nc(this->this$0->tabPane)->getTabPlacement();
	$var($Rectangle, rect, $new($Rectangle));
	int32_t var$0 = -$nc(tabContainer)->getX();
	$var($Point, delta, $new($Point, var$0, -tabContainer->getY()));
	for (int32_t i = 0; i < $nc(this->this$0->tabPane)->getTabCount(); ++i) {
		$var($Component, c, this->this$0->getTabComponentAt(i));
		if (c == nullptr) {
			continue;
		}
		this->this$0->getTabBounds(i, rect);
		$var($Insets, insets, this->this$0->getTabInsets($nc(this->this$0->tabPane)->getTabPlacement(), i));
		bool isSeleceted = i == $nc(this->this$0->tabPane)->getSelectedIndex();
		if (placement == $SwingConstants::TOP || placement == $SwingConstants::BOTTOM) {
			rect->x += $nc(insets)->left + delta->x + this->this$0->getTabLabelShiftX(placement, i, isSeleceted);
			rect->y += insets->top + delta->y + this->this$0->getTabLabelShiftY(placement, i, isSeleceted) + 1;
			rect->width -= insets->left + insets->right;
			rect->height -= insets->top + insets->bottom - 1;
		} else {
			rect->x += $nc(insets)->top + delta->x + this->this$0->getTabLabelShiftY(placement, i, isSeleceted) + (placement == $SwingConstants::LEFT ? 2 : 1);
			rect->y += insets->left + delta->y + this->this$0->getTabLabelShiftX(placement, i, isSeleceted);
			rect->width -= insets->top + insets->bottom - 1;
			rect->height -= insets->left + insets->right;
		}
		$nc(c)->setBounds(rect);
	}
}

AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout() {
}

$Class* AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, $PROTECTED, $method(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, init$, void, $AquaTabbedPaneUI*)},
		{"calculateHorizontalTabRunRect", "(Ljava/awt/Rectangle;Ljava/awt/FontMetrics;IIIII)V", nullptr, $PRIVATE, $method(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, calculateHorizontalTabRunRect, void, $Rectangle*, $FontMetrics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"calculateTabRects", "(II)V", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, calculateTabRects, void, int32_t, int32_t)},
		{"calculateVerticalTabRunRect", "(Ljava/awt/Rectangle;Ljava/awt/FontMetrics;IIIII)V", nullptr, $PRIVATE, $method(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, calculateVerticalTabRunRect, void, $Rectangle*, $FontMetrics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"layoutTabComponents", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, layoutTabComponents, void)},
		{"padTabRun", "(IIII)V", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, padTabRun, void, int32_t, int32_t, int32_t, int32_t)},
		{"preferredTabAreaHeight", "(II)I", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, preferredTabAreaHeight, int32_t, int32_t, int32_t)},
		{"preferredTabAreaWidth", "(II)I", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, preferredTabAreaWidth, int32_t, int32_t, int32_t)},
		{"superCalculateTabRects", "(II)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, superCalculateTabRects, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout", "com.apple.laf.AquaTabbedPaneUI", "AquaTruncatingTabbedPaneLayout", $PROTECTED},
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "TabbedPaneLayout", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout",
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneUI"
	};
	$loadClass(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout);
	});
	return class$;
}

$Class* AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout::class$ = nullptr;

		} // laf
	} // apple
} // com