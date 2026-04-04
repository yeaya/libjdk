#include <java/awt/desktop/OpenURIHandler.h>
#include <java/awt/desktop/OpenURIEvent.h>
#include <jcpp.h>

using $OpenURIEvent = ::java::awt::desktop::OpenURIEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* OpenURIHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"openURI", "(Ljava/awt/desktop/OpenURIEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenURIHandler, openURI, void, $OpenURIEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.OpenURIHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenURIHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenURIHandler);
	});
	return class$;
}

$Class* OpenURIHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java