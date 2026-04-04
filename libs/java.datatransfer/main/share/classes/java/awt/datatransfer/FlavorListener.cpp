#include <java/awt/datatransfer/FlavorListener.h>
#include <java/awt/datatransfer/FlavorEvent.h>
#include <jcpp.h>

using $FlavorEvent = ::java::awt::datatransfer::FlavorEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

$Class* FlavorListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"flavorsChanged", "(Ljava/awt/datatransfer/FlavorEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FlavorListener, flavorsChanged, void, $FlavorEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.datatransfer.FlavorListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(FlavorListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlavorListener);
	});
	return class$;
}

$Class* FlavorListener::class$ = nullptr;

		} // datatransfer
	} // awt
} // java