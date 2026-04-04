#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$Class* X509IssuerSerial::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getIssuerName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509IssuerSerial, getIssuerName, $String*)},
		{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509IssuerSerial, getSerialNumber, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.keyinfo.X509IssuerSerial",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$
	};
	$loadClass(X509IssuerSerial, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509IssuerSerial);
	});
	return class$;
}

$Class* X509IssuerSerial::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax