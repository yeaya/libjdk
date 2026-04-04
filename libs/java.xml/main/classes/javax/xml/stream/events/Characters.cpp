#include <javax/xml/stream/events/Characters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* Characters::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, getData, $String*)},
		{"isCData", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, isCData, bool)},
		{"isIgnorableWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, isIgnorableWhiteSpace, bool)},
		{"isWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Characters, isWhiteSpace, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.Characters",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(Characters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Characters);
	});
	return class$;
}

$Class* Characters::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax