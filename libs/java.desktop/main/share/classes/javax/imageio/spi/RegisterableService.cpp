#include <javax/imageio/spi/RegisterableService.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

$Class* RegisterableService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"onDeregistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(RegisterableService, onDeregistration, void, $ServiceRegistry*, $Class*)},
		{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(RegisterableService, onRegistration, void, $ServiceRegistry*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.imageio.spi.RegisterableService",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RegisterableService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegisterableService);
	});
	return class$;
}

$Class* RegisterableService::class$ = nullptr;

		} // spi
	} // imageio
} // javax