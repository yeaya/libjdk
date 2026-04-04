#include <bug6495408$1.h>
#include <bug6495408.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LEFT

using $bug6495408 = ::bug6495408;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;

void bug6495408$1::init$() {
}

void bug6495408$1::run() {
	$init($bug6495408);
	$assignStatic($bug6495408::frame, $new($JFrame));
	$bug6495408::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6495408::tabbedPane, $new($JTabbedPane));
	$bug6495408::tabbedPane->setTabPlacement($JTabbedPane::LEFT);
	$nc($bug6495408::tabbedPane)->addTab("Hello"_s, nullptr);
	$nc($bug6495408::frame)->add($bug6495408::tabbedPane);
	$nc($bug6495408::frame)->setSize(400, 400);
	$nc($bug6495408::frame)->setLocationRelativeTo(nullptr);
	$nc($bug6495408::frame)->setVisible(true);
}

bug6495408$1::bug6495408$1() {
}

$Class* bug6495408$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6495408$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6495408$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6495408",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6495408$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6495408$1",
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
		"bug6495408"
	};
	$loadClass(bug6495408$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6495408$1);
	});
	return class$;
}

$Class* bug6495408$1::class$ = nullptr;