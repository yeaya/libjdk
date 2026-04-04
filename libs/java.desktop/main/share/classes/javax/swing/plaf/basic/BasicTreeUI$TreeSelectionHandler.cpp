#include <javax/swing/plaf/basic/BasicTreeUI$TreeSelectionHandler.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$TreeSelectionHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$TreeSelectionHandler::valueChanged($TreeSelectionEvent* event) {
	$$nc(this->this$0->getHandler())->valueChanged(event);
}

BasicTreeUI$TreeSelectionHandler::BasicTreeUI$TreeSelectionHandler() {
}

$Class* BasicTreeUI$TreeSelectionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeSelectionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeSelectionHandler, init$, void, $BasicTreeUI*)},
		{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeSelectionHandler, valueChanged, void, $TreeSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeSelectionHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler",
		"java.lang.Object",
		"javax.swing.event.TreeSelectionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTreeUI"
	};
	$loadClass(BasicTreeUI$TreeSelectionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTreeUI$TreeSelectionHandler);
	});
	return class$;
}

$Class* BasicTreeUI$TreeSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax