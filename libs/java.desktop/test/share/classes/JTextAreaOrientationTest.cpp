#include <JTextAreaOrientationTest.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
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
using $ImageIO = ::javax::imageio::ImageIO;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class JTextAreaOrientationTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(JTextAreaOrientationTest$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(JTextAreaOrientationTest$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaOrientationTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaOrientationTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaOrientationTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$main$0::class$ = nullptr;

class JTextAreaOrientationTest$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($ComponentOrientation* orientation) {
		$set(this, orientation, orientation);
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$test$1(orientation);
	}
	$ComponentOrientation* orientation = nullptr;
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"orientation", "Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC, $field(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, orientation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC, $method(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, init$, void, $ComponentOrientation*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaOrientationTest$$Lambda$lambda$test$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaOrientationTest$$Lambda$lambda$test$1$1);
	});
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$1$1::class$ = nullptr;

class JTextAreaOrientationTest$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$test$2();
	}
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaOrientationTest$$Lambda$lambda$test$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaOrientationTest$$Lambda$lambda$test$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaOrientationTest$$Lambda$lambda$test$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$test$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaOrientationTest$$Lambda$lambda$test$2$2);
	});
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$2$2::class$ = nullptr;

class JTextAreaOrientationTest$$Lambda$lambda$test$3$3 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$test$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$test$3();
	}
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaOrientationTest$$Lambda$lambda$test$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaOrientationTest$$Lambda$lambda$test$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaOrientationTest$$Lambda$lambda$test$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$test$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaOrientationTest$$Lambda$lambda$test$3$3);
	});
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$3$3::class$ = nullptr;

$JFrame* JTextAreaOrientationTest::frame = nullptr;
$Rectangle* JTextAreaOrientationTest::bounds = nullptr;

void JTextAreaOrientationTest::init$() {
}

bool JTextAreaOrientationTest::compareBufferedImages($BufferedImage* bufferedImage0, $BufferedImage* bufferedImage1) {
	int32_t width = $nc(bufferedImage0)->getWidth();
	int32_t height = bufferedImage0->getHeight();
	bool var$0 = width != $nc(bufferedImage1)->getWidth();
	if (var$0 || height != bufferedImage1->getHeight()) {
		return false;
	}
	for (int32_t y = 0; y < height; ++y) {
		for (int32_t x = 0; x < width; ++x) {
			int32_t var$1 = bufferedImage0->getRGB(x, y);
			if (var$1 != bufferedImage1->getRGB(x, y)) {
				return false;
			}
		}
	}
	return true;
}

void JTextAreaOrientationTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void JTextAreaOrientationTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(laf)->getClassName())}));
			$SwingUtilities::invokeAndWait($$new(JTextAreaOrientationTest$$Lambda$lambda$main$0, laf));
			$init($ComponentOrientation);
			$var($BufferedImage, left, test($ComponentOrientation::LEFT_TO_RIGHT));
			$ImageIO::write(left, "png"_s, $$new($File, "JTextAreaTest-left.png"_s));
			$var($BufferedImage, right, test($ComponentOrientation::RIGHT_TO_LEFT));
			$ImageIO::write(right, "png"_s, $$new($File, "JTextAreaTest-right.png"_s));
			if (compareBufferedImages(left, right)) {
				$throwNew($RuntimeException, "Orientation change is not effected"_s);
			}
		}
	}
}

$BufferedImage* JTextAreaOrientationTest::test($ComponentOrientation* orientation) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, orientation));
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait($$new(JTextAreaOrientationTest$$Lambda$lambda$test$2$2));
	$init(JTextAreaOrientationTest);
	$var($BufferedImage, img, $new($BufferedImage, $nc(JTextAreaOrientationTest::bounds)->width, $nc(JTextAreaOrientationTest::bounds)->height, 1));
	$var($Graphics, g, img->getGraphics());
	$nc(JTextAreaOrientationTest::frame)->paint(g);
	$nc(g)->dispose();
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait($$new(JTextAreaOrientationTest$$Lambda$lambda$test$3$3));
	return img;
}

void JTextAreaOrientationTest::lambda$test$3() {
	$init(JTextAreaOrientationTest);
	$nc(JTextAreaOrientationTest::frame)->dispose();
}

void JTextAreaOrientationTest::lambda$test$2() {
	$init(JTextAreaOrientationTest);
	$assignStatic(JTextAreaOrientationTest::bounds, $nc(JTextAreaOrientationTest::frame)->getBounds());
}

void JTextAreaOrientationTest::lambda$test$1($ComponentOrientation* orientation) {
	$useLocalObjectStack();
	$init(JTextAreaOrientationTest);
	$assignStatic(JTextAreaOrientationTest::frame, $new($JFrame, "Swing JTextArea component"_s));
	$var($JTextArea, ta, $new($JTextArea));
	ta->setText("Swing JTextArea component"_s);
	ta->setName("jtext"_s);
	ta->setComponentOrientation(orientation);
	$$nc($nc(JTextAreaOrientationTest::frame)->getContentPane())->add(ta);
	$nc(JTextAreaOrientationTest::frame)->setSize(300, 100);
	$nc(JTextAreaOrientationTest::frame)->setUndecorated(true);
	$nc(JTextAreaOrientationTest::frame)->setLocationRelativeTo(nullptr);
	$nc(JTextAreaOrientationTest::frame)->setVisible(true);
}

void JTextAreaOrientationTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

JTextAreaOrientationTest::JTextAreaOrientationTest() {
}

$Class* JTextAreaOrientationTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JTextAreaOrientationTest$$Lambda$lambda$main$0")) {
			return JTextAreaOrientationTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("JTextAreaOrientationTest$$Lambda$lambda$test$1$1")) {
			return JTextAreaOrientationTest$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals("JTextAreaOrientationTest$$Lambda$lambda$test$2$2")) {
			return JTextAreaOrientationTest$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
		if (name->equals("JTextAreaOrientationTest$$Lambda$lambda$test$3$3")) {
			return JTextAreaOrientationTest$$Lambda$lambda$test$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JTextAreaOrientationTest, frame)},
		{"bounds", "Ljava/awt/Rectangle;", nullptr, $STATIC, $staticField(JTextAreaOrientationTest, bounds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaOrientationTest, init$, void)},
		{"compareBufferedImages", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextAreaOrientationTest, compareBufferedImages, bool, $BufferedImage*, $BufferedImage*)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaOrientationTest, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$test$1", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaOrientationTest, lambda$test$1, void, $ComponentOrientation*)},
		{"lambda$test$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaOrientationTest, lambda$test$2, void)},
		{"lambda$test$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaOrientationTest, lambda$test$3, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextAreaOrientationTest, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTextAreaOrientationTest, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "(Ljava/awt/ComponentOrientation;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $staticMethod(JTextAreaOrientationTest, test, $BufferedImage*, $ComponentOrientation*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTextAreaOrientationTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTextAreaOrientationTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaOrientationTest);
	});
	return class$;
}

$Class* JTextAreaOrientationTest::class$ = nullptr;