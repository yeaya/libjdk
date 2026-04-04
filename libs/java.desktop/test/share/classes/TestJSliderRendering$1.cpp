#include <TestJSliderRendering$1.h>
#include <TestJSliderRendering.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL

using $TestJSliderRendering = ::TestJSliderRendering;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSlider = ::javax::swing::JSlider;

void TestJSliderRendering$1::init$() {
}

void TestJSliderRendering$1::run() {
	$var($JPanel, panel, $new($JPanel));
	$init($TestJSliderRendering);
	$assignStatic($TestJSliderRendering::slider, $new($JSlider, $JSlider::HORIZONTAL, 0, 100, 50));
	panel->add($TestJSliderRendering::slider);
	$assignStatic($TestJSliderRendering::frame, $new($JFrame, "TestJSliderRendering"_s));
	$TestJSliderRendering::frame->add(panel);
	$nc($TestJSliderRendering::frame)->setSize(200, 200);
	$nc($TestJSliderRendering::frame)->setAlwaysOnTop(true);
	$nc($TestJSliderRendering::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJSliderRendering::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestJSliderRendering::frame)->setVisible(true);
}

TestJSliderRendering$1::TestJSliderRendering$1() {
}

$Class* TestJSliderRendering$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestJSliderRendering$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJSliderRendering$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJSliderRendering",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJSliderRendering$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJSliderRendering$1",
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
		"TestJSliderRendering"
	};
	$loadClass(TestJSliderRendering$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJSliderRendering$1);
	});
	return class$;
}

$Class* TestJSliderRendering$1::class$ = nullptr;