#include <bug7146377$1.h>
#include <bug7146377$1$1.h>
#include <bug7146377.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug7146377 = ::bug7146377;
using $bug7146377$1$1 = ::bug7146377$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

void bug7146377$1::init$() {
}

void bug7146377$1::run() {
	$init($bug7146377);
	$assignStatic($bug7146377::frame, $new($JFrame));
	$assignStatic($bug7146377::label, $new($JLabel, "A label"_s));
	$bug7146377::label->addMouseListener($$new($bug7146377$1$1, this));
	$nc($bug7146377::frame)->add($bug7146377::label);
	$nc($bug7146377::frame)->setSize(200, 100);
	$nc($bug7146377::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug7146377::frame)->setVisible(true);
}

bug7146377$1::bug7146377$1() {
}

$Class* bug7146377$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7146377$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7146377$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7146377",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7146377$1", nullptr, nullptr, 0},
		{"bug7146377$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7146377$1",
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
		"bug7146377"
	};
	$loadClass(bug7146377$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7146377$1);
	});
	return class$;
}

$Class* bug7146377$1::class$ = nullptr;