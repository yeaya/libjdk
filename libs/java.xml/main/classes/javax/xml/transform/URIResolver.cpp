#include <javax/xml/transform/URIResolver.h>

#include <javax/xml/transform/Source.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _URIResolver_MethodInfo_[] = {
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIResolver, resolve, $Source*, $String*, $String*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _URIResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.URIResolver",
	nullptr,
	nullptr,
	nullptr,
	_URIResolver_MethodInfo_
};

$Object* allocate$URIResolver($Class* clazz) {
	return $of($alloc(URIResolver));
}

$Class* URIResolver::load$($String* name, bool initialize) {
	$loadClass(URIResolver, name, initialize, &_URIResolver_ClassInfo_, allocate$URIResolver);
	return class$;
}

$Class* URIResolver::class$ = nullptr;

		} // transform
	} // xml
} // javax