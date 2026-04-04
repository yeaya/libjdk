#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* CellEditorListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditorListener, editingCanceled, void, $ChangeEvent*)},
		{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditorListener, editingStopped, void, $ChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.CellEditorListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(CellEditorListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CellEditorListener);
	});
	return class$;
}

$Class* CellEditorListener::class$ = nullptr;

		} // event
	} // swing
} // javax