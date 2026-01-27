#include <com/sun/org/apache/xml/internal/serialize/DOMSerializer.h>

#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _DOMSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _DOMSerializer_MethodInfo_[] = {
	{"serialize", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMSerializer, serialize, void, $Element*), "java.io.IOException"},
	{"serialize", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMSerializer, serialize, void, $Document*), "java.io.IOException"},
	{"serialize", "(Lorg/w3c/dom/DocumentFragment;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMSerializer, serialize, void, $DocumentFragment*), "java.io.IOException"},
	{}
};

$ClassInfo _DOMSerializer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serialize.DOMSerializer",
	nullptr,
	nullptr,
	nullptr,
	_DOMSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DOMSerializer_Annotations_
};

$Object* allocate$DOMSerializer($Class* clazz) {
	return $of($alloc(DOMSerializer));
}

$Class* DOMSerializer::load$($String* name, bool initialize) {
	$loadClass(DOMSerializer, name, initialize, &_DOMSerializer_ClassInfo_, allocate$DOMSerializer);
	return class$;
}

$Class* DOMSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com