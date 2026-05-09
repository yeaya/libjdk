#include <sun/security/provider/certpath/ldap/JdkLDAP.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <sun/security/provider/certpath/ldap/JdkLDAP$ProviderService.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef PROVIDER_VER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $JdkLDAP$ProviderService = ::sun::security::provider::certpath::ldap::JdkLDAP$ProviderService;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class JdkLDAP$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(JdkLDAP$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JdkLDAP* inst, $Provider* p) {
		$set(this, inst$, inst);
		$set(this, p, p);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$new$0(p);
	}
	JdkLDAP* inst$ = nullptr;
	$Provider* p = nullptr;
};
$Class* JdkLDAP$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JdkLDAP$$Lambda$lambda$new$0, inst$)},
		{"p", "Ljava/security/Provider;", nullptr, $PUBLIC, $field(JdkLDAP$$Lambda$lambda$new$0, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/certpath/ldap/JdkLDAP;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(JdkLDAP$$Lambda$lambda$new$0, init$, void, JdkLDAP*, $Provider*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JdkLDAP$$Lambda$lambda$new$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.provider.certpath.ldap.JdkLDAP$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JdkLDAP$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JdkLDAP$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* JdkLDAP$$Lambda$lambda$new$0::class$ = nullptr;

void JdkLDAP::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("JdkLDAP"_s, $SecurityConstants::PROVIDER_VER, "JdkLDAP Provider (implements LDAP CertStore)"_s);
	$var($Provider, p, this);
	$var($PrivilegedAction, pa, $new(JdkLDAP$$Lambda$lambda$new$0, this, p));
	$AccessController::doPrivileged(pa);
}

$Void* JdkLDAP::lambda$new$0($Provider* p) {
	$useLocalObjectStack();
	$var($HashMap, attrs, $new($HashMap, 2));
	attrs->put("LDAPSchema"_s, "RFC2587"_s);
	attrs->put("ImplementedIn"_s, "Software"_s);
	putService($$new($JdkLDAP$ProviderService, p, "CertStore"_s, "LDAP"_s, "sun.security.provider.certpath.ldap.LDAPCertStore"_s, nullptr, attrs));
	return nullptr;
}

JdkLDAP::JdkLDAP() {
}

$Class* JdkLDAP::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.provider.certpath.ldap.JdkLDAP$$Lambda$lambda$new$0")) {
			return JdkLDAP$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JdkLDAP, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JdkLDAP, init$, void)},
		{"lambda$new$0", "(Ljava/security/Provider;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(JdkLDAP, lambda$new$0, $Void*, $Provider*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.ldap.JdkLDAP$ProviderService", "sun.security.provider.certpath.ldap.JdkLDAP", "ProviderService", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.certpath.ldap.JdkLDAP",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.ldap.JdkLDAP$ProviderService"
	};
	$loadClass(JdkLDAP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JdkLDAP));
	});
	return class$;
}

$Class* JdkLDAP::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun