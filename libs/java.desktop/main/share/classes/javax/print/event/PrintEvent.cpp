#include <javax/print/event/PrintEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace print {
		namespace event {

void PrintEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

$String* PrintEvent::toString() {
	$useLocalObjectStack();
	return ($str({"PrintEvent on "_s, $($$nc(getSource())->toString())}));
}

PrintEvent::PrintEvent() {
}

$Class* PrintEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PrintEvent, init$, void, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrintEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.event.PrintEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintEvent);
	});
	return class$;
}

$Class* PrintEvent::class$ = nullptr;

		} // event
	} // print
} // javax