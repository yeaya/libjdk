#include <sun/awt/windows/WToolkit$ToolkitDisposer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

void WToolkit$ToolkitDisposer::init$() {
}

void WToolkit$ToolkitDisposer::dispose() {
	$WToolkit::postDispose();
}

WToolkit$ToolkitDisposer::WToolkit$ToolkitDisposer() {
}

$Class* WToolkit$ToolkitDisposer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WToolkit$ToolkitDisposer, init$, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(WToolkit$ToolkitDisposer, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WToolkit$ToolkitDisposer", "sun.awt.windows.WToolkit", "ToolkitDisposer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WToolkit$ToolkitDisposer",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WToolkit"
	};
	$loadClass(WToolkit$ToolkitDisposer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WToolkit$ToolkitDisposer);
	});
	return class$;
}

$Class* WToolkit$ToolkitDisposer::class$ = nullptr;

		} // windows
	} // awt
} // sun