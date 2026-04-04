#include <sun/awt/X11/XClipboard$CheckChangeTimerTask.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XClipboard.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $XClipboard = ::sun::awt::X11::XClipboard;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XClipboard$CheckChangeTimerTask::init$() {
}

void XClipboard$CheckChangeTimerTask::run() {
	$useLocalObjectStack();
	{
		$init($XClipboard);
		$var($Iterator, i$, $$nc($nc($XClipboard::targetsAtom2Clipboard)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XClipboard, clpbrd, $cast($XClipboard, i$->next()));
			{
				$nc(clpbrd)->getTargetsDelayed();
			}
		}
	}
	$synchronized($XClipboard::classLock) {
		if ($XClipboard::targetsAtom2Clipboard != nullptr && !$XClipboard::targetsAtom2Clipboard->isEmpty()) {
			$XToolkit::schedule(this, $XClipboard::getPollInterval());
		}
	}
}

XClipboard$CheckChangeTimerTask::XClipboard$CheckChangeTimerTask() {
}

$Class* XClipboard$CheckChangeTimerTask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XClipboard$CheckChangeTimerTask, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XClipboard$CheckChangeTimerTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XClipboard$CheckChangeTimerTask", "sun.awt.X11.XClipboard", "CheckChangeTimerTask", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XClipboard$CheckChangeTimerTask",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XClipboard"
	};
	$loadClass(XClipboard$CheckChangeTimerTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XClipboard$CheckChangeTimerTask);
	});
	return class$;
}

$Class* XClipboard$CheckChangeTimerTask::class$ = nullptr;

		} // X11
	} // awt
} // sun