#include <sun/security/krb5/internal/KrbErrException.h>
#include <sun/security/krb5/KrbException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KrbException = ::sun::security::krb5::KrbException;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void KrbErrException::init$(int32_t i) {
	$KrbException::init$(i);
}

void KrbErrException::init$(int32_t i, $String* s) {
	$KrbException::init$(i, s);
}

KrbErrException::KrbErrException() {
}

KrbErrException::KrbErrException(const KrbErrException& e) : $KrbException(e) {
}

void KrbErrException::throw$() {
	throw *this;
}

$Class* KrbErrException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KrbErrException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(KrbErrException, init$, void, int32_t)},
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(KrbErrException, init$, void, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.KrbErrException",
		"sun.security.krb5.KrbException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbErrException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbErrException);
	});
	return class$;
}

$Class* KrbErrException::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun