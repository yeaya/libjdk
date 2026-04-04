#include <javax/swing/plaf/basic/BasicListUI$ListSelectionHandler.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicListUI$ListSelectionHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$ListSelectionHandler::valueChanged($ListSelectionEvent* e) {
	$$nc(this->this$0->getHandler())->valueChanged(e);
}

BasicListUI$ListSelectionHandler::BasicListUI$ListSelectionHandler() {
}

$Class* BasicListUI$ListSelectionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$ListSelectionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(BasicListUI$ListSelectionHandler, init$, void, $BasicListUI*)},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$ListSelectionHandler, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicListUI$ListSelectionHandler", "javax.swing.plaf.basic.BasicListUI", "ListSelectionHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicListUI$ListSelectionHandler",
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
		"javax.swing.plaf.basic.BasicListUI"
	};
	$loadClass(BasicListUI$ListSelectionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListUI$ListSelectionHandler);
	});
	return class$;
}

$Class* BasicListUI$ListSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax