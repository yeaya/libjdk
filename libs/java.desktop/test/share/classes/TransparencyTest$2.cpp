#include <TransparencyTest$2.h>
#include <TransparencyTest.h>
#include <java/awt/Dialog.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $TransparencyTest = ::TransparencyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TransparencyTest$2::init$() {
}

void TransparencyTest$2::run() {
	$init($TransparencyTest);
	$nc($TransparencyTest::dialog)->setOpacity(0.6f);
}

TransparencyTest$2::TransparencyTest$2() {
}

$Class* TransparencyTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TransparencyTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransparencyTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TransparencyTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransparencyTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransparencyTest$2",
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
	$loadClass(TransparencyTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransparencyTest$2);
	});
	return class$;
}

$Class* TransparencyTest$2::class$ = nullptr;