#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {

$Class* Location::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCharacterOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Location, getCharacterOffset, int32_t)},
		{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Location, getColumnNumber, int32_t)},
		{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Location, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Location, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Location, getSystemId, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.Location",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Location, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Location);
	});
	return class$;
}

$Class* Location::class$ = nullptr;

		} // stream
	} // xml
} // javax