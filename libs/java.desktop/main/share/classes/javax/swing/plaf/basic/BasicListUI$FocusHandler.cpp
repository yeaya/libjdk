#include <javax/swing/plaf/basic/BasicListUI$FocusHandler.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicListUI$FocusHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$FocusHandler::repaintCellFocus() {
	$$nc(this->this$0->getHandler())->repaintCellFocus();
}

void BasicListUI$FocusHandler::focusGained($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusGained(e);
}

void BasicListUI$FocusHandler::focusLost($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusLost(e);
}

BasicListUI$FocusHandler::BasicListUI$FocusHandler() {
}

$Class* BasicListUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(BasicListUI$FocusHandler, init$, void, $BasicListUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{"repaintCellFocus", "()V", nullptr, $PROTECTED, $virtualMethod(BasicListUI$FocusHandler, repaintCellFocus, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicListUI$FocusHandler", "javax.swing.plaf.basic.BasicListUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicListUI$FocusHandler",
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
		"javax.swing.plaf.basic.BasicListUI"
	};
	$loadClass(BasicListUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListUI$FocusHandler);
	});
	return class$;
}

$Class* BasicListUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax