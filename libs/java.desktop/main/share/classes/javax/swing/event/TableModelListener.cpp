#include <javax/swing/event/TableModelListener.h>
#include <javax/swing/event/TableModelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* TableModelListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModelListener, tableChanged, void, $TableModelEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.TableModelListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TableModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableModelListener);
	});
	return class$;
}

$Class* TableModelListener::class$ = nullptr;

		} // event
	} // swing
} // javax