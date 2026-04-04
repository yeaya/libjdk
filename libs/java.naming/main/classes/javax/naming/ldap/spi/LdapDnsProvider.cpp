#include <javax/naming/ldap/spi/LdapDnsProvider.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef DNSPROVIDER_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;

namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {

$RuntimePermission* LdapDnsProvider::DNSPROVIDER_PERMISSION = nullptr;

void LdapDnsProvider::init$() {
	LdapDnsProvider::init$($(checkPermission()));
}

void LdapDnsProvider::init$($Void* unused) {
}

$Void* LdapDnsProvider::checkPermission() {
	$init(LdapDnsProvider);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(LdapDnsProvider::DNSPROVIDER_PERMISSION);
	}
	return nullptr;
}

void LdapDnsProvider::clinit$($Class* clazz) {
	$assignStatic(LdapDnsProvider::DNSPROVIDER_PERMISSION, $new($RuntimePermission, "ldapDnsProvider"_s));
}

LdapDnsProvider::LdapDnsProvider() {
}

$Class* LdapDnsProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DNSPROVIDER_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapDnsProvider, DNSPROVIDER_PERMISSION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(LdapDnsProvider, init$, void)},
		{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(LdapDnsProvider, init$, void, $Void*)},
		{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $staticMethod(LdapDnsProvider, checkPermission, $Void*)},
		{"lookupEndpoints", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/util/Map<**>;)Ljava/util/Optional<Ljavax/naming/ldap/spi/LdapDnsProviderResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(LdapDnsProvider, lookupEndpoints, $Optional*, $String*, $Map*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.naming.ldap.spi.LdapDnsProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapDnsProvider, name, initialize, &classInfo$$, LdapDnsProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LdapDnsProvider);
	});
	return class$;
}

$Class* LdapDnsProvider::class$ = nullptr;

			} // spi
		} // ldap
	} // naming
} // javax