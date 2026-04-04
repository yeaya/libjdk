#include <com/apple/laf/AquaTabbedPaneTabState.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef FIXED_SCROLL_TAB_LENGTH
#undef LEFT
#undef MAX_VALUE
#undef MIN_VALUE
#undef RIGHT

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneTabState::init$($AquaTabbedPaneUI* pane) {
	$set(this, leftScrollTabRect, $new($Rectangle));
	$set(this, rightScrollTabRect, $new($Rectangle));
	this->numberOfVisibleTabs = 0;
	$set(this, visibleTabList, $new($ints, 10));
	$set(this, pane, pane);
}

int32_t AquaTabbedPaneTabState::getIndex(int32_t i) {
	if (i >= $nc(this->visibleTabList)->length) {
		return $Integer::MIN_VALUE;
	}
	return this->visibleTabList->get(i);
}

void AquaTabbedPaneTabState::init(int32_t tabCount) {
	if (tabCount < 1) {
		this->needsScrollers = false;
	}
	if (tabCount == $nc(this->visibleTabList)->length) {
		return;
	}
	$var($ints, tempVisibleTabs, $new($ints, tabCount));
	$System::arraycopy(this->visibleTabList, 0, tempVisibleTabs, 0, $Math::min(this->visibleTabList->length, tabCount));
	$set(this, visibleTabList, tempVisibleTabs);
}

int32_t AquaTabbedPaneTabState::getTotal() {
	return this->numberOfVisibleTabs;
}

bool AquaTabbedPaneTabState::needsScrollTabs() {
	return this->needsScrollers;
}

void AquaTabbedPaneTabState::setNeedsScrollers(bool needsScrollers) {
	this->needsScrollers = needsScrollers;
}

bool AquaTabbedPaneTabState::needsLeftScrollTab() {
	return this->hasMoreLeftTabs;
}

bool AquaTabbedPaneTabState::needsRightScrollTab() {
	return this->hasMoreRightTabs;
}

$Rectangle* AquaTabbedPaneTabState::getLeftScrollTabRect() {
	return this->leftScrollTabRect;
}

$Rectangle* AquaTabbedPaneTabState::getRightScrollTabRect() {
	return this->rightScrollTabRect;
}

bool AquaTabbedPaneTabState::isBefore(int32_t i) {
	if (this->numberOfVisibleTabs == 0) {
		return true;
	}
	if (i < $nc(this->visibleTabList)->get(0)) {
		return true;
	}
	return false;
}

bool AquaTabbedPaneTabState::isAfter(int32_t i) {
	if (i > $nc(this->visibleTabList)->get(this->numberOfVisibleTabs - 1)) {
		return true;
	}
	return false;
}

void AquaTabbedPaneTabState::addToEnd(int32_t idToAdd, int32_t length) {
	$nc(this->visibleTabList)->set(length, idToAdd);
}

void AquaTabbedPaneTabState::addToBeginning(int32_t idToAdd, int32_t length) {
	$System::arraycopy(this->visibleTabList, 0, this->visibleTabList, 1, length);
	$nc(this->visibleTabList)->set(0, idToAdd);
}

void AquaTabbedPaneTabState::relayoutForScrolling($RectangleArray* rects, int32_t startX, int32_t startY, int32_t returnAt, int32_t selectedIndex, bool verticalTabRuns, int32_t tabCount, bool isLeftToRight) {
	$useLocalObjectStack();
	if (!this->needsScrollers) {
		this->hasMoreLeftTabs = false;
		this->hasMoreRightTabs = false;
		return;
	}
	if (verticalTabRuns) {
		this->rightScrollTabRect->height = AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
		this->leftScrollTabRect->height = AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
	} else {
		this->rightScrollTabRect->width = AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
		this->leftScrollTabRect->width = AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
	}
	bool sizeChanged = returnAt != this->lastReturnAt;
	if ($nc(this->pane)->popupSelectionChanged || sizeChanged) {
		this->pane->popupSelectionChanged = false;
		this->lastLeftmostTab = -1;
	}
	int32_t right = selectedIndex;
	int32_t left = selectedIndex - 1;
	if (this->lastLeftmostTab >= 0) {
		right = this->lastLeftmostTab;
		left = -1;
	} else if (selectedIndex < 0) {
		right = 0;
		left = -1;
	}
	int32_t remainingSpace = returnAt - $nc(this->pane->tabAreaInsets)->right - $nc(this->pane->tabAreaInsets)->left - AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH * 2;
	int32_t visibleCount = 0;
	$var($Rectangle, firstRect, $nc(rects)->get(right));
	if ((verticalTabRuns ? $nc(firstRect)->height : $nc(firstRect)->width) > remainingSpace) {
		addToEnd(right, visibleCount);
		if (verticalTabRuns) {
			$nc(firstRect)->height = remainingSpace;
		} else {
			$nc(firstRect)->width = remainingSpace;
		}
		++visibleCount;
	} else {
		bool rightDone = false;
		bool leftDone = false;
		while ((visibleCount < tabCount) && !(rightDone && leftDone)) {
			if (!rightDone && right >= 0 && right < tabCount) {
				$var($Rectangle, rightRect, rects->get(right));
				if ((verticalTabRuns ? $nc(rightRect)->height : $nc(rightRect)->width) > remainingSpace) {
					rightDone = true;
				} else {
					addToEnd(right, visibleCount);
					++visibleCount;
					remainingSpace -= (verticalTabRuns ? $nc(rightRect)->height : $nc(rightRect)->width);
					++right;
					continue;
				}
			} else {
				rightDone = true;
			}
			if (!leftDone && left >= 0 && left < tabCount) {
				$var($Rectangle, leftRect, rects->get(left));
				if ((verticalTabRuns ? $nc(leftRect)->height : $nc(leftRect)->width) > remainingSpace) {
					leftDone = true;
				} else {
					addToBeginning(left, visibleCount);
					++visibleCount;
					remainingSpace -= (verticalTabRuns ? $nc(leftRect)->height : $nc(leftRect)->width);
					--left;
				}
			} else {
				leftDone = true;
			}
		}
	}
	if (visibleCount > $nc(this->visibleTabList)->length) {
		visibleCount = this->visibleTabList->length;
	}
	this->hasMoreLeftTabs = this->visibleTabList->get(0) > 0;
	this->hasMoreRightTabs = this->visibleTabList->get(visibleCount - 1) < this->visibleTabList->length - 1;
	this->numberOfVisibleTabs = visibleCount;
	this->lastLeftmostTab = getIndex(0);
	this->lastReturnAt = returnAt;
	int32_t firstTabIndex = getIndex(0);
	int32_t lastTabIndex = getIndex(visibleCount - 1);
	for (int32_t i = 0; i < tabCount; ++i) {
		if (i < firstTabIndex || i > lastTabIndex) {
			$var($Rectangle, rect, rects->get(i));
			$nc(rect)->x = $Short::MAX_VALUE;
			rect->y = $Short::MAX_VALUE;
		}
	}
}

void AquaTabbedPaneTabState::alignRectsRunFor($RectangleArray* rects, $Dimension* tabPaneSize, int32_t tabPlacement, bool isRightToLeft) {
	bool isVertical = tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT;
	if (isVertical) {
		if (this->needsScrollers) {
			stretchScrollingVerticalRun(rects, tabPaneSize);
		} else {
			centerVerticalRun(rects, tabPaneSize);
		}
	} else if (this->needsScrollers) {
		stretchScrollingHorizontalRun(rects, tabPaneSize, isRightToLeft);
	} else {
		centerHorizontalRun(rects, tabPaneSize, isRightToLeft);
	}
}

void AquaTabbedPaneTabState::centerHorizontalRun($RectangleArray* rects, $Dimension* size, bool isRightToLeft) {
	$useLocalObjectStack();
	int32_t totalLength = 0;
	{
		$var($RectangleArray, arr$, rects);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Rectangle, element, arr$->get(i$));
			{
				totalLength += $nc(element)->width;
			}
		}
	}
	int32_t x = $nc(size)->width / 2 - totalLength / 2;
	if (isRightToLeft) {
		$var($RectangleArray, arr$, rects);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Rectangle, rect, arr$->get(i$));
			{
				$nc(rect)->x = x;
				x += rect->width;
			}
		}
	} else {
		for (int32_t i = $nc(rects)->length - 1; i >= 0; --i) {
			$var($Rectangle, rect, rects->get(i));
			$nc(rect)->x = x;
			x += rect->width;
		}
	}
}

void AquaTabbedPaneTabState::centerVerticalRun($RectangleArray* rects, $Dimension* size) {
	$useLocalObjectStack();
	int32_t totalLength = 0;
	{
		$var($RectangleArray, arr$, rects);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Rectangle, element, arr$->get(i$));
			{
				totalLength += $nc(element)->height;
			}
		}
	}
	int32_t y = $nc(size)->height / 2 - totalLength / 2;
	{
		$var($RectangleArray, arr$, rects);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Rectangle, rect, arr$->get(i$));
			{
				$nc(rect)->y = y;
				y += rect->height;
			}
		}
	}
}

void AquaTabbedPaneTabState::stretchScrollingHorizontalRun($RectangleArray* rects, $Dimension* size, bool isRightToLeft) {
	$useLocalObjectStack();
	int32_t totalTabs = getTotal();
	int32_t firstTabIndex = getIndex(0);
	int32_t lastTabIndex = getIndex(totalTabs - 1);
	int32_t totalRunLength = 0;
	for (int32_t i = firstTabIndex; i <= lastTabIndex; ++i) {
		totalRunLength += $nc($nc(rects)->get(i))->width;
	}
	int32_t slack = $nc(size)->width - totalRunLength - $nc($nc(this->pane)->tabAreaInsets)->left - $nc($nc(this->pane)->tabAreaInsets)->right;
	if (needsLeftScrollTab()) {
		slack -= AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
	}
	if (needsRightScrollTab()) {
		slack -= AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
	}
	int32_t minSlack = $cast(int32_t, ((float)(slack) / (float)(totalTabs)));
	int32_t extraSlack = slack - (minSlack * totalTabs);
	int32_t runningLength = 0;
	int32_t xOffset = $nc(this->pane->tabAreaInsets)->left + (needsLeftScrollTab() ? AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH : 0);
	if (isRightToLeft) {
		for (int32_t i = firstTabIndex; i <= lastTabIndex; ++i) {
			$var($Rectangle, rect, $nc(rects)->get(i));
			int32_t slackToAdd = minSlack;
			if (extraSlack > 0) {
				++slackToAdd;
				--extraSlack;
			}
			$nc(rect)->x = runningLength + xOffset;
			rect->width += slackToAdd;
			runningLength += rect->width;
		}
	} else {
		for (int32_t i = lastTabIndex; i >= firstTabIndex; --i) {
			$var($Rectangle, rect, $nc(rects)->get(i));
			int32_t slackToAdd = minSlack;
			if (extraSlack > 0) {
				++slackToAdd;
				--extraSlack;
			}
			$nc(rect)->x = runningLength + xOffset;
			rect->width += slackToAdd;
			runningLength += rect->width;
		}
	}
	if (isRightToLeft) {
		this->leftScrollTabRect->x = $nc(this->pane->tabAreaInsets)->left;
		this->leftScrollTabRect->y = $nc($nc(rects)->get(firstTabIndex))->y;
		this->leftScrollTabRect->height = $nc(rects->get(firstTabIndex))->height;
		this->rightScrollTabRect->x = size->width - this->pane->tabAreaInsets->right - this->rightScrollTabRect->width;
		this->rightScrollTabRect->y = $nc(rects->get(lastTabIndex))->y;
		this->rightScrollTabRect->height = $nc(rects->get(lastTabIndex))->height;
	} else {
		this->rightScrollTabRect->x = $nc(this->pane->tabAreaInsets)->left;
		this->rightScrollTabRect->y = $nc($nc(rects)->get(firstTabIndex))->y;
		this->rightScrollTabRect->height = $nc(rects->get(firstTabIndex))->height;
		this->leftScrollTabRect->x = size->width - this->pane->tabAreaInsets->right - this->rightScrollTabRect->width;
		this->leftScrollTabRect->y = $nc(rects->get(lastTabIndex))->y;
		this->leftScrollTabRect->height = $nc(rects->get(lastTabIndex))->height;
		if (needsLeftScrollTab()) {
			for (int32_t i = lastTabIndex; i >= firstTabIndex; --i) {
				$var($Rectangle, rect, rects->get(i));
				$nc(rect)->x -= AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
			}
		}
		if (needsRightScrollTab()) {
			for (int32_t i = lastTabIndex; i >= firstTabIndex; --i) {
				$var($Rectangle, rect, rects->get(i));
				$nc(rect)->x += AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
			}
		}
	}
}

void AquaTabbedPaneTabState::stretchScrollingVerticalRun($RectangleArray* rects, $Dimension* size) {
	$useLocalObjectStack();
	int32_t totalTabs = getTotal();
	int32_t firstTabIndex = getIndex(0);
	int32_t lastTabIndex = getIndex(totalTabs - 1);
	int32_t totalRunLength = 0;
	for (int32_t i = firstTabIndex; i <= lastTabIndex; ++i) {
		totalRunLength += $nc($nc(rects)->get(i))->height;
	}
	int32_t slack = $nc(size)->height - totalRunLength - $nc($nc(this->pane)->tabAreaInsets)->top - $nc($nc(this->pane)->tabAreaInsets)->bottom;
	if (needsLeftScrollTab()) {
		slack -= AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
	}
	if (needsRightScrollTab()) {
		slack -= AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH;
	}
	int32_t minSlack = $cast(int32_t, ((float)(slack) / (float)(totalTabs)));
	int32_t extraSlack = slack - (minSlack * totalTabs);
	int32_t runningLength = 0;
	int32_t yOffset = $nc(this->pane->tabAreaInsets)->top + (needsLeftScrollTab() ? AquaTabbedPaneTabState::FIXED_SCROLL_TAB_LENGTH : 0);
	for (int32_t i = firstTabIndex; i <= lastTabIndex; ++i) {
		$var($Rectangle, rect, $nc(rects)->get(i));
		int32_t slackToAdd = minSlack;
		if (extraSlack > 0) {
			++slackToAdd;
			--extraSlack;
		}
		$nc(rect)->y = runningLength + yOffset;
		rect->height += slackToAdd;
		runningLength += rect->height;
	}
	this->leftScrollTabRect->x = $nc($nc(rects)->get(firstTabIndex))->x;
	this->leftScrollTabRect->y = $nc(this->pane->tabAreaInsets)->top;
	this->leftScrollTabRect->width = $nc(rects->get(firstTabIndex))->width;
	this->rightScrollTabRect->x = $nc(rects->get(lastTabIndex))->x;
	this->rightScrollTabRect->y = size->height - this->pane->tabAreaInsets->bottom - this->rightScrollTabRect->height;
	this->rightScrollTabRect->width = $nc(rects->get(lastTabIndex))->width;
}

AquaTabbedPaneTabState::AquaTabbedPaneTabState() {
}

$Class* AquaTabbedPaneTabState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FIXED_SCROLL_TAB_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(AquaTabbedPaneTabState, FIXED_SCROLL_TAB_LENGTH)},
		{"leftScrollTabRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED | $FINAL, $field(AquaTabbedPaneTabState, leftScrollTabRect)},
		{"rightScrollTabRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED | $FINAL, $field(AquaTabbedPaneTabState, rightScrollTabRect)},
		{"numberOfVisibleTabs", "I", nullptr, $PROTECTED, $field(AquaTabbedPaneTabState, numberOfVisibleTabs)},
		{"visibleTabList", "[I", nullptr, $PROTECTED, $field(AquaTabbedPaneTabState, visibleTabList)},
		{"lastLeftmostTab", "I", nullptr, $PROTECTED, $field(AquaTabbedPaneTabState, lastLeftmostTab)},
		{"lastReturnAt", "I", nullptr, $PROTECTED, $field(AquaTabbedPaneTabState, lastReturnAt)},
		{"needsScrollers", "Z", nullptr, $PRIVATE, $field(AquaTabbedPaneTabState, needsScrollers)},
		{"hasMoreLeftTabs", "Z", nullptr, $PRIVATE, $field(AquaTabbedPaneTabState, hasMoreLeftTabs)},
		{"hasMoreRightTabs", "Z", nullptr, $PRIVATE, $field(AquaTabbedPaneTabState, hasMoreRightTabs)},
		{"pane", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $PRIVATE | $FINAL, $field(AquaTabbedPaneTabState, pane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, $PROTECTED, $method(AquaTabbedPaneTabState, init$, void, $AquaTabbedPaneUI*)},
		{"addToBeginning", "(II)V", nullptr, $PRIVATE, $method(AquaTabbedPaneTabState, addToBeginning, void, int32_t, int32_t)},
		{"addToEnd", "(II)V", nullptr, $PRIVATE, $method(AquaTabbedPaneTabState, addToEnd, void, int32_t, int32_t)},
		{"alignRectsRunFor", "([Ljava/awt/Rectangle;Ljava/awt/Dimension;IZ)V", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneTabState, alignRectsRunFor, void, $RectangleArray*, $Dimension*, int32_t, bool)},
		{"centerHorizontalRun", "([Ljava/awt/Rectangle;Ljava/awt/Dimension;Z)V", nullptr, $PRIVATE, $method(AquaTabbedPaneTabState, centerHorizontalRun, void, $RectangleArray*, $Dimension*, bool)},
		{"centerVerticalRun", "([Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PRIVATE, $method(AquaTabbedPaneTabState, centerVerticalRun, void, $RectangleArray*, $Dimension*)},
		{"getIndex", "(I)I", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneTabState, getIndex, int32_t, int32_t)},
		{"getLeftScrollTabRect", "()Ljava/awt/Rectangle;", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, getLeftScrollTabRect, $Rectangle*)},
		{"getRightScrollTabRect", "()Ljava/awt/Rectangle;", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, getRightScrollTabRect, $Rectangle*)},
		{"getTotal", "()I", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, getTotal, int32_t)},
		{"init", "(I)V", nullptr, $PROTECTED, $virtualMethod(AquaTabbedPaneTabState, init, void, int32_t)},
		{"isAfter", "(I)Z", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, isAfter, bool, int32_t)},
		{"isBefore", "(I)Z", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, isBefore, bool, int32_t)},
		{"needsLeftScrollTab", "()Z", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, needsLeftScrollTab, bool)},
		{"needsRightScrollTab", "()Z", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, needsRightScrollTab, bool)},
		{"needsScrollTabs", "()Z", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, needsScrollTabs, bool)},
		{"relayoutForScrolling", "([Ljava/awt/Rectangle;IIIIZIZ)V", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, relayoutForScrolling, void, $RectangleArray*, int32_t, int32_t, int32_t, int32_t, bool, int32_t, bool)},
		{"setNeedsScrollers", "(Z)V", nullptr, 0, $virtualMethod(AquaTabbedPaneTabState, setNeedsScrollers, void, bool)},
		{"stretchScrollingHorizontalRun", "([Ljava/awt/Rectangle;Ljava/awt/Dimension;Z)V", nullptr, $PRIVATE, $method(AquaTabbedPaneTabState, stretchScrollingHorizontalRun, void, $RectangleArray*, $Dimension*, bool)},
		{"stretchScrollingVerticalRun", "([Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PRIVATE, $method(AquaTabbedPaneTabState, stretchScrollingVerticalRun, void, $RectangleArray*, $Dimension*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneTabState",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaTabbedPaneTabState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneTabState);
	});
	return class$;
}

$Class* AquaTabbedPaneTabState::class$ = nullptr;

		} // laf
	} // apple
} // com