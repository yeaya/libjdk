#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy$DTMNodeProxyImplementation.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMDOMException.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $DTMDOMException = ::com::sun::org::apache::xml::internal::dtm::DTMDOMException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$MethodInfo _DTMNodeProxy$DTMNodeProxyImplementation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DTMNodeProxy$DTMNodeProxyImplementation, init$, void)},
	{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, createDocument, $Document*, $String*, $String*, $DocumentType*)},
	{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, createDocumentType, $DocumentType*, $String*, $String*, $String*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, getFeature, $Object*, $String*, $String*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, hasFeature, bool, $String*, $String*)},
	{}
};

$InnerClassInfo _DTMNodeProxy$DTMNodeProxyImplementation_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation", "com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy", "DTMNodeProxyImplementation", $STATIC},
	{}
};

$ClassInfo _DTMNodeProxy$DTMNodeProxyImplementation_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation",
	"java.lang.Object",
	"org.w3c.dom.DOMImplementation",
	nullptr,
	_DTMNodeProxy$DTMNodeProxyImplementation_MethodInfo_,
	nullptr,
	nullptr,
	_DTMNodeProxy$DTMNodeProxyImplementation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy"
};

$Object* allocate$DTMNodeProxy$DTMNodeProxyImplementation($Class* clazz) {
	return $of($alloc(DTMNodeProxy$DTMNodeProxyImplementation));
}

void DTMNodeProxy$DTMNodeProxyImplementation::init$() {
}

$DocumentType* DTMNodeProxy$DTMNodeProxyImplementation::createDocumentType($String* qualifiedName, $String* publicId, $String* systemId) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Document* DTMNodeProxy$DTMNodeProxyImplementation::createDocument($String* namespaceURI, $String* qualfiedName, $DocumentType* doctype) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

bool DTMNodeProxy$DTMNodeProxyImplementation::hasFeature($String* feature, $String* version) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = "CORE"_s->equals($($nc(feature)->toUpperCase()));
	bool var$0 = (var$1 || "XML"_s->equals($($nc(feature)->toUpperCase())));
	if (var$0) {
		bool var$2 = "1.0"_s->equals(version);
		var$0 = (var$2 || "2.0"_s->equals(version));
	}
	if (var$0) {
		return true;
	}
	return false;
}

$Object* DTMNodeProxy$DTMNodeProxyImplementation::getFeature($String* feature, $String* version) {
	return $of(nullptr);
}

DTMNodeProxy$DTMNodeProxyImplementation::DTMNodeProxy$DTMNodeProxyImplementation() {
}

$Class* DTMNodeProxy$DTMNodeProxyImplementation::load$($String* name, bool initialize) {
	$loadClass(DTMNodeProxy$DTMNodeProxyImplementation, name, initialize, &_DTMNodeProxy$DTMNodeProxyImplementation_ClassInfo_, allocate$DTMNodeProxy$DTMNodeProxyImplementation);
	return class$;
}

$Class* DTMNodeProxy$DTMNodeProxyImplementation::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com