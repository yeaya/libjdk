#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* DocumentListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentListener, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentListener, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentListener, removeUpdate, void, $DocumentEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.DocumentListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentListener);
	});
	return class$;
}

$Class* DocumentListener::class$ = nullptr;

		} // event
	} // swing
} // javax