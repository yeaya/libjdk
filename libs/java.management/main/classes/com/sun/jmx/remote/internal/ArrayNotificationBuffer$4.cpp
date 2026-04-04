#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$4.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$4::init$($MBeanServer* val$mbs, $ObjectName* val$name, $String* val$className) {
	$set(this, val$mbs, val$mbs);
	$set(this, val$name, val$name);
	$set(this, val$className, val$className);
}

$Object* ArrayNotificationBuffer$4::run() {
	return $of($Boolean::valueOf($nc(this->val$mbs)->isInstanceOf(this->val$name, this->val$className)));
}

ArrayNotificationBuffer$4::ArrayNotificationBuffer$4() {
}

$Class* ArrayNotificationBuffer$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$4, val$className)},
		{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$4, val$name)},
		{"val$mbs", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$4, val$mbs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)V", "()V", 0, $method(ArrayNotificationBuffer$4, init$, void, $MBeanServer*, $ObjectName*, $String*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$4, run, $Object*), "javax.management.InstanceNotFoundException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
		"isInstanceOf",
		"(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$4",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
	};
	$loadClass(ArrayNotificationBuffer$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$4);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$4::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com