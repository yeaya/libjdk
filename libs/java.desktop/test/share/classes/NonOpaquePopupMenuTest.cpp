#include <NonOpaquePopupMenuTest.h>
#include <NonOpaquePopupMenuTest$1.h>
#include <NonOpaquePopupMenuTest$2.h>
#include <NonOpaquePopupMenuTest$3.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef AQUALAF
#undef BUTTON1_MASK
#undef RED

using $NonOpaquePopupMenuTest$1 = ::NonOpaquePopupMenuTest$1;
using $NonOpaquePopupMenuTest$2 = ::NonOpaquePopupMenuTest$2;
using $NonOpaquePopupMenuTest$3 = ::NonOpaquePopupMenuTest$3;
using $PointArray = $Array<::java::awt::Point>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$JMenu* NonOpaquePopupMenuTest::fileMenu = nullptr;
$String* NonOpaquePopupMenuTest::AQUALAF = nullptr;

void NonOpaquePopupMenuTest::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	$init($Color);
	$$nc(getContentPane())->setBackground($Color::RED);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(NonOpaquePopupMenuTest::fileMenu, $new($JMenu, "File"_s));
	$var($JMenuItem, menuItem, $new($JMenuItem, "New"_s));
	menuBar->add(NonOpaquePopupMenuTest::fileMenu);
	setJMenuBar(menuBar);
	$nc(NonOpaquePopupMenuTest::fileMenu)->add(menuItem);
	$$nc($nc(NonOpaquePopupMenuTest::fileMenu)->getPopupMenu())->setOpaque(false);
	setSize($$new($Dimension, 640, 480));
	setLocationRelativeTo(nullptr);
	setVisible(true);
}

void NonOpaquePopupMenuTest::main($StringArray* args) {
	$init(NonOpaquePopupMenuTest);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelInfoArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelInfoArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				$nc($System::out)->println($($nc(lookAndFeelInfo)->getClassName()));
				if (NonOpaquePopupMenuTest::AQUALAF == lookAndFeelInfo->getClassName()) {
					$System::out->println("This test scenario is not applicable for Aqua LookandFeel and hence skipping the validation"_s);
					continue;
				}
				$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				$var($Robot, robot, $new($Robot));
				robot->setAutoDelay(250);
				$SwingUtilities::invokeAndWait($$new($NonOpaquePopupMenuTest$1));
				robot->waitForIdle();
				$var($Point, p, getMenuClickPoint());
				robot->mouseMove($nc(p)->x, $nc(p)->y);
				robot->mousePress($InputEvent::BUTTON1_MASK);
				robot->mouseRelease($InputEvent::BUTTON1_MASK);
				robot->waitForIdle();
				if (isParentOpaque()) {
					$throwNew($RuntimeException, "Popup menu parent is opaque"_s);
				}
			}
		}
	}
}

bool NonOpaquePopupMenuTest::isParentOpaque() {
	$init(NonOpaquePopupMenuTest);
	$useLocalObjectStack();
	$var($booleans, result, $new($booleans, 1));
	$SwingUtilities::invokeAndWait($$new($NonOpaquePopupMenuTest$2, result));
	return result->get(0);
}

$Point* NonOpaquePopupMenuTest::getMenuClickPoint() {
	$init(NonOpaquePopupMenuTest);
	$useLocalObjectStack();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($NonOpaquePopupMenuTest$3, result));
	return result->get(0);
}

NonOpaquePopupMenuTest::NonOpaquePopupMenuTest() {
}

void NonOpaquePopupMenuTest::clinit$($Class* clazz) {
	$assignStatic(NonOpaquePopupMenuTest::AQUALAF, "com.apple.laf.AquaLookAndFeel"_s);
}

$Class* NonOpaquePopupMenuTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileMenu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(NonOpaquePopupMenuTest, fileMenu)},
		{"AQUALAF", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonOpaquePopupMenuTest, AQUALAF)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonOpaquePopupMenuTest, init$, void)},
		{"getMenuClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(NonOpaquePopupMenuTest, getMenuClickPoint, $Point*), "java.lang.Exception"},
		{"isParentOpaque", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(NonOpaquePopupMenuTest, isParentOpaque, bool), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonOpaquePopupMenuTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonOpaquePopupMenuTest$3", nullptr, nullptr, 0},
		{"NonOpaquePopupMenuTest$2", nullptr, nullptr, 0},
		{"NonOpaquePopupMenuTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonOpaquePopupMenuTest",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NonOpaquePopupMenuTest$3,NonOpaquePopupMenuTest$2,NonOpaquePopupMenuTest$1"
	};
	$loadClass(NonOpaquePopupMenuTest, name, initialize, &classInfo$$, NonOpaquePopupMenuTest::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(NonOpaquePopupMenuTest));
	});
	return class$;
}

$Class* NonOpaquePopupMenuTest::class$ = nullptr;