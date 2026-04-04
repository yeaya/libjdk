#include <TransparencyTest$4.h>
#include <TransparencyTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef NORMAL

using $TransparencyTest = ::TransparencyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void TransparencyTest$4::init$() {
}

void TransparencyTest$4::run() {
	$init($TransparencyTest);
	$nc($TransparencyTest::frame)->setExtendedState($JFrame::NORMAL);
}

TransparencyTest$4::TransparencyTest$4() {
}

$Class* TransparencyTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TransparencyTest$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransparencyTest$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TransparencyTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransparencyTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransparencyTest$4",
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
	$loadClass(TransparencyTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransparencyTest$4);
	});
	return class$;
}

$Class* TransparencyTest$4::class$ = nullptr;