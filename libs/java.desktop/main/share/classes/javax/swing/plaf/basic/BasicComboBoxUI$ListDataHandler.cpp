#include <javax/swing/plaf/basic/BasicComboBoxUI$ListDataHandler.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboBoxUI$ListDataHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$ListDataHandler::contentsChanged($ListDataEvent* e) {
	$$nc(this->this$0->getHandler())->contentsChanged(e);
}

void BasicComboBoxUI$ListDataHandler::intervalAdded($ListDataEvent* e) {
	$$nc(this->this$0->getHandler())->intervalAdded(e);
}

void BasicComboBoxUI$ListDataHandler::intervalRemoved($ListDataEvent* e) {
	$$nc(this->this$0->getHandler())->intervalRemoved(e);
}

BasicComboBoxUI$ListDataHandler::BasicComboBoxUI$ListDataHandler() {
}

$Class* BasicComboBoxUI$ListDataHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$ListDataHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(BasicComboBoxUI$ListDataHandler, init$, void, $BasicComboBoxUI*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ListDataHandler, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ListDataHandler, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ListDataHandler, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "ListDataHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler",
		"java.lang.Object",
		"javax.swing.event.ListDataListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicComboBoxUI"
	};
	$loadClass(BasicComboBoxUI$ListDataHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboBoxUI$ListDataHandler);
	});
	return class$;
}

$Class* BasicComboBoxUI$ListDataHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax