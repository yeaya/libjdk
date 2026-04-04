#include <bug6694823$3.h>
#include <bug6694823.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6694823$3::init$() {
}

void bug6694823$3::run() {
	$init($bug6694823);
	$var($Dimension, screenSize, $nc($bug6694823::toolkit)->getScreenSize());
	$nc($bug6694823::frame)->setLocation($nc(screenSize)->width / 2, $nc(screenSize)->height - $nc($bug6694823::frame)->getHeight() - $nc($bug6694823::screenInsets)->bottom);
	$nc($bug6694823::frame)->setVisible(true);
}

bug6694823$3::bug6694823$3() {
}

$Class* bug6694823$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6694823$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6694823$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6694823",
		"checkPopup",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6694823$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6694823$3",
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
		"bug6694823"
	};
	$loadClass(bug6694823$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6694823$3);
	});
	return class$;
}

$Class* bug6694823$3::class$ = nullptr;