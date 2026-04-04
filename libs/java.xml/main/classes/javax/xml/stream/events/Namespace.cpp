#include <javax/xml/stream/events/Namespace.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* Namespace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Namespace, getNamespaceURI, $String*)},
		{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Namespace, getPrefix, $String*)},
		{"isDefaultNamespaceDeclaration", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Namespace, isDefaultNamespaceDeclaration, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.Namespace",
		nullptr,
		"javax.xml.stream.events.Attribute",
		nullptr,
		methodInfos$$
	};
	$loadClass(Namespace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Namespace);
	});
	return class$;
}

$Class* Namespace::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax