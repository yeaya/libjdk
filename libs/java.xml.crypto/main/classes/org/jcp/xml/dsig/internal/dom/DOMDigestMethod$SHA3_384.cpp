#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_384.h>
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

void DOMDigestMethod$SHA3_384::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$SHA3_384::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$SHA3_384::getAlgorithm() {
	$init($DOMDigestMethod);
	return $DOMDigestMethod::SHA3_384;
}

$String* DOMDigestMethod$SHA3_384::getMessageDigestAlgorithm() {
	return "SHA3-384"_s;
}

DOMDigestMethod$SHA3_384::DOMDigestMethod$SHA3_384() {
}

$Class* DOMDigestMethod$SHA3_384::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMDigestMethod$SHA3_384, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMDigestMethod$SHA3_384, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMDigestMethod$SHA3_384, getAlgorithm, $String*)},
		{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMDigestMethod$SHA3_384, getMessageDigestAlgorithm, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_384", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA3_384", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_384",
		"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
	};
	$loadClass(DOMDigestMethod$SHA3_384, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMDigestMethod$SHA3_384));
	});
	return class$;
}

$Class* DOMDigestMethod$SHA3_384::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org