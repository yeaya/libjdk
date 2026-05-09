#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <java/security/Provider.h>
#include <org/ietf/jgss/Oid.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Oid = ::org::ietf::jgss::Oid;

namespace sun {
	namespace security {
		namespace jgss {
			namespace spi {

bool GSSNameSpi::equals(Object$* another) {
	return this->$Object::equals(another);
}

int32_t GSSNameSpi::hashCode() {
	return this->$Object::hashCode();
}

$String* GSSNameSpi::toString() {
	return this->$Object::toString();
}

$Class* GSSNameSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"equals", "(Lsun/security/jgss/spi/GSSNameSpi;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSNameSpi, equals, bool, GSSNameSpi*), "org.ietf.jgss.GSSException"},
		{"export", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSNameSpi, export$, $bytes*), "org.ietf.jgss.GSSException"},
		{"getMechanism", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSNameSpi, getMechanism, $Oid*)},
		{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSNameSpi, getProvider, $Provider*)},
		{"getStringNameType", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSNameSpi, getStringNameType, $Oid*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"isAnonymousName", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSNameSpi, isAnonymousName, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.jgss.spi.GSSNameSpi",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GSSNameSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GSSNameSpi);
	});
	return class$;
}

$Class* GSSNameSpi::class$ = nullptr;

			} // spi
		} // jgss
	} // security
} // sun