#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

void DefaultMBeanServerInterceptor$ResourceContext$1::init$() {
}

void DefaultMBeanServerInterceptor$ResourceContext$1::done() {
}

void DefaultMBeanServerInterceptor$ResourceContext$1::registering() {
}

void DefaultMBeanServerInterceptor$ResourceContext$1::unregistered() {
}

DefaultMBeanServerInterceptor$ResourceContext$1::DefaultMBeanServerInterceptor$ResourceContext$1() {
}

$Class* DefaultMBeanServerInterceptor$ResourceContext$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultMBeanServerInterceptor$ResourceContext$1, init$, void)},
		{"done", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$ResourceContext$1, done, void)},
		{"registering", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$ResourceContext$1, registering, void)},
		{"unregistered", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$ResourceContext$1, unregistered, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1",
		"java.lang.Object",
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
	};
	$loadClass(DefaultMBeanServerInterceptor$ResourceContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMBeanServerInterceptor$ResourceContext$1);
	});
	return class$;
}

$Class* DefaultMBeanServerInterceptor$ResourceContext$1::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com