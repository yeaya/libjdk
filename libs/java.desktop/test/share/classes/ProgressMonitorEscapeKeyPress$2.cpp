#include <ProgressMonitorEscapeKeyPress$2.h>
#include <ProgressMonitorEscapeKeyPress.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ProgressMonitorEscapeKeyPress = ::ProgressMonitorEscapeKeyPress;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void ProgressMonitorEscapeKeyPress$2::init$() {
}

void ProgressMonitorEscapeKeyPress$2::run() {
	$init($ProgressMonitorEscapeKeyPress);
	$assignStatic($ProgressMonitorEscapeKeyPress::frame, $new($JFrame, "Test"_s));
	$ProgressMonitorEscapeKeyPress::frame->setSize(300, 300);
	$nc($ProgressMonitorEscapeKeyPress::frame)->setLocationByPlatform(true);
	$nc($ProgressMonitorEscapeKeyPress::frame)->setVisible(true);
}

ProgressMonitorEscapeKeyPress$2::ProgressMonitorEscapeKeyPress$2() {
}

$Class* ProgressMonitorEscapeKeyPress$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProgressMonitorEscapeKeyPress$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitorEscapeKeyPress$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ProgressMonitorEscapeKeyPress",
		"createTestUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProgressMonitorEscapeKeyPress$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ProgressMonitorEscapeKeyPress$2",
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
	$loadClass(ProgressMonitorEscapeKeyPress$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMonitorEscapeKeyPress$2);
	});
	return class$;
}

$Class* ProgressMonitorEscapeKeyPress$2::class$ = nullptr;