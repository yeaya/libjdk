#include <javax/swing/plaf/basic/BasicComboPopup$ListMouseMotionHandler.h>
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

void BasicComboPopup$ListMouseMotionHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$MouseMotionAdapter::init$();
}

void BasicComboPopup$ListMouseMotionHandler::mouseMoved($MouseEvent* anEvent) {
	$$nc(this->this$0->getHandler())->mouseMoved(anEvent);
}

BasicComboPopup$ListMouseMotionHandler::BasicComboPopup$ListMouseMotionHandler() {
}

$Class* BasicComboPopup$ListMouseMotionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListMouseMotionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(BasicComboPopup$ListMouseMotionHandler, init$, void, $BasicComboPopup*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$ListMouseMotionHandler, mouseMoved, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListMouseMotionHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler",
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
	$loadClass(BasicComboPopup$ListMouseMotionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboPopup$ListMouseMotionHandler);
	});
	return class$;
}

$Class* BasicComboPopup$ListMouseMotionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax