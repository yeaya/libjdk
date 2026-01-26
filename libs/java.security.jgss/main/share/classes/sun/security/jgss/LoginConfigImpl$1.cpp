#include <sun/security/jgss/LoginConfigImpl$1.h>

#include <javax/security/auth/login/Configuration.h>
#include <sun/security/jgss/LoginConfigImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::javax::security::auth::login::Configuration;
using $LoginConfigImpl = ::sun::security::jgss::LoginConfigImpl;

namespace sun {
	namespace security {
		namespace jgss {

$FieldInfo _LoginConfigImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/jgss/LoginConfigImpl;", nullptr, $FINAL | $SYNTHETIC, $field(LoginConfigImpl$1, this$0)},
	{}
};

$MethodInfo _LoginConfigImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jgss/LoginConfigImpl;)V", nullptr, 0, $method(LoginConfigImpl$1, init$, void, $LoginConfigImpl*)},
	{"run", "()Ljavax/security/auth/login/Configuration;", nullptr, $PUBLIC, $virtualMethod(LoginConfigImpl$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _LoginConfigImpl$1_EnclosingMethodInfo_ = {
	"sun.security.jgss.LoginConfigImpl",
	"<init>",
	"(Lsun/security/jgss/GSSCaller;Lorg/ietf/jgss/Oid;)V"
};

$InnerClassInfo _LoginConfigImpl$1_InnerClassesInfo_[] = {
	{"sun.security.jgss.LoginConfigImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LoginConfigImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jgss.LoginConfigImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LoginConfigImpl$1_FieldInfo_,
	_LoginConfigImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/login/Configuration;>;",
	&_LoginConfigImpl$1_EnclosingMethodInfo_,
	_LoginConfigImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jgss.LoginConfigImpl"
};

$Object* allocate$LoginConfigImpl$1($Class* clazz) {
	return $of($alloc(LoginConfigImpl$1));
}

void LoginConfigImpl$1::init$($LoginConfigImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* LoginConfigImpl$1::run() {
	return $of($Configuration::getConfiguration());
}

LoginConfigImpl$1::LoginConfigImpl$1() {
}

$Class* LoginConfigImpl$1::load$($String* name, bool initialize) {
	$loadClass(LoginConfigImpl$1, name, initialize, &_LoginConfigImpl$1_ClassInfo_, allocate$LoginConfigImpl$1);
	return class$;
}

$Class* LoginConfigImpl$1::class$ = nullptr;

		} // jgss
	} // security
} // sun