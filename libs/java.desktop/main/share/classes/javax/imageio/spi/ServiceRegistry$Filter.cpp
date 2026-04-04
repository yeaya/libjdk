#include <javax/imageio/spi/ServiceRegistry$Filter.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace spi {

$Class* ServiceRegistry$Filter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServiceRegistry$Filter, filter, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.imageio.spi.ServiceRegistry$Filter",
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
		"javax.imageio.spi.ServiceRegistry"
	};
	$loadClass(ServiceRegistry$Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceRegistry$Filter);
	});
	return class$;
}

$Class* ServiceRegistry$Filter::class$ = nullptr;

		} // spi
	} // imageio
} // javax