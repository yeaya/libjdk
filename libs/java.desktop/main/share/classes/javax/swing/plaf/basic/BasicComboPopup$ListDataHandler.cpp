#include <javax/swing/plaf/basic/BasicComboPopup$ListDataHandler.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboPopup$ListDataHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$ListDataHandler::contentsChanged($ListDataEvent* e) {
}

void BasicComboPopup$ListDataHandler::intervalAdded($ListDataEvent* e) {
}

void BasicComboPopup$ListDataHandler::intervalRemoved($ListDataEvent* e) {
}

BasicComboPopup$ListDataHandler::BasicComboPopup$ListDataHandler() {
}

$Class* BasicComboPopup$ListDataHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListDataHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PUBLIC, $method(BasicComboPopup$ListDataHandler, init$, void, $BasicComboPopup*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$ListDataHandler, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$ListDataHandler, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$ListDataHandler, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboPopup$ListDataHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListDataHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboPopup$ListDataHandler",
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
		"javax.swing.plaf.basic.BasicComboPopup"
	};
	$loadClass(BasicComboPopup$ListDataHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboPopup$ListDataHandler);
	});
	return class$;
}

$Class* BasicComboPopup$ListDataHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax