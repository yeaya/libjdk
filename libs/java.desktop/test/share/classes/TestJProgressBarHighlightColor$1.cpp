#include <TestJProgressBarHighlightColor$1.h>
#include <TestJProgressBarHighlightColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestJProgressBarHighlightColor = ::TestJProgressBarHighlightColor;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JProgressBar = ::javax::swing::JProgressBar;

void TestJProgressBarHighlightColor$1::init$() {
}

void TestJProgressBarHighlightColor$1::run() {
	$var($JPanel, panel, $new($JPanel));
	$init($TestJProgressBarHighlightColor);
	$assignStatic($TestJProgressBarHighlightColor::progressBar, $new($JProgressBar));
	$TestJProgressBarHighlightColor::progressBar->setValue(50);
	$init($BorderLayout);
	panel->add($TestJProgressBarHighlightColor::progressBar, $BorderLayout::CENTER);
	$assignStatic($TestJProgressBarHighlightColor::frame, $new($JFrame, "TestSelectedTextBackgroundColor"_s));
	$TestJProgressBarHighlightColor::frame->add(panel);
	$nc($TestJProgressBarHighlightColor::frame)->setSize(200, 200);
	$nc($TestJProgressBarHighlightColor::frame)->setAlwaysOnTop(true);
	$nc($TestJProgressBarHighlightColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJProgressBarHighlightColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestJProgressBarHighlightColor::frame)->setVisible(true);
}

TestJProgressBarHighlightColor$1::TestJProgressBarHighlightColor$1() {
}

$Class* TestJProgressBarHighlightColor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestJProgressBarHighlightColor$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJProgressBarHighlightColor$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJProgressBarHighlightColor",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJProgressBarHighlightColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJProgressBarHighlightColor$1",
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
		"TestJProgressBarHighlightColor"
	};
	$loadClass(TestJProgressBarHighlightColor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJProgressBarHighlightColor$1);
	});
	return class$;
}

$Class* TestJProgressBarHighlightColor$1::class$ = nullptr;