#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* TreeExpansionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeExpansionListener, treeCollapsed, void, $TreeExpansionEvent*)},
		{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeExpansionListener, treeExpanded, void, $TreeExpansionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.TreeExpansionListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeExpansionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeExpansionListener);
	});
	return class$;
}

$Class* TreeExpansionListener::class$ = nullptr;

		} // event
	} // swing
} // javax