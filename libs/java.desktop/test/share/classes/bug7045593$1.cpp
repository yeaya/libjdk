#include <bug7045593$1.h>
#include <bug7045593.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $bug7045593 = ::bug7045593;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;

void bug7045593$1::init$() {
}

void bug7045593$1::run() {
	$useLocalObjectStack();
	$init($bug7045593);
	$assignStatic($bug7045593::jtf, $new($JTextField, "WW"_s));
	$var($JFrame, frame, $new($JFrame));
	$$nc(frame->getContentPane())->add($bug7045593::jtf);
	frame->pack();
	frame->setVisible(true);
}

bug7045593$1::bug7045593$1() {
}

$Class* bug7045593$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7045593$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7045593$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7045593",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7045593$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7045593$1",
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
		"bug7045593"
	};
	$loadClass(bug7045593$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7045593$1);
	});
	return class$;
}

$Class* bug7045593$1::class$ = nullptr;