#include <org/jcp/xml/dsig/internal/dom/DOMBase64Transform.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $ApacheTransform = ::org::jcp::xml::dsig::internal::dom::ApacheTransform;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMBase64Transform::init$() {
	$ApacheTransform::init$();
}

void DOMBase64Transform::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params must be null"_s);
	}
}

DOMBase64Transform::DOMBase64Transform() {
}

$Class* DOMBase64Transform::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMBase64Transform, init$, void)},
		{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, $virtualMethod(DOMBase64Transform, init, void, $TransformParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMBase64Transform",
		"org.jcp.xml.dsig.internal.dom.ApacheTransform",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMBase64Transform, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMBase64Transform));
	});
	return class$;
}

$Class* DOMBase64Transform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org