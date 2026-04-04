#include <TextSelectionTest$1.h>
#include <TextSelectionTest.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TextSelectionTest = ::TextSelectionTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TextSelectionTest$1::init$() {
	$WindowAdapter::init$();
}

void TextSelectionTest$1::windowClosing($WindowEvent* e) {
	$init($TextSelectionTest);
	$nc($TextSelectionTest::latch)->countDown();
}

TextSelectionTest$1::TextSelectionTest$1() {
}

$Class* TextSelectionTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TextSelectionTest$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TextSelectionTest$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TextSelectionTest",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TextSelectionTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TextSelectionTest$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TextSelectionTest"
	};
	$loadClass(TextSelectionTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextSelectionTest$1));
	});
	return class$;
}

$Class* TextSelectionTest$1::class$ = nullptr;