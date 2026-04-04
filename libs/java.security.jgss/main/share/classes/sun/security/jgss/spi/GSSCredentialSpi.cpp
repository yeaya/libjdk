#include <sun/security/jgss/spi/GSSCredentialSpi.h>
#include <java/security/Provider.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Oid = ::org::ietf::jgss::Oid;
using $GSSNameSpi = ::sun::security::jgss::spi::GSSNameSpi;

namespace sun {
	namespace security {
		namespace jgss {
			namespace spi {

$Class* GSSCredentialSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, dispose, void), "org.ietf.jgss.GSSException"},
		{"getAcceptLifetime", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, getAcceptLifetime, int32_t), "org.ietf.jgss.GSSException"},
		{"getInitLifetime", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, getInitLifetime, int32_t), "org.ietf.jgss.GSSException"},
		{"getMechanism", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, getMechanism, $Oid*)},
		{"getName", "()Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, getName, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
		{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, getProvider, $Provider*)},
		{"impersonate", "(Lsun/security/jgss/spi/GSSNameSpi;)Lsun/security/jgss/spi/GSSCredentialSpi;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, impersonate, GSSCredentialSpi*, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
		{"isAcceptorCredential", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, isAcceptorCredential, bool), "org.ietf.jgss.GSSException"},
		{"isInitiatorCredential", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSCredentialSpi, isInitiatorCredential, bool), "org.ietf.jgss.GSSException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.jgss.spi.GSSCredentialSpi",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GSSCredentialSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GSSCredentialSpi);
	});
	return class$;
}

$Class* GSSCredentialSpi::class$ = nullptr;

			} // spi
		} // jgss
	} // security
} // sun