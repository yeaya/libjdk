#include <javax/swing/event/CaretListener.h>
#include <javax/swing/event/CaretEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CaretEvent = ::javax::swing::event::CaretEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* CaretListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CaretListener, caretUpdate, void, $CaretEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.CaretListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(CaretListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CaretListener);
	});
	return class$;
}

$Class* CaretListener::class$ = nullptr;

		} // event
	} // swing
} // javax