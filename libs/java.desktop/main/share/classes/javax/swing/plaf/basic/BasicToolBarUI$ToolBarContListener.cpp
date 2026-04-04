#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarContListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$ToolBarContListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicToolBarUI$ToolBarContListener::componentAdded($ContainerEvent* e) {
	$$nc(this->this$0->getHandler())->componentAdded(e);
}

void BasicToolBarUI$ToolBarContListener::componentRemoved($ContainerEvent* e) {
	$$nc(this->this$0->getHandler())->componentRemoved(e);
}

BasicToolBarUI$ToolBarContListener::BasicToolBarUI$ToolBarContListener() {
}

$Class* BasicToolBarUI$ToolBarContListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$ToolBarContListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(BasicToolBarUI$ToolBarContListener, init$, void, $BasicToolBarUI*)},
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$ToolBarContListener, componentAdded, void, $ContainerEvent*)},
		{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$ToolBarContListener, componentRemoved, void, $ContainerEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarContListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener",
		"java.lang.Object",
		"java.awt.event.ContainerListener",
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
	$loadClass(BasicToolBarUI$ToolBarContListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToolBarUI$ToolBarContListener);
	});
	return class$;
}

$Class* BasicToolBarUI$ToolBarContListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax