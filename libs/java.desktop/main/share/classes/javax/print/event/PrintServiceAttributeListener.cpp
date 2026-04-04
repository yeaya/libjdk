#include <javax/print/event/PrintServiceAttributeListener.h>
#include <javax/print/event/PrintServiceAttributeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceAttributeEvent = ::javax::print::event::PrintServiceAttributeEvent;

namespace javax {
	namespace print {
		namespace event {

$Class* PrintServiceAttributeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"attributeUpdate", "(Ljavax/print/event/PrintServiceAttributeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintServiceAttributeListener, attributeUpdate, void, $PrintServiceAttributeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.event.PrintServiceAttributeListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintServiceAttributeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceAttributeListener);
	});
	return class$;
}

$Class* PrintServiceAttributeListener::class$ = nullptr;

		} // event
	} // print
} // javax