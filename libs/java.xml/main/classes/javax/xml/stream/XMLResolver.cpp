#include <javax/xml/stream/XMLResolver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {

$Class* XMLResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResolver, resolveEntity, $Object*, $String*, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.XMLResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLResolver);
	});
	return class$;
}

$Class* XMLResolver::class$ = nullptr;

		} // stream
	} // xml
} // javax