#include <javax/swing/plaf/basic/BasicSliderUI$ComponentHandler.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$ComponentHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void BasicSliderUI$ComponentHandler::componentResized($ComponentEvent* e) {
	$$nc(this->this$0->getHandler())->componentResized(e);
}

BasicSliderUI$ComponentHandler::BasicSliderUI$ComponentHandler() {
}

$Class* BasicSliderUI$ComponentHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ComponentHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(BasicSliderUI$ComponentHandler, init$, void, $BasicSliderUI*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$ComponentHandler, componentResized, void, $ComponentEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$ComponentHandler", "javax.swing.plaf.basic.BasicSliderUI", "ComponentHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$ComponentHandler",
		"java.awt.event.ComponentAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicSliderUI"
	};
	$loadClass(BasicSliderUI$ComponentHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSliderUI$ComponentHandler);
	});
	return class$;
}

$Class* BasicSliderUI$ComponentHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax