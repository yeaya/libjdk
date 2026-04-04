#include <com/sun/org/apache/xml/internal/serializer/TransformStateSetter.h>
#include <javax/xml/transform/Transformer.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Transformer = ::javax::xml::transform::Transformer;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$Class* TransformStateSetter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resetState", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformStateSetter, resetState, void, $Transformer*)},
		{"setCurrentNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformStateSetter, setCurrentNode, void, $Node*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.serializer.TransformStateSetter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TransformStateSetter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformStateSetter);
	});
	return class$;
}

$Class* TransformStateSetter::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com