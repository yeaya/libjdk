#include <javax/xml/stream/events/NotationDeclaration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* NotationDeclaration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotationDeclaration, getName, $String*)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotationDeclaration, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotationDeclaration, getSystemId, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.NotationDeclaration",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(NotationDeclaration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotationDeclaration);
	});
	return class$;
}

$Class* NotationDeclaration::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax