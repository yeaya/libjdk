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

$MethodInfo _EntityReference_MethodInfo_[] = {
	{"getDeclaration", "()Ljavax/xml/stream/events/EntityDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityReference, getDeclaration, $EntityDeclaration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityReference, getName, $String*)},
	{}
};

$ClassInfo _EntityReference_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.EntityReference",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_EntityReference_MethodInfo_
};

$Object* allocate$EntityReference($Class* clazz) {
	return $of($alloc(EntityReference));
}

$Class* EntityReference::load$($String* name, bool initialize) {
	$loadClass(EntityReference, name, initialize, &_EntityReference_ClassInfo_, allocate$EntityReference);
	return class$;
}

$Class* EntityReference::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax