#include <javax/imageio/event/IIOWriteWarningListener.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace javax {
	namespace imageio {
		namespace event {

$Class* IIOWriteWarningListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"warningOccurred", "(Ljavax/imageio/ImageWriter;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteWarningListener, warningOccurred, void, $ImageWriter*, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.imageio.event.IIOWriteWarningListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(IIOWriteWarningListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIOWriteWarningListener);
	});
	return class$;
}

$Class* IIOWriteWarningListener::class$ = nullptr;

		} // event
	} // imageio
} // javax