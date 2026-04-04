#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* Attribute::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDTDType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getDTDType, $String*)},
		{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getName, $QName*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getValue, $String*)},
		{"isSpecified", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, isSpecified, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.Attribute",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(Attribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute);
	});
	return class$;
}

$Class* Attribute::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax