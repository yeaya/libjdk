#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/awt/desktop/OpenFilesEvent.h>
#include <jcpp.h>

using $OpenFilesEvent = ::java::awt::desktop::OpenFilesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* OpenFilesHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"openFiles", "(Ljava/awt/desktop/OpenFilesEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenFilesHandler, openFiles, void, $OpenFilesEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.OpenFilesHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenFilesHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenFilesHandler);
	});
	return class$;
}

$Class* OpenFilesHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java