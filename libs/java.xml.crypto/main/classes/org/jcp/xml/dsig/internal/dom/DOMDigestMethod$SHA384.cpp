#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA384.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMDigestMethod = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMDigestMethod$SHA384_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMDigestMethod$SHA384, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMDigestMethod$SHA384, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMDigestMethod$SHA384, getAlgorithm, $String*)},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMDigestMethod$SHA384, getMessageDigestAlgorithm, $String*)},
	{}
};

$InnerClassInfo _DOMDigestMethod$SHA384_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA384", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA384", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$SHA384_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA384",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA384_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$SHA384($Class* clazz) {
	return $of($alloc(DOMDigestMethod$SHA384));
}

void DOMDigestMethod$SHA384::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$SHA384::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$SHA384::getAlgorithm() {
	$init($DOMDigestMethod);
	return $DOMDigestMethod::SHA384;
}

$String* DOMDigestMethod$SHA384::getMessageDigestAlgorithm() {
	return "SHA-384"_s;
}

DOMDigestMethod$SHA384::DOMDigestMethod$SHA384() {
}

$Class* DOMDigestMethod$SHA384::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$SHA384, name, initialize, &_DOMDigestMethod$SHA384_ClassInfo_, allocate$DOMDigestMethod$SHA384);
	return class$;
}

$Class* DOMDigestMethod$SHA384::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org