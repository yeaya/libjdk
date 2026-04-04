#include <javax/imageio/event/IIOReadWarningListener.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace javax {
	namespace imageio {
		namespace event {

$Class* IIOReadWarningListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"warningOccurred", "(Ljavax/imageio/ImageReader;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadWarningListener, warningOccurred, void, $ImageReader*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.imageio.event.IIOReadWarningListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(IIOReadWarningListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIOReadWarningListener);
	});
	return class$;
}

$Class* IIOReadWarningListener::class$ = nullptr;

		} // event
	} // imageio
} // javax