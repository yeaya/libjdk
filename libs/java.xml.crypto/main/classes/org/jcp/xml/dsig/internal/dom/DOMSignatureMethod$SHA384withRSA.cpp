#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA384withRSA.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RSA
#undef RSA_SHA384

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractRSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$SHA384withRSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMSignatureMethod$SHA384withRSA, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMSignatureMethod$SHA384withRSA, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMSignatureMethod$SHA384withRSA, getAlgorithm, $String*)},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0, $virtualMethod(DOMSignatureMethod$SHA384withRSA, getAlgorithmType, $AbstractDOMSignatureMethod$Type*)},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMSignatureMethod$SHA384withRSA, getJCAAlgorithm, $String*)},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA384withRSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA384withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA384withRSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA384withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA384withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA384withRSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA384withRSA));
}

void DOMSignatureMethod$SHA384withRSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA384withRSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA384withRSA::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::RSA_SHA384;
}

$String* DOMSignatureMethod$SHA384withRSA::getJCAAlgorithm() {
	return "SHA384withRSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA384withRSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

DOMSignatureMethod$SHA384withRSA::DOMSignatureMethod$SHA384withRSA() {
}

$Class* DOMSignatureMethod$SHA384withRSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA384withRSA, name, initialize, &_DOMSignatureMethod$SHA384withRSA_ClassInfo_, allocate$DOMSignatureMethod$SHA384withRSA);
	return class$;
}

$Class* DOMSignatureMethod$SHA384withRSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org