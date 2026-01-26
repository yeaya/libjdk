#include <sun/security/jgss/wrapper/Krb5Util.h>

#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <javax/security/auth/kerberos/ServicePermission.h>
#include <sun/security/jgss/wrapper/GSSNameElement.h>
#include <sun/security/jgss/wrapper/SunNativeProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;
using $ServicePermission = ::javax::security::auth::kerberos::ServicePermission;
using $GSSNameElement = ::sun::security::jgss::wrapper::GSSNameElement;
using $SunNativeProvider = ::sun::security::jgss::wrapper::SunNativeProvider;

namespace sun {
	namespace security {
		namespace jgss {
			namespace wrapper {

$MethodInfo _Krb5Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Krb5Util, init$, void)},
	{"checkServicePermission", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Krb5Util, checkServicePermission, void, $String*, $String*)},
	{"getTGSName", "(Lsun/security/jgss/wrapper/GSSNameElement;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Krb5Util, getTGSName, $String*, $GSSNameElement*), "org.ietf.jgss.GSSException"},
	{}
};

$ClassInfo _Krb5Util_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jgss.wrapper.Krb5Util",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Krb5Util_MethodInfo_
};

$Object* allocate$Krb5Util($Class* clazz) {
	return $of($alloc(Krb5Util));
}

void Krb5Util::init$() {
}

$String* Krb5Util::getTGSName($GSSNameElement* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, krbPrinc, $nc(name)->getKrbName());
	int32_t atIndex = $nc(krbPrinc)->indexOf((int32_t)u'@');
	$var($String, realm, krbPrinc->substring(atIndex + 1));
	$var($StringBuilder, sb, $new($StringBuilder, "krbtgt/"_s));
	sb->append(realm)->append(u'@')->append(realm);
	return sb->toString();
}

void Krb5Util::checkServicePermission($String* target, $String* action) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$SunNativeProvider::debug($$str({"Checking ServicePermission("_s, target, ", "_s, action, ")"_s}));
		$var($ServicePermission, perm, $new($ServicePermission, target, action));
		sm->checkPermission(perm);
	}
}

Krb5Util::Krb5Util() {
}

$Class* Krb5Util::load$($String* name, bool initialize) {
	$loadClass(Krb5Util, name, initialize, &_Krb5Util_ClassInfo_, allocate$Krb5Util);
	return class$;
}

$Class* Krb5Util::class$ = nullptr;

			} // wrapper
		} // jgss
	} // security
} // sun