#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA224.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef HMAC_SHA224

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMHMACSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMHMACSignatureMethod$SHA224::init$($AlgorithmParameterSpec* params) {
	$DOMHMACSignatureMethod::init$(params);
}

void DOMHMACSignatureMethod$SHA224::init$($Element* dmElem) {
	$DOMHMACSignatureMethod::init$(dmElem);
}

$String* DOMHMACSignatureMethod$SHA224::getAlgorithm() {
	$init($DOMHMACSignatureMethod);
	return $DOMHMACSignatureMethod::HMAC_SHA224;
}

$String* DOMHMACSignatureMethod$SHA224::getJCAAlgorithm() {
	return "HmacSHA224"_s;
}

int32_t DOMHMACSignatureMethod$SHA224::getDigestLength() {
	return 224;
}

DOMHMACSignatureMethod$SHA224::DOMHMACSignatureMethod$SHA224() {
}

$Class* DOMHMACSignatureMethod$SHA224::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMHMACSignatureMethod$SHA224, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMHMACSignatureMethod$SHA224, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMHMACSignatureMethod$SHA224, getAlgorithm, $String*)},
		{"getDigestLength", "()I", nullptr, 0, $virtualMethod(DOMHMACSignatureMethod$SHA224, getDigestLength, int32_t)},
		{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMHMACSignatureMethod$SHA224, getJCAAlgorithm, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA224", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224",
		"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod"
	};
	$loadClass(DOMHMACSignatureMethod$SHA224, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMHMACSignatureMethod$SHA224));
	});
	return class$;
}

$Class* DOMHMACSignatureMethod$SHA224::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org