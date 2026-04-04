#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* ProcessingInstruction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, getData, $String*)},
		{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, getTarget, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.ProcessingInstruction",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProcessingInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessingInstruction);
	});
	return class$;
}

$Class* ProcessingInstruction::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax