#include <sun/security/krb5/RealmException.h>
#include <sun/security/krb5/KrbException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KrbException = ::sun::security::krb5::KrbException;

namespace sun {
	namespace security {
		namespace krb5 {

void RealmException::init$(int32_t i) {
	$KrbException::init$(i);
}

void RealmException::init$($String* s) {
	$KrbException::init$(s);
}

void RealmException::init$(int32_t i, $String* s) {
	$KrbException::init$(i, s);
}

void RealmException::init$($Throwable* cause) {
	$KrbException::init$(cause);
}

RealmException::RealmException() {
}

RealmException::RealmException(const RealmException& e) : $KrbException(e) {
}

void RealmException::throw$() {
	throw *this;
}

$Class* RealmException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RealmException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(RealmException, init$, void, int32_t)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RealmException, init$, void, $String*)},
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(RealmException, init$, void, int32_t, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(RealmException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.RealmException",
		"sun.security.krb5.KrbException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RealmException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealmException);
	});
	return class$;
}

$Class* RealmException::class$ = nullptr;

		} // krb5
	} // security
} // sun