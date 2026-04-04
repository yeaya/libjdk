#include <java/awt/desktop/AboutHandler.h>
#include <java/awt/desktop/AboutEvent.h>
#include <jcpp.h>

using $AboutEvent = ::java::awt::desktop::AboutEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* AboutHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleAbout", "(Ljava/awt/desktop/AboutEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AboutHandler, handleAbout, void, $AboutEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.AboutHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AboutHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AboutHandler);
	});
	return class$;
}

$Class* AboutHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java