#include <sun/security/jgss/krb5/Krb5Context$1.h>
#include <java/security/AccessControlContext.h>
#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <sun/security/jgss/GSSCaller.h>
#include <sun/security/jgss/krb5/Krb5Context.h>
#include <sun/security/jgss/krb5/Krb5NameElement.h>
#include <sun/security/jgss/krb5/Krb5ProxyCredential.h>
#include <sun/security/jgss/krb5/Krb5Util.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <sun/security/krb5/PrincipalName.h>
#include <jcpp.h>

#undef CALLER_UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $GSSCaller = ::sun::security::jgss::GSSCaller;
using $Krb5Context = ::sun::security::jgss::krb5::Krb5Context;
using $Krb5NameElement = ::sun::security::jgss::krb5::Krb5NameElement;
using $Krb5ProxyCredential = ::sun::security::jgss::krb5::Krb5ProxyCredential;
using $Krb5Util = ::sun::security::jgss::krb5::Krb5Util;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

void Krb5Context$1::init$($Krb5Context* this$0, $Krb5ProxyCredential* val$second, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$second, val$second);
	$set(this, val$acc, val$acc);
}

$Object* Krb5Context$1::run() {
	$useLocalObjectStack();
	$init($GSSCaller);
	$var($GSSCaller, var$0, $GSSCaller::CALLER_UNKNOWN);
	$var($String, var$1, this->val$second == nullptr ? $$nc($nc(this->this$0->myName)->getKrb5PrincipalName())->getName() : $$nc($$sure($Krb5NameElement, this->val$second->getName())->getKrb5PrincipalName())->getName());
	return $of($Krb5Util::getServiceTicket(var$0, var$1, $($$nc($nc(this->this$0->peerName)->getKrb5PrincipalName())->getName()), this->val$acc));
}

Krb5Context$1::Krb5Context$1() {
}

$Class* Krb5Context$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jgss/krb5/Krb5Context;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5Context$1, this$0)},
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5Context$1, val$acc)},
		{"val$second", "Lsun/security/jgss/krb5/Krb5ProxyCredential;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5Context$1, val$second)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jgss/krb5/Krb5Context;Lsun/security/jgss/krb5/Krb5ProxyCredential;Ljava/security/AccessControlContext;)V", "()V", 0, $method(Krb5Context$1, init$, void, $Krb5Context*, $Krb5ProxyCredential*, $AccessControlContext*)},
		{"run", "()Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PUBLIC, $virtualMethod(Krb5Context$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jgss.krb5.Krb5Context",
		"initSecContext",
		"(Ljava/io/InputStream;I)[B"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.krb5.Krb5Context$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.krb5.Krb5Context$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/security/auth/kerberos/KerberosTicket;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jgss.krb5.Krb5Context"
	};
	$loadClass(Krb5Context$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Krb5Context$1);
	});
	return class$;
}

$Class* Krb5Context$1::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun