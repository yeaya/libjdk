#include <sun/security/provider/certpath/ldap/LDAPCertStore.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URI.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/cert/CRLSelector.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/CertStoreException.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/security/cert/CertStoreSpi.h>
#include <java/security/cert/LDAPCertStoreParameters.h>
#include <java/security/cert/URICertStoreParameters.h>
#include <java/security/cert/X509CRLSelector.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/util/Collection.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStore$Key.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl.h>
#include <sun/security/util/Cache.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $CRLSelector = ::java::security::cert::CRLSelector;
using $CertSelector = ::java::security::cert::CertSelector;
using $CertStoreException = ::java::security::cert::CertStoreException;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $CertStoreSpi = ::java::security::cert::CertStoreSpi;
using $LDAPCertStoreParameters = ::java::security::cert::LDAPCertStoreParameters;
using $URICertStoreParameters = ::java::security::cert::URICertStoreParameters;
using $X509CRLSelector = ::java::security::cert::X509CRLSelector;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $Collection = ::java::util::Collection;
using $LDAPCertStore$Key = ::sun::security::provider::certpath::ldap::LDAPCertStore$Key;
using $LDAPCertStoreImpl = ::sun::security::provider::certpath::ldap::LDAPCertStoreImpl;
using $Cache = ::sun::security::util::Cache;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

$Debug* LDAPCertStore::debug = nullptr;
$Cache* LDAPCertStore::certStoreCache = nullptr;

void LDAPCertStore::init$($CertStoreParameters* params) {
	$useLocalObjectStack();
	$CertStoreSpi::init$(params);
	$var($String, serverName, nullptr);
	int32_t port = 0;
	$var($String, dn, nullptr);
	if (params == nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "Parameters required for LDAP certstore"_s);
	}
	if ($instanceOf($LDAPCertStoreParameters, params)) {
		$var($LDAPCertStoreParameters, p, $cast($LDAPCertStoreParameters, params));
		$assign(serverName, p->getServerName());
		port = p->getPort();
	} else if ($instanceOf($URICertStoreParameters, params)) {
		$var($URICertStoreParameters, p, $cast($URICertStoreParameters, params));
		$var($URI, u, p->getURI());
		if (!$$nc($nc(u)->getScheme())->equalsIgnoreCase("ldap"_s)) {
			$throwNew($InvalidAlgorithmParameterException, $$str({"Unsupported scheme \'"_s, $(u->getScheme()), "\', only LDAP URIs are supported for LDAP certstore"_s}));
		}
		$assign(serverName, u->getHost());
		if (serverName == nullptr) {
			$assign(serverName, "localhost"_s);
		}
		port = u->getPort();
		if (port == -1) {
			port = 389;
		}
		$assign(dn, u->getPath());
		if (dn != nullptr && dn->charAt(0) == u'/') {
			$assign(dn, dn->substring(1));
		}
	} else {
		$throwNew($InvalidAlgorithmParameterException, $$str({"Parameters must be either LDAPCertStoreParameters or URICertStoreParameters, but instance of "_s, $($nc($of(params))->getClass()->getName()), " passed"_s}));
	}
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkConnect(serverName, port);
	}
	$var($LDAPCertStore$Key, k, $new($LDAPCertStore$Key, serverName, port));
	$var($LDAPCertStoreImpl, lci, $cast($LDAPCertStoreImpl, $nc(LDAPCertStore::certStoreCache)->get(k)));
	if (lci == nullptr) {
		$set(this, impl, $new($LDAPCertStoreImpl, serverName, port));
		LDAPCertStore::certStoreCache->put(k, this->impl);
	} else {
		$set(this, impl, lci);
		if (LDAPCertStore::debug != nullptr) {
			LDAPCertStore::debug->println("LDAPCertStore.getInstance: cache hit"_s);
		}
	}
	$set(this, ldapDN, dn);
}

$LDAPCertStoreImpl* LDAPCertStore::getInstance($LDAPCertStoreParameters* params) {
	$init(LDAPCertStore);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var($String, serverName, $nc(params)->getServerName());
		int32_t port = params->getPort();
		$var($LDAPCertStore$Key, k, $new($LDAPCertStore$Key, serverName, port));
		$var($LDAPCertStoreImpl, lci, $cast($LDAPCertStoreImpl, $nc(LDAPCertStore::certStoreCache)->get(k)));
		if (lci == nullptr) {
			$assign(lci, $new($LDAPCertStoreImpl, serverName, port));
			LDAPCertStore::certStoreCache->put(k, lci);
		} else if (LDAPCertStore::debug != nullptr) {
			LDAPCertStore::debug->println("LDAPCertStore.getInstance: cache hit"_s);
		}
		return lci;
	}
}

$Collection* LDAPCertStore::engineGetCertificates($CertSelector* selector$renamed) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($CertSelector, selector, selector$renamed);
		if (LDAPCertStore::debug != nullptr) {
			LDAPCertStore::debug->println($$str({"LDAPCertStore.engineGetCertificates() selector: "_s, $($String::valueOf(selector))}));
		}
		if (selector == nullptr) {
			$assign(selector, $new($X509CertSelector));
		} else if (!($instanceOf($X509CertSelector, selector))) {
			$throwNew($CertStoreException, $$str({"Need X509CertSelector to find certs, but instance of "_s, $($of(selector)->getClass()->getName()), " passed"_s}));
		}
		return $nc(this->impl)->getCertificates($cast($X509CertSelector, selector), this->ldapDN);
	}
}

$Collection* LDAPCertStore::engineGetCRLs($CRLSelector* selector$renamed) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($CRLSelector, selector, selector$renamed);
		if (LDAPCertStore::debug != nullptr) {
			LDAPCertStore::debug->println($$str({"LDAPCertStore.engineGetCRLs() selector: "_s, selector}));
		}
		if (selector == nullptr) {
			$assign(selector, $new($X509CRLSelector));
		} else if (!($instanceOf($X509CRLSelector, selector))) {
			$throwNew($CertStoreException, $$str({"Need X509CRLSelector to find CRLs, but instance of "_s, $($of(selector)->getClass()->getName()), " passed"_s}));
		}
		return $nc(this->impl)->getCRLs($cast($X509CRLSelector, selector), this->ldapDN);
	}
}

void LDAPCertStore::clinit$($Class* clazz) {
	$assignStatic(LDAPCertStore::debug, $Debug::getInstance("certpath"_s));
	$assignStatic(LDAPCertStore::certStoreCache, $Cache::newSoftMemoryCache(185));
}

LDAPCertStore::LDAPCertStore() {
}

$Class* LDAPCertStore::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStore, debug)},
		{"ldapDN", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LDAPCertStore, ldapDN)},
		{"impl", "Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl;", nullptr, $PRIVATE, $field(LDAPCertStore, impl)},
		{"certStoreCache", "Lsun/security/util/Cache;", "Lsun/security/util/Cache<Lsun/security/provider/certpath/ldap/LDAPCertStore$Key;Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStore, certStoreCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/CertStoreParameters;)V", nullptr, $PUBLIC, $method(LDAPCertStore, init$, void, $CertStoreParameters*), "java.security.InvalidAlgorithmParameterException"},
		{"engineGetCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection<Ljava/security/cert/X509CRL;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(LDAPCertStore, engineGetCRLs, $Collection*, $CRLSelector*), "java.security.cert.CertStoreException"},
		{"engineGetCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(LDAPCertStore, engineGetCertificates, $Collection*, $CertSelector*), "java.security.cert.CertStoreException"},
		{"getInstance", "(Ljava/security/cert/LDAPCertStoreParameters;)Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(LDAPCertStore, getInstance, $LDAPCertStoreImpl*, $LDAPCertStoreParameters*), "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.ldap.LDAPCertStore$Key", "sun.security.provider.certpath.ldap.LDAPCertStore", "Key", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.certpath.ldap.LDAPCertStore",
		"java.security.cert.CertStoreSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.ldap.LDAPCertStore$Key"
	};
	$loadClass(LDAPCertStore, name, initialize, &classInfo$$, LDAPCertStore::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LDAPCertStore);
	});
	return class$;
}

$Class* LDAPCertStore::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun