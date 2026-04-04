#include <bug4242228$2.h>
#include <bug4242228.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug4242228 = ::bug4242228;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4242228$2::init$() {
}

void bug4242228$2::run() {
	for (int32_t i = 0; i < 50; ++i) {
		$init($bug4242228);
		$nc($bug4242228::tabPane)->setSelectedIndex(i % 2);
	}
	$init($bug4242228);
	$nc($bug4242228::frame)->dispose();
}

bug4242228$2::bug4242228$2() {
}

$Class* bug4242228$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4242228$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4242228$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4242228",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4242228$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4242228$2",
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
		"bug4242228"
	};
	$loadClass(bug4242228$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4242228$2);
	});
	return class$;
}

$Class* bug4242228$2::class$ = nullptr;