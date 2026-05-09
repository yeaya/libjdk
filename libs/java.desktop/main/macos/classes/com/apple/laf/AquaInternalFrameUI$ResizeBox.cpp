#include <com/apple/laf/AquaInternalFrameUI$ResizeBox.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef RESIZE_ICON
#undef SOUTH_EAST
#undef TRUE

using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

$String* AquaInternalFrameUI$ResizeBox::toString() {
	return this->$JLabel::toString();
}

int32_t AquaInternalFrameUI$ResizeBox::hashCode() {
	return this->$JLabel::hashCode();
}

bool AquaInternalFrameUI$ResizeBox::equals(Object$* arg0) {
	return this->$JLabel::equals(arg0);
}

$Object* AquaInternalFrameUI$ResizeBox::clone() {
	return this->$JLabel::clone();
}

void AquaInternalFrameUI$ResizeBox::finalize() {
	this->$JLabel::finalize();
}

void AquaInternalFrameUI$ResizeBox::init$($AquaInternalFrameUI* this$0, $JLayeredPane* layeredPane) {
	$set(this, this$0, this$0);
	$init($AquaInternalFrameUI);
	$JLabel::init$($$cast($Icon, $nc($AquaInternalFrameUI::RESIZE_ICON)->get()));
	setSize(11, 11);
	$set(this, layeredPane, layeredPane);
	addMouseListener(this);
	addMouseMotionListener(this);
	addMouseWheelListener(this);
}

void AquaInternalFrameUI$ResizeBox::addListeners() {
	$$nc($AquaInternalFrameUI::access$5200(this->this$0))->addPropertyChangeListener("resizable"_s, this);
}

void AquaInternalFrameUI$ResizeBox::removeListeners() {
	$$nc($AquaInternalFrameUI::access$5300(this->this$0))->removePropertyChangeListener("resizable"_s, this);
}

void AquaInternalFrameUI$ResizeBox::repositionResizeBox() {
	if ($AquaInternalFrameUI::access$5400(this->this$0) == nullptr) {
		setSize(0, 0);
	} else {
		setSize(11, 11);
	}
	int32_t var$0 = $nc(this->layeredPane)->getWidth() - 12;
	setLocation(var$0, this->layeredPane->getHeight() - 12);
}

void AquaInternalFrameUI$ResizeBox::resizeInternalFrame($Point* pt) {
	$useLocalObjectStack();
	if (this->originalLocation == nullptr || $AquaInternalFrameUI::access$5500(this->this$0) == nullptr) {
		return;
	}
	$var($Container, parent, $$nc($AquaInternalFrameUI::access$5600(this->this$0))->getParent());
	if (!($instanceOf($JDesktopPane, parent))) {
		return;
	}
	$var($Point, newPoint, $SwingUtilities::convertPoint(this, pt, $($AquaInternalFrameUI::access$5700(this->this$0))));
	int32_t deltaX = $nc(this->originalLocation)->x - $nc(newPoint)->x;
	int32_t deltaY = this->originalLocation->y - newPoint->y;
	$var($Dimension, min, $$nc($AquaInternalFrameUI::access$5800(this->this$0))->getMinimumSize());
	$var($Dimension, max, $$nc($AquaInternalFrameUI::access$5900(this->this$0))->getMaximumSize());
	int32_t newX = $$nc($AquaInternalFrameUI::access$6000(this->this$0))->getX();
	int32_t newY = $$nc($AquaInternalFrameUI::access$6100(this->this$0))->getY();
	int32_t newW = $$nc($AquaInternalFrameUI::access$6200(this->this$0))->getWidth();
	int32_t newH = $$nc($AquaInternalFrameUI::access$6300(this->this$0))->getHeight();
	$var($Rectangle, parentBounds, $nc(parent)->getBounds());
	if ($nc(this->originalSize)->width - deltaX < $nc(min)->width) {
		deltaX = this->originalSize->width - min->width;
	} else if (this->originalSize->width - deltaX > $nc(max)->width) {
		deltaX = -(max->width - this->originalSize->width);
	}
	if (newX + this->originalSize->width - deltaX > $nc(parentBounds)->width) {
		deltaX = newX + this->originalSize->width - parentBounds->width;
	}
	if (this->originalSize->height - deltaY < min->height) {
		deltaY = this->originalSize->height - min->height;
	} else if (this->originalSize->height - deltaY > $nc(max)->height) {
		deltaY = -(max->height - this->originalSize->height);
	}
	if (newY + this->originalSize->height - deltaY > parentBounds->height) {
		deltaY = newY + this->originalSize->height - parentBounds->height;
	}
	newW = this->originalSize->width - deltaX;
	newH = this->originalSize->height - deltaY;
	$$nc($AquaInternalFrameUI::access$6500(this->this$0))->resizeFrame($($AquaInternalFrameUI::access$6400(this->this$0)), newX, newY, newW, newH);
}

bool AquaInternalFrameUI$ResizeBox::testGrowboxPoint(int32_t x, int32_t y, int32_t w, int32_t h) {
	return (w - x) + (h - y) < 12;
}

void AquaInternalFrameUI$ResizeBox::forwardEventToFrame($MouseEvent* e) {
	$useLocalObjectStack();
	$var($Point, pt, $new($Point));
	$var($Component, c, getComponentToForwardTo(e, pt));
	if (c == nullptr) {
		return;
	}
	int32_t var$0 = $nc(e)->getID();
	int64_t var$1 = e->getWhen();
	int32_t var$2 = e->getModifiers();
	int32_t var$3 = pt->x;
	int32_t var$4 = pt->y;
	int32_t var$5 = e->getClickCount();
	bool var$6 = e->isPopupTrigger();
	$nc(c)->dispatchEvent($$new($MouseEvent, c, var$0, var$1, var$2, var$3, var$4, var$5, var$6, e->getButton()));
}

$Component* AquaInternalFrameUI$ResizeBox::getComponentToForwardTo($MouseEvent* e, $Point* dst) {
	$useLocalObjectStack();
	if ($AquaInternalFrameUI::access$6600(this->this$0) == nullptr) {
		return nullptr;
	}
	$var($Container, contentPane, $$nc($AquaInternalFrameUI::access$6700(this->this$0))->getContentPane());
	if (contentPane == nullptr) {
		return nullptr;
	}
	$var($Point, pt, $SwingUtilities::convertPoint(this, $($nc(e)->getPoint()), contentPane));
	$var($Component, c, $SwingUtilities::getDeepestComponentAt(contentPane, $nc(pt)->x, $nc(pt)->y));
	if (c == nullptr) {
		return nullptr;
	}
	$assign(pt, $SwingUtilities::convertPoint(contentPane, pt, c));
	if (dst != nullptr) {
		dst->setLocation(pt);
	}
	return c;
}

void AquaInternalFrameUI$ResizeBox::mouseClicked($MouseEvent* e) {
	forwardEventToFrame(e);
}

void AquaInternalFrameUI$ResizeBox::mouseEntered($MouseEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::mouseExited($MouseEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	if ($AquaInternalFrameUI::access$6800(this->this$0) == nullptr) {
		return;
	}
	bool var$1 = $$nc($AquaInternalFrameUI::access$6900(this->this$0))->isResizable();
	bool var$0 = var$1 && !$$nc($AquaInternalFrameUI::access$7000(this->this$0))->isMaximum();
	if (var$0) {
		int32_t var$2 = $nc(e)->getX();
		int32_t var$3 = e->getY();
		int32_t var$4 = getWidth();
		var$0 = testGrowboxPoint(var$2, var$3, var$4, getHeight());
	}
	if (var$0) {
		$var($Point, var$5, $nc(e)->getPoint());
		$set(this, originalLocation, $SwingUtilities::convertPoint(this, var$5, $($AquaInternalFrameUI::access$7100(this->this$0))));
		$set(this, originalSize, $$nc($AquaInternalFrameUI::access$7200(this->this$0))->getSize());
		$$nc($AquaInternalFrameUI::access$7400(this->this$0))->beginResizingFrame($($AquaInternalFrameUI::access$7300(this->this$0)), $SwingConstants::SOUTH_EAST);
		return;
	}
	forwardEventToFrame(e);
}

void AquaInternalFrameUI$ResizeBox::mouseReleased($MouseEvent* e) {
	$useLocalObjectStack();
	if (this->originalLocation != nullptr) {
		resizeInternalFrame($($nc(e)->getPoint()));
		$set(this, originalLocation, nullptr);
		$$nc($AquaInternalFrameUI::access$7600(this->this$0))->endResizingFrame($($AquaInternalFrameUI::access$7500(this->this$0)));
		return;
	}
	forwardEventToFrame(e);
}

void AquaInternalFrameUI$ResizeBox::mouseDragged($MouseEvent* e) {
	resizeInternalFrame($($nc(e)->getPoint()));
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::mouseMoved($MouseEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::mouseWheelMoved($MouseWheelEvent* e) {
	$useLocalObjectStack();
	$var($Point, pt, $new($Point));
	$var($Component, c, getComponentToForwardTo(e, pt));
	if (c == nullptr) {
		return;
	}
	int32_t var$0 = $nc(e)->getID();
	int64_t var$1 = e->getWhen();
	int32_t var$2 = e->getModifiers();
	int32_t var$3 = pt->x;
	int32_t var$4 = pt->y;
	int32_t var$5 = e->getXOnScreen();
	int32_t var$6 = e->getYOnScreen();
	int32_t var$7 = e->getClickCount();
	bool var$8 = e->isPopupTrigger();
	int32_t var$9 = e->getScrollType();
	int32_t var$10 = e->getScrollAmount();
	int32_t var$11 = e->getWheelRotation();
	$nc(c)->dispatchEvent($$new($MouseWheelEvent, c, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, e->getPreciseWheelRotation()));
}

void AquaInternalFrameUI$ResizeBox::componentResized($ComponentEvent* e) {
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::componentShown($ComponentEvent* e) {
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::componentMoved($ComponentEvent* e) {
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::componentHidden($ComponentEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	if (!"resizable"_s->equals($($nc(evt)->getPropertyName()))) {
		return;
	}
	setVisible($nc($Boolean::TRUE)->equals($(evt->getNewValue())));
}

AquaInternalFrameUI$ResizeBox::AquaInternalFrameUI$ResizeBox() {
}

$Class* AquaInternalFrameUI$ResizeBox::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$ResizeBox, this$0)},
		{"layeredPane", "Ljavax/swing/JLayeredPane;", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameUI$ResizeBox, layeredPane)},
		{"originalSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(AquaInternalFrameUI$ResizeBox, originalSize)},
		{"originalLocation", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(AquaInternalFrameUI$ResizeBox, originalLocation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI;Ljavax/swing/JLayeredPane;)V", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, init$, void, $AquaInternalFrameUI*, $JLayeredPane*)},
		{"addListeners", "()V", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, addListeners, void)},
		{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, componentHidden, void, $ComponentEvent*)},
		{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, componentMoved, void, $ComponentEvent*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, componentResized, void, $ComponentEvent*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, componentShown, void, $ComponentEvent*)},
		{"forwardEventToFrame", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, forwardEventToFrame, void, $MouseEvent*)},
		{"getComponentToForwardTo", "(Ljava/awt/event/MouseEvent;Ljava/awt/Point;)Ljava/awt/Component;", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, getComponentToForwardTo, $Component*, $MouseEvent*, $Point*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseReleased, void, $MouseEvent*)},
		{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, mouseWheelMoved, void, $MouseWheelEvent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$ResizeBox, propertyChange, void, $PropertyChangeEvent*)},
		{"removeListeners", "()V", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, removeListeners, void)},
		{"repositionResizeBox", "()V", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, repositionResizeBox, void)},
		{"resizeInternalFrame", "(Ljava/awt/Point;)V", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, resizeInternalFrame, void, $Point*)},
		{"testGrowboxPoint", "(IIII)Z", nullptr, 0, $method(AquaInternalFrameUI$ResizeBox, testGrowboxPoint, bool, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameUI$ResizeBox", "com.apple.laf.AquaInternalFrameUI", "ResizeBox", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.apple.laf.AquaInternalFrameUI$ResizeBox",
		"javax.swing.JLabel",
		"java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.MouseWheelListener,java.awt.event.ComponentListener,java.beans.PropertyChangeListener,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameUI"
	};
	$loadClass(AquaInternalFrameUI$ResizeBox, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaInternalFrameUI$ResizeBox));
	});
	return class$;
}

$Class* AquaInternalFrameUI$ResizeBox::class$ = nullptr;

		} // laf
	} // apple
} // com