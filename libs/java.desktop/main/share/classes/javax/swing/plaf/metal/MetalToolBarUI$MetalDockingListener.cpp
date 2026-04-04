#include <javax/swing/plaf/metal/MetalToolBarUI$MetalDockingListener.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DockingListener.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $BasicToolBarUI$DockingListener = ::javax::swing::plaf::basic::BasicToolBarUI$DockingListener;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalToolBarUI$MetalDockingListener::init$($MetalToolBarUI* this$0, $JToolBar* t) {
	$set(this, this$0, this$0);
	$BasicToolBarUI$DockingListener::init$(this$0, t);
	this->pressedInBumps = false;
}

void MetalToolBarUI$MetalDockingListener::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	$BasicToolBarUI$DockingListener::mousePressed(e);
	if (!$nc(this->toolBar)->isEnabled()) {
		return;
	}
	this->pressedInBumps = false;
	$var($Rectangle, bumpRect, $new($Rectangle));
	if ($nc(this->toolBar)->getOrientation() == $JToolBar::HORIZONTAL) {
		int32_t x = $MetalUtils::isLeftToRight(this->toolBar) ? 0 : $nc($($nc(this->toolBar)->getSize()))->width - 14;
		bumpRect->setBounds(x, 0, 14, $nc($($nc(this->toolBar)->getSize()))->height);
	} else {
		bumpRect->setBounds(0, 0, $nc($($nc(this->toolBar)->getSize()))->width, 14);
	}
	if (bumpRect->contains($($nc(e)->getPoint()))) {
		this->pressedInBumps = true;
		$var($Point, dragOffset, e->getPoint());
		if (!$MetalUtils::isLeftToRight(this->toolBar)) {
			int32_t var$0 = $nc($($nc(this->toolBar)->getSize()))->width;
			$nc(dragOffset)->x -= (var$0 - $nc($(this->toolBar->getPreferredSize()))->width);
		}
		this->this$0->setDragOffset(dragOffset);
	}
}

void MetalToolBarUI$MetalDockingListener::mouseDragged($MouseEvent* e) {
	if (this->pressedInBumps) {
		$BasicToolBarUI$DockingListener::mouseDragged(e);
	}
}

MetalToolBarUI$MetalDockingListener::MetalToolBarUI$MetalDockingListener() {
}

$Class* MetalToolBarUI$MetalDockingListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalToolBarUI$MetalDockingListener, this$0)},
		{"pressedInBumps", "Z", nullptr, $PRIVATE, $field(MetalToolBarUI$MetalDockingListener, pressedInBumps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalToolBarUI;Ljavax/swing/JToolBar;)V", nullptr, $PUBLIC, $method(MetalToolBarUI$MetalDockingListener, init$, void, $MetalToolBarUI*, $JToolBar*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalToolBarUI$MetalDockingListener, mouseDragged, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalToolBarUI$MetalDockingListener, mousePressed, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalDockingListener", $PROTECTED},
		{"javax.swing.plaf.basic.BasicToolBarUI$DockingListener", "javax.swing.plaf.basic.BasicToolBarUI", "DockingListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener",
		"javax.swing.plaf.basic.BasicToolBarUI$DockingListener",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalToolBarUI"
	};
	$loadClass(MetalToolBarUI$MetalDockingListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalToolBarUI$MetalDockingListener));
	});
	return class$;
}

$Class* MetalToolBarUI$MetalDockingListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax