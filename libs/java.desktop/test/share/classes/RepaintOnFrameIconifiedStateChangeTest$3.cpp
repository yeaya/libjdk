#include <RepaintOnFrameIconifiedStateChangeTest$3.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void RepaintOnFrameIconifiedStateChangeTest$3::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$3::run() {
	$nc($System::out)->println("Changing states of components..."_s);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	$nc($RepaintOnFrameIconifiedStateChangeTest::label)->setText($nc($nc($RepaintOnFrameIconifiedStateChangeTest::strsForComps)->get(0))->get(1));
	$nc($RepaintOnFrameIconifiedStateChangeTest::button)->setText($nc($RepaintOnFrameIconifiedStateChangeTest::strsForComps->get(1))->get(1));
}

RepaintOnFrameIconifiedStateChangeTest$3::RepaintOnFrameIconifiedStateChangeTest$3() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RepaintOnFrameIconifiedStateChangeTest$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintOnFrameIconifiedStateChangeTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintOnFrameIconifiedStateChangeTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintOnFrameIconifiedStateChangeTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintOnFrameIconifiedStateChangeTest$3",
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
		"RepaintOnFrameIconifiedStateChangeTest"
	};
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintOnFrameIconifiedStateChangeTest$3);
	});
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$3::class$ = nullptr;