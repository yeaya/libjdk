#include <javax/swing/plaf/basic/BasicTreeUI$TreeModelHandler.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$TreeModelHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$TreeModelHandler::treeNodesChanged($TreeModelEvent* e) {
	$$nc(this->this$0->getHandler())->treeNodesChanged(e);
}

void BasicTreeUI$TreeModelHandler::treeNodesInserted($TreeModelEvent* e) {
	$$nc(this->this$0->getHandler())->treeNodesInserted(e);
}

void BasicTreeUI$TreeModelHandler::treeNodesRemoved($TreeModelEvent* e) {
	$$nc(this->this$0->getHandler())->treeNodesRemoved(e);
}

void BasicTreeUI$TreeModelHandler::treeStructureChanged($TreeModelEvent* e) {
	$$nc(this->this$0->getHandler())->treeStructureChanged(e);
}

BasicTreeUI$TreeModelHandler::BasicTreeUI$TreeModelHandler() {
}

$Class* BasicTreeUI$TreeModelHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeModelHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(BasicTreeUI$TreeModelHandler, init$, void, $BasicTreeUI*)},
		{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeModelHandler, treeNodesChanged, void, $TreeModelEvent*)},
		{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeModelHandler, treeNodesInserted, void, $TreeModelEvent*)},
		{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeModelHandler, treeNodesRemoved, void, $TreeModelEvent*)},
		{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$TreeModelHandler, treeStructureChanged, void, $TreeModelEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeModelHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler",
		"java.lang.Object",
		"javax.swing.event.TreeModelListener",
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
	$loadClass(BasicTreeUI$TreeModelHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTreeUI$TreeModelHandler);
	});
	return class$;
}

$Class* BasicTreeUI$TreeModelHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax