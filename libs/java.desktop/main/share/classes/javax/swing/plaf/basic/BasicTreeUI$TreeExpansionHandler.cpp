#include <javax/swing/plaf/basic/BasicTreeUI$TreeExpansionHandler.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$TreeExpansionHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$TreeExpansionHandler::treeExpanded($TreeExpansionEvent* event) {
	$$nc(this->this$0->getHandler())->treeExpanded(event);
}

void BasicTreeUI$TreeExpansionHandler::treeCollapsed($TreeExpansionEvent* event) {
	$$nc(this->this$0->getHandler())->treeCollapsed(event);
}

BasicTreeUI$TreeExpansionHandler::BasicTreeUI$TreeExpansionHandler() {
}

$Class* BasicTreeUI$TreeExpansionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeExpansionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeExpansionHandler, init$, void, $BasicTreeUI*)},
		{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeExpansionHandler, treeCollapsed, void, $TreeExpansionEvent*)},
		{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeExpansionHandler, treeExpanded, void, $TreeExpansionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeExpansionHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler",
		"java.lang.Object",
		"javax.swing.event.TreeExpansionListener",
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
	$loadClass(BasicTreeUI$TreeExpansionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTreeUI$TreeExpansionHandler);
	});
	return class$;
}

$Class* BasicTreeUI$TreeExpansionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax