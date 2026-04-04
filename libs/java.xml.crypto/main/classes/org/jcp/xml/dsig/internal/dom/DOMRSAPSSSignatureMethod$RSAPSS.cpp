#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod$RSAPSS.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RSA
#undef RSA_PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMRSAPSSSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMRSAPSSSignatureMethod$RSAPSS::init$($AlgorithmParameterSpec* params) {
	$DOMRSAPSSSignatureMethod::init$(params);
}

void DOMRSAPSSSignatureMethod$RSAPSS::init$($Element* dmElem) {
	$DOMRSAPSSSignatureMethod::init$(dmElem);
}

$String* DOMRSAPSSSignatureMethod$RSAPSS::getAlgorithm() {
	$init($DOMRSAPSSSignatureMethod);
	return $DOMRSAPSSSignatureMethod::RSA_PSS;
}

$String* DOMRSAPSSSignatureMethod$RSAPSS::getJCAAlgorithm() {
	return "RSASSA-PSS"_s;
}

$AbstractDOMSignatureMethod$Type* DOMRSAPSSSignatureMethod$RSAPSS::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

DOMRSAPSSSignatureMethod$RSAPSS::DOMRSAPSSSignatureMethod$RSAPSS() {
}

$Class* DOMRSAPSSSignatureMethod$RSAPSS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMRSAPSSSignatureMethod$RSAPSS, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMRSAPSSSignatureMethod$RSAPSS, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMRSAPSSSignatureMethod$RSAPSS, getAlgorithm, $String*)},
		{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0, $virtualMethod(DOMRSAPSSSignatureMethod$RSAPSS, getAlgorithmType, $AbstractDOMSignatureMethod$Type*)},
		{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMRSAPSSSignatureMethod$RSAPSS, getJCAAlgorithm, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS", "org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod", "RSAPSS", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS",
		"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod"
	};
	$loadClass(DOMRSAPSSSignatureMethod$RSAPSS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMRSAPSSSignatureMethod$RSAPSS));
	});
	return class$;
}

$Class* DOMRSAPSSSignatureMethod$RSAPSS::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org