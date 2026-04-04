#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$3.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <jcpp.h>

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

void DefaultMBeanServerInterceptor$3::init$($DefaultMBeanServerInterceptor* this$0) {
	$set(this, this$0, this$0);
}

$Object* DefaultMBeanServerInterceptor$3::run() {
	return this->this$0->instantiator != nullptr ? this->this$0->instantiator->getClassLoaderRepository() : ($ModifiableClassLoaderRepository*)nullptr;
}

DefaultMBeanServerInterceptor$3::DefaultMBeanServerInterceptor$3() {
}

$Class* DefaultMBeanServerInterceptor$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;)V", nullptr, 0, $method(DefaultMBeanServerInterceptor$3, init$, void, $DefaultMBeanServerInterceptor*)},
		{"run", "()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
		"getInstantiatorCLR",
		"()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3",
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
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
	};
	$loadClass(DefaultMBeanServerInterceptor$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMBeanServerInterceptor$3);
	});
	return class$;
}

$Class* DefaultMBeanServerInterceptor$3::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com