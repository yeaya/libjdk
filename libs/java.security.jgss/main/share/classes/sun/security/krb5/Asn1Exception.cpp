#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/KrbException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KrbException = ::sun::security::krb5::KrbException;

namespace sun {
	namespace security {
		namespace krb5 {

void Asn1Exception::init$(int32_t i) {
	$KrbException::init$(i);
}

Asn1Exception::Asn1Exception() {
}

Asn1Exception::Asn1Exception(const Asn1Exception& e) : $KrbException(e) {
}

void Asn1Exception::throw$() {
	throw *this;
}

$Class* Asn1Exception::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Asn1Exception, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Asn1Exception, init$, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.Asn1Exception",
		"sun.security.krb5.KrbException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Asn1Exception, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Asn1Exception);
	});
	return class$;
}

$Class* Asn1Exception::class$ = nullptr;

		} // krb5
	} // security
} // sun