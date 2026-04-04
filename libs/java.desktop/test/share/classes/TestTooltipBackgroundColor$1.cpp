#include <TestTooltipBackgroundColor$1.h>
#include <TestTooltipBackgroundColor$1$1.h>
#include <TestTooltipBackgroundColor$1$2.h>
#include <TestTooltipBackgroundColor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ContainerListener.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $TestTooltipBackgroundColor = ::TestTooltipBackgroundColor;
using $TestTooltipBackgroundColor$1$1 = ::TestTooltipBackgroundColor$1$1;
using $TestTooltipBackgroundColor$1$2 = ::TestTooltipBackgroundColor$1$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;

void TestTooltipBackgroundColor$1::init$() {
}

void TestTooltipBackgroundColor$1::run() {
	$useLocalObjectStack();
	$var($JPanel, panel, $new($JPanel));
	$init($TestTooltipBackgroundColor);
	$assignStatic($TestTooltipBackgroundColor::label, $new($TestTooltipBackgroundColor$1$1, this, "Label with tooltip"_s));
	$TestTooltipBackgroundColor::label->setToolTipText("<html> This is tooltip <br><br><br><br></html>"_s);
	$init($BorderLayout);
	panel->add($TestTooltipBackgroundColor::label, $BorderLayout::CENTER);
	$assignStatic($TestTooltipBackgroundColor::frame, $new($JFrame, "TestTooltipBackgroundColor"_s));
	$TestTooltipBackgroundColor::frame->add(panel);
	$nc($TestTooltipBackgroundColor::frame)->setSize(200, 200);
	$nc($TestTooltipBackgroundColor::frame)->setAlwaysOnTop(true);
	$nc($TestTooltipBackgroundColor::frame)->setLocationRelativeTo(nullptr);
	$nc($TestTooltipBackgroundColor::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JLayeredPane, layeredPane, $cast($JLayeredPane, $TestTooltipBackgroundColor::findSubComponent($TestTooltipBackgroundColor::frame, "JLayeredPane"_s)));
	$nc(layeredPane)->addContainerListener($$new($TestTooltipBackgroundColor$1$2, this));
	$nc($TestTooltipBackgroundColor::frame)->setVisible(true);
}

TestTooltipBackgroundColor$1::TestTooltipBackgroundColor$1() {
}

$Class* TestTooltipBackgroundColor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestTooltipBackgroundColor$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTooltipBackgroundColor$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestTooltipBackgroundColor",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
		{"TestTooltipBackgroundColor$1$2", nullptr, nullptr, 0},
		{"TestTooltipBackgroundColor$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestTooltipBackgroundColor$1",
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
		"TestTooltipBackgroundColor"
	};
	$loadClass(TestTooltipBackgroundColor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTooltipBackgroundColor$1);
	});
	return class$;
}

$Class* TestTooltipBackgroundColor$1::class$ = nullptr;