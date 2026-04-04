#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/awt/desktop/PrintFilesEvent.h>
#include <jcpp.h>

using $PrintFilesEvent = ::java::awt::desktop::PrintFilesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* PrintFilesHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"printFiles", "(Ljava/awt/desktop/PrintFilesEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintFilesHandler, printFiles, void, $PrintFilesEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.PrintFilesHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintFilesHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintFilesHandler);
	});
	return class$;
}

$Class* PrintFilesHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java