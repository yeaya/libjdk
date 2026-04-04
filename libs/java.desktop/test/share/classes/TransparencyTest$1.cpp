#include <TransparencyTest$1.h>
#include <TransparencyTest.h>
#include <jcpp.h>

using $TransparencyTest = ::TransparencyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TransparencyTest$1::init$() {
}

void TransparencyTest$1::run() {
	$TransparencyTest::createAndShowGUI();
}

TransparencyTest$1::TransparencyTest$1() {
}

$Class* TransparencyTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TransparencyTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransparencyTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TransparencyTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransparencyTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransparencyTest$1",
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
	$loadClass(TransparencyTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransparencyTest$1);
	});
	return class$;
}

$Class* TransparencyTest$1::class$ = nullptr;