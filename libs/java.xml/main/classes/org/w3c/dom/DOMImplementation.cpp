#include <org/w3c/dom/DOMImplementation.h>

#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMImplementation_MethodInfo_[] = {
	{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementation, createDocument, $Document*, $String*, $String*, $DocumentType*), "org.w3c.dom.DOMException"},
	{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementation, createDocumentType, $DocumentType*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementation, getFeature, $Object*, $String*, $String*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementation, hasFeature, bool, $String*, $String*)},
	{}
};

$ClassInfo _DOMImplementation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMImplementation",
	nullptr,
	nullptr,
	nullptr,
	_DOMImplementation_MethodInfo_
};

$Object* allocate$DOMImplementation($Class* clazz) {
	return $of($alloc(DOMImplementation));
}

$Class* DOMImplementation::load$($String* name, bool initialize) {
	$loadClass(DOMImplementation, name, initialize, &_DOMImplementation_ClassInfo_, allocate$DOMImplementation);
	return class$;
}

$Class* DOMImplementation::class$ = nullptr;

		} // dom
	} // w3c
} // org