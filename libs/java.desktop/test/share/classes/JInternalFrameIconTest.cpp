#include <JInternalFrameIconTest.h>
#include <JInternalFrameIconTest$1.h>
#include <JInternalFrameIconTest$2.h>
#include <JInternalFrameIconTest$3.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Math.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $JInternalFrameIconTest$1 = ::JInternalFrameIconTest$1;
using $JInternalFrameIconTest$2 = ::JInternalFrameIconTest$2;
using $JInternalFrameIconTest$3 = ::JInternalFrameIconTest$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ImageIO = ::javax::imageio::ImageIO;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$JFrame* JInternalFrameIconTest::frame = nullptr;
$JDesktopPane* JInternalFrameIconTest::desktopPane = nullptr;
$JInternalFrame* JInternalFrameIconTest::internalFrame = nullptr;
$ImageIcon* JInternalFrameIconTest::titleImageIcon = nullptr;
$Icon* JInternalFrameIconTest::titleIcon = nullptr;
$BufferedImage* JInternalFrameIconTest::imageIconImage = nullptr;
$BufferedImage* JInternalFrameIconTest::iconImage = nullptr;
$Robot* JInternalFrameIconTest::robot = nullptr;
$volatile($String*) JInternalFrameIconTest::errorString = nullptr;

void JInternalFrameIconTest::init$() {
}

void JInternalFrameIconTest::main($StringArray* args) {
	$init(JInternalFrameIconTest);
	$useLocalObjectStack();
	$assignStatic(JInternalFrameIconTest::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				executeCase($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
	if (!""_s->equals(JInternalFrameIconTest::errorString)) {
		$throwNew($RuntimeException, $$str({"Error Log:\n"_s, JInternalFrameIconTest::errorString}));
	}
}

void JInternalFrameIconTest::executeCase($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	if (tryLookAndFeel(lookAndFeelString)) {
		createImageIconUI(lookAndFeelString);
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		getImageIconBufferedImage();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		cleanUp();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		createIconUI(lookAndFeelString);
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		getIconBufferedImage();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		cleanUp();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		testIfSame(lookAndFeelString);
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
	}
}

void JInternalFrameIconTest::createImageIconUI($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	$SwingUtilities::invokeAndWait($$new($JInternalFrameIconTest$1, lookAndFeelString));
}

void JInternalFrameIconTest::createIconUI($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	$SwingUtilities::invokeAndWait($$new($JInternalFrameIconTest$2, lookAndFeelString));
}

void JInternalFrameIconTest::getImageIconBufferedImage() {
	$init(JInternalFrameIconTest);
	$useLocalObjectStack();
	$var($Point, point, $nc(JInternalFrameIconTest::internalFrame)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(JInternalFrameIconTest::internalFrame)->getBounds());
	int32_t var$0 = $nc(point)->x + $nc($($nc(JInternalFrameIconTest::internalFrame)->getInsets()))->left;
	int32_t var$1 = point->y + $nc($(JInternalFrameIconTest::internalFrame->getInsets()))->top;
	int32_t var$2 = $nc(JInternalFrameIconTest::titleImageIcon)->getIconWidth();
	$var($Rectangle, captureRect, $new($Rectangle, var$0, var$1, var$2, JInternalFrameIconTest::titleImageIcon->getIconHeight()));
	$nc($System::out)->println($$str({"imageicon captureRect "_s, captureRect}));
	$assignStatic(JInternalFrameIconTest::imageIconImage, $nc(JInternalFrameIconTest::robot)->createScreenCapture(captureRect));
}

void JInternalFrameIconTest::getIconBufferedImage() {
	$init(JInternalFrameIconTest);
	$useLocalObjectStack();
	$var($Point, point, $nc(JInternalFrameIconTest::internalFrame)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(JInternalFrameIconTest::internalFrame)->getBounds());
	int32_t var$0 = $nc(point)->x + $nc($($nc(JInternalFrameIconTest::internalFrame)->getInsets()))->left;
	int32_t var$1 = point->y + $nc($(JInternalFrameIconTest::internalFrame->getInsets()))->top;
	int32_t var$2 = $nc(JInternalFrameIconTest::titleIcon)->getIconWidth();
	$var($Rectangle, captureRect, $new($Rectangle, var$0, var$1, var$2, JInternalFrameIconTest::titleIcon->getIconHeight()));
	$nc($System::out)->println($$str({"icon captureRect "_s, captureRect}));
	$assignStatic(JInternalFrameIconTest::iconImage, $nc(JInternalFrameIconTest::robot)->createScreenCapture(captureRect));
}

void JInternalFrameIconTest::testIfSame($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	$useLocalObjectStack();
	if (!bufferedImagesEqual(JInternalFrameIconTest::imageIconImage, JInternalFrameIconTest::iconImage)) {
		$ImageIO::write(JInternalFrameIconTest::imageIconImage, "png"_s, $$new($File, "imageicon-fail.png"_s));
		$ImageIO::write(JInternalFrameIconTest::iconImage, "png"_s, $$new($File, "iconImage-fail.png"_s));
		$var($String, error, $str({"["_s, lookAndFeelString, "] : ERROR: icon and imageIcon not same."_s}));
		$plusAssignStatic(JInternalFrameIconTest::errorString, error);
		$nc($System::err)->println(error);
	} else {
		$nc($System::out)->println($$str({"["_s, lookAndFeelString, "] : SUCCESS: icon and imageIcon same."_s}));
	}
}

bool JInternalFrameIconTest::bufferedImagesEqual($BufferedImage* bufferedImage1, $BufferedImage* bufferedImage2) {
	$init(JInternalFrameIconTest);
	bool flag = true;
	int32_t var$1 = $nc(bufferedImage1)->getWidth();
	bool var$0 = var$1 == $nc(bufferedImage2)->getWidth();
	if (var$0) {
		int32_t var$2 = bufferedImage1->getHeight();
		var$0 = var$2 == bufferedImage2->getHeight();
	}
	if (var$0) {
		int32_t colorTolerance = 25;
		double var$3 = 0.1 * bufferedImage1->getWidth();
		int32_t mismatchTolerance = $cast(int32_t, (var$3 * bufferedImage1->getHeight()));
		int32_t mismatchCounter = 0;
		for (int32_t x = 0; x < bufferedImage1->getWidth(); ++x) {
			for (int32_t y = 0; y < bufferedImage1->getHeight(); ++y) {
				int32_t color1 = bufferedImage1->getRGB(x, y);
				int32_t red1 = (color1 >> 16) & 0xff;
				int32_t green1 = (color1 >> 8) & 0xff;
				int32_t blue1 = (color1) & 0xff;
				int32_t color2 = bufferedImage2->getRGB(x, y);
				int32_t red2 = (color2 >> 16) & 0xff;
				int32_t green2 = (color2 >> 8) & 0xff;
				int32_t blue2 = (color2) & 0xff;
				if (red1 != red2 || green1 != green2 || blue1 != blue2) {
					++mismatchCounter;
					bool var$5 = $Math::abs(red1 - red2) > colorTolerance;
					bool var$4 = var$5 || ($Math::abs(green1 - green2) > colorTolerance);
					if (var$4 || ($Math::abs(blue1 - blue2) > colorTolerance)) {
						flag = false;
					}
				}
			}
		}
		if (mismatchCounter > mismatchTolerance) {
			flag = false;
		}
	} else {
		$nc($System::err)->println("ERROR: size is different"_s);
		flag = false;
	}
	return flag;
}

void JInternalFrameIconTest::cleanUp() {
	$init(JInternalFrameIconTest);
	$SwingUtilities::invokeAndWait($$new($JInternalFrameIconTest$3));
}

bool JInternalFrameIconTest::tryLookAndFeel($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	bool var$0 = $nc(lookAndFeelString)->contains("motif"_s);
	if (var$0 || lookAndFeelString->contains("gtk"_s)) {
		return false;
	}
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException& e) {
		return false;
	} catch ($ClassNotFoundException& e) {
		return false;
	} catch ($InstantiationException& e) {
		return false;
	} catch ($IllegalAccessException& e) {
		return false;
	}
	return true;
}

void JInternalFrameIconTest::clinit$($Class* clazz) {
	$assignStatic(JInternalFrameIconTest::errorString, ""_s);
}

JInternalFrameIconTest::JInternalFrameIconTest() {
}

$Class* JInternalFrameIconTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, frame)},
		{"desktopPane", "Ljavax/swing/JDesktopPane;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, desktopPane)},
		{"internalFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, internalFrame)},
		{"titleImageIcon", "Ljavax/swing/ImageIcon;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, titleImageIcon)},
		{"titleIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, titleIcon)},
		{"imageIconImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, imageIconImage)},
		{"iconImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, iconImage)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, robot)},
		{"errorString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JInternalFrameIconTest, errorString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JInternalFrameIconTest, init$, void)},
		{"bufferedImagesEqual", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, bufferedImagesEqual, bool, $BufferedImage*, $BufferedImage*)},
		{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, cleanUp, void), "java.lang.Exception"},
		{"createIconUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, createIconUI, void, $String*), "java.lang.Exception"},
		{"createImageIconUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, createImageIconUI, void, $String*), "java.lang.Exception"},
		{"executeCase", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, executeCase, void, $String*), "java.lang.Exception"},
		{"getIconBufferedImage", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, getIconBufferedImage, void), "java.lang.Exception"},
		{"getImageIconBufferedImage", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, getImageIconBufferedImage, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JInternalFrameIconTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testIfSame", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, testIfSame, void, $String*), "java.lang.Exception"},
		{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(JInternalFrameIconTest, tryLookAndFeel, bool, $String*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JInternalFrameIconTest$3", nullptr, nullptr, 0},
		{"JInternalFrameIconTest$2", nullptr, nullptr, 0},
		{"JInternalFrameIconTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JInternalFrameIconTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JInternalFrameIconTest$3,JInternalFrameIconTest$2,JInternalFrameIconTest$2$1,JInternalFrameIconTest$1,JInternalFrameIconTest$1$1"
	};
	$loadClass(JInternalFrameIconTest, name, initialize, &classInfo$$, JInternalFrameIconTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JInternalFrameIconTest);
	});
	return class$;
}

$Class* JInternalFrameIconTest::class$ = nullptr;