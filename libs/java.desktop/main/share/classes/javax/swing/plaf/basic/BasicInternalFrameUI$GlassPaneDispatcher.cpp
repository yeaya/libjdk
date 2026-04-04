#include <javax/swing/plaf/basic/BasicInternalFrameUI$GlassPaneDispatcher.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameUI$GlassPaneDispatcher::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mousePressed($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mousePressed(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseEntered($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseEntered(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseMoved($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseMoved(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseExited($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseExited(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseClicked($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseClicked(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseReleased($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseReleased(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseDragged($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseDragged(e);
}

BasicInternalFrameUI$GlassPaneDispatcher::BasicInternalFrameUI$GlassPaneDispatcher() {
}

$Class* BasicInternalFrameUI$GlassPaneDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$GlassPaneDispatcher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PROTECTED, $method(BasicInternalFrameUI$GlassPaneDispatcher, init$, void, $BasicInternalFrameUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$GlassPaneDispatcher, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameUI$GlassPaneDispatcher", "javax.swing.plaf.basic.BasicInternalFrameUI", "GlassPaneDispatcher", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameUI$GlassPaneDispatcher",
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
		"javax.swing.plaf.basic.BasicInternalFrameUI"
	};
	$loadClass(BasicInternalFrameUI$GlassPaneDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicInternalFrameUI$GlassPaneDispatcher));
	});
	return class$;
}

$Class* BasicInternalFrameUI$GlassPaneDispatcher::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax