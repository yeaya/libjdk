#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

void SignatureElementProxy::init$() {
	$ElementProxy::init$();
}

void SignatureElementProxy::init$($Document* doc) {
	$useLocalObjectStack();
	$ElementProxy::init$();
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	setDocument(doc);
	setElement($($XMLUtils::createElementInSignatureSpace(doc, $(this->getBaseLocalName()))));
}

void SignatureElementProxy::init$($Element* element, $String* baseURI) {
	$ElementProxy::init$(element, baseURI);
}

$String* SignatureElementProxy::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpecNS;
}

SignatureElementProxy::SignatureElementProxy() {
}

$Class* SignatureElementProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SignatureElementProxy, init$, void)},
		{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(SignatureElementProxy, init$, void, $Document*)},
		{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SignatureElementProxy, init$, void, $Element*, $String*), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
		{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SignatureElementProxy, getBaseNamespace, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
		"com.sun.org.apache.xml.internal.security.utils.ElementProxy",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SignatureElementProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureElementProxy);
	});
	return class$;
}

$Class* SignatureElementProxy::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com