#include <MenuItemIconTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef IMAGE_WIDTH_AND_HEIGHT
#undef LEFT
#undef RED
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class MenuItemIconTest$$Lambda$lambda$createUI$0 : public $Runnable {
	$class(MenuItemIconTest$$Lambda$lambda$createUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MenuItemIconTest::lambda$createUI$0();
	}
};
$Class* MenuItemIconTest$$Lambda$lambda$createUI$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MenuItemIconTest$$Lambda$lambda$createUI$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MenuItemIconTest$$Lambda$lambda$createUI$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MenuItemIconTest$$Lambda$lambda$createUI$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuItemIconTest$$Lambda$lambda$createUI$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuItemIconTest$$Lambda$lambda$createUI$0);
	});
	return class$;
}
$Class* MenuItemIconTest$$Lambda$lambda$createUI$0::class$ = nullptr;

$JFrame* MenuItemIconTest::frame = nullptr;
$Robot* MenuItemIconTest::robot = nullptr;
$String* MenuItemIconTest::errorMessage = nullptr;
$JMenuItem* MenuItemIconTest::menuItem = nullptr;

void MenuItemIconTest::init$() {
}

void MenuItemIconTest::main($StringArray* args) {
	$init(MenuItemIconTest);
	$assignStatic(MenuItemIconTest::robot, $new($Robot));
	$var($String, name, $UIManager::getSystemLookAndFeelClassName());
	try {
		$UIManager::setLookAndFeel(name);
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, "Test Failed"_s);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, "Test Failed"_s);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, "Test Failed"_s);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
	createUI();
	$nc(MenuItemIconTest::robot)->waitForIdle();
	executeTest();
	if (!""_s->equals(MenuItemIconTest::errorMessage)) {
		$throwNew($RuntimeException, MenuItemIconTest::errorMessage);
	}
}

void MenuItemIconTest::createUI() {
	$init(MenuItemIconTest);
	$SwingUtilities::invokeAndWait($$new(MenuItemIconTest$$Lambda$lambda$createUI$0));
}

void MenuItemIconTest::checkPixeclColor(int32_t x, int32_t y) {
	$init(MenuItemIconTest);
	$nc(MenuItemIconTest::robot)->delay(2000);
	$nc(MenuItemIconTest::robot)->mouseMove(x, y);
	$var($Color, c, $nc(MenuItemIconTest::robot)->getPixelColor(x, y));
	$init($Color);
	if ($nc($Color::RED)->equals(c)) {
		$assignStatic(MenuItemIconTest::errorMessage, "Test Failed"_s);
	}
	$nc(MenuItemIconTest::robot)->delay(5000);
	$nc(MenuItemIconTest::frame)->dispose();
}

$ImageIcon* MenuItemIconTest::createIcon() {
	$init(MenuItemIconTest);
	$useLocalObjectStack();
	$var($BufferedImage, bi, $new($BufferedImage, MenuItemIconTest::IMAGE_WIDTH_AND_HEIGHT, MenuItemIconTest::IMAGE_WIDTH_AND_HEIGHT, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, bi->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::RED);
	g->fillOval(0, 0, MenuItemIconTest::IMAGE_WIDTH_AND_HEIGHT, MenuItemIconTest::IMAGE_WIDTH_AND_HEIGHT);
	return $new($ImageIcon, bi);
}

void MenuItemIconTest::executeTest() {
	$init(MenuItemIconTest);
	$var($Point, point, $nc(MenuItemIconTest::menuItem)->getLocationOnScreen());
	checkPixeclColor($nc(point)->x + MenuItemIconTest::IMAGE_WIDTH_AND_HEIGHT / 2, $nc(point)->y + MenuItemIconTest::IMAGE_WIDTH_AND_HEIGHT / 2);
}

void MenuItemIconTest::lambda$createUI$0() {
	$init(MenuItemIconTest);
	$useLocalObjectStack();
	$assignStatic(MenuItemIconTest::frame, $new($JFrame));
	MenuItemIconTest::frame->setTitle("Test"_s);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$var($ImageIcon, icon, createIcon());
	$assignStatic(MenuItemIconTest::menuItem, $new($JMenuItem, "Command"_s, icon));
	MenuItemIconTest::menuItem->setHorizontalTextPosition($SwingConstants::LEFT);
	menuBar->add(MenuItemIconTest::menuItem);
	$nc(MenuItemIconTest::frame)->setJMenuBar(menuBar);
	$nc(MenuItemIconTest::frame)->setPreferredSize($$new($Dimension, 500, 500));
	$nc(MenuItemIconTest::frame)->pack();
	$nc(MenuItemIconTest::frame)->setVisible(true);
	$nc(MenuItemIconTest::frame)->setLocationRelativeTo(nullptr);
}

void MenuItemIconTest::clinit$($Class* clazz) {
	$assignStatic(MenuItemIconTest::errorMessage, ""_s);
}

MenuItemIconTest::MenuItemIconTest() {
}

$Class* MenuItemIconTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MenuItemIconTest$$Lambda$lambda$createUI$0")) {
			return MenuItemIconTest$$Lambda$lambda$createUI$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MenuItemIconTest, frame)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(MenuItemIconTest, robot)},
		{"errorMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MenuItemIconTest, errorMessage)},
		{"menuItem", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE | $STATIC, $staticField(MenuItemIconTest, menuItem)},
		{"IMAGE_WIDTH_AND_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuItemIconTest, IMAGE_WIDTH_AND_HEIGHT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MenuItemIconTest, init$, void)},
		{"checkPixeclColor", "(II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MenuItemIconTest, checkPixeclColor, void, int32_t, int32_t)},
		{"createIcon", "()Ljavax/swing/ImageIcon;", nullptr, $PROTECTED | $STATIC, $staticMethod(MenuItemIconTest, createIcon, $ImageIcon*)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MenuItemIconTest, createUI, void), "java.lang.Exception"},
		{"executeTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MenuItemIconTest, executeTest, void), "java.lang.Exception"},
		{"lambda$createUI$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MenuItemIconTest, lambda$createUI$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MenuItemIconTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MenuItemIconTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MenuItemIconTest, name, initialize, &classInfo$$, MenuItemIconTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MenuItemIconTest);
	});
	return class$;
}

$Class* MenuItemIconTest::class$ = nullptr;