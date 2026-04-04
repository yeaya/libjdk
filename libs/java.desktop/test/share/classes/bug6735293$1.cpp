#include <bug6735293$1.h>
#include <bug6735293.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <jcpp.h>

using $bug6735293 = ::bug6735293;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;

void bug6735293$1::init$() {
}

void bug6735293$1::run() {
	$init($bug6735293);
	$assignStatic($bug6735293::jtf, $new($JFormattedTextField));
	$assignStatic($bug6735293::nf, $new($NavigationFilter));
	$nc($bug6735293::jtf)->setText("A text message"_s);
	$assignStatic($bug6735293::jFrame, $new($JFrame));
	$$nc($nc($bug6735293::jFrame)->getContentPane())->add($bug6735293::jtf);
	$nc($bug6735293::jFrame)->pack();
	$nc($bug6735293::jFrame)->setVisible(true);
}

bug6735293$1::bug6735293$1() {
}

$Class* bug6735293$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6735293$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6735293$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6735293",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6735293$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6735293$1",
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
		"bug6735293"
	};
	$loadClass(bug6735293$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6735293$1);
	});
	return class$;
}

$Class* bug6735293$1::class$ = nullptr;