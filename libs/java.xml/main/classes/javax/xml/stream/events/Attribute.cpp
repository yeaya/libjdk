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

$MethodInfo _Attribute_MethodInfo_[] = {
	{"getDTDType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getDTDType, $String*)},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getName, $QName*)},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getValue, $String*)},
	{"isSpecified", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, isSpecified, bool)},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.Attribute",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_Attribute_MethodInfo_
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax