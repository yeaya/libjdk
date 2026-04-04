#include <bug4247996.h>
#include <bug4247996$1.h>
#include <bug4247996$2.h>
#include <bug4247996$3.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/lang/Error.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH
#undef TRUE

using $PointArray = $Array<::java::awt::Point>;
using $bug4247996$1 = ::bug4247996$1;
using $bug4247996$2 = ::bug4247996$2;
using $bug4247996$3 = ::bug4247996$3;
using $BorderLayout = ::java::awt::BorderLayout;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$JButton* bug4247996::button = nullptr;
$JToggleButton* bug4247996::toogleButton = nullptr;

void bug4247996::init$() {
}

void bug4247996::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new($bug4247996$1));
	robot->waitForIdle();
	$var($Point, point, getButtonCenter());
	robot->mouseMove($nc(point)->x, $nc(point)->y);
	robot->waitForIdle();
	checkButtonsSize();
}

void bug4247996::checkButtonsSize() {
	$SwingUtilities::invokeAndWait($$new($bug4247996$2));
}

$Point* bug4247996::getButtonCenter() {
	$useLocalObjectStack();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug4247996$3, result));
	return result->get(0);
}

void bug4247996::createAndShowGUI() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame, "Test"_s));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setSize(200, 200);
	$var($JButton, rButton, $new($JButton, "Rollover"_s));
	rButton->setRolloverEnabled(true);
	$var($JToolBar, nrToolbar, $new($JToolBar));
	nrToolbar->add(rButton);
	nrToolbar->remove(rButton);
	if (!rButton->isRolloverEnabled()) {
		$throwNew($Error, "Failed (bug 4260485): toolbar overrode button\'s rollover property"_s);
	}
	$var($JToolBar, rToolbar, $new($JToolBar));
	rToolbar->putClientProperty("JToolBar.isRollover"_s, $Boolean::TRUE);
	$init(bug4247996);
	rToolbar->add($assignStatic(bug4247996::button, $new($JButton, "Test"_s)));
	rToolbar->add($assignStatic(bug4247996::toogleButton, $new($JToggleButton, "Test"_s)));
	$init($BorderLayout);
	$$nc(frame->getContentPane())->add(rToolbar, $BorderLayout::NORTH);
	frame->setVisible(true);
}

bug4247996::bug4247996() {
}

$Class* bug4247996::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug4247996, button)},
		{"toogleButton", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug4247996, toogleButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4247996, init$, void)},
		{"checkButtonsSize", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4247996, checkButtonsSize, void), "java.lang.Exception"},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4247996, createAndShowGUI, void)},
		{"getButtonCenter", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4247996, getButtonCenter, $Point*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4247996, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4247996$3", nullptr, nullptr, 0},
		{"bug4247996$2", nullptr, nullptr, 0},
		{"bug4247996$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4247996",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4247996$3,bug4247996$2,bug4247996$1"
	};
	$loadClass(bug4247996, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4247996);
	});
	return class$;
}

$Class* bug4247996::class$ = nullptr;