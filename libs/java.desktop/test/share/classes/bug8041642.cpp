#include <bug8041642.h>
#include <bug8041642$1.h>
#include <bug8041642$2.h>
#include <bug8041642$3.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef GREEN
#undef NORTH
#undef WHITE

using $bug8041642$1 = ::bug8041642$1;
using $bug8041642$2 = ::bug8041642$2;
using $bug8041642$3 = ::bug8041642$3;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JProgressBar = ::javax::swing::JProgressBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$JFrame* bug8041642::frame = nullptr;
$Point* bug8041642::point = nullptr;
$JProgressBar* bug8041642::bar = nullptr;

void bug8041642::init$() {
}

void bug8041642::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug8041642$1));
		$var($Robot, robot, $new($Robot));
		robot->delay(300);
		$SwingUtilities::invokeAndWait($$new($bug8041642$2));
		$init(bug8041642);
		$var($Color, color, robot->getPixelColor($nc(bug8041642::point)->x + 1, $nc(bug8041642::point)->y + 7));
		$nc($System::out)->println(color);
		bool var$2 = $nc(color)->getGreen() < 150;
		bool var$1 = var$2 || color->getBlue() > 30;
		if (var$1 || color->getRed() > 200) {
			$throwNew($RuntimeException, "Bar padding color should be green"_s);
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new($bug8041642$3));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$nc($System::out)->println("ok"_s);
}

void bug8041642::setup($JFrame* frame) {
	$useLocalObjectStack();
	$init(bug8041642);
	$assignStatic(bug8041642::bar, $new($JProgressBar));
	$init($Color);
	bug8041642::bar->setBackground($Color::WHITE);
	$nc(bug8041642::bar)->setValue(2);
	$init($BorderLayout);
	$$nc($nc(frame)->getContentPane())->add(bug8041642::bar, $BorderLayout::NORTH);
	$$nc(frame->getContentPane())->setBackground($Color::GREEN);
	frame->setSize(200, 150);
	frame->setLocation(100, 100);
	frame->setVisible(true);
}

bug8041642::bug8041642() {
}

$Class* bug8041642::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8041642, frame)},
		{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(bug8041642, point)},
		{"bar", "Ljavax/swing/JProgressBar;", nullptr, $PRIVATE | $STATIC, $staticField(bug8041642, bar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8041642, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8041642, main, void, $StringArray*), "java.lang.Exception"},
		{"setup", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $staticMethod(bug8041642, setup, void, $JFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041642$3", nullptr, nullptr, 0},
		{"bug8041642$2", nullptr, nullptr, 0},
		{"bug8041642$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8041642",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8041642$3,bug8041642$2,bug8041642$1"
	};
	$loadClass(bug8041642, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041642);
	});
	return class$;
}

$Class* bug8041642::class$ = nullptr;