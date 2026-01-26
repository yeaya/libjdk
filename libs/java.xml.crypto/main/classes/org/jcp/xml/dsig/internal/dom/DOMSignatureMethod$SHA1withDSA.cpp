#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withDSA.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractDSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef DSA
#undef DSA_SHA1

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignatureMethod$AbstractDSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractDSASignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$SHA1withDSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMSignatureMethod$SHA1withDSA, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMSignatureMethod$SHA1withDSA, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMSignatureMethod$SHA1withDSA, getAlgorithm, $String*)},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0, $virtualMethod(DOMSignatureMethod$SHA1withDSA, getAlgorithmType, $AbstractDOMSignatureMethod$Type*)},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMSignatureMethod$SHA1withDSA, getJCAAlgorithm, $String*)},
	{"getJCAFallbackAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMSignatureMethod$SHA1withDSA, getJCAFallbackAlgorithm, $String*)},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA1withDSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractDSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA1withDSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withDSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA1withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA1withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA1withDSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA1withDSA));
}

void DOMSignatureMethod$SHA1withDSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractDSASignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA1withDSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractDSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA1withDSA::getAlgorithm() {
	$init($SignatureMethod);
	return $SignatureMethod::DSA_SHA1;
}

$String* DOMSignatureMethod$SHA1withDSA::getJCAAlgorithm() {
	return "SHA1withDSAinP1363Format"_s;
}

$String* DOMSignatureMethod$SHA1withDSA::getJCAFallbackAlgorithm() {
	return "SHA1withDSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA1withDSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::DSA;
}

DOMSignatureMethod$SHA1withDSA::DOMSignatureMethod$SHA1withDSA() {
}

$Class* DOMSignatureMethod$SHA1withDSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA1withDSA, name, initialize, &_DOMSignatureMethod$SHA1withDSA_ClassInfo_, allocate$DOMSignatureMethod$SHA1withDSA);
	return class$;
}

$Class* DOMSignatureMethod$SHA1withDSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org