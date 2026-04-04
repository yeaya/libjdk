#include <bug6953396$1.h>
#include <bug6953396$1$1.h>
#include <bug6953396.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/ViewportUI.h>
#include <javax/swing/plaf/basic/BasicViewportUI.h>
#include <jcpp.h>

using $bug6953396$1$1 = ::bug6953396$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JViewport = ::javax::swing::JViewport;
using $ViewportUI = ::javax::swing::plaf::ViewportUI;
using $BasicViewportUI = ::javax::swing::plaf::basic::BasicViewportUI;

void bug6953396$1::init$() {
}

void bug6953396$1::run() {
	$useLocalObjectStack();
	$var($BasicViewportUI, ui, $new($bug6953396$1$1, this));
	$var($JViewport, viewport, $new($JViewport));
	viewport->setUI(ui);
	viewport->setUI(($ViewportUI*)nullptr);
}

bug6953396$1::bug6953396$1() {
}

$Class* bug6953396$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6953396$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6953396$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6953396",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6953396$1", nullptr, nullptr, 0},
		{"bug6953396$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6953396$1",
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
		"bug6953396"
	};
	$loadClass(bug6953396$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6953396$1);
	});
	return class$;
}

$Class* bug6953396$1::class$ = nullptr;