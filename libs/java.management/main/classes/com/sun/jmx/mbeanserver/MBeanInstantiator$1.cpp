#include <com/sun/jmx/mbeanserver/MBeanInstantiator$1.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void MBeanInstantiator$1::init$($MBeanInstantiator* this$0, $ObjectName* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* MBeanInstantiator$1::run() {
	return $nc(this->this$0->clr)->getClassLoader(this->val$name);
}

MBeanInstantiator$1::MBeanInstantiator$1() {
}

$Class* MBeanInstantiator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanInstantiator$1, this$0)},
		{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanInstantiator$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/MBeanInstantiator;Ljavax/management/ObjectName;)V", "()V", 0, $method(MBeanInstantiator$1, init$, void, $MBeanInstantiator*, $ObjectName*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(MBeanInstantiator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.mbeanserver.MBeanInstantiator",
		"getClassLoader",
		"(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MBeanInstantiator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MBeanInstantiator$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MBeanInstantiator"
	};
	$loadClass(MBeanInstantiator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanInstantiator$1);
	});
	return class$;
}

$Class* MBeanInstantiator$1::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com