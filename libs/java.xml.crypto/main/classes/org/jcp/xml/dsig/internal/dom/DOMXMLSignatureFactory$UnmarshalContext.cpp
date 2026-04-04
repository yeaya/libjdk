#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory$UnmarshalContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMXMLSignatureFactory$UnmarshalContext::init$() {
	$DOMCryptoContext::init$();
}

DOMXMLSignatureFactory$UnmarshalContext::DOMXMLSignatureFactory$UnmarshalContext() {
}

$Class* DOMXMLSignatureFactory$UnmarshalContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DOMXMLSignatureFactory$UnmarshalContext, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext", "org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory", "UnmarshalContext", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext",
		"javax.xml.crypto.dom.DOMCryptoContext",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory"
	};
	$loadClass(DOMXMLSignatureFactory$UnmarshalContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMXMLSignatureFactory$UnmarshalContext);
	});
	return class$;
}

$Class* DOMXMLSignatureFactory$UnmarshalContext::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org