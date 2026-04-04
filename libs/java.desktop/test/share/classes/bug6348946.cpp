#include <bug6348946.h>
#include <bug6348946$1.h>
#include <bug6348946$2.h>
#include <bug6348946$3.h>
#include <bug6348946$ParameterTable.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6348946$1 = ::bug6348946$1;
using $bug6348946$2 = ::bug6348946$2;
using $bug6348946$3 = ::bug6348946$3;
using $bug6348946$ParameterTable = ::bug6348946$ParameterTable;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$JFrame* bug6348946::frame = nullptr;
$JPanel* bug6348946::panel = nullptr;
$Robot* bug6348946::robot = nullptr;
$volatile(bool) bug6348946::passed = false;

void bug6348946::init$() {
}

void bug6348946::main($StringArray* args) {
	$init(bug6348946);
	$useLocalObjectStack();
	$assignStatic(bug6348946::robot, $new($Robot));
	bug6348946::robot->setAutoDelay(10);
	$var($String, lf, "javax.swing.plaf.metal.MetalLookAndFeel"_s);
	$UIManager::setLookAndFeel(lf);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug6348946$1));
		$nc(bug6348946::robot)->waitForIdle();
		clickOnSlider();
		$nc(bug6348946::robot)->waitForIdle();
		checkResult();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		stopEDT();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug6348946::setupUI() {
	$init(bug6348946);
	$useLocalObjectStack();
	$assignStatic(bug6348946::frame, $new($JFrame));
	$assignStatic(bug6348946::panel, $new($JPanel));
	bug6348946::panel->setLayout($$new($BorderLayout));
	$nc(bug6348946::panel)->add($$new($bug6348946$ParameterTable), $BorderLayout::CENTER);
	$$nc($nc(bug6348946::frame)->getContentPane())->add(bug6348946::panel);
	$nc(bug6348946::frame)->pack();
	$nc(bug6348946::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6348946::frame)->setVisible(true);
}

void bug6348946::clickOnSlider() {
	$init(bug6348946);
	$var($Rectangle, rect, getPanelRectangle());
	double var$0 = $nc(rect)->getX();
	double clickX = var$0 + rect->getWidth() / 4;
	double var$1 = rect->getY();
	double clickY = var$1 + rect->getHeight() / 2;
	$nc(bug6348946::robot)->mouseMove($cast(int32_t, clickX), $cast(int32_t, clickY));
	$nc(bug6348946::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug6348946::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
}

void bug6348946::checkResult() {
	$init(bug6348946);
	if (bug6348946::passed) {
		$nc($System::out)->println("Test passed"_s);
	} else {
		$throwNew($RuntimeException, "The thumb moved to the right instead of the left!"_s);
	}
}

void bug6348946::stopEDT() {
	$init(bug6348946);
	$SwingUtilities::invokeLater($$new($bug6348946$2));
}

$Rectangle* bug6348946::getPanelRectangle() {
	$init(bug6348946);
	$useLocalObjectStack();
	$var($RectangleArray, result, $new($RectangleArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6348946$3, result));
	return result->get(0);
}

void bug6348946::clinit$($Class* clazz) {
	bug6348946::passed = false;
}

bug6348946::bug6348946() {
}

$Class* bug6348946::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6348946, frame)},
		{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(bug6348946, panel)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6348946, robot)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6348946, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6348946, init$, void)},
		{"checkResult", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6348946, checkResult, void)},
		{"clickOnSlider", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6348946, clickOnSlider, void), "java.lang.Exception"},
		{"getPanelRectangle", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6348946, getPanelRectangle, $Rectangle*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6348946, main, void, $StringArray*), "java.lang.Exception"},
		{"setupUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6348946, setupUI, void)},
		{"stopEDT", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6348946, stopEDT, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6348946$Editor", "bug6348946", "Editor", $PRIVATE | $STATIC},
		{"bug6348946$Renderer", "bug6348946", "Renderer", $PRIVATE | $STATIC},
		{"bug6348946$ParameterTable", "bug6348946", "ParameterTable", $PRIVATE | $STATIC},
		{"bug6348946$3", nullptr, nullptr, 0},
		{"bug6348946$2", nullptr, nullptr, 0},
		{"bug6348946$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6348946",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6348946$Editor,bug6348946$Editor$1,bug6348946$Renderer,bug6348946$ParameterTable,bug6348946$3,bug6348946$2,bug6348946$1"
	};
	$loadClass(bug6348946, name, initialize, &classInfo$$, bug6348946::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6348946);
	});
	return class$;
}

$Class* bug6348946::class$ = nullptr;