#include <TestBadBreak.h>
#include <TestBadBreak$1.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $TestBadBreak$1 = ::TestBadBreak$1;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ImageIO = ::javax::imageio::ImageIO;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestBadBreak$$Lambda$lambda$test$0 : public $Runnable {
	$class(TestBadBreak$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBadBreak::lambda$test$0();
	}
};
$Class* TestBadBreak$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBadBreak$$Lambda$lambda$test$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBadBreak$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBadBreak$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestBadBreak$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBadBreak$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* TestBadBreak$$Lambda$lambda$test$0::class$ = nullptr;

class TestBadBreak$$Lambda$dispose$1 : public $Runnable {
	$class(TestBadBreak$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestBadBreak$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestBadBreak$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestBadBreak$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBadBreak$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBadBreak$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestBadBreak$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBadBreak$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestBadBreak$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestBadBreak::frame = nullptr;
$Robot* TestBadBreak::robot = nullptr;
$String* TestBadBreak::withCombiningDiaeresis = nullptr;
$String* TestBadBreak::withoutCombiningDiaeresis = nullptr;

void TestBadBreak::init$() {
}

void TestBadBreak::main($StringArray* args) {
	$init(TestBadBreak);
	$useLocalObjectStack();
	$assignStatic(TestBadBreak::robot, $new($Robot));
	$var($BufferedImage, bi1, $new($BufferedImage, 200, 90, 2));
	$var($BufferedImage, bi2, $new($BufferedImage, 200, 90, 2));
	test(TestBadBreak::withCombiningDiaeresis, bi1);
	test(TestBadBreak::withoutCombiningDiaeresis, bi2);
	for (int32_t x = 0; x < bi1->getWidth(); ++x) {
		for (int32_t y = 0; y < bi1->getHeight(); ++y) {
			int32_t var$0 = bi1->getRGB(x, y);
			if (var$0 != bi2->getRGB(x, y)) {
				$ImageIO::write(bi1, "png"_s, $$new($File, "image1.png"_s));
				$ImageIO::write(bi2, "png"_s, $$new($File, "image2.png"_s));
				$throwNew($RuntimeException, "Wrong color"_s);
			}
		}
	}
}

void TestBadBreak::test($String* text, $BufferedImage* i1) {
	$init(TestBadBreak);
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($TestBadBreak$1, text, i1));
	$nc(TestBadBreak::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(TestBadBreak$$Lambda$lambda$test$0));
	$nc(TestBadBreak::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(TestBadBreak$$Lambda$dispose$1, $nc(TestBadBreak::frame)));
	$nc(TestBadBreak::robot)->waitForIdle();
}

void TestBadBreak::lambda$test$0() {
	$init(TestBadBreak);
	$nc(TestBadBreak::frame)->setVisible(true);
}

TestBadBreak::TestBadBreak() {
}

void TestBadBreak::clinit$($Class* clazz) {
	$assignStatic(TestBadBreak::withCombiningDiaeresis, u"123p://.aaaaaaaaaaaaaaaaaaaaaa.123/ä"_s);
	$assignStatic(TestBadBreak::withoutCombiningDiaeresis, u"123p://.aaaaaaaaaaaaaaaaaaaaaa.123/ä"_s);
}

$Class* TestBadBreak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestBadBreak$$Lambda$lambda$test$0")) {
			return TestBadBreak$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals("TestBadBreak$$Lambda$dispose$1")) {
			return TestBadBreak$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(TestBadBreak, frame)},
		{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(TestBadBreak, robot)},
		{"withCombiningDiaeresis", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestBadBreak, withCombiningDiaeresis)},
		{"withoutCombiningDiaeresis", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestBadBreak, withoutCombiningDiaeresis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBadBreak, init$, void)},
		{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestBadBreak, lambda$test$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestBadBreak, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;Ljava/awt/image/BufferedImage;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestBadBreak, test, void, $String*, $BufferedImage*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestBadBreak$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestBadBreak",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestBadBreak$1,TestBadBreak$1$1"
	};
	$loadClass(TestBadBreak, name, initialize, &classInfo$$, TestBadBreak::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestBadBreak);
	});
	return class$;
}

$Class* TestBadBreak::class$ = nullptr;