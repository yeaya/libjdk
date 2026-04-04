#include <JMenuItemsTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BLUE
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class JMenuItemsTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JMenuItemsTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JMenuItemsTest::lambda$main$0();
	}
};
$Class* JMenuItemsTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMenuItemsTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JMenuItemsTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JMenuItemsTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JMenuItemsTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMenuItemsTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* JMenuItemsTest$$Lambda$lambda$main$0::class$ = nullptr;

$JFrame* JMenuItemsTest::mainFrame = nullptr;
$JMenu* JMenuItemsTest::disabledMenu = nullptr;
$JMenuItem* JMenuItemsTest::disabledMenuItem = nullptr;

void JMenuItemsTest::init$() {
	createUI();
}

void JMenuItemsTest::createUI() {
	$assignStatic(JMenuItemsTest::mainFrame, $new($JFrame, "Test"_s));
	$assignStatic(JMenuItemsTest::disabledMenu, $new($JMenu, "Disabled Menu"_s));
	$init($Color);
	JMenuItemsTest::disabledMenu->setForeground($Color::BLUE);
	$nc(JMenuItemsTest::disabledMenu)->setEnabled(false);
	$assignStatic(JMenuItemsTest::disabledMenuItem, $new($JMenuItem, "Disabled MenuItem"_s));
	JMenuItemsTest::disabledMenuItem->setForeground($Color::BLUE);
	$nc(JMenuItemsTest::disabledMenuItem)->setEnabled(false);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assign(menuBar, $new($JMenuBar));
	menuBar->add(JMenuItemsTest::disabledMenu);
	menuBar->add(JMenuItemsTest::disabledMenuItem);
	$nc(JMenuItemsTest::mainFrame)->add(menuBar);
	$nc(JMenuItemsTest::mainFrame)->pack();
	$nc(JMenuItemsTest::mainFrame)->setVisible(true);
}

void JMenuItemsTest::dispose() {
	$nc(JMenuItemsTest::mainFrame)->dispose();
}

void JMenuItemsTest::testDisabledStateOfJMenu() {
	$useLocalObjectStack();
	$var($Rectangle, rect, $nc(JMenuItemsTest::disabledMenu)->getBounds());
	$var($BufferedImage, image, $new($BufferedImage, $nc(rect)->width, $nc(rect)->height, $BufferedImage::TYPE_INT_ARGB));
	$nc(JMenuItemsTest::disabledMenu)->paint($(image->getGraphics()));
	int32_t y = image->getHeight() / 2;
	for (int32_t x = 0; x < image->getWidth(); ++x) {
		$var($Color, c, $new($Color, image->getRGB(x, y)));
		if (c->equals($Color::BLUE)) {
			dispose();
			$throwNew($RuntimeException, "JMenu Disabled State not Valid."_s);
		}
	}
}

void JMenuItemsTest::testDisabledStateOfJMenuItem() {
	$useLocalObjectStack();
	$var($Rectangle, rect, $nc(JMenuItemsTest::disabledMenuItem)->getBounds());
	$var($BufferedImage, image, $new($BufferedImage, $nc(rect)->width, $nc(rect)->height, $BufferedImage::TYPE_INT_ARGB));
	$nc(JMenuItemsTest::disabledMenuItem)->paint($(image->getGraphics()));
	int32_t y = image->getHeight() / 2;
	for (int32_t x = 0; x < image->getWidth(); ++x) {
		$var($Color, c, $new($Color, image->getRGB(x, y)));
		if (c->equals($Color::BLUE)) {
			dispose();
			$throwNew($RuntimeException, "JMenuItem Disabled State not Valid."_s);
		}
	}
}

void JMenuItemsTest::main($StringArray* args) {
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new(JMenuItemsTest$$Lambda$lambda$main$0));
}

void JMenuItemsTest::lambda$main$0() {
	try {
		$var(JMenuItemsTest, obj, $new(JMenuItemsTest));
		obj->testDisabledStateOfJMenu();
		obj->testDisabledStateOfJMenuItem();
		obj->dispose();
	} catch ($Exception& ex) {
		$throw(ex);
	}
}

JMenuItemsTest::JMenuItemsTest() {
}

$Class* JMenuItemsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JMenuItemsTest$$Lambda$lambda$main$0")) {
			return JMenuItemsTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemsTest, mainFrame)},
		{"disabledMenu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemsTest, disabledMenu)},
		{"disabledMenuItem", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemsTest, disabledMenuItem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMenuItemsTest, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE, $method(JMenuItemsTest, createUI, void)},
		{"dispose", "()V", nullptr, $PRIVATE, $method(JMenuItemsTest, dispose, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JMenuItemsTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JMenuItemsTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testDisabledStateOfJMenu", "()V", nullptr, $PRIVATE, $method(JMenuItemsTest, testDisabledStateOfJMenu, void)},
		{"testDisabledStateOfJMenuItem", "()V", nullptr, $PRIVATE, $method(JMenuItemsTest, testDisabledStateOfJMenuItem, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JMenuItemsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMenuItemsTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMenuItemsTest);
	});
	return class$;
}

$Class* JMenuItemsTest::class$ = nullptr;