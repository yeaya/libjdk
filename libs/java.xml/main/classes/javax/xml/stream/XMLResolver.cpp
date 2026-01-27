#include <javax/xml/stream/XMLResolver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLResolver_MethodInfo_[] = {
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResolver, resolveEntity, $Object*, $String*, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLResolver",
	nullptr,
	nullptr,
	nullptr,
	_XMLResolver_MethodInfo_
};

$Object* allocate$XMLResolver($Class* clazz) {
	return $of($alloc(XMLResolver));
}

$Class* XMLResolver::load$($String* name, bool initialize) {
	$loadClass(XMLResolver, name, initialize, &_XMLResolver_ClassInfo_, allocate$XMLResolver);
	return class$;
}

$Class* XMLResolver::class$ = nullptr;

		} // stream
	} // xml
} // javax