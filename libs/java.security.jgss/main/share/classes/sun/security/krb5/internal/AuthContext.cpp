#include <sun/security/krb5/internal/AuthContext.h>
#include <java/util/BitSet.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/internal/Authenticator.h>
#include <sun/security/krb5/internal/HostAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void AuthContext::init$() {
}

AuthContext::AuthContext() {
}

$Class* AuthContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"remoteAddress", "Lsun/security/krb5/internal/HostAddress;", nullptr, $PUBLIC, $field(AuthContext, remoteAddress)},
		{"remotePort", "I", nullptr, $PUBLIC, $field(AuthContext, remotePort)},
		{"localAddress", "Lsun/security/krb5/internal/HostAddress;", nullptr, $PUBLIC, $field(AuthContext, localAddress)},
		{"localPort", "I", nullptr, $PUBLIC, $field(AuthContext, localPort)},
		{"keyBlock", "Lsun/security/krb5/EncryptionKey;", nullptr, $PUBLIC, $field(AuthContext, keyBlock)},
		{"localSubkey", "Lsun/security/krb5/EncryptionKey;", nullptr, $PUBLIC, $field(AuthContext, localSubkey)},
		{"remoteSubkey", "Lsun/security/krb5/EncryptionKey;", nullptr, $PUBLIC, $field(AuthContext, remoteSubkey)},
		{"authContextFlags", "Ljava/util/BitSet;", nullptr, $PUBLIC, $field(AuthContext, authContextFlags)},
		{"remoteSeqNumber", "I", nullptr, $PUBLIC, $field(AuthContext, remoteSeqNumber)},
		{"localSeqNumber", "I", nullptr, $PUBLIC, $field(AuthContext, localSeqNumber)},
		{"authenticator", "Lsun/security/krb5/internal/Authenticator;", nullptr, $PUBLIC, $field(AuthContext, authenticator)},
		{"reqCksumType", "I", nullptr, $PUBLIC, $field(AuthContext, reqCksumType)},
		{"safeCksumType", "I", nullptr, $PUBLIC, $field(AuthContext, safeCksumType)},
		{"initializationVector", "[B", nullptr, $PUBLIC, $field(AuthContext, initializationVector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthContext, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.AuthContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthContext);
	});
	return class$;
}

$Class* AuthContext::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun