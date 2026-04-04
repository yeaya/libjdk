#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarFocusListener.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$ToolBarFocusListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicToolBarUI$ToolBarFocusListener::focusGained($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusGained(e);
}

void BasicToolBarUI$ToolBarFocusListener::focusLost($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusLost(e);
}

BasicToolBarUI$ToolBarFocusListener::BasicToolBarUI$ToolBarFocusListener() {
}

$Class* BasicToolBarUI$ToolBarFocusListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$ToolBarFocusListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(BasicToolBarUI$ToolBarFocusListener, init$, void, $BasicToolBarUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$ToolBarFocusListener, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$ToolBarFocusListener, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarFocusListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener",
		"java.lang.Object",
		"java.awt.event.FocusListener",
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
	$loadClass(BasicToolBarUI$ToolBarFocusListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToolBarUI$ToolBarFocusListener);
	});
	return class$;
}

$Class* BasicToolBarUI$ToolBarFocusListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax