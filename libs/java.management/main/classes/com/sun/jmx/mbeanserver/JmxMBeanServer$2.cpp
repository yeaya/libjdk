#include <com/sun/jmx/mbeanserver/JmxMBeanServer$2.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef DELEGATE_NAME

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void JmxMBeanServer$2::init$($JmxMBeanServer* this$0) {
	$set(this, this$0, this$0);
}

$Object* JmxMBeanServer$2::run() {
	$init($MBeanServerDelegate);
	$nc(this->this$0->mbsInterceptor)->registerMBean(this->this$0->mBeanServerDelegateObject, $MBeanServerDelegate::DELEGATE_NAME);
	return nullptr;
}

JmxMBeanServer$2::JmxMBeanServer$2() {
}

$Class* JmxMBeanServer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/JmxMBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/JmxMBeanServer;)V", nullptr, 0, $method(JmxMBeanServer$2, init$, void, $JmxMBeanServer*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JmxMBeanServer$2, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.mbeanserver.JmxMBeanServer",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.JmxMBeanServer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.JmxMBeanServer$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.JmxMBeanServer"
	};
	$loadClass(JmxMBeanServer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JmxMBeanServer$2);
	});
	return class$;
}

$Class* JmxMBeanServer$2::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com