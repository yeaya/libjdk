#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext$1.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <jcpp.h>

#undef NONE

using $DefaultMBeanServerInterceptor$ResourceContext$1 = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

DefaultMBeanServerInterceptor$ResourceContext* DefaultMBeanServerInterceptor$ResourceContext::NONE = nullptr;

void DefaultMBeanServerInterceptor$ResourceContext::clinit$($Class* clazz) {
	$assignStatic(DefaultMBeanServerInterceptor$ResourceContext::NONE, $new($DefaultMBeanServerInterceptor$ResourceContext$1));
}

$Class* DefaultMBeanServerInterceptor$ResourceContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultMBeanServerInterceptor$ResourceContext, NONE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"done", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DefaultMBeanServerInterceptor$ResourceContext, done, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.jmx.mbeanserver.Repository$RegistrationContext", "com.sun.jmx.mbeanserver.Repository", "RegistrationContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
		nullptr,
		"com.sun.jmx.mbeanserver.Repository$RegistrationContext",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
	};
	$loadClass(DefaultMBeanServerInterceptor$ResourceContext, name, initialize, &classInfo$$, DefaultMBeanServerInterceptor$ResourceContext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMBeanServerInterceptor$ResourceContext);
	});
	return class$;
}

$Class* DefaultMBeanServerInterceptor$ResourceContext::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com