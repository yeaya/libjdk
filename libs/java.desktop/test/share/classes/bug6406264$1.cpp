#include <bug6406264$1.h>
#include <bug6406264.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6406264 = ::bug6406264;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void bug6406264$1::init$() {
}

void bug6406264$1::run() {
	$useLocalObjectStack();
	$init($bug6406264);
	$assignStatic($bug6406264::frame, $new($JFrame, "JComboBox6406264 test"_s));
	$bug6406264::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6406264::comboBox, $new($bug6406264, $$new($ObjectArray, {
		"One"_s,
		"Two"_s,
		"Three"_s
	})));
	$$nc($nc($bug6406264::frame)->getContentPane())->add($bug6406264::comboBox);
	$nc($bug6406264::frame)->setLocationRelativeTo(nullptr);
	$nc($bug6406264::frame)->pack();
	$nc($bug6406264::frame)->setVisible(true);
}

bug6406264$1::bug6406264$1() {
}

$Class* bug6406264$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6406264$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6406264$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6406264",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6406264$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6406264$1",
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
		"bug6406264"
	};
	$loadClass(bug6406264$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6406264$1);
	});
	return class$;
}

$Class* bug6406264$1::class$ = nullptr;