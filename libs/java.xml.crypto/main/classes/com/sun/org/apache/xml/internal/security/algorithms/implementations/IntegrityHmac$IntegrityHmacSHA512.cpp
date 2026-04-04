#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA512.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <java/security/Provider.h>
#include <jcpp.h>

#undef ALGO_ID_MAC_HMAC_SHA512

using $IntegrityHmac = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac;
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

void IntegrityHmac$IntegrityHmacSHA512::init$() {
	$IntegrityHmac::init$();
}

void IntegrityHmac$IntegrityHmacSHA512::init$($Provider* provider) {
	$IntegrityHmac::init$(provider);
}

$String* IntegrityHmac$IntegrityHmacSHA512::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_MAC_HMAC_SHA512;
}

int32_t IntegrityHmac$IntegrityHmacSHA512::getDigestLength() {
	return 512;
}

IntegrityHmac$IntegrityHmacSHA512::IntegrityHmac$IntegrityHmacSHA512() {
}

$Class* IntegrityHmac$IntegrityHmacSHA512::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegrityHmac$IntegrityHmacSHA512, init$, void), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(IntegrityHmac$IntegrityHmacSHA512, init$, void, $Provider*), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IntegrityHmac$IntegrityHmacSHA512, engineGetURI, $String*)},
		{"getDigestLength", "()I", nullptr, 0, $virtualMethod(IntegrityHmac$IntegrityHmacSHA512, getDigestLength, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA512", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA512", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA512",
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
	};
	$loadClass(IntegrityHmac$IntegrityHmacSHA512, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegrityHmac$IntegrityHmacSHA512);
	});
	return class$;
}

$Class* IntegrityHmac$IntegrityHmacSHA512::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com