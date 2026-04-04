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

$Class* DOMSerializer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMSerializer, serialize, void, $Node*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.serializer.DOMSerializer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMSerializer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMSerializer);
	});
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