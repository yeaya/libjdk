#include <bug8034955$1.h>
#include <bug8034955.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

void bug8034955$1::init$() {
}

void bug8034955$1::run() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	$$nc(frame->getContentPane())->add($$new($JLabel, "<html>a<title>"_s));
	frame->pack();
	frame->setVisible(true);
}

bug8034955$1::bug8034955$1() {
}

$Class* bug8034955$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8034955$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8034955$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8034955",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8034955$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8034955$1",
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
		"bug8034955"
	};
	$loadClass(bug8034955$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8034955$1);
	});
	return class$;
}

$Class* bug8034955$1::class$ = nullptr;