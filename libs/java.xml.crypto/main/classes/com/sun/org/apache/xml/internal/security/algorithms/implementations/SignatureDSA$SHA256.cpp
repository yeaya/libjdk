#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA$SHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <java/security/Provider.h>
#include <jcpp.h>

#undef ALGO_ID_SIGNATURE_DSA_SHA256

using $SignatureDSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureDSA;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

void SignatureDSA$SHA256::init$() {
	$SignatureDSA::init$();
}

void SignatureDSA$SHA256::init$($Provider* provider) {
	$SignatureDSA::init$(provider);
}

$String* SignatureDSA$SHA256::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_DSA_SHA256;
}

SignatureDSA$SHA256::SignatureDSA$SHA256() {
}

$Class* SignatureDSA$SHA256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SignatureDSA$SHA256, init$, void), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(SignatureDSA$SHA256, init$, void, $Provider*), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SignatureDSA$SHA256, engineGetURI, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA", "SHA256", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256",
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA"
	};
	$loadClass(SignatureDSA$SHA256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureDSA$SHA256);
	});
	return class$;
}

$Class* SignatureDSA$SHA256::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com