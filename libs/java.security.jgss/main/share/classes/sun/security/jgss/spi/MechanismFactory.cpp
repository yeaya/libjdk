#include <sun/security/jgss/spi/MechanismFactory.h>

#include <java/security/Provider.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/spi/GSSContextSpi.h>
#include <sun/security/jgss/spi/GSSCredentialSpi.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace jgss {
			namespace spi {

$MethodInfo _MechanismFactory_MethodInfo_[] = {
	{"getCredentialElement", "(Lsun/security/jgss/spi/GSSNameSpi;III)Lsun/security/jgss/spi/GSSCredentialSpi;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getMechanismContext", "(Lsun/security/jgss/spi/GSSNameSpi;Lsun/security/jgss/spi/GSSCredentialSpi;I)Lsun/security/jgss/spi/GSSContextSpi;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getMechanismContext", "(Lsun/security/jgss/spi/GSSCredentialSpi;)Lsun/security/jgss/spi/GSSContextSpi;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getMechanismContext", "([B)Lsun/security/jgss/spi/GSSContextSpi;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getMechanismOid", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNameElement", "(Ljava/lang/String;Lorg/ietf/jgss/Oid;)Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getNameElement", "([BLorg/ietf/jgss/Oid;)Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getNameTypes", "()[Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.ietf.jgss.GSSException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MechanismFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.jgss.spi.MechanismFactory",
	nullptr,
	nullptr,
	nullptr,
	_MechanismFactory_MethodInfo_
};

$Object* allocate$MechanismFactory($Class* clazz) {
	return $of($alloc(MechanismFactory));
}

$Class* MechanismFactory::load$($String* name, bool initialize) {
	$loadClass(MechanismFactory, name, initialize, &_MechanismFactory_ClassInfo_, allocate$MechanismFactory);
	return class$;
}

$Class* MechanismFactory::class$ = nullptr;

			} // spi
		} // jgss
	} // security
} // sun