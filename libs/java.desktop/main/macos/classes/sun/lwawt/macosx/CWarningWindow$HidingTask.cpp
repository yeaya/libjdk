#include <sun/lwawt/macosx/CWarningWindow$HidingTask.h>
#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>
#include <sun/lwawt/macosx/CWarningWindow$Lock.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CWarningWindow = ::sun::lwawt::macosx::CWarningWindow;
using $CWarningWindow$CancelableRunnable = ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWarningWindow$HidingTask::init$($CWarningWindow* this$0) {
	$set(this, this$0, this$0);
	$CWarningWindow$CancelableRunnable::init$();
}

void CWarningWindow$HidingTask::perform() {
	$synchronized(this->this$0->lock) {
		this->this$0->setVisible(false);
	}
	$synchronized(this->this$0->taskLock) {
		$set(this->this$0, showHideTask, nullptr);
	}
}

CWarningWindow$HidingTask::CWarningWindow$HidingTask() {
}

$Class* CWarningWindow$HidingTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CWarningWindow$HidingTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CWarningWindow;)V", nullptr, $PRIVATE, $method(CWarningWindow$HidingTask, init$, void, $CWarningWindow*)},
		{"perform", "()V", nullptr, $PUBLIC, $virtualMethod(CWarningWindow$HidingTask, perform, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWarningWindow$HidingTask", "sun.lwawt.macosx.CWarningWindow", "HidingTask", $PRIVATE},
		{"sun.lwawt.macosx.CWarningWindow$CancelableRunnable", "sun.lwawt.macosx.CWarningWindow", "CancelableRunnable", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CWarningWindow$HidingTask",
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
	$loadClass(CWarningWindow$HidingTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWarningWindow$HidingTask);
	});
	return class$;
}

$Class* CWarningWindow$HidingTask::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun