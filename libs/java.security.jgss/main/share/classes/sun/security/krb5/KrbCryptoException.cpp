#include <sun/security/krb5/KrbCryptoException.h>
#include <sun/security/krb5/KrbException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KrbException = ::sun::security::krb5::KrbException;

namespace sun {
	namespace security {
		namespace krb5 {

void KrbCryptoException::init$($String* s) {
	$KrbException::init$(s);
}

KrbCryptoException::KrbCryptoException() {
}

KrbCryptoException::KrbCryptoException(const KrbCryptoException& e) : $KrbException(e) {
}

void KrbCryptoException::throw$() {
	throw *this;
}

$Class* KrbCryptoException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KrbCryptoException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KrbCryptoException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.KrbCryptoException",
		"sun.security.krb5.KrbException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbCryptoException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbCryptoException);
	});
	return class$;
}

$Class* KrbCryptoException::class$ = nullptr;

		} // krb5
	} // security
} // sun