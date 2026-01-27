#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace datatransfer {

$MethodInfo _ToolkitThreadBlockedHandler_MethodInfo_[] = {
	{"enter", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, enter, void)},
	{"exit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, exit, void)},
	{"lock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, lock, void)},
	{"unlock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolkitThreadBlockedHandler, unlock, void)},
	{}
};

$ClassInfo _ToolkitThreadBlockedHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
	nullptr,
	nullptr,
	nullptr,
	_ToolkitThreadBlockedHandler_MethodInfo_
};

$Object* allocate$ToolkitThreadBlockedHandler($Class* clazz) {
	return $of($alloc(ToolkitThreadBlockedHandler));
}

$Class* ToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$loadClass(ToolkitThreadBlockedHandler, name, initialize, &_ToolkitThreadBlockedHandler_ClassInfo_, allocate$ToolkitThreadBlockedHandler);
	return class$;
}

$Class* ToolkitThreadBlockedHandler::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun