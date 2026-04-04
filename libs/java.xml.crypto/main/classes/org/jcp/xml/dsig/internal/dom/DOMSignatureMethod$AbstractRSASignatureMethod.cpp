#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMSignatureMethod$AbstractRSASignatureMethod::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod::init$(params);
}

void DOMSignatureMethod$AbstractRSASignatureMethod::init$($Element* dmElem) {
	$DOMSignatureMethod::init$(dmElem);
}

$bytes* DOMSignatureMethod$AbstractRSASignatureMethod::postSignFormat($Key* key, $bytes* sig) {
	return sig;
}

$bytes* DOMSignatureMethod$AbstractRSASignatureMethod::preVerifyFormat($Key* key, $bytes* sig) {
	return sig;
}

DOMSignatureMethod$AbstractRSASignatureMethod::DOMSignatureMethod$AbstractRSASignatureMethod() {
}

$Class* DOMSignatureMethod$AbstractRSASignatureMethod::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMSignatureMethod$AbstractRSASignatureMethod, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMSignatureMethod$AbstractRSASignatureMethod, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"postSignFormat", "(Ljava/security/Key;[B)[B", nullptr, 0, $virtualMethod(DOMSignatureMethod$AbstractRSASignatureMethod, postSignFormat, $bytes*, $Key*, $bytes*)},
		{"preVerifyFormat", "(Ljava/security/Key;[B)[B", nullptr, 0, $virtualMethod(DOMSignatureMethod$AbstractRSASignatureMethod, preVerifyFormat, $bytes*, $Key*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
		"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
	};
	$loadClass(DOMSignatureMethod$AbstractRSASignatureMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMSignatureMethod$AbstractRSASignatureMethod));
	});
	return class$;
}

$Class* DOMSignatureMethod$AbstractRSASignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org