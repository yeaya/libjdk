#include <TestJTextPaneBackgroundColor$1.h>
#include <TestJTextPaneBackgroundColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextPane.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestJTextPaneBackgroundColor = ::TestJTextPaneBackgroundColor;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextPane = ::javax::swing::JTextPane;

void TestJTextPaneBackgroundColor$1::init$() {
}

void TestJTextPaneBackgroundColor$1::run() {
	$var($JPanel, panel, $new($JPanel));
	$init($TestJTextPaneBackgroundColor);
	$assignStatic($TestJTextPaneBackgroundColor::textPane, $new($JTextPane));
	$TestJTextPaneBackgroundColor::textPane->setText("             "_s);
	$init($BorderLayout);
	panel->add($TestJTextPaneBackgroundColor::textPane, $BorderLayout::CENTER);
	$assignStatic($TestJTextPaneBackgroundColor::frame, $new($JFrame, "TestJTextPaneBackgroundColor"_s));
	$TestJTextPaneBackgroundColor::frame->add(panel);
	$nc($TestJTextPaneBackgroundColor::frame)->setSize(200, 200);
	$nc($TestJTextPaneBackgroundColor::frame)->setAlwaysOnTop(true);
	$nc($TestJTextPaneBackgroundColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJTextPaneBackgroundColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestJTextPaneBackgroundColor::frame)->setVisible(true);
}

TestJTextPaneBackgroundColor$1::TestJTextPaneBackgroundColor$1() {
}

$Class* TestJTextPaneBackgroundColor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestJTextPaneBackgroundColor$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJTextPaneBackgroundColor$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJTextPaneBackgroundColor",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJTextPaneBackgroundColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJTextPaneBackgroundColor$1",
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
		"TestJTextPaneBackgroundColor"
	};
	$loadClass(TestJTextPaneBackgroundColor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTextPaneBackgroundColor$1);
	});
	return class$;
}

$Class* TestJTextPaneBackgroundColor$1::class$ = nullptr;