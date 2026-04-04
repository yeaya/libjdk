#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$2.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

void DefaultMBeanServerInterceptor$2::init$($DefaultMBeanServerInterceptor* this$0, $ClassLoader* val$loader, $ObjectName* val$logicalName) {
	$set(this, this$0, this$0);
	$set(this, val$loader, val$loader);
	$set(this, val$logicalName, val$logicalName);
}

void DefaultMBeanServerInterceptor$2::registering() {
	this->this$0->addClassLoader(this->val$loader, this->val$logicalName);
}

void DefaultMBeanServerInterceptor$2::unregistered() {
	this->this$0->removeClassLoader(this->val$loader, this->val$logicalName);
}

void DefaultMBeanServerInterceptor$2::done() {
}

DefaultMBeanServerInterceptor$2::DefaultMBeanServerInterceptor$2() {
}

$Class* DefaultMBeanServerInterceptor$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$2, this$0)},
		{"val$logicalName", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$2, val$logicalName)},
		{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$2, val$loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)V", "()V", 0, $method(DefaultMBeanServerInterceptor$2, init$, void, $DefaultMBeanServerInterceptor*, $ClassLoader*, $ObjectName*)},
		{"done", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$2, done, void)},
		{"registering", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$2, registering, void)},
		{"unregistered", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$2, unregistered, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
		"createClassLoaderContext",
		"(Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2", nullptr, nullptr, 0},
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2",
		"java.lang.Object",
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
	};
	$loadClass(DefaultMBeanServerInterceptor$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMBeanServerInterceptor$2);
	});
	return class$;
}

$Class* DefaultMBeanServerInterceptor$2::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com