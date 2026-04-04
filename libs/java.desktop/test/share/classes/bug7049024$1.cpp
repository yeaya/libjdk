#include <bug7049024$1.h>
#include <bug7049024.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug7049024 = ::bug7049024;
using $FlowLayout = ::java::awt::FlowLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;

void bug7049024$1::init$() {
}

void bug7049024$1::run() {
	$useLocalObjectStack();
	$init($bug7049024);
	$assignStatic($bug7049024::frame, $new($JFrame, "Test"_s));
	$assignStatic($bug7049024::textField, $new($JTextField, "test selection for textfield"_s));
	$assignStatic($bug7049024::button, $new($JButton, "To compete the focus"_s));
	$bug7049024::frame->setLayout($$new($FlowLayout));
	$$nc($nc($bug7049024::frame)->getContentPane())->add($bug7049024::textField);
	$$nc($nc($bug7049024::frame)->getContentPane())->add($bug7049024::button);
	$nc($bug7049024::frame)->pack();
	$nc($bug7049024::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug7049024::frame)->setVisible(true);
}

bug7049024$1::bug7049024$1() {
}

$Class* bug7049024$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7049024$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7049024$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7049024",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7049024$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7049024$1",
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
		"bug7049024"
	};
	$loadClass(bug7049024$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7049024$1);
	});
	return class$;
}

$Class* bug7049024$1::class$ = nullptr;