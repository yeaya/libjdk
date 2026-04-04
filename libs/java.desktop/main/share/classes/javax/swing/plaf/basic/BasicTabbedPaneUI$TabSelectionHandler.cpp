#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabSelectionHandler.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTabbedPaneUI$TabSelectionHandler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTabbedPaneUI$TabSelectionHandler::stateChanged($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->stateChanged(e);
}

BasicTabbedPaneUI$TabSelectionHandler::BasicTabbedPaneUI$TabSelectionHandler() {
}

$Class* BasicTabbedPaneUI$TabSelectionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$TabSelectionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(BasicTabbedPaneUI$TabSelectionHandler, init$, void, $BasicTabbedPaneUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTabbedPaneUI$TabSelectionHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabSelectionHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
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
	$loadClass(BasicTabbedPaneUI$TabSelectionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTabbedPaneUI$TabSelectionHandler);
	});
	return class$;
}

$Class* BasicTabbedPaneUI$TabSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax