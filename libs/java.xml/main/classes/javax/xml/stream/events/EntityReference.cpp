#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* EntityReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDeclaration", "()Ljavax/xml/stream/events/EntityDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityReference, getDeclaration, $EntityDeclaration*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityReference, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.EntityReference",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(EntityReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntityReference);
	});
	return class$;
}

$Class* EntityReference::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax