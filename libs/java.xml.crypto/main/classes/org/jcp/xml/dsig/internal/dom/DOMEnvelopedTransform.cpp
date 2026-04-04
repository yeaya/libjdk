#include <org/jcp/xml/dsig/internal/dom/DOMEnvelopedTransform.h>
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

void DOMEnvelopedTransform::init$() {
	$ApacheTransform::init$();
}

void DOMEnvelopedTransform::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params must be null"_s);
	}
}

DOMEnvelopedTransform::DOMEnvelopedTransform() {
}

$Class* DOMEnvelopedTransform::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMEnvelopedTransform, init$, void)},
		{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, $virtualMethod(DOMEnvelopedTransform, init, void, $TransformParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMEnvelopedTransform",
		"org.jcp.xml.dsig.internal.dom.ApacheTransform",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMEnvelopedTransform, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMEnvelopedTransform));
	});
	return class$;
}

$Class* DOMEnvelopedTransform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org