#include <javax/security/auth/kerberos/KrbServicePermissionCollection$1.h>
#include <java/security/Permission.h>
#include <javax/security/auth/kerberos/KrbServicePermissionCollection.h>
#include <javax/security/auth/kerberos/ServicePermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $KrbServicePermissionCollection = ::javax::security::auth::kerberos::KrbServicePermissionCollection;
using $ServicePermission = ::javax::security::auth::kerberos::ServicePermission;

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

void KrbServicePermissionCollection$1::init$($KrbServicePermissionCollection* this$0, $String* val$princName) {
	$set(this, this$0, this$0);
	$set(this, val$princName, val$princName);
}

$Permission* KrbServicePermissionCollection$1::apply($Permission* existingVal, $Permission* newVal) {
	int32_t oldMask = $nc($cast($ServicePermission, existingVal))->getMask();
	int32_t newMask = $nc($cast($ServicePermission, newVal))->getMask();
	if (oldMask != newMask) {
		int32_t effective = oldMask | newMask;
		if (effective == newMask) {
			return newVal;
		}
		if (effective != oldMask) {
			return $new($ServicePermission, this->val$princName, effective);
		}
	}
	return existingVal;
}

$Object* KrbServicePermissionCollection$1::apply(Object$* existingVal, Object$* newVal) {
	return $of(this->apply($cast($Permission, existingVal), $cast($Permission, newVal)));
}

KrbServicePermissionCollection$1::KrbServicePermissionCollection$1() {
}

$Class* KrbServicePermissionCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/kerberos/KrbServicePermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(KrbServicePermissionCollection$1, this$0)},
		{"val$princName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(KrbServicePermissionCollection$1, val$princName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/kerberos/KrbServicePermissionCollection;Ljava/lang/String;)V", nullptr, 0, $method(KrbServicePermissionCollection$1, init$, void, $KrbServicePermissionCollection*, $String*)},
		{"apply", "(Ljava/security/Permission;Ljava/security/Permission;)Ljava/security/Permission;", nullptr, $PUBLIC, $virtualMethod(KrbServicePermissionCollection$1, apply, $Permission*, $Permission*, $Permission*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(KrbServicePermissionCollection$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.kerberos.KrbServicePermissionCollection",
		"add",
		"(Ljava/security/Permission;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.kerberos.KrbServicePermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.kerberos.KrbServicePermissionCollection$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/security/Permission;Ljava/security/Permission;Ljava/security/Permission;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.kerberos.KrbServicePermissionCollection"
	};
	$loadClass(KrbServicePermissionCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbServicePermissionCollection$1);
	});
	return class$;
}

$Class* KrbServicePermissionCollection$1::class$ = nullptr;

			} // kerberos
		} // auth
	} // security
} // javax