#include <javax/swing/plaf/basic/BasicToolBarUI$FrameListener.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$FrameListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void BasicToolBarUI$FrameListener::windowClosing($WindowEvent* w) {
	$useLocalObjectStack();
	if ($nc(this->this$0->toolBar)->isFloatable()) {
		if (this->this$0->dragWindow != nullptr) {
			this->this$0->dragWindow->setVisible(false);
		}
		this->this$0->floating = false;
		if (this->this$0->floatingToolBar == nullptr) {
			$set(this->this$0, floatingToolBar, this->this$0->createFloatingWindow(this->this$0->toolBar));
		}
		if ($instanceOf($Window, this->this$0->floatingToolBar)) {
			$cast($Window, this->this$0->floatingToolBar)->setVisible(false);
		}
		$$nc($nc(this->this$0->floatingToolBar)->getContentPane())->remove(this->this$0->toolBar);
		$var($String, constraint, this->this$0->constraintBeforeFloating);
		if ($nc(this->this$0->toolBar)->getOrientation() == $JToolBar::HORIZONTAL) {
			if (constraint == "West"_s || constraint == "East"_s) {
				$assign(constraint, "North"_s);
			}
		} else if (constraint == "North"_s || constraint == "South"_s) {
			$assign(constraint, "West"_s);
		}
		if (this->this$0->dockingSource == nullptr) {
			$set(this->this$0, dockingSource, $nc(this->this$0->toolBar)->getParent());
		}
		if (this->this$0->propertyListener != nullptr) {
			$UIManager::removePropertyChangeListener(this->this$0->propertyListener);
		}
		$nc(this->this$0->dockingSource)->add(this->this$0->toolBar, constraint);
		$nc(this->this$0->dockingSource)->invalidate();
		$var($Container, dockingSourceParent, $nc(this->this$0->dockingSource)->getParent());
		if (dockingSourceParent != nullptr) {
			dockingSourceParent->validate();
		}
		$nc(this->this$0->dockingSource)->repaint();
	}
}

BasicToolBarUI$FrameListener::BasicToolBarUI$FrameListener() {
}

$Class* BasicToolBarUI$FrameListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$FrameListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(BasicToolBarUI$FrameListener, init$, void, $BasicToolBarUI*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$FrameListener, windowClosing, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$FrameListener", "javax.swing.plaf.basic.BasicToolBarUI", "FrameListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$FrameListener",
		"java.awt.event.WindowAdapter",
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
	$loadClass(BasicToolBarUI$FrameListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicToolBarUI$FrameListener));
	});
	return class$;
}

$Class* BasicToolBarUI$FrameListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax