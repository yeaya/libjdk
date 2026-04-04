#include <bug8001470$1.h>
#include <bug8001470.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8001470 = ::bug8001470;
using $GridLayout = ::java::awt::GridLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;

void bug8001470$1::init$() {
}

void bug8001470$1::run() {
	$useLocalObjectStack();
	$init($bug8001470);
	$assignStatic($bug8001470::frame, $new($JFrame, "JTextField Test"_s));
	$bug8001470::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, container, $cast($JPanel, $nc($bug8001470::frame)->getContentPane()));
	$nc(container)->setLayout($$new($GridLayout, 2, 1));
	$assignStatic($bug8001470::textField1, $new($JTextField, u"ก"_s));
	$assignStatic($bug8001470::textField2, $new($JTextField, u"ఁ"_s));
	container->add($bug8001470::textField1);
	container->add($bug8001470::textField2);
	$nc($bug8001470::frame)->setVisible(true);
	$nc($bug8001470::frame)->pack();
}

bug8001470$1::bug8001470$1() {
}

$Class* bug8001470$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8001470$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8001470$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8001470",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8001470$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8001470$1",
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
		"bug8001470"
	};
	$loadClass(bug8001470$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8001470$1);
	});
	return class$;
}

$Class* bug8001470$1::class$ = nullptr;