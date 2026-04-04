#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacRIPEMD160.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <java/security/Provider.h>
#include <jcpp.h>

#undef ALGO_ID_MAC_HMAC_RIPEMD160

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

void IntegrityHmac$IntegrityHmacRIPEMD160::init$() {
	$IntegrityHmac::init$();
}

void IntegrityHmac$IntegrityHmacRIPEMD160::init$($Provider* provider) {
	$IntegrityHmac::init$(provider);
}

$String* IntegrityHmac$IntegrityHmacRIPEMD160::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_MAC_HMAC_RIPEMD160;
}

int32_t IntegrityHmac$IntegrityHmacRIPEMD160::getDigestLength() {
	return 160;
}

IntegrityHmac$IntegrityHmacRIPEMD160::IntegrityHmac$IntegrityHmacRIPEMD160() {
}

$Class* IntegrityHmac$IntegrityHmacRIPEMD160::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegrityHmac$IntegrityHmacRIPEMD160, init$, void), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(IntegrityHmac$IntegrityHmacRIPEMD160, init$, void, $Provider*), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IntegrityHmac$IntegrityHmacRIPEMD160, engineGetURI, $String*)},
		{"getDigestLength", "()I", nullptr, 0, $virtualMethod(IntegrityHmac$IntegrityHmacRIPEMD160, getDigestLength, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacRIPEMD160", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160",
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
	$loadClass(IntegrityHmac$IntegrityHmacRIPEMD160, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegrityHmac$IntegrityHmacRIPEMD160);
	});
	return class$;
}

$Class* IntegrityHmac$IntegrityHmacRIPEMD160::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com