#include <sun/security/krb5/internal/crypto/Nonce.h>
#include <sun/security/krb5/Confounder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Confounder = ::sun::security::krb5::Confounder;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace crypto {

void Nonce::init$() {
}

int32_t Nonce::value() {
	$load(Nonce);
	$synchronized(class$) {
		return $Confounder::intValue() & 0x7fffffff;
	}
}

Nonce::Nonce() {
}

$Class* Nonce::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nonce, init$, void)},
		{"value", "()I", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(Nonce, value, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.crypto.Nonce",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Nonce, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nonce);
	});
	return class$;
}

$Class* Nonce::class$ = nullptr;

				} // crypto
			} // internal
		} // krb5
	} // security
} // sun