#include <sun/security/krb5/internal/KdcErrException.h>
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

void KdcErrException::init$(int32_t i) {
	$KrbException::init$(i);
}

void KdcErrException::init$(int32_t i, $String* s) {
	$KrbException::init$(i, s);
}

KdcErrException::KdcErrException() {
}

KdcErrException::KdcErrException(const KdcErrException& e) : $KrbException(e) {
}

void KdcErrException::throw$() {
	throw *this;
}

$Class* KdcErrException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KdcErrException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(KdcErrException, init$, void, int32_t)},
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(KdcErrException, init$, void, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.KdcErrException",
		"sun.security.krb5.KrbException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KdcErrException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KdcErrException);
	});
	return class$;
}

$Class* KdcErrException::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun