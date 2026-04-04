#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$DragWindow::init$($BasicToolBarUI* this$0, $Window* w) {
	$set(this, this$0, this$0);
	$Window::init$(w);
	$init($Color);
	$set(this, borderColor, $Color::gray);
	this->orientation = $nc(this->this$0->toolBar)->getOrientation();
}

int32_t BasicToolBarUI$DragWindow::getOrientation() {
	return this->orientation;
}

void BasicToolBarUI$DragWindow::setOrientation(int32_t o) {
	$useLocalObjectStack();
	if (isShowing()) {
		if (o == this->orientation) {
			return;
		}
		this->orientation = o;
		$var($Dimension, size, getSize());
		setSize($$new($Dimension, $nc(size)->height, $nc(size)->width));
		if (this->offset != nullptr) {
			if ($BasicGraphicsUtils::isLeftToRight(this->this$0->toolBar)) {
				setOffset($$new($Point, $nc(this->offset)->y, $nc(this->offset)->x));
			} else if (o == $JToolBar::HORIZONTAL) {
				setOffset($$new($Point, size->height - $nc(this->offset)->y, $nc(this->offset)->x));
			} else {
				setOffset($$new($Point, $nc(this->offset)->y, size->width - $nc(this->offset)->x));
			}
		}
		repaint();
	}
}

$Point* BasicToolBarUI$DragWindow::getOffset() {
	return this->offset;
}

void BasicToolBarUI$DragWindow::setOffset($Point* p) {
	$set(this, offset, p);
}

void BasicToolBarUI$DragWindow::setBorderColor($Color* c) {
	if (this->borderColor == c) {
		return;
	}
	$set(this, borderColor, c);
	repaint();
}

$Color* BasicToolBarUI$DragWindow::getBorderColor() {
	return this->borderColor;
}

void BasicToolBarUI$DragWindow::paint($Graphics* g) {
	this->this$0->paintDragWindow(g);
	$Window::paint(g);
}

$Insets* BasicToolBarUI$DragWindow::getInsets() {
	return $new($Insets, 1, 1, 1, 1);
}

BasicToolBarUI$DragWindow::BasicToolBarUI$DragWindow() {
}

$Class* BasicToolBarUI$DragWindow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$DragWindow, this$0)},
		{"borderColor", "Ljava/awt/Color;", nullptr, 0, $field(BasicToolBarUI$DragWindow, borderColor)},
		{"orientation", "I", nullptr, 0, $field(BasicToolBarUI$DragWindow, orientation)},
		{"offset", "Ljava/awt/Point;", nullptr, 0, $field(BasicToolBarUI$DragWindow, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/awt/Window;)V", nullptr, 0, $method(BasicToolBarUI$DragWindow, init$, void, $BasicToolBarUI*, $Window*)},
		{"getBorderColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, getBorderColor, $Color*)},
		{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, getInsets, $Insets*)},
		{"getOffset", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, getOffset, $Point*)},
		{"getOrientation", "()I", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, getOrientation, int32_t)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, paint, void, $Graphics*)},
		{"setBorderColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, setBorderColor, void, $Color*)},
		{"setOffset", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, setOffset, void, $Point*)},
		{"setOrientation", "(I)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DragWindow, setOrientation, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$DragWindow", "javax.swing.plaf.basic.BasicToolBarUI", "DragWindow", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$DragWindow",
		"java.awt.Window",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicToolBarUI"
	};
	$loadClass(BasicToolBarUI$DragWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicToolBarUI$DragWindow));
	});
	return class$;
}

$Class* BasicToolBarUI$DragWindow::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax