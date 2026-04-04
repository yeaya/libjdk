#include <IconifyTest$1.h>
#include <IconifyTest$1$1.h>
#include <IconifyTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowListener.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $IconifyTest = ::IconifyTest;
using $IconifyTest$1$1 = ::IconifyTest$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;

void IconifyTest$1::init$() {
}

void IconifyTest$1::run() {
	$useLocalObjectStack();
	$init($IconifyTest);
	$assignStatic($IconifyTest::frame, $new($JFrame));
	$assignStatic($IconifyTest::button, $new($JButton, "HI"_s));
	$$nc($IconifyTest::frame->getContentPane())->add($IconifyTest::button);
	$nc($IconifyTest::frame)->addWindowListener($$new($IconifyTest$1$1, this));
	$nc($IconifyTest::frame)->pack();
	$nc($IconifyTest::frame)->setVisible(true);
}

IconifyTest$1::IconifyTest$1() {
}

$Class* IconifyTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IconifyTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(IconifyTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"IconifyTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconifyTest$1", nullptr, nullptr, 0},
		{"IconifyTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IconifyTest$1",
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
	$loadClass(IconifyTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IconifyTest$1);
	});
	return class$;
}

$Class* IconifyTest$1::class$ = nullptr;