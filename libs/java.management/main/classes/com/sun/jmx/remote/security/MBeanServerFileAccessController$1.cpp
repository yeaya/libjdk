#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$1.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/security/AccessControlContext.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $MBeanServerFileAccessController = ::com::sun::jmx::remote::security::MBeanServerFileAccessController;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void MBeanServerFileAccessController$1::init$($MBeanServerFileAccessController* this$0, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$acc, val$acc);
}

$Object* MBeanServerFileAccessController$1::run() {
	return $Subject::getSubject(this->val$acc);
}

MBeanServerFileAccessController$1::MBeanServerFileAccessController$1() {
}

$Class* MBeanServerFileAccessController$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/security/MBeanServerFileAccessController;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanServerFileAccessController$1, this$0)},
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanServerFileAccessController$1, val$acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController;Ljava/security/AccessControlContext;)V", "()V", 0, $method(MBeanServerFileAccessController$1, init$, void, $MBeanServerFileAccessController*, $AccessControlContext*)},
		{"run", "()Ljavax/security/auth/Subject;", nullptr, $PUBLIC, $virtualMethod(MBeanServerFileAccessController$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.security.MBeanServerFileAccessController",
		"checkAccess",
		"(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$1", nullptr, nullptr, 0},
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "AccessType", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/Subject;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController"
	};
	$loadClass(MBeanServerFileAccessController$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerFileAccessController$1);
	});
	return class$;
}

$Class* MBeanServerFileAccessController$1::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com