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

$FieldInfo _Krb5InitCredential$1_FieldInfo_[] = {
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5InitCredential$1, val$acc)},
	{"val$clientPrincipal", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5InitCredential$1, val$clientPrincipal)},
	{"val$realCaller", "Lsun/security/jgss/GSSCaller;", nullptr, $FINAL | $SYNTHETIC, $field(Krb5InitCredential$1, val$realCaller)},
	{}
};

$MethodInfo _Krb5InitCredential$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jgss/GSSCaller;Ljava/lang/String;Ljava/security/AccessControlContext;)V", "()V", 0, $method(Krb5InitCredential$1, init$, void, $GSSCaller*, $String*, $AccessControlContext*)},
	{"run", "()Ljavax/security/auth/kerberos/KerberosTicket;", nullptr, $PUBLIC, $virtualMethod(Krb5InitCredential$1, run, $Object*), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Krb5InitCredential$1_EnclosingMethodInfo_ = {
	"sun.security.jgss.krb5.Krb5InitCredential",
	"getTgt",
	"(Lsun/security/jgss/GSSCaller;Lsun/security/jgss/krb5/Krb5NameElement;I)Ljavax/security/auth/kerberos/KerberosTicket;"
};

$InnerClassInfo _Krb5InitCredential$1_InnerClassesInfo_[] = {
	{"sun.security.jgss.krb5.Krb5InitCredential$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Krb5InitCredential$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jgss.krb5.Krb5InitCredential$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Krb5InitCredential$1_FieldInfo_,
	_Krb5InitCredential$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/security/auth/kerberos/KerberosTicket;>;",
	&_Krb5InitCredential$1_EnclosingMethodInfo_,
	_Krb5InitCredential$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jgss.krb5.Krb5InitCredential"
};

$Object* allocate$Krb5InitCredential$1($Class* clazz) {
	return $of($alloc(Krb5InitCredential$1));
}

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
	$loadClass(Krb5InitCredential$1, name, initialize, &_Krb5InitCredential$1_ClassInfo_, allocate$Krb5InitCredential$1);
	return class$;
}

$Class* Krb5InitCredential$1::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun