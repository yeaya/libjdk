#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$CroppedEdge = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$CroppedEdge;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::hashCode() {
	return this->$ActionListener::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::equals(Object$* arg0) {
	return this->$ActionListener::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::clone() {
	return this->$ActionListener::clone();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::finalize() {
	this->$ActionListener::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::init$($AquaTabbedPaneCopyFromBasicUI* this$0, int32_t tabPlacement) {
	$set(this, this$0, this$0);
	$set(this, tabViewPosition, $new($Point, 0, 0));
	$set(this, viewport, $new($AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport, this$0));
	$set(this, tabPanel, $new($AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel, this$0));
	this->viewport->setView(this->tabPanel);
	$nc(this->viewport)->addChangeListener(this);
	$set(this, croppedEdge, $new($AquaTabbedPaneCopyFromBasicUI$CroppedEdge, this$0));
	createButtons();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::createButtons() {
	if (this->scrollForwardButton != nullptr) {
		$nc(this->this$0->tabPane)->remove(this->scrollForwardButton);
		$nc(this->scrollForwardButton)->removeActionListener(this);
		$nc(this->this$0->tabPane)->remove(this->scrollBackwardButton);
		$nc(this->scrollBackwardButton)->removeActionListener(this);
	}
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	if (tabPlacement == 1 || tabPlacement == 3) {
		$set(this, scrollForwardButton, this->this$0->createScrollButton(3));
		$set(this, scrollBackwardButton, this->this$0->createScrollButton(7));
	} else {
		$set(this, scrollForwardButton, this->this$0->createScrollButton(5));
		$set(this, scrollBackwardButton, this->this$0->createScrollButton(1));
	}
	$nc(this->scrollForwardButton)->addActionListener(this);
	$nc(this->scrollBackwardButton)->addActionListener(this);
	$nc(this->this$0->tabPane)->add(this->scrollForwardButton);
	$nc(this->this$0->tabPane)->add(this->scrollBackwardButton);
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::scrollForward(int32_t tabPlacement) {
	$useLocalObjectStack();
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	if (tabPlacement == 1 || tabPlacement == 3) {
		if ($nc(viewRect)->width >= $nc(viewSize)->width - $nc(viewRect)->x) {
			return;
		}
	} else if ($nc(viewRect)->height >= $nc(viewSize)->height - $nc(viewRect)->y) {
		return;
	}
	setLeadingTabIndex(tabPlacement, this->leadingTabIndex + 1);
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::scrollBackward(int32_t tabPlacement) {
	if (this->leadingTabIndex == 0) {
		return;
	}
	setLeadingTabIndex(tabPlacement, this->leadingTabIndex - 1);
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::setLeadingTabIndex(int32_t tabPlacement, int32_t index) {
	$useLocalObjectStack();
	this->leadingTabIndex = index;
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	switch (tabPlacement) {
	case 1:
	case 3:
		this->tabViewPosition->x = this->leadingTabIndex == 0 ? 0 : $nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->x;
		if (($nc(viewSize)->width - this->tabViewPosition->x) < $nc(viewRect)->width) {
			$var($Dimension, extentSize, $new($Dimension, viewSize->width - this->tabViewPosition->x, viewRect->height));
			$nc(this->viewport)->setExtentSize(extentSize);
		}
		break;
	case 2:
	case 4:
		this->tabViewPosition->y = this->leadingTabIndex == 0 ? 0 : $nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->y;
		if (($nc(viewSize)->height - this->tabViewPosition->y) < $nc(viewRect)->height) {
			$var($Dimension, extentSize, $new($Dimension, viewRect->width, viewSize->height - this->tabViewPosition->y));
			$nc(this->viewport)->setExtentSize(extentSize);
		}
	}
	$nc(this->viewport)->setViewPosition(this->tabViewPosition);
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::stateChanged($ChangeEvent* e) {
	updateView();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::updateView() {
	$useLocalObjectStack();
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
	$var($Rectangle, vpRect, $nc(this->viewport)->getBounds());
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	this->leadingTabIndex = this->this$0->getClosestTab($nc(viewRect)->x, $nc(viewRect)->y);
	if (this->leadingTabIndex + 1 < tabCount) {
		switch (tabPlacement) {
		case 1:
		case 3:
			if ($nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->x < viewRect->x) {
				++this->leadingTabIndex;
			}
			break;
		case 2:
		case 4:
			if ($nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->y < viewRect->y) {
				++this->leadingTabIndex;
			}
			break;
		}
	}
	$var($Insets, contentInsets, this->this$0->getContentBorderInsets(tabPlacement));
	switch (tabPlacement) {
	case 2:
		$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x + $nc(vpRect)->width, $nc(vpRect)->y, $nc(contentInsets)->left, $nc(vpRect)->height);
		$nc(this->scrollBackwardButton)->setEnabled(viewRect->y > 0 && this->leadingTabIndex > 0);
		$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->height - viewRect->y > viewRect->height);
		break;
	case 4:
		$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x - $nc(contentInsets)->right, $nc(vpRect)->y, $nc(contentInsets)->right, $nc(vpRect)->height);
		$nc(this->scrollBackwardButton)->setEnabled(viewRect->y > 0 && this->leadingTabIndex > 0);
		$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->height - viewRect->y > viewRect->height);
		break;
	case 3:
		$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x, $nc(vpRect)->y - $nc(contentInsets)->bottom, $nc(vpRect)->width, $nc(contentInsets)->bottom);
		$nc(this->scrollBackwardButton)->setEnabled(viewRect->x > 0 && this->leadingTabIndex > 0);
		$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->width - viewRect->x > viewRect->width);
		break;
	case 1:
	default:
		$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x, $nc(vpRect)->y + $nc(vpRect)->height, $nc(vpRect)->width, $nc(contentInsets)->top);
		$nc(this->scrollBackwardButton)->setEnabled(viewRect->x > 0 && this->leadingTabIndex > 0);
		$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->width - viewRect->x > viewRect->width);
	}
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($ActionMap, map, $nc(this->this$0->tabPane)->getActionMap());
	if (map != nullptr) {
		$var($String, actionKey, nullptr);
		if ($equals($nc(e)->getSource(), this->scrollForwardButton)) {
			$assign(actionKey, "scrollTabsForwardAction"_s);
		} else {
			$assign(actionKey, "scrollTabsBackwardAction"_s);
		}
		$var($Action, action, map->get(actionKey));
		if (action != nullptr && action->isEnabled()) {
			$var($Object, var$0, this->this$0->tabPane);
			int64_t var$1 = e->getWhen();
			action->actionPerformed($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, nullptr, var$1, e->getModifiers()));
		}
	}
}

$String* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("viewport.viewSize="_s);
	var$0->append($($nc(this->viewport)->getViewSize()));
	var$0->append("\nviewport.viewRectangle="_s);
	var$0->append($(this->viewport->getViewRect()));
	var$0->append("\nleadingTabIndex="_s);
	var$0->append(this->leadingTabIndex);
	var$0->append("\ntabViewPosition="_s);
	var$0->append(this->tabViewPosition);
	return $new($String, $$str(var$0));
}

AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, this$0)},
		{"viewport", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, viewport)},
		{"tabPanel", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, tabPanel)},
		{"scrollForwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, scrollForwardButton)},
		{"scrollBackwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, scrollBackwardButton)},
		{"croppedEdge", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, croppedEdge)},
		{"leadingTabIndex", "I", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, leadingTabIndex)},
		{"tabViewPosition", "Ljava/awt/Point;", nullptr, $PRIVATE | $FINAL, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, tabViewPosition)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;I)V", nullptr, 0, $method(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, init$, void, $AquaTabbedPaneCopyFromBasicUI*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, actionPerformed, void, $ActionEvent*)},
		{"createButtons", "()V", nullptr, 0, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, createButtons, void)},
		{"scrollBackward", "(I)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, scrollBackward, void, int32_t)},
		{"scrollForward", "(I)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, scrollForward, void, int32_t)},
		{"setLeadingTabIndex", "(II)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, setLeadingTabIndex, void, int32_t, int32_t)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, stateChanged, void, $ChangeEvent*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, toString, $String*)},
		{"updateView", "()V", nullptr, $PRIVATE, $method(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, updateView, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "ScrollableTabSupport", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport",
		"java.lang.Object",
		"java.awt.event.ActionListener,javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
	};
	$loadClass(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport));
	});
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::class$ = nullptr;

		} // laf
	} // apple
} // com