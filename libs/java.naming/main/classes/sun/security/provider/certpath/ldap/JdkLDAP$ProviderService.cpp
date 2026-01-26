#include <sun/security/provider/certpath/ldap/JdkLDAP$ProviderService.h>

#include <java/security/InvalidParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/provider/certpath/ldap/JdkLDAP.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $ProviderException = ::java::security::ProviderException;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $LDAPCertStore = ::sun::security::provider::certpath::ldap::LDAPCertStore;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

$MethodInfo _JdkLDAP$ProviderService_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/HashMap;)V", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;)V", 0, $method(JdkLDAP$ProviderService, init$, void, $Provider*, $String*, $String*, $String*, $List*, $HashMap*)},
	{"newInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JdkLDAP$ProviderService, newInstance, $Object*, Object$*), "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _JdkLDAP$ProviderService_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ldap.JdkLDAP$ProviderService", "sun.security.provider.certpath.ldap.JdkLDAP", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"java.security.Provider$Service", "java.security.Provider", "Service", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JdkLDAP$ProviderService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.ldap.JdkLDAP$ProviderService",
	"java.security.Provider$Service",
	nullptr,
	nullptr,
	_JdkLDAP$ProviderService_MethodInfo_,
	nullptr,
	nullptr,
	_JdkLDAP$ProviderService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ldap.JdkLDAP"
};

$Object* allocate$JdkLDAP$ProviderService($Class* clazz) {
	return $of($alloc(JdkLDAP$ProviderService));
}

void JdkLDAP$ProviderService::init$($Provider* p, $String* type, $String* algo, $String* cn, $List* aliases, $HashMap* attrs) {
	$Provider$Service::init$(p, type, algo, cn, aliases, attrs);
}

$Object* JdkLDAP$ProviderService::newInstance(Object$* ctrParamObj) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, getType());
	$var($String, algo, getAlgorithm());
	bool var$0 = $nc(type)->equals("CertStore"_s);
	if (var$0 && $nc(algo)->equals("LDAP"_s)) {
		if (ctrParamObj != nullptr && !($instanceOf($CertStoreParameters, ctrParamObj))) {
			$throwNew($InvalidParameterException, "constructorParameter must be instanceof CertStoreParameters"_s);
		}
		try {
			return $of($new($LDAPCertStore, $cast($CertStoreParameters, ctrParamObj)));
		} catch ($Exception& ex) {
			$throwNew($NoSuchAlgorithmException, $$str({"Error constructing "_s, type, " for "_s, algo, " using JdkLDAP"_s}), ex);
		}
	}
	$throwNew($ProviderException, $$str({"No impl for "_s, algo, " "_s, type}));
	$shouldNotReachHere();
}

JdkLDAP$ProviderService::JdkLDAP$ProviderService() {
}

$Class* JdkLDAP$ProviderService::load$($String* name, bool initialize) {
	$loadClass(JdkLDAP$ProviderService, name, initialize, &_JdkLDAP$ProviderService_ClassInfo_, allocate$JdkLDAP$ProviderService);
	return class$;
}

$Class* JdkLDAP$ProviderService::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun