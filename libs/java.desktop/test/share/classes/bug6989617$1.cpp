#include <bug6989617$1.h>
#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6989617 = ::bug6989617;
using $bug6989617$MyPanel = ::bug6989617$MyPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;

void bug6989617$1::init$() {
}

void bug6989617$1::run() {
	$init($bug6989617);
	$assignStatic($bug6989617::frame, $new($JFrame));
	$bug6989617::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6989617::panel, $new($bug6989617$MyPanel));
	$assignStatic($bug6989617::button, $new($JButton, "Hello"_s));
	$bug6989617::panel->add($bug6989617::button);
	$nc($bug6989617::frame)->add($bug6989617::panel);
	$nc($bug6989617::frame)->setSize(200, 300);
	$nc($bug6989617::frame)->setVisible(true);
}

bug6989617$1::bug6989617$1() {
}

$Class* bug6989617$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6989617$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6989617$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6989617",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6989617$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6989617$1",
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
		"bug6989617"
	};
	$loadClass(bug6989617$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6989617$1);
	});
	return class$;
}

$Class* bug6989617$1::class$ = nullptr;