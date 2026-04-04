#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitEvent.h>
#include <java/awt/desktop/QuitResponse.h>
#include <jcpp.h>

using $QuitEvent = ::java::awt::desktop::QuitEvent;
using $QuitResponse = ::java::awt::desktop::QuitResponse;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* QuitHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleQuitRequestWith", "(Ljava/awt/desktop/QuitEvent;Ljava/awt/desktop/QuitResponse;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuitHandler, handleQuitRequestWith, void, $QuitEvent*, $QuitResponse*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.QuitHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(QuitHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(QuitHandler);
	});
	return class$;
}

$Class* QuitHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java