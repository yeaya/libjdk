#include <ButtonGradientTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TYPE_INT_RGB

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics2D = ::java::awt::Graphics2D;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class ButtonGradientTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ButtonGradientTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGradientTest::lambda$main$0();
	}
};
$Class* ButtonGradientTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGradientTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGradientTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGradientTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonGradientTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGradientTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* ButtonGradientTest$$Lambda$lambda$main$0::class$ = nullptr;

class ButtonGradientTest$$Lambda$createAndShowGUI$1 : public $Runnable {
	$class(ButtonGradientTest$$Lambda$createAndShowGUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGradientTest::createAndShowGUI();
	}
};
$Class* ButtonGradientTest$$Lambda$createAndShowGUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGradientTest$$Lambda$createAndShowGUI$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGradientTest$$Lambda$createAndShowGUI$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGradientTest$$Lambda$createAndShowGUI$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonGradientTest$$Lambda$createAndShowGUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGradientTest$$Lambda$createAndShowGUI$1);
	});
	return class$;
}
$Class* ButtonGradientTest$$Lambda$createAndShowGUI$1::class$ = nullptr;

class ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2 : public $Runnable {
	$class(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($RectangleArray* rectangles) {
		$set(this, rectangles, rectangles);
	}
	virtual void run() override {
		ButtonGradientTest::lambda$getButtonBounds$1(rectangles);
	}
	$RectangleArray* rectangles = nullptr;
};
$Class* ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rectangles", "[Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, rectangles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, init$, void, $RectangleArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2);
	});
	return class$;
}
$Class* ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::class$ = nullptr;

$JFrame* ButtonGradientTest::frame = nullptr;
$JButton* ButtonGradientTest::button = nullptr;
$List* ButtonGradientTest::images = nullptr;
$Robot* ButtonGradientTest::robot = nullptr;

void ButtonGradientTest::init$() {
}

void ButtonGradientTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$init(ButtonGradientTest);
		$assignStatic(ButtonGradientTest::robot, $new($Robot));
		testGradient();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(ButtonGradientTest$$Lambda$lambda$main$0));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ButtonGradientTest::testGradient() {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(ButtonGradientTest$$Lambda$createAndShowGUI$1));
	$init(ButtonGradientTest);
	$nc(ButtonGradientTest::robot)->waitForIdle();
	$nc(ButtonGradientTest::robot)->delay(500);
	$var($Rectangle, rect, getButtonBounds());
	$var($List, gradient, $cast($List, $UIManager::get("Button.gradient"_s)));
	float ratio = $$sure($Number, $nc(gradient)->get(0))->floatValue();
	$var($Color, c1, $cast($Color, gradient->get(2)));
	$var($Color, c2, $cast($Color, gradient->get(3)));
	int32_t mid = $cast(int32_t, (ratio * $nc(rect)->height));
	$var($Color, gradientColor, getGradientColor(rect->width, mid, c1, c2));
	getImageFromRobot();
	int32_t x = rect->x + rect->width / 2;
	int32_t y = rect->y + mid / 2;
	$var($Color, buttonColor, $new($Color, $$cast($BufferedImage, $nc(ButtonGradientTest::images)->get(1))->getRGB((x), (y))));
	if (!similarColors(buttonColor, gradientColor)) {
		$throwNew($RuntimeException, "Button gradient is changed!"_s);
	}
}

void ButtonGradientTest::createAndShowGUI() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$init(ButtonGradientTest);
	$assignStatic(ButtonGradientTest::frame, $new($JFrame));
	ButtonGradientTest::frame->setSize(300, 300);
	$nc(ButtonGradientTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, $$new($BorderLayout)));
	$assignStatic(ButtonGradientTest::button, $new($JButton, ""_s));
	panel->add(ButtonGradientTest::button);
	$$nc($nc(ButtonGradientTest::frame)->getContentPane())->add(panel);
	$nc(ButtonGradientTest::frame)->setVisible(true);
}

void ButtonGradientTest::getImageFromRobot() {
	$useLocalObjectStack();
	try {
		$init(ButtonGradientTest);
		$var($Point, butLoc, $nc(ButtonGradientTest::button)->getLocationOnScreen());
		$var($Dimension, butSize, $nc(ButtonGradientTest::button)->getSize());
		int32_t var$0 = $cast(int32_t, $nc(butLoc)->getX());
		int32_t var$1 = $cast(int32_t, butLoc->getY());
		int32_t var$2 = $cast(int32_t, $nc(butSize)->getWidth());
		$var($MultiResolutionImage, multiResolutionImage, $nc(ButtonGradientTest::robot)->createMultiResolutionScreenCapture($$new($Rectangle, var$0, var$1, var$2, $cast(int32_t, butSize->getHeight()))));
		$assignStatic(ButtonGradientTest::images, $nc(multiResolutionImage)->getResolutionVariants());
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$init(ButtonGradientTest);
	if ($nc(ButtonGradientTest::images)->size() < 2) {
		$throwNew($RuntimeException, "HiDpi Image not captured - Check is this HiDpi display system?"_s);
	}
}

$Rectangle* ButtonGradientTest::getButtonBounds() {
	$useLocalObjectStack();
	$var($RectangleArray, rectangles, $new($RectangleArray, 1));
	$SwingUtilities::invokeAndWait($$new(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, rectangles));
	return rectangles->get(0);
}

$Color* ButtonGradientTest::getGradientColor(int32_t w, int32_t h, $Color* c1, $Color* c2) {
	$useLocalObjectStack();
	$var($GradientPaint, gradient, $new($GradientPaint, 0, 0, c1, 0, (float)h, c2, true));
	$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, img->createGraphics());
	$nc(g)->setPaint(gradient);
	g->fillRect(0, 0, w, h);
	g->dispose();
	return $new($Color, img->getRGB(w / 2, h / 2));
}

bool ButtonGradientTest::similarColors($Color* c1, $Color* c2) {
	int32_t var$2 = $nc(c1)->getRed();
	bool var$1 = similar(var$2, $nc(c2)->getRed());
	if (var$1) {
		int32_t var$3 = c1->getGreen();
		var$1 = similar(var$3, c2->getGreen());
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$4 = c1->getBlue();
		var$0 = similar(var$4, c2->getBlue());
	}
	return var$0;
}

bool ButtonGradientTest::similar(int32_t i1, int32_t i2) {
	return $Math::abs(i2 - i1) < 6;
}

void ButtonGradientTest::lambda$getButtonBounds$1($RectangleArray* rectangles) {
	$useLocalObjectStack();
	$init(ButtonGradientTest);
	$nc(rectangles)->set(0, $($nc(ButtonGradientTest::button)->getBounds()));
	$nc(rectangles->get(0))->setLocation($($nc(ButtonGradientTest::button)->getLocationOnScreen()));
}

void ButtonGradientTest::lambda$main$0() {
	$init(ButtonGradientTest);
	if (ButtonGradientTest::frame != nullptr) {
		ButtonGradientTest::frame->dispose();
	}
}

ButtonGradientTest::ButtonGradientTest() {
}

$Class* ButtonGradientTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ButtonGradientTest$$Lambda$lambda$main$0")) {
			return ButtonGradientTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("ButtonGradientTest$$Lambda$createAndShowGUI$1")) {
			return ButtonGradientTest$$Lambda$createAndShowGUI$1::load$(name, initialize);
		}
		if (name->equals("ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2")) {
			return ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGradientTest, frame)},
		{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGradientTest, button)},
		{"images", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(ButtonGradientTest, images)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGradientTest, robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ButtonGradientTest, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, createAndShowGUI, void)},
		{"getButtonBounds", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, getButtonBounds, $Rectangle*), "java.lang.Exception"},
		{"getGradientColor", "(IILjava/awt/Color;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, getGradientColor, $Color*, int32_t, int32_t, $Color*, $Color*)},
		{"getImageFromRobot", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, getImageFromRobot, void)},
		{"lambda$getButtonBounds$1", "([Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ButtonGradientTest, lambda$getButtonBounds$1, void, $RectangleArray*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ButtonGradientTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ButtonGradientTest, main, void, $StringArray*), "java.lang.Exception"},
		{"similar", "(II)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, similar, bool, int32_t, int32_t)},
		{"similarColors", "(Ljava/awt/Color;Ljava/awt/Color;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, similarColors, bool, $Color*, $Color*)},
		{"testGradient", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ButtonGradientTest, testGradient, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ButtonGradientTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ButtonGradientTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonGradientTest);
	});
	return class$;
}

$Class* ButtonGradientTest::class$ = nullptr;