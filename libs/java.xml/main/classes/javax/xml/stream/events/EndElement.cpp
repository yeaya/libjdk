#include <javax/xml/stream/events/EndElement.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* EndElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EndElement, getName, $QName*)},
		{"getNamespaces", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;", $PUBLIC | $ABSTRACT, $virtualMethod(EndElement, getNamespaces, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.EndElement",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(EndElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EndElement);
	});
	return class$;
}

$Class* EndElement::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax