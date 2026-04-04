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
	$useLocalObjectStack();
	bool var$1 = "CORE"_s->equals($($nc(feature)->toUpperCase()));
	bool var$0 = var$1 || "XML"_s->equals($(feature->toUpperCase()));
	if (var$0) {
		bool var$2 = "1.0"_s->equals(version);
		var$0 = var$2 || "2.0"_s->equals(version);
	}
	if (var$0) {
		return true;
	}
	return false;
}

$Object* DTMNodeProxy$DTMNodeProxyImplementation::getFeature($String* feature, $String* version) {
	return nullptr;
}

DTMNodeProxy$DTMNodeProxyImplementation::DTMNodeProxy$DTMNodeProxyImplementation() {
}

$Class* DTMNodeProxy$DTMNodeProxyImplementation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DTMNodeProxy$DTMNodeProxyImplementation, init$, void)},
		{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, createDocument, $Document*, $String*, $String*, $DocumentType*)},
		{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, createDocumentType, $DocumentType*, $String*, $String*, $String*)},
		{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, getFeature, $Object*, $String*, $String*)},
		{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DTMNodeProxy$DTMNodeProxyImplementation, hasFeature, bool, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation", "com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy", "DTMNodeProxyImplementation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation",
		"java.lang.Object",
		"org.w3c.dom.DOMImplementation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy"
	};
	$loadClass(DTMNodeProxy$DTMNodeProxyImplementation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMNodeProxy$DTMNodeProxyImplementation);
	});
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