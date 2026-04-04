#include <sun/security/krb5/Config$2.h>
#include <sun/security/krb5/Config.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Config = ::sun::security::krb5::Config;

namespace sun {
	namespace security {
		namespace krb5 {

void Config$2::init$($Config* this$0) {
	$set(this, this$0, this$0);
}

$Object* Config$2::run() {
	$var($String, osname, $System::getProperty("os.name"_s));
	if ($nc(osname)->startsWith("Windows"_s)) {
		return $of($System::getenv("USERDNSDOMAIN"_s));
	}
	return nullptr;
}

Config$2::Config$2() {
}

$Class* Config$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/krb5/Config;", nullptr, $FINAL | $SYNTHETIC, $field(Config$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/krb5/Config;)V", nullptr, 0, $method(Config$2, init$, void, $Config*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Config$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.Config",
		"getDefaultRealm",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.Config$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.Config$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.Config"
	};
	$loadClass(Config$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Config$2);
	});
	return class$;
}

$Class* Config$2::class$ = nullptr;

		} // krb5
	} // security
} // sun