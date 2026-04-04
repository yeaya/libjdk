#include <sun/security/jgss/krb5/Krb5InitCredential$1.h>
#include <java/security/AccessControlContext.h>
#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <sun/security/jgss/GSSCaller.h>
#include <sun/security/jgss/krb5/Krb5InitCredential.h>
#include <sun/security/jgss/krb5/Krb5Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $GSSCaller = ::sun::security::jgss::GSSCaller;
using $Krb5Util = ::sun::security::jgss::krb5::Krb5Util;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

void Krb5InitCredential$1::init$($GSSCaller* val$realCaller, $String* val$clientPrincipal, $AccessControlContext* val$acc) {
	$set(this, val$realCaller, val$realCaller);
	$set(this, val$clientPrincipal, val$clientPrincipal);
	$set(this, val$acc, val$acc);
}

$Object* Krb5InitCredential$1::run() {
	return $of($Krb5Util::getInitialTicket(this->val$realCaller, this->val$clientPrincipal, this->val$acc));
}

Krb5InitCredential$1::Krb5InitCredential$1() {
}

$Class* Krb5InitCredential$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5InitCredential$1, val$acc)},
		{"val$clientPrincipal", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5InitCredential$1, val$clientPrincipal)},
		{"val$realCaller", "Lsun/security/jgss/GSSCaller;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5InitCredential$1, val$realCaller)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jgss/GSSCaller;Ljava/lang/String;Ljava/security/AccessControlContext;)V", "()V", 0, $method(Krb5InitCredential$1, init$, void, $GSSCaller*, $String*, $AccessControlContext*)},
		{"run", "()Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jgss.krb5.Krb5InitCredential",
		"getTgt",
		"(Lsun/security/jgss/GSSCaller;Lsun/security/jgss/krb5/Krb5NameElement;I)Ljavax/security/auth/kerberos/KerberosTicket;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.krb5.Krb5InitCredential$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.krb5.Krb5InitCredential$1",
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
		"sun.security.jgss.krb5.Krb5InitCredential"
	};
	$loadClass(Krb5InitCredential$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Krb5InitCredential$1);
	});
	return class$;
}

$Class* Krb5InitCredential$1::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun