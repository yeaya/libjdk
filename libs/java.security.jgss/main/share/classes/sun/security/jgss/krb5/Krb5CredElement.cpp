#include <sun/security/jgss/krb5/Krb5CredElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

$Class* Krb5CredElement::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.jgss.krb5.Krb5CredElement",
		nullptr,
		"sun.security.jgss.spi.GSSCredentialSpi"
	};
	$loadClass(Krb5CredElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Krb5CredElement);
	});
	return class$;
}

$Class* Krb5CredElement::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun