#include <org/xml/sax/EntityResolver.h>

#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;

namespace org {
	namespace xml {
		namespace sax {

$MethodInfo _EntityResolver_MethodInfo_[] = {
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityResolver, resolveEntity, $InputSource*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _EntityResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.EntityResolver",
	nullptr,
	nullptr,
	nullptr,
	_EntityResolver_MethodInfo_
};

$Object* allocate$EntityResolver($Class* clazz) {
	return $of($alloc(EntityResolver));
}

$Class* EntityResolver::load$($String* name, bool initialize) {
	$loadClass(EntityResolver, name, initialize, &_EntityResolver_ClassInfo_, allocate$EntityResolver);
	return class$;
}

$Class* EntityResolver::class$ = nullptr;

		} // sax
	} // xml
} // org