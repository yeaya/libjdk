#include <javax/xml/stream/events/EntityDeclaration.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _EntityDeclaration_MethodInfo_[] = {
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityDeclaration, getBaseURI, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityDeclaration, getName, $String*)},
	{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityDeclaration, getNotationName, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityDeclaration, getPublicId, $String*)},
	{"getReplacementText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityDeclaration, getReplacementText, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityDeclaration, getSystemId, $String*)},
	{}
};

$ClassInfo _EntityDeclaration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.EntityDeclaration",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_EntityDeclaration_MethodInfo_
};

$Object* allocate$EntityDeclaration($Class* clazz) {
	return $of($alloc(EntityDeclaration));
}

$Class* EntityDeclaration::load$($String* name, bool initialize) {
	$loadClass(EntityDeclaration, name, initialize, &_EntityDeclaration_ClassInfo_, allocate$EntityDeclaration);
	return class$;
}

$Class* EntityDeclaration::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax