#include <IconifyTest$2.h>
#include <IconifyTest.h>
#include <java/awt/Frame.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $IconifyTest = ::IconifyTest;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IconifyTest$2::init$() {
}

void IconifyTest$2::run() {
	$init($IconifyTest);
	$nc($IconifyTest::frame)->setExtendedState($Frame::ICONIFIED);
}

IconifyTest$2::IconifyTest$2() {
}

$Class* IconifyTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IconifyTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(IconifyTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"IconifyTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconifyTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IconifyTest$2",
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
		"IconifyTest"
	};
	$loadClass(IconifyTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IconifyTest$2);
	});
	return class$;
}

$Class* IconifyTest$2::class$ = nullptr;