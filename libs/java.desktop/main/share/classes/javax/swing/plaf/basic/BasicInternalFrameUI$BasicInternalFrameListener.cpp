#include <javax/swing/plaf/basic/BasicInternalFrameUI$BasicInternalFrameListener.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameUI$BasicInternalFrameListener::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameClosing($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameClosing(e);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameClosed($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameClosed(e);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameOpened($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameOpened(e);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameIconified($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameIconified(e);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameDeiconified($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameDeiconified(e);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameActivated($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameActivated(e);
}

void BasicInternalFrameUI$BasicInternalFrameListener::internalFrameDeactivated($InternalFrameEvent* e) {
	$$nc(this->this$0->getHandler())->internalFrameDeactivated(e);
}

BasicInternalFrameUI$BasicInternalFrameListener::BasicInternalFrameUI$BasicInternalFrameListener() {
}

$Class* BasicInternalFrameUI$BasicInternalFrameListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$BasicInternalFrameListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PROTECTED, $method(BasicInternalFrameUI$BasicInternalFrameListener, init$, void, $BasicInternalFrameUI*)},
		{"internalFrameActivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameActivated, void, $InternalFrameEvent*)},
		{"internalFrameClosed", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameClosed, void, $InternalFrameEvent*)},
		{"internalFrameClosing", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameClosing, void, $InternalFrameEvent*)},
		{"internalFrameDeactivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameDeactivated, void, $InternalFrameEvent*)},
		{"internalFrameDeiconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameDeiconified, void, $InternalFrameEvent*)},
		{"internalFrameIconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameIconified, void, $InternalFrameEvent*)},
		{"internalFrameOpened", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$BasicInternalFrameListener, internalFrameOpened, void, $InternalFrameEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameUI$BasicInternalFrameListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "BasicInternalFrameListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameUI$BasicInternalFrameListener",
		"java.lang.Object",
		"javax.swing.event.InternalFrameListener",
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
	$loadClass(BasicInternalFrameUI$BasicInternalFrameListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicInternalFrameUI$BasicInternalFrameListener);
	});
	return class$;
}

$Class* BasicInternalFrameUI$BasicInternalFrameListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax