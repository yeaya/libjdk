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

void LoginConfigImpl$1::init$($LoginConfigImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* LoginConfigImpl$1::run() {
	return $Configuration::getConfiguration();
}

LoginConfigImpl$1::LoginConfigImpl$1() {
}

$Class* LoginConfigImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jgss/LoginConfigImpl;", nullptr, $FINAL | $SYNTHETIC, $field(LoginConfigImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jgss/LoginConfigImpl;)V", nullptr, 0, $method(LoginConfigImpl$1, init$, void, $LoginConfigImpl*)},
		{"run", "()Ljavax/security/auth/login/Configuration;", nullptr, $PUBLIC, $virtualMethod(LoginConfigImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jgss.LoginConfigImpl",
		"<init>",
		"(Lsun/security/jgss/GSSCaller;Lorg/ietf/jgss/Oid;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.LoginConfigImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.LoginConfigImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/login/Configuration;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jgss.LoginConfigImpl"
	};
	$loadClass(LoginConfigImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginConfigImpl$1);
	});
	return class$;
}

$Class* LoginConfigImpl$1::class$ = nullptr;

		} // jgss
	} // security
} // sun