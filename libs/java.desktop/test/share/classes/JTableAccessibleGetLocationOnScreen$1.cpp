#include <JTableAccessibleGetLocationOnScreen$1.h>
#include <JTableAccessibleGetLocationOnScreen.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JTableAccessibleGetLocationOnScreen = ::JTableAccessibleGetLocationOnScreen;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JTableAccessibleGetLocationOnScreen$1::init$() {
}

void JTableAccessibleGetLocationOnScreen$1::run() {
	$JTableAccessibleGetLocationOnScreen::constructInEDT();
	$var($Throwable, var$0, nullptr);
	try {
		$JTableAccessibleGetLocationOnScreen::assertGetLocation();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc($JTableAccessibleGetLocationOnScreen::frame)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

JTableAccessibleGetLocationOnScreen$1::JTableAccessibleGetLocationOnScreen$1() {
}

$Class* JTableAccessibleGetLocationOnScreen$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTableAccessibleGetLocationOnScreen$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTableAccessibleGetLocationOnScreen$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTableAccessibleGetLocationOnScreen",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTableAccessibleGetLocationOnScreen$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTableAccessibleGetLocationOnScreen$1",
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
		"JTableAccessibleGetLocationOnScreen"
	};
	$loadClass(JTableAccessibleGetLocationOnScreen$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableAccessibleGetLocationOnScreen$1);
	});
	return class$;
}

$Class* JTableAccessibleGetLocationOnScreen$1::class$ = nullptr;