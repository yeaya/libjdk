#include <javax/swing/plaf/metal/MetalRootPaneUI$MouseInputHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/metal/MetalRootPaneUI.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef E_RESIZE_CURSOR
#undef MAXIMIZED_BOTH
#undef NE_RESIZE_CURSOR
#undef NONE
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef W_RESIZE_CURSOR

using $Cursor = ::java::awt::Cursor;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MetalRootPaneUI = ::javax::swing::plaf::metal::MetalRootPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalRootPaneUI$MouseInputHandler::init$($MetalRootPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalRootPaneUI$MouseInputHandler::mousePressed($MouseEvent* ev) {
	$useLocalObjectStack();
	$var($JRootPane, rootPane, this->this$0->getRootPane());
	if ($nc(rootPane)->getWindowDecorationStyle() == $JRootPane::NONE) {
		return;
	}
	$var($Point, dragWindowOffset, $nc(ev)->getPoint());
	$var($Window, w, $cast($Window, ev->getSource()));
	if (w != nullptr) {
		w->toFront();
	}
	$var($Point, convertedDragWindowOffset, $SwingUtilities::convertPoint(w, dragWindowOffset, $(this->this$0->getTitlePane())));
	$var($Frame, f, nullptr);
	$var($Dialog, d, nullptr);
	if ($instanceOf($Frame, w)) {
		$assign(f, $cast($Frame, w));
	} else if ($instanceOf($Dialog, w)) {
		$assign(d, $cast($Dialog, w));
	}
	int32_t frameState = (f != nullptr) ? f->getExtendedState() : 0;
	bool var$0 = this->this$0->getTitlePane() != nullptr;
	if (var$0 && $$nc(this->this$0->getTitlePane())->contains(convertedDragWindowOffset)) {
		if ((f != nullptr && ((frameState & $Frame::MAXIMIZED_BOTH) == 0) || (d != nullptr)) && $nc(dragWindowOffset)->y >= 5 && dragWindowOffset->x >= 5 && dragWindowOffset->x < $nc(w)->getWidth() - 5) {
			this->isMovingWindow = true;
			this->dragOffsetX = dragWindowOffset->x;
			this->dragOffsetY = dragWindowOffset->y;
		}
	} else {
		bool var$1 = f != nullptr && f->isResizable() && ((frameState & $Frame::MAXIMIZED_BOTH) == 0);
		if (var$1 || (d != nullptr && d->isResizable())) {
			this->dragOffsetX = $nc(dragWindowOffset)->x;
			this->dragOffsetY = dragWindowOffset->y;
			this->dragWidth = $nc(w)->getWidth();
			this->dragHeight = w->getHeight();
			this->dragCursor = getCursor(calculateCorner(w, dragWindowOffset->x, dragWindowOffset->y));
		}
	}
}

void MetalRootPaneUI$MouseInputHandler::mouseReleased($MouseEvent* ev) {
	if (this->dragCursor != 0 && this->this$0->window != nullptr && !this->this$0->window->isValid()) {
		this->this$0->window->validate();
		$$nc(this->this$0->getRootPane())->repaint();
	}
	this->isMovingWindow = false;
	this->dragCursor = 0;
}

void MetalRootPaneUI$MouseInputHandler::mouseMoved($MouseEvent* ev) {
	$useLocalObjectStack();
	$var($JRootPane, root, this->this$0->getRootPane());
	if ($nc(root)->getWindowDecorationStyle() == $JRootPane::NONE) {
		return;
	}
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$var($Frame, f, nullptr);
	$var($Dialog, d, nullptr);
	if ($instanceOf($Frame, w)) {
		$assign(f, $cast($Frame, w));
	} else if ($instanceOf($Dialog, w)) {
		$assign(d, $cast($Dialog, w));
	}
	int32_t var$0 = ev->getX();
	int32_t cursor = getCursor(calculateCorner(w, var$0, ev->getY()));
	bool var$1 = cursor != 0;
	if (var$1) {
		bool var$3 = f != nullptr;
		if (var$3) {
			bool var$4 = f->isResizable();
			var$3 = var$4 && (f->getExtendedState() & $Frame::MAXIMIZED_BOTH) == 0;
		}
		bool var$2 = var$3;
		var$1 = var$2 || (d != nullptr && d->isResizable());
	}
	if (var$1) {
		$nc(w)->setCursor($($Cursor::getPredefinedCursor(cursor)));
	} else {
		$nc(w)->setCursor(this->this$0->lastCursor);
	}
}

void MetalRootPaneUI$MouseInputHandler::adjust($Rectangle* bounds, $Dimension* min, int32_t deltaX, int32_t deltaY, int32_t deltaWidth, int32_t deltaHeight) {
	$nc(bounds)->x += deltaX;
	bounds->y += deltaY;
	bounds->width += deltaWidth;
	bounds->height += deltaHeight;
	if (min != nullptr) {
		if (bounds->width < min->width) {
			int32_t correction = min->width - bounds->width;
			if (deltaX != 0) {
				bounds->x -= correction;
			}
			bounds->width = min->width;
		}
		if (bounds->height < min->height) {
			int32_t correction = min->height - bounds->height;
			if (deltaY != 0) {
				bounds->y -= correction;
			}
			bounds->height = min->height;
		}
	}
}

void MetalRootPaneUI$MouseInputHandler::mouseDragged($MouseEvent* ev) {
	$useLocalObjectStack();
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$var($Point, pt, ev->getPoint());
	if (this->isMovingWindow) {
		$var($Point, eventLocationOnScreen, ev->getLocationOnScreen());
		$nc(w)->setLocation($nc(eventLocationOnScreen)->x - this->dragOffsetX, $nc(eventLocationOnScreen)->y - this->dragOffsetY);
	} else if (this->dragCursor != 0) {
		$var($Rectangle, r, $nc(w)->getBounds());
		$var($Rectangle, startBounds, $new($Rectangle, r));
		$var($Dimension, min, w->getMinimumSize());
		switch (this->dragCursor) {
		case $Cursor::E_RESIZE_CURSOR:
			adjust(r, min, 0, 0, $nc(pt)->x + (this->dragWidth - this->dragOffsetX) - $nc(r)->width, 0);
			break;
		case $Cursor::S_RESIZE_CURSOR:
			adjust(r, min, 0, 0, 0, $nc(pt)->y + (this->dragHeight - this->dragOffsetY) - $nc(r)->height);
			break;
		case $Cursor::N_RESIZE_CURSOR:
			adjust(r, min, 0, $nc(pt)->y - this->dragOffsetY, 0, -($nc(pt)->y - this->dragOffsetY));
			break;
		case $Cursor::W_RESIZE_CURSOR:
			adjust(r, min, $nc(pt)->x - this->dragOffsetX, 0, -($nc(pt)->x - this->dragOffsetX), 0);
			break;
		case $Cursor::NE_RESIZE_CURSOR:
			adjust(r, min, 0, $nc(pt)->y - this->dragOffsetY, $nc(pt)->x + (this->dragWidth - this->dragOffsetX) - $nc(r)->width, -($nc(pt)->y - this->dragOffsetY));
			break;
		case $Cursor::SE_RESIZE_CURSOR:
			adjust(r, min, 0, 0, $nc(pt)->x + (this->dragWidth - this->dragOffsetX) - $nc(r)->width, $nc(pt)->y + (this->dragHeight - this->dragOffsetY) - $nc(r)->height);
			break;
		case $Cursor::NW_RESIZE_CURSOR:
			adjust(r, min, $nc(pt)->x - this->dragOffsetX, $nc(pt)->y - this->dragOffsetY, -($nc(pt)->x - this->dragOffsetX), -($nc(pt)->y - this->dragOffsetY));
			break;
		case $Cursor::SW_RESIZE_CURSOR:
			adjust(r, min, $nc(pt)->x - this->dragOffsetX, 0, -($nc(pt)->x - this->dragOffsetX), $nc(pt)->y + (this->dragHeight - this->dragOffsetY) - $nc(r)->height);
			break;
		default:
			break;
		}
		if (!$nc(r)->equals(startBounds)) {
			w->setBounds(r);
			if ($$nc($Toolkit::getDefaultToolkit())->isDynamicLayoutActive()) {
				w->validate();
				$$nc(this->this$0->getRootPane())->repaint();
			}
		}
	}
}

void MetalRootPaneUI$MouseInputHandler::mouseEntered($MouseEvent* ev) {
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$set(this->this$0, lastCursor, $nc(w)->getCursor());
	mouseMoved(ev);
}

void MetalRootPaneUI$MouseInputHandler::mouseExited($MouseEvent* ev) {
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$nc(w)->setCursor(this->this$0->lastCursor);
}

void MetalRootPaneUI$MouseInputHandler::mouseClicked($MouseEvent* ev) {
	$useLocalObjectStack();
	$var($Window, w, $cast($Window, $nc(ev)->getSource()));
	$var($Frame, f, nullptr);
	if ($instanceOf($Frame, w)) {
		$assign(f, $cast($Frame, w));
	} else {
		return;
	}
	$var($Point, var$0, ev->getPoint());
	$var($Point, convertedPoint, $SwingUtilities::convertPoint(w, var$0, $(this->this$0->getTitlePane())));
	int32_t state = $nc(f)->getExtendedState();
	bool var$1 = this->this$0->getTitlePane() != nullptr;
	if (var$1 && $$nc(this->this$0->getTitlePane())->contains(convertedPoint)) {
		bool var$2 = (ev->getClickCount() % 2) == 0;
		if (var$2 && ((ev->getModifiers() & $InputEvent::BUTTON1_MASK) != 0)) {
			if (f->isResizable()) {
				if ((state & $Frame::MAXIMIZED_BOTH) != 0) {
					f->setExtendedState(state & ~$Frame::MAXIMIZED_BOTH);
				} else {
					f->setExtendedState(state | $Frame::MAXIMIZED_BOTH);
				}
				return;
			}
		}
	}
}

int32_t MetalRootPaneUI$MouseInputHandler::calculateCorner($Window* w, int32_t x, int32_t y) {
	$var($Insets, insets, $nc(w)->getInsets());
	int32_t xPosition = calculatePosition(x - $nc(insets)->left, w->getWidth() - $nc(insets)->left - $nc(insets)->right);
	int32_t yPosition = calculatePosition(y - insets->top, w->getHeight() - insets->top - insets->bottom);
	if (xPosition == -1 || yPosition == -1) {
		return -1;
	}
	return yPosition * 5 + xPosition;
}

int32_t MetalRootPaneUI$MouseInputHandler::getCursor(int32_t corner) {
	if (corner == -1) {
		return 0;
	}
	$init($MetalRootPaneUI);
	return $nc($MetalRootPaneUI::cursorMapping)->get(corner);
}

int32_t MetalRootPaneUI$MouseInputHandler::calculatePosition(int32_t spot, int32_t width) {
	if (spot < 5) {
		return 0;
	}
	if (spot < 16) {
		return 1;
	}
	if (spot >= (width - 5)) {
		return 4;
	}
	if (spot >= (width - 16)) {
		return 3;
	}
	return 2;
}

MetalRootPaneUI$MouseInputHandler::MetalRootPaneUI$MouseInputHandler() {
}

$Class* MetalRootPaneUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalRootPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalRootPaneUI$MouseInputHandler, this$0)},
		{"isMovingWindow", "Z", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, isMovingWindow)},
		{"dragCursor", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragCursor)},
		{"dragOffsetX", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragOffsetX)},
		{"dragOffsetY", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragOffsetY)},
		{"dragWidth", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragWidth)},
		{"dragHeight", "I", nullptr, $PRIVATE, $field(MetalRootPaneUI$MouseInputHandler, dragHeight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalRootPaneUI;)V", nullptr, $PRIVATE, $method(MetalRootPaneUI$MouseInputHandler, init$, void, $MetalRootPaneUI*)},
		{"adjust", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;IIII)V", nullptr, $PRIVATE, $method(MetalRootPaneUI$MouseInputHandler, adjust, void, $Rectangle*, $Dimension*, int32_t, int32_t, int32_t, int32_t)},
		{"calculateCorner", "(Ljava/awt/Window;II)I", nullptr, $PRIVATE, $method(MetalRootPaneUI$MouseInputHandler, calculateCorner, int32_t, $Window*, int32_t, int32_t)},
		{"calculatePosition", "(II)I", nullptr, $PRIVATE, $method(MetalRootPaneUI$MouseInputHandler, calculatePosition, int32_t, int32_t, int32_t)},
		{"getCursor", "(I)I", nullptr, $PRIVATE, $method(MetalRootPaneUI$MouseInputHandler, getCursor, int32_t, int32_t)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalRootPaneUI$MouseInputHandler, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler", "javax.swing.plaf.metal.MetalRootPaneUI", "MouseInputHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler",
		"java.lang.Object",
		"javax.swing.event.MouseInputListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalRootPaneUI"
	};
	$loadClass(MetalRootPaneUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalRootPaneUI$MouseInputHandler));
	});
	return class$;
}

$Class* MetalRootPaneUI$MouseInputHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax