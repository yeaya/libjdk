#include <com/sun/jmx/mbeanserver/JmxMBeanServer$1.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <jcpp.h>

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void JmxMBeanServer$1::init$($JmxMBeanServer* this$0, $MBeanInstantiator* val$fInstantiator) {
	$set(this, this$0, this$0);
	$set(this, val$fInstantiator, val$fInstantiator);
}

$Object* JmxMBeanServer$1::run() {
	return $nc(this->val$fInstantiator)->getClassLoaderRepository();
}

JmxMBeanServer$1::JmxMBeanServer$1() {
}

$Class* JmxMBeanServer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/JmxMBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$1, this$0)},
		{"val$fInstantiator", "Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$1, val$fInstantiator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/JmxMBeanServer;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;)V", "()V", 0, $method(JmxMBeanServer$1, init$, void, $JmxMBeanServer*, $MBeanInstantiator*)},
		{"run", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC, $virtualMethod(JmxMBeanServer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.mbeanserver.JmxMBeanServer",
		"<init>",
		"(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;ZZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.JmxMBeanServer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.JmxMBeanServer$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/management/loading/ClassLoaderRepository;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.JmxMBeanServer"
	};
	$loadClass(JmxMBeanServer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JmxMBeanServer$1);
	});
	return class$;
}

$Class* JmxMBeanServer$1::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com