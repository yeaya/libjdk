#include <com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _DOMSerializer_MethodInfo_[] = {
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMSerializer, serialize, void, $Node*), "java.io.IOException"},
	{}
};

$ClassInfo _DOMSerializer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.DOMSerializer",
	nullptr,
	nullptr,
	nullptr,
	_DOMSerializer_MethodInfo_
};

$Object* allocate$DOMSerializer($Class* clazz) {
	return $of($alloc(DOMSerializer));
}

$Class* DOMSerializer::load$($String* name, bool initialize) {
	$loadClass(DOMSerializer, name, initialize, &_DOMSerializer_ClassInfo_, allocate$DOMSerializer);
	return class$;
}

$Class* DOMSerializer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com