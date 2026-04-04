#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/TableColumnModelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $TableColumnModelEvent = ::javax::swing::event::TableColumnModelEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* TableColumnModelListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"columnAdded", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModelListener, columnAdded, void, $TableColumnModelEvent*)},
		{"columnMarginChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModelListener, columnMarginChanged, void, $ChangeEvent*)},
		{"columnMoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModelListener, columnMoved, void, $TableColumnModelEvent*)},
		{"columnRemoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModelListener, columnRemoved, void, $TableColumnModelEvent*)},
		{"columnSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModelListener, columnSelectionChanged, void, $ListSelectionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.TableColumnModelListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TableColumnModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableColumnModelListener);
	});
	return class$;
}

$Class* TableColumnModelListener::class$ = nullptr;

		} // event
	} // swing
} // javax