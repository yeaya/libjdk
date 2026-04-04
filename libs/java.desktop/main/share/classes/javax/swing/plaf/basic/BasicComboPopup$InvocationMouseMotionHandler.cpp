#include <javax/swing/plaf/basic/BasicComboPopup$InvocationMouseMotionHandler.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboPopup$InvocationMouseMotionHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$MouseMotionAdapter::init$();
}

void BasicComboPopup$InvocationMouseMotionHandler::mouseDragged($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseDragged(e);
}

BasicComboPopup$InvocationMouseMotionHandler::BasicComboPopup$InvocationMouseMotionHandler() {
}

$Class* BasicComboPopup$InvocationMouseMotionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$InvocationMouseMotionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(BasicComboPopup$InvocationMouseMotionHandler, init$, void, $BasicComboPopup*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$InvocationMouseMotionHandler, mouseDragged, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseMotionHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationMouseMotionHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseMotionHandler",
		"java.awt.event.MouseMotionAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicComboPopup"
	};
	$loadClass(BasicComboPopup$InvocationMouseMotionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboPopup$InvocationMouseMotionHandler);
	});
	return class$;
}

$Class* BasicComboPopup$InvocationMouseMotionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax