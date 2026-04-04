#include <com/sun/jmx/mbeanserver/JmxMBeanServer$3.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <jcpp.h>

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void JmxMBeanServer$3::init$($JmxMBeanServer* this$0) {
	$set(this, this$0, this$0);
}

$Object* JmxMBeanServer$3::run() {
	return $nc(this->this$0->instantiator)->getClassLoaderRepository();
}

JmxMBeanServer$3::JmxMBeanServer$3() {
}

$Class* JmxMBeanServer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/JmxMBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/JmxMBeanServer;)V", nullptr, 0, $method(JmxMBeanServer$3, init$, void, $JmxMBeanServer*)},
		{"run", "()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PUBLIC, $virtualMethod(JmxMBeanServer$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.mbeanserver.JmxMBeanServer",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.JmxMBeanServer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.JmxMBeanServer$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.JmxMBeanServer"
	};
	$loadClass(JmxMBeanServer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JmxMBeanServer$3);
	});
	return class$;
}

$Class* JmxMBeanServer$3::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com