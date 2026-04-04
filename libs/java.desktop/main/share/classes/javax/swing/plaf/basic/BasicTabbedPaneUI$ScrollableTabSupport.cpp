#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>
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
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

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
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$CroppedEdge = ::javax::swing::plaf::basic::BasicTabbedPaneUI$CroppedEdge;
using $BasicTabbedPaneUI$ScrollableTabPanel = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabPanel;
using $BasicTabbedPaneUI$ScrollableTabViewport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabViewport;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicTabbedPaneUI$ScrollableTabSupport::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool BasicTabbedPaneUI$ScrollableTabSupport::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* BasicTabbedPaneUI$ScrollableTabSupport::clone() {
	 return this->$ActionListener::clone();
}

void BasicTabbedPaneUI$ScrollableTabSupport::finalize() {
	this->$ActionListener::finalize();
}

void BasicTabbedPaneUI$ScrollableTabSupport::init$($BasicTabbedPaneUI* this$0, int32_t tabPlacement) {
	$set(this, this$0, this$0);
	$set(this, tabViewPosition, $new($Point, 0, 0));
	$set(this, viewport, $new($BasicTabbedPaneUI$ScrollableTabViewport, this$0));
	$set(this, tabPanel, $new($BasicTabbedPaneUI$ScrollableTabPanel, this$0));
	this->viewport->setView(this->tabPanel);
	$nc(this->viewport)->addChangeListener(this);
	$set(this, croppedEdge, $new($BasicTabbedPaneUI$CroppedEdge, this$0));
	createButtons();
}

void BasicTabbedPaneUI$ScrollableTabSupport::createButtons() {
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

void BasicTabbedPaneUI$ScrollableTabSupport::scrollForward(int32_t tabPlacement) {
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

void BasicTabbedPaneUI$ScrollableTabSupport::scrollBackward(int32_t tabPlacement) {
	if (this->leadingTabIndex == 0) {
		return;
	}
	setLeadingTabIndex(tabPlacement, this->leadingTabIndex - 1);
}

void BasicTabbedPaneUI$ScrollableTabSupport::setLeadingTabIndex(int32_t tabPlacement, int32_t index) {
	$useLocalObjectStack();
	this->leadingTabIndex = index;
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	switch (tabPlacement) {
	case 1:
	case 3:
		$nc(this->tabViewPosition)->x = this->leadingTabIndex == 0 ? 0 : $nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->x;
		if (($nc(viewSize)->width - this->tabViewPosition->x) < $nc(viewRect)->width) {
			$var($Dimension, extentSize, $new($Dimension, viewSize->width - this->tabViewPosition->x, viewRect->height));
			$nc(this->viewport)->setExtentSize(extentSize);
		}
		break;
	case 2:
	case 4:
		$nc(this->tabViewPosition)->y = this->leadingTabIndex == 0 ? 0 : $nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->y;
		if (($nc(viewSize)->height - this->tabViewPosition->y) < $nc(viewRect)->height) {
			$var($Dimension, extentSize, $new($Dimension, viewRect->width, viewSize->height - this->tabViewPosition->y));
			$nc(this->viewport)->setExtentSize(extentSize);
		}
	}
	$nc(this->viewport)->setViewPosition(this->tabViewPosition);
}

void BasicTabbedPaneUI$ScrollableTabSupport::stateChanged($ChangeEvent* e) {
	updateView();
}

void BasicTabbedPaneUI$ScrollableTabSupport::updateView() {
	$useLocalObjectStack();
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
	this->this$0->assureRectsCreated(tabCount);
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

void BasicTabbedPaneUI$ScrollableTabSupport::actionPerformed($ActionEvent* e) {
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

$String* BasicTabbedPaneUI$ScrollableTabSupport::toString() {
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
	return $str(var$0);
}

BasicTabbedPaneUI$ScrollableTabSupport::BasicTabbedPaneUI$ScrollableTabSupport() {
}

$Class* BasicTabbedPaneUI$ScrollableTabSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, this$0)},
		{"viewport", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, viewport)},
		{"tabPanel", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, tabPanel)},
		{"scrollForwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, scrollForwardButton)},
		{"scrollBackwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, scrollBackwardButton)},
		{"croppedEdge", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, croppedEdge)},
		{"leadingTabIndex", "I", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, leadingTabIndex)},
		{"tabViewPosition", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$ScrollableTabSupport, tabViewPosition)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;I)V", nullptr, 0, $method(BasicTabbedPaneUI$ScrollableTabSupport, init$, void, $BasicTabbedPaneUI*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, actionPerformed, void, $ActionEvent*)},
		{"createButtons", "()V", nullptr, 0, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, createButtons, void)},
		{"scrollBackward", "(I)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, scrollBackward, void, int32_t)},
		{"scrollForward", "(I)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, scrollForward, void, int32_t)},
		{"setLeadingTabIndex", "(II)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, setLeadingTabIndex, void, int32_t, int32_t)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, stateChanged, void, $ChangeEvent*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$ScrollableTabSupport, toString, $String*)},
		{"updateView", "()V", nullptr, $PRIVATE, $method(BasicTabbedPaneUI$ScrollableTabSupport, updateView, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabSupport", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport",
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
		"javax.swing.plaf.basic.BasicTabbedPaneUI"
	};
	$loadClass(BasicTabbedPaneUI$ScrollableTabSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTabbedPaneUI$ScrollableTabSupport));
	});
	return class$;
}

$Class* BasicTabbedPaneUI$ScrollableTabSupport::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax