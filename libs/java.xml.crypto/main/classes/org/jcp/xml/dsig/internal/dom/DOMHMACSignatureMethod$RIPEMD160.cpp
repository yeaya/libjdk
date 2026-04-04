#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$RIPEMD160.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef HMAC_RIPEMD160

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

void DOMHMACSignatureMethod$RIPEMD160::init$($AlgorithmParameterSpec* params) {
	$DOMHMACSignatureMethod::init$(params);
}

void DOMHMACSignatureMethod$RIPEMD160::init$($Element* dmElem) {
	$DOMHMACSignatureMethod::init$(dmElem);
}

$String* DOMHMACSignatureMethod$RIPEMD160::getAlgorithm() {
	$init($DOMHMACSignatureMethod);
	return $DOMHMACSignatureMethod::HMAC_RIPEMD160;
}

$String* DOMHMACSignatureMethod$RIPEMD160::getJCAAlgorithm() {
	return "HMACRIPEMD160"_s;
}

int32_t DOMHMACSignatureMethod$RIPEMD160::getDigestLength() {
	return 160;
}

DOMHMACSignatureMethod$RIPEMD160::DOMHMACSignatureMethod$RIPEMD160() {
}

$Class* DOMHMACSignatureMethod$RIPEMD160::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMHMACSignatureMethod$RIPEMD160, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMHMACSignatureMethod$RIPEMD160, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMHMACSignatureMethod$RIPEMD160, getAlgorithm, $String*)},
		{"getDigestLength", "()I", nullptr, 0, $virtualMethod(DOMHMACSignatureMethod$RIPEMD160, getDigestLength, int32_t)},
		{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMHMACSignatureMethod$RIPEMD160, getJCAAlgorithm, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "RIPEMD160", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160",
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
	$loadClass(DOMHMACSignatureMethod$RIPEMD160, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMHMACSignatureMethod$RIPEMD160));
	});
	return class$;
}

$Class* DOMHMACSignatureMethod$RIPEMD160::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org