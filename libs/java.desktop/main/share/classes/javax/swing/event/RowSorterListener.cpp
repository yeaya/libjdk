#include <javax/swing/event/RowSorterListener.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* RowSorterListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"sorterChanged", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSorterListener, sorterChanged, void, $RowSorterEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.RowSorterListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(RowSorterListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSorterListener);
	});
	return class$;
}

$Class* RowSorterListener::class$ = nullptr;

		} // event
	} // swing
} // javax