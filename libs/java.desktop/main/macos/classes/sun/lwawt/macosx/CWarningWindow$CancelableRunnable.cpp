#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWarningWindow$CancelableRunnable::init$() {
	this->perform$ = true;
}

void CWarningWindow$CancelableRunnable::cancel() {
	this->perform$ = false;
}

void CWarningWindow$CancelableRunnable::run() {
	if (this->perform$) {
		perform();
	}
}

CWarningWindow$CancelableRunnable::CWarningWindow$CancelableRunnable() {
}

$Class* CWarningWindow$CancelableRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"perform", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CWarningWindow$CancelableRunnable, perform$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CWarningWindow$CancelableRunnable, init$, void)},
		{"cancel", "()V", nullptr, $PUBLIC | $FINAL, $method(CWarningWindow$CancelableRunnable, cancel, void)},
		{"perform", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CWarningWindow$CancelableRunnable, perform, void)},
		{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(CWarningWindow$CancelableRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWarningWindow$CancelableRunnable", "sun.lwawt.macosx.CWarningWindow", "CancelableRunnable", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.lwawt.macosx.CWarningWindow$CancelableRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(CWarningWindow$CancelableRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWarningWindow$CancelableRunnable);
	});
	return class$;
}

$Class* CWarningWindow$CancelableRunnable::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun