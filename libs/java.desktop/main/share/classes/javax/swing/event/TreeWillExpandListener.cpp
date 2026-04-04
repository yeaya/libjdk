#include <javax/swing/event/TreeWillExpandListener.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* TreeWillExpandListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"treeWillCollapse", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWillExpandListener, treeWillCollapse, void, $TreeExpansionEvent*), "javax.swing.tree.ExpandVetoException"},
		{"treeWillExpand", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeWillExpandListener, treeWillExpand, void, $TreeExpansionEvent*), "javax.swing.tree.ExpandVetoException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.TreeWillExpandListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeWillExpandListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeWillExpandListener);
	});
	return class$;
}

$Class* TreeWillExpandListener::class$ = nullptr;

		} // event
	} // swing
} // javax