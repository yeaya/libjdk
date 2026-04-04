#include <com/sun/jmx/mbeanserver/Repository$RegistrationContext.h>
#include <com/sun/jmx/mbeanserver/Repository.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$Class* Repository$RegistrationContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"registering", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository$RegistrationContext, registering, void)},
		{"unregistered", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository$RegistrationContext, unregistered, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.Repository$RegistrationContext", "com.sun.jmx.mbeanserver.Repository", "RegistrationContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.mbeanserver.Repository$RegistrationContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.Repository"
	};
	$loadClass(Repository$RegistrationContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Repository$RegistrationContext);
	});
	return class$;
}

$Class* Repository$RegistrationContext::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com