#include <ProgressMonitorEscapeKeyPress$1.h>
#include <ProgressMonitorEscapeKeyPress.h>
#include <javax/swing/ProgressMonitor.h>
#include <jcpp.h>

using $ProgressMonitorEscapeKeyPress = ::ProgressMonitorEscapeKeyPress;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ProgressMonitorEscapeKeyPress$1::init$() {
}

void ProgressMonitorEscapeKeyPress$1::run() {
	$init($ProgressMonitorEscapeKeyPress);
	if (!$nc($ProgressMonitorEscapeKeyPress::monitor)->isCanceled()) {
		$nc($ProgressMonitorEscapeKeyPress::monitor)->setProgress($ProgressMonitorEscapeKeyPress::counter);
		$nc($System::out)->println("Progress bar is in progress"_s);
	}
}

ProgressMonitorEscapeKeyPress$1::ProgressMonitorEscapeKeyPress$1() {
}

$Class* ProgressMonitorEscapeKeyPress$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProgressMonitorEscapeKeyPress$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitorEscapeKeyPress$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ProgressMonitorEscapeKeyPress",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProgressMonitorEscapeKeyPress$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ProgressMonitorEscapeKeyPress$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ProgressMonitorEscapeKeyPress"
	};
	$loadClass(ProgressMonitorEscapeKeyPress$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMonitorEscapeKeyPress$1);
	});
	return class$;
}

$Class* ProgressMonitorEscapeKeyPress$1::class$ = nullptr;