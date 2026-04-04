#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace datatransfer {

$Class* ToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"enter", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, enter, void)},
		{"exit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, exit, void)},
		{"lock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, lock, void)},
		{"unlock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, unlock, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ToolkitThreadBlockedHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolkitThreadBlockedHandler);
	});
	return class$;
}

$Class* ToolkitThreadBlockedHandler::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun