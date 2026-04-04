#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* TreeModelListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModelListener, treeNodesChanged, void, $TreeModelEvent*)},
		{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModelListener, treeNodesInserted, void, $TreeModelEvent*)},
		{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModelListener, treeNodesRemoved, void, $TreeModelEvent*)},
		{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModelListener, treeStructureChanged, void, $TreeModelEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.TreeModelListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeModelListener);
	});
	return class$;
}

$Class* TreeModelListener::class$ = nullptr;

		} // event
	} // swing
} // javax