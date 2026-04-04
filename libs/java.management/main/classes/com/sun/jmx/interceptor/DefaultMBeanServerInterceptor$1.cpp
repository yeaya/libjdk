#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$1.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

void DefaultMBeanServerInterceptor$1::init$($Class* val$theClass) {
	$set(this, val$theClass, val$theClass);
}

$Object* DefaultMBeanServerInterceptor$1::run() {
	return $nc(this->val$theClass)->getProtectionDomain();
}

DefaultMBeanServerInterceptor$1::DefaultMBeanServerInterceptor$1() {
}

$Class* DefaultMBeanServerInterceptor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$theClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$1, val$theClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(DefaultMBeanServerInterceptor$1, init$, void, $Class*)},
		{"run", "()Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
		"checkMBeanTrustPermission",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/ProtectionDomain;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
	};
	$loadClass(DefaultMBeanServerInterceptor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMBeanServerInterceptor$1);
	});
	return class$;
}

$Class* DefaultMBeanServerInterceptor$1::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com