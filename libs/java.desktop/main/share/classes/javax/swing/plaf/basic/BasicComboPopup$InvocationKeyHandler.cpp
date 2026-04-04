#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboPopup$InvocationKeyHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void BasicComboPopup$InvocationKeyHandler::keyReleased($KeyEvent* e) {
}

BasicComboPopup$InvocationKeyHandler::BasicComboPopup$InvocationKeyHandler() {
}

$Class* BasicComboPopup$InvocationKeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$InvocationKeyHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PUBLIC, $method(BasicComboPopup$InvocationKeyHandler, init$, void, $BasicComboPopup*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$InvocationKeyHandler, keyReleased, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler",
		"java.awt.event.KeyAdapter",
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
	$loadClass(BasicComboPopup$InvocationKeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboPopup$InvocationKeyHandler);
	});
	return class$;
}

$Class* BasicComboPopup$InvocationKeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax