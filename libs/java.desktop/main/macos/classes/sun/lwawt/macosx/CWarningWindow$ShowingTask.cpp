#include <sun/lwawt/macosx/CWarningWindow$ShowingTask.h>
#include <java/lang/Runnable.h>
#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>
#include <sun/lwawt/macosx/CWarningWindow$Lock.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CWarningWindow = ::sun::lwawt::macosx::CWarningWindow;
using $CWarningWindow$CancelableRunnable = ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWarningWindow$ShowingTask::init$($CWarningWindow* this$0) {
	$set(this, this$0, this$0);
	$CWarningWindow$CancelableRunnable::init$();
}

void CWarningWindow$ShowingTask::perform() {
	$synchronized(this->this$0->lock) {
		if (!this->this$0->isVisible()) {
			this->this$0->setVisible(true);
		}
		this->this$0->repaint();
	}
	$synchronized(this->this$0->taskLock) {
		if (this->this$0->currentIcon > 0) {
			--this->this$0->currentIcon;
			$set(this->this$0, showHideTask, $new(CWarningWindow$ShowingTask, this->this$0));
			$LWCToolkit::performOnMainThreadAfterDelay(this->this$0->showHideTask, 300);
		} else {
			$set(this->this$0, showHideTask, nullptr);
		}
	}
}

CWarningWindow$ShowingTask::CWarningWindow$ShowingTask() {
}

$Class* CWarningWindow$ShowingTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CWarningWindow$ShowingTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CWarningWindow;)V", nullptr, $PRIVATE, $method(CWarningWindow$ShowingTask, init$, void, $CWarningWindow*)},
		{"perform", "()V", nullptr, $PUBLIC, $virtualMethod(CWarningWindow$ShowingTask, perform, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWarningWindow$ShowingTask", "sun.lwawt.macosx.CWarningWindow", "ShowingTask", $PRIVATE},
		{"sun.lwawt.macosx.CWarningWindow$CancelableRunnable", "sun.lwawt.macosx.CWarningWindow", "CancelableRunnable", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CWarningWindow$ShowingTask",
		"sun.lwawt.macosx.CWarningWindow$CancelableRunnable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CWarningWindow"
	};
	$loadClass(CWarningWindow$ShowingTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWarningWindow$ShowingTask);
	});
	return class$;
}

$Class* CWarningWindow$ShowingTask::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun