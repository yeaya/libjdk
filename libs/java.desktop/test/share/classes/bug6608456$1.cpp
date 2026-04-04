#include <bug6608456$1.h>
#include <bug6608456$TestRepaintManager.h>
#include <bug6608456.h>
#include <java/awt/Component.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $bug6608456 = ::bug6608456;
using $bug6608456$TestRepaintManager = ::bug6608456$TestRepaintManager;
using $FlowLayout = ::java::awt::FlowLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $RepaintManager = ::javax::swing::RepaintManager;

void bug6608456$1::init$() {
}

$Object* bug6608456$1::call() {
	$useLocalObjectStack();
	$RepaintManager::setCurrentManager($$new($bug6608456$TestRepaintManager));
	$var($JFrame, frame, $new($JFrame, "test"_s));
	frame->setLayout($$new($FlowLayout));
	$var($JButton, button, $new($JButton, "default"_s));
	frame->add(button);
	$assign(button, $new($JButton, "delegate"_s));
	if (!$bug6608456::registerDelegate(button, $$new($bug6608456$TestRepaintManager))) {
		return nullptr;
	}
	frame->add(button);
	frame->pack();
	frame->setVisible(true);
	return $of(button);
}

bug6608456$1::bug6608456$1() {
}

$Class* bug6608456$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6608456$1, init$, void)},
		{"call", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC, $virtualMethod(bug6608456$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6608456",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6608456$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6608456$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/JComponent;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6608456"
	};
	$loadClass(bug6608456$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6608456$1);
	});
	return class$;
}

$Class* bug6608456$1::class$ = nullptr;