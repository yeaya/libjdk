#include <javax/swing/plaf/basic/BasicTabbedPaneUI$FocusHandler.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTabbedPaneUI$FocusHandler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void BasicTabbedPaneUI$FocusHandler::focusGained($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusGained(e);
}

void BasicTabbedPaneUI$FocusHandler::focusLost($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusLost(e);
}

BasicTabbedPaneUI$FocusHandler::BasicTabbedPaneUI$FocusHandler() {
}

$Class* BasicTabbedPaneUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(BasicTabbedPaneUI$FocusHandler, init$, void, $BasicTabbedPaneUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler",
		"java.awt.event.FocusAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTabbedPaneUI"
	};
	$loadClass(BasicTabbedPaneUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTabbedPaneUI$FocusHandler);
	});
	return class$;
}

$Class* BasicTabbedPaneUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax