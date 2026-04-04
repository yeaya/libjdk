#include <com/sun/jmx/interceptor/MBeanServerInterceptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$Class* MBeanServerInterceptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.interceptor.MBeanServerInterceptor",
		nullptr,
		"javax.management.MBeanServer",
		nullptr,
		methodInfos$$
	};
	$loadClass(MBeanServerInterceptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerInterceptor);
	});
	return class$;
}

$Class* MBeanServerInterceptor::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com