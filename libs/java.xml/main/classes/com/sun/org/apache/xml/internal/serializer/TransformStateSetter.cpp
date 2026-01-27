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

$MethodInfo _TransformStateSetter_MethodInfo_[] = {
	{"resetState", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformStateSetter, resetState, void, $Transformer*)},
	{"setCurrentNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformStateSetter, setCurrentNode, void, $Node*)},
	{}
};

$ClassInfo _TransformStateSetter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.TransformStateSetter",
	nullptr,
	nullptr,
	nullptr,
	_TransformStateSetter_MethodInfo_
};

$Object* allocate$TransformStateSetter($Class* clazz) {
	return $of($alloc(TransformStateSetter));
}

$Class* TransformStateSetter::load$($String* name, bool initialize) {
	$loadClass(TransformStateSetter, name, initialize, &_TransformStateSetter_ClassInfo_, allocate$TransformStateSetter);
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