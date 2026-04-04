#include <javax/swing/plaf/basic/BasicToolBarUI$DockingListener.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$DockingListener::init$($BasicToolBarUI* this$0, $JToolBar* t) {
	$set(this, this$0, this$0);
	this->isDragging = false;
	$set(this, origin, nullptr);
	$set(this, toolBar, t);
	$set($nc($(this$0->getHandler())), tb, t);
}

void BasicToolBarUI$DockingListener::mouseClicked($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseClicked(e);
}

void BasicToolBarUI$DockingListener::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	$set($nc($(this->this$0->getHandler())), tb, this->toolBar);
	$$nc(this->this$0->getHandler())->mousePressed(e);
	this->isDragging = $nc($(this->this$0->getHandler()))->isDragging;
}

void BasicToolBarUI$DockingListener::mouseReleased($MouseEvent* e) {
	$useLocalObjectStack();
	$set($nc($(this->this$0->getHandler())), tb, this->toolBar);
	$nc($(this->this$0->getHandler()))->isDragging = this->isDragging;
	$set($nc($(this->this$0->getHandler())), origin, this->origin);
	$$nc(this->this$0->getHandler())->mouseReleased(e);
	this->isDragging = $nc($(this->this$0->getHandler()))->isDragging;
	$set(this, origin, $nc($(this->this$0->getHandler()))->origin);
}

void BasicToolBarUI$DockingListener::mouseEntered($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseEntered(e);
}

void BasicToolBarUI$DockingListener::mouseExited($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseExited(e);
}

void BasicToolBarUI$DockingListener::mouseDragged($MouseEvent* e) {
	$useLocalObjectStack();
	$set($nc($(this->this$0->getHandler())), tb, this->toolBar);
	$set($nc($(this->this$0->getHandler())), origin, this->origin);
	$$nc(this->this$0->getHandler())->mouseDragged(e);
	this->isDragging = $nc($(this->this$0->getHandler()))->isDragging;
	$set(this, origin, $nc($(this->this$0->getHandler()))->origin);
}

void BasicToolBarUI$DockingListener::mouseMoved($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseMoved(e);
}

BasicToolBarUI$DockingListener::BasicToolBarUI$DockingListener() {
}

$Class* BasicToolBarUI$DockingListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$DockingListener, this$0)},
		{"toolBar", "Ljavax/swing/JToolBar;", nullptr, $PROTECTED, $field(BasicToolBarUI$DockingListener, toolBar)},
		{"isDragging", "Z", nullptr, $PROTECTED, $field(BasicToolBarUI$DockingListener, isDragging)},
		{"origin", "Ljava/awt/Point;", nullptr, $PROTECTED, $field(BasicToolBarUI$DockingListener, origin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljavax/swing/JToolBar;)V", nullptr, $PUBLIC, $method(BasicToolBarUI$DockingListener, init$, void, $BasicToolBarUI*, $JToolBar*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$DockingListener, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$DockingListener", "javax.swing.plaf.basic.BasicToolBarUI", "DockingListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$DockingListener",
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
		"javax.swing.plaf.basic.BasicToolBarUI"
	};
	$loadClass(BasicToolBarUI$DockingListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicToolBarUI$DockingListener));
	});
	return class$;
}

$Class* BasicToolBarUI$DockingListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax