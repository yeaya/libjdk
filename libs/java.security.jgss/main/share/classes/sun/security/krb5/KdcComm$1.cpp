#include <sun/security/krb5/KdcComm$1.h>

#include <java/security/Security.h>
#include <sun/security/krb5/KdcComm.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace krb5 {

$MethodInfo _KdcComm$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(KdcComm$1, init$, void)},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KdcComm$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _KdcComm$1_EnclosingMethodInfo_ = {
	"sun.security.krb5.KdcComm",
	"initStatic",
	"()V"
};

$InnerClassInfo _KdcComm$1_InnerClassesInfo_[] = {
	{"sun.security.krb5.KdcComm$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KdcComm$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.krb5.KdcComm$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_KdcComm$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_KdcComm$1_EnclosingMethodInfo_,
	_KdcComm$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.krb5.KdcComm"
};

$Object* allocate$KdcComm$1($Class* clazz) {
	return $of($alloc(KdcComm$1));
}

void KdcComm$1::init$() {
}

$Object* KdcComm$1::run() {
	return $of($Security::getProperty("krb5.kdc.bad.policy"_s));
}

KdcComm$1::KdcComm$1() {
}

$Class* KdcComm$1::load$($String* name, bool initialize) {
	$loadClass(KdcComm$1, name, initialize, &_KdcComm$1_ClassInfo_, allocate$KdcComm$1);
	return class$;
}

$Class* KdcComm$1::class$ = nullptr;

		} // krb5
	} // security
} // sun