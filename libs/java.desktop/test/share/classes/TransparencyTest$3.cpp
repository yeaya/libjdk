#include <TransparencyTest$3.h>
#include <TransparencyTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $TransparencyTest = ::TransparencyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void TransparencyTest$3::init$() {
}

void TransparencyTest$3::run() {
	$init($TransparencyTest);
	$nc($TransparencyTest::frame)->setExtendedState($JFrame::ICONIFIED);
}

TransparencyTest$3::TransparencyTest$3() {
}

$Class* TransparencyTest$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TransparencyTest$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransparencyTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TransparencyTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransparencyTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransparencyTest$3",
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
		"TransparencyTest"
	};
	$loadClass(TransparencyTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransparencyTest$3);
	});
	return class$;
}

$Class* TransparencyTest$3::class$ = nullptr;