#include <javax/xml/stream/events/StartElement.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/events/Attribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Attribute = ::javax::xml::stream::events::Attribute;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* StartElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributeByName", "(Ljavax/xml/namespace/QName;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartElement, getAttributeByName, $Attribute*, $QName*)},
		{"getAttributes", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Attribute;>;", $PUBLIC | $ABSTRACT, $virtualMethod(StartElement, getAttributes, $Iterator*)},
		{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartElement, getName, $QName*)},
		{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartElement, getNamespaceContext, $NamespaceContext*)},
		{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartElement, getNamespaceURI, $String*, $String*)},
		{"getNamespaces", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;", $PUBLIC | $ABSTRACT, $virtualMethod(StartElement, getNamespaces, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.StartElement",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(StartElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StartElement);
	});
	return class$;
}

$Class* StartElement::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax