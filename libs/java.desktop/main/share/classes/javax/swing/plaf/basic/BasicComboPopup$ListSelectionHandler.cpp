#include <javax/swing/plaf/basic/BasicComboPopup$ListSelectionHandler.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboPopup$ListSelectionHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$ListSelectionHandler::valueChanged($ListSelectionEvent* e) {
}

BasicComboPopup$ListSelectionHandler::BasicComboPopup$ListSelectionHandler() {
}

$Class* BasicComboPopup$ListSelectionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListSelectionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(BasicComboPopup$ListSelectionHandler, init$, void, $BasicComboPopup*)},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$ListSelectionHandler, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListSelectionHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler",
		"java.lang.Object",
		"javax.swing.event.ListSelectionListener",
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
	$loadClass(BasicComboPopup$ListSelectionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboPopup$ListSelectionHandler);
	});
	return class$;
}

$Class* BasicComboPopup$ListSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax