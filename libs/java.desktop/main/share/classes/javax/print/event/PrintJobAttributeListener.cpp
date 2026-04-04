#include <javax/print/event/PrintJobAttributeListener.h>
#include <javax/print/event/PrintJobAttributeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintJobAttributeEvent = ::javax::print::event::PrintJobAttributeEvent;

namespace javax {
	namespace print {
		namespace event {

$Class* PrintJobAttributeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"attributeUpdate", "(Ljavax/print/event/PrintJobAttributeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobAttributeListener, attributeUpdate, void, $PrintJobAttributeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.event.PrintJobAttributeListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintJobAttributeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintJobAttributeListener);
	});
	return class$;
}

$Class* PrintJobAttributeListener::class$ = nullptr;

		} // event
	} // print
} // javax