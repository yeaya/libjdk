#include <sun/security/jgss/SunProvider$1.h>
#include <java/security/Provider.h>
#include <sun/security/jgss/SunProvider$ProviderService.h>
#include <sun/security/jgss/SunProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $SunProvider = ::sun::security::jgss::SunProvider;
using $SunProvider$ProviderService = ::sun::security::jgss::SunProvider$ProviderService;

namespace sun {
	namespace security {
		namespace jgss {

void SunProvider$1::init$($SunProvider* this$0, $Provider* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

$Object* SunProvider$1::run() {
	$useLocalObjectStack();
	$SunProvider::access$000(this->this$0, $$new($SunProvider$ProviderService, this->val$p, "GssApiMechanism"_s, "1.2.840.113554.1.2.2"_s, "sun.security.jgss.krb5.Krb5MechFactory"_s));
	$SunProvider::access$100(this->this$0, $$new($SunProvider$ProviderService, this->val$p, "GssApiMechanism"_s, "1.3.6.1.5.5.2"_s, "sun.security.jgss.spnego.SpNegoMechFactory"_s));
	return nullptr;
}

SunProvider$1::SunProvider$1() {
}

$Class* SunProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jgss/SunProvider;", nullptr, $FINAL | $SYNTHETIC, $field(SunProvider$1, this$0)},
		{"val$p", "Ljava/security/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(SunProvider$1, val$p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jgss/SunProvider;Ljava/security/Provider;)V", "()V", 0, $method(SunProvider$1, init$, void, $SunProvider*, $Provider*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jgss.SunProvider",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.SunProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.SunProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jgss.SunProvider"
	};
	$loadClass(SunProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunProvider$1);
	});
	return class$;
}

$Class* SunProvider$1::class$ = nullptr;

		} // jgss
	} // security
} // sun