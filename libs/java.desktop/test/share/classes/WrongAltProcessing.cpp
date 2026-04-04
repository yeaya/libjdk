#include <WrongAltProcessing.h>
#include <WrongAltProcessing$1.h>
#include <WrongAltProcessing$2.h>
#include <WrongAltProcessing$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE
#undef VK_A
#undef VK_ALT
#undef VK_B
#undef VK_C
#undef VK_D
#undef VK_TAB

using $WrongAltProcessing$1 = ::WrongAltProcessing$1;
using $WrongAltProcessing$2 = ::WrongAltProcessing$2;
using $WrongAltProcessing$3 = ::WrongAltProcessing$3;
using $Component = ::java::awt::Component;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$Robot* WrongAltProcessing::robot = nullptr;
$JFrame* WrongAltProcessing::firstFrame = nullptr;
$JFrame* WrongAltProcessing::secondFrame = nullptr;
$JTextField* WrongAltProcessing::mainFrameTf1 = nullptr;
$JTextField* WrongAltProcessing::mainFrameTf2 = nullptr;
$JTextField* WrongAltProcessing::secondFrameTf = nullptr;

void WrongAltProcessing::init$() {
}

void WrongAltProcessing::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} catch ($Exception& e) {
		return;
	}
	$SwingUtilities::invokeAndWait($$new($WrongAltProcessing$1));
	initRobot();
	$init(WrongAltProcessing);
	$nc(WrongAltProcessing::robot)->waitForIdle();
	runScript();
	$SwingUtilities::invokeLater($$new($WrongAltProcessing$2));
}

void WrongAltProcessing::verify() {
	$useLocalObjectStack();
	$var($Component, c, $$nc($DefaultKeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	$init(WrongAltProcessing);
	if (!($equals(c, WrongAltProcessing::mainFrameTf2))) {
		$throwNew($RuntimeException, "Wrong focus owner."_s);
	}
}

void WrongAltProcessing::initRobot() {
	$init(WrongAltProcessing);
	$assignStatic(WrongAltProcessing::robot, $new($Robot));
	WrongAltProcessing::robot->setAutoDelay(100);
}

void WrongAltProcessing::clickWindowsTitle($JFrame* frame) {
	$useLocalObjectStack();
	$var($Point, point, $nc(frame)->getLocationOnScreen());
	$init(WrongAltProcessing);
	int32_t var$0 = $nc(point)->x + (frame->getWidth() / 2);
	$nc(WrongAltProcessing::robot)->mouseMove(var$0, point->y + $nc($(frame->getInsets()))->top / 2);
	$nc(WrongAltProcessing::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(WrongAltProcessing::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
}

void WrongAltProcessing::runScript() {
	$init(WrongAltProcessing);
	$nc(WrongAltProcessing::robot)->delay(1000);
	printABCD();
	pressTab();
	clickWindowsTitle(WrongAltProcessing::secondFrame);
	$nc(WrongAltProcessing::robot)->delay(500);
	$nc(WrongAltProcessing::robot)->keyPress($KeyEvent::VK_ALT);
	$nc(WrongAltProcessing::robot)->keyRelease($KeyEvent::VK_ALT);
	clickWindowsTitle(WrongAltProcessing::firstFrame);
	$nc(WrongAltProcessing::robot)->waitForIdle();
}

void WrongAltProcessing::pressTab() {
	$init(WrongAltProcessing);
	$nc(WrongAltProcessing::robot)->keyPress($KeyEvent::VK_TAB);
	$nc(WrongAltProcessing::robot)->keyRelease($KeyEvent::VK_TAB);
}

void WrongAltProcessing::printABCD() {
	$init(WrongAltProcessing);
	$nc(WrongAltProcessing::robot)->keyPress($KeyEvent::VK_A);
	$nc(WrongAltProcessing::robot)->keyRelease($KeyEvent::VK_A);
	$nc(WrongAltProcessing::robot)->keyPress($KeyEvent::VK_B);
	$nc(WrongAltProcessing::robot)->keyRelease($KeyEvent::VK_B);
	$nc(WrongAltProcessing::robot)->keyPress($KeyEvent::VK_C);
	$nc(WrongAltProcessing::robot)->keyRelease($KeyEvent::VK_C);
	$nc(WrongAltProcessing::robot)->keyPress($KeyEvent::VK_D);
	$nc(WrongAltProcessing::robot)->keyRelease($KeyEvent::VK_D);
}

void WrongAltProcessing::createWindows() {
	$useLocalObjectStack();
	$init(WrongAltProcessing);
	$assignStatic(WrongAltProcessing::firstFrame, $new($JFrame, "Frame"_s));
	WrongAltProcessing::firstFrame->setLayout($$new($FlowLayout));
	$nc(WrongAltProcessing::firstFrame)->setPreferredSize($$new($Dimension, 600, 100));
	$var($JMenuBar, bar, $new($JMenuBar));
	$var($JMenu, menu, $new($JMenu, "File"_s));
	$var($JMenuItem, item, $new($JMenuItem, "Save"_s));
	$assignStatic(WrongAltProcessing::mainFrameTf1, $new($JTextField, 10));
	$assignStatic(WrongAltProcessing::mainFrameTf2, $new($JTextField, 10));
	WrongAltProcessing::mainFrameTf1->addKeyListener($$new($WrongAltProcessing$3));
	menu->add(item);
	bar->add(menu);
	$nc(WrongAltProcessing::firstFrame)->setJMenuBar(bar);
	$nc(WrongAltProcessing::firstFrame)->add(WrongAltProcessing::mainFrameTf1);
	$nc(WrongAltProcessing::firstFrame)->add(WrongAltProcessing::mainFrameTf2);
	$nc(WrongAltProcessing::firstFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(WrongAltProcessing::firstFrame)->pack();
	$assignStatic(WrongAltProcessing::secondFrame, $new($JFrame, "Frame 2"_s));
	WrongAltProcessing::secondFrame->setPreferredSize($$new($Dimension, 600, 100));
	$nc(WrongAltProcessing::secondFrame)->setLocation(0, 150);
	$assignStatic(WrongAltProcessing::secondFrameTf, $new($JTextField, 20));
	$nc(WrongAltProcessing::secondFrame)->add(WrongAltProcessing::secondFrameTf);
	$nc(WrongAltProcessing::secondFrame)->pack();
	$nc(WrongAltProcessing::secondFrame)->setVisible(true);
	$nc(WrongAltProcessing::firstFrame)->setVisible(true);
	$nc(WrongAltProcessing::mainFrameTf1)->requestFocus();
}

WrongAltProcessing::WrongAltProcessing() {
}

$Class* WrongAltProcessing::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(WrongAltProcessing, robot)},
		{"firstFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(WrongAltProcessing, firstFrame)},
		{"secondFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(WrongAltProcessing, secondFrame)},
		{"mainFrameTf1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(WrongAltProcessing, mainFrameTf1)},
		{"mainFrameTf2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(WrongAltProcessing, mainFrameTf2)},
		{"secondFrameTf", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(WrongAltProcessing, secondFrameTf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WrongAltProcessing, init$, void)},
		{"clickWindowsTitle", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(WrongAltProcessing, clickWindowsTitle, void, $JFrame*)},
		{"createWindows", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(WrongAltProcessing, createWindows, void)},
		{"initRobot", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(WrongAltProcessing, initRobot, void), "java.awt.AWTException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WrongAltProcessing, main, void, $StringArray*), "java.lang.Exception"},
		{"pressTab", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(WrongAltProcessing, pressTab, void)},
		{"printABCD", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(WrongAltProcessing, printABCD, void)},
		{"runScript", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(WrongAltProcessing, runScript, void)},
		{"verify", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(WrongAltProcessing, verify, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WrongAltProcessing$3", nullptr, nullptr, 0},
		{"WrongAltProcessing$2", nullptr, nullptr, 0},
		{"WrongAltProcessing$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WrongAltProcessing",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WrongAltProcessing$3,WrongAltProcessing$2,WrongAltProcessing$1"
	};
	$loadClass(WrongAltProcessing, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongAltProcessing);
	});
	return class$;
}

$Class* WrongAltProcessing::class$ = nullptr;