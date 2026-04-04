#include <ImageViewTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <jcpp.h>

#undef ABSOLUTE_FILE_PATH
#undef BLUE
#undef EXIT_ON_CLOSE
#undef HEIGHT
#undef WIDTH

using $JEditorPaneArray = $Array<::javax::swing::JEditorPane>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;
using $TextUI = ::javax::swing::plaf::TextUI;

class ImageViewTest$$Lambda$lambda$test$0 : public $Runnable {
	$class(ImageViewTest$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JEditorPane* editorPane, int32_t WIDTH, int32_t HEIGHT) {
		$set(this, editorPane, editorPane);
		this->WIDTH = WIDTH;
		this->HEIGHT = HEIGHT;
	}
	virtual void run() override {
		ImageViewTest::lambda$test$0(editorPane, WIDTH, HEIGHT);
	}
	$JEditorPane* editorPane = nullptr;
	int32_t WIDTH = 0;
	int32_t HEIGHT = 0;
};
$Class* ImageViewTest$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$0, editorPane)},
		{"WIDTH", "I", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$0, WIDTH)},
		{"HEIGHT", "I", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$0, HEIGHT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;II)V", nullptr, $PUBLIC, $method(ImageViewTest$$Lambda$lambda$test$0, init$, void, $JEditorPane*, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ImageViewTest$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ImageViewTest$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageViewTest$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageViewTest$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* ImageViewTest$$Lambda$lambda$test$0::class$ = nullptr;

class ImageViewTest$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(ImageViewTest$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JEditorPane* editorPane, $Robot* r, int32_t WIDTH, int32_t HEIGHT) {
		$set(this, editorPane, editorPane);
		$set(this, r, r);
		this->WIDTH = WIDTH;
		this->HEIGHT = HEIGHT;
	}
	virtual void run() override {
		ImageViewTest::lambda$test$1(editorPane, r, WIDTH, HEIGHT);
	}
	$JEditorPane* editorPane = nullptr;
	$Robot* r = nullptr;
	int32_t WIDTH = 0;
	int32_t HEIGHT = 0;
};
$Class* ImageViewTest$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$1$1, editorPane)},
		{"r", "Ljava/awt/Robot;", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$1$1, r)},
		{"WIDTH", "I", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$1$1, WIDTH)},
		{"HEIGHT", "I", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$test$1$1, HEIGHT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;Ljava/awt/Robot;II)V", nullptr, $PUBLIC, $method(ImageViewTest$$Lambda$lambda$test$1$1, init$, void, $JEditorPane*, $Robot*, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ImageViewTest$$Lambda$lambda$test$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ImageViewTest$$Lambda$lambda$test$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageViewTest$$Lambda$lambda$test$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageViewTest$$Lambda$lambda$test$1$1);
	});
	return class$;
}
$Class* ImageViewTest$$Lambda$lambda$test$1$1::class$ = nullptr;

class ImageViewTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(ImageViewTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JEditorPaneArray* editorPanes, $String* ABSOLUTE_FILE_PATH) {
		$set(this, editorPanes, editorPanes);
		$set(this, ABSOLUTE_FILE_PATH, ABSOLUTE_FILE_PATH);
	}
	virtual void run() override {
		ImageViewTest::lambda$main$2(editorPanes, ABSOLUTE_FILE_PATH);
	}
	$JEditorPaneArray* editorPanes = nullptr;
	$String* ABSOLUTE_FILE_PATH = nullptr;
};
$Class* ImageViewTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"editorPanes", "[Ljavax/swing/JEditorPane;", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$main$2$2, editorPanes)},
		{"ABSOLUTE_FILE_PATH", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ImageViewTest$$Lambda$lambda$main$2$2, ABSOLUTE_FILE_PATH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljavax/swing/JEditorPane;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ImageViewTest$$Lambda$lambda$main$2$2, init$, void, $JEditorPaneArray*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ImageViewTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ImageViewTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageViewTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageViewTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* ImageViewTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$JFrame* ImageViewTest::f = nullptr;

void ImageViewTest::init$() {
}

void ImageViewTest::test($Robot* r, $JEditorPane* editorPane, int32_t WIDTH, int32_t HEIGHT) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(ImageViewTest$$Lambda$lambda$test$0, editorPane, WIDTH, HEIGHT));
	$nc(r)->waitForIdle();
	r->delay(500);
	$SwingUtilities::invokeAndWait($$new(ImageViewTest$$Lambda$lambda$test$1$1, editorPane, r, WIDTH, HEIGHT));
	r->waitForIdle();
}

void ImageViewTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(ImageViewTest);
	$beforeCallerSensitive();
	$var($String, ABSOLUTE_FILE_PATH, $$nc(ImageViewTest::class$->getResource("circle.png"_s))->getPath());
	$nc($System::out)->println(ABSOLUTE_FILE_PATH);
	$var($Robot, r, $new($Robot));
	$var($JEditorPaneArray, editorPanes, $new($JEditorPaneArray, 11));
	$SwingUtilities::invokeAndWait($$new(ImageViewTest$$Lambda$lambda$main$2$2, editorPanes, ABSOLUTE_FILE_PATH));
	r->waitForIdle();
	$System::out->println("Test with only height set to 200"_s);
	test(r, editorPanes->get(0), 200, 200);
	$System::out->println("Test with only width set to 200"_s);
	test(r, editorPanes->get(1), 200, 200);
	$System::out->println("Test with both of them set"_s);
	test(r, editorPanes->get(2), 200, 200);
	$System::out->println("Test with none of them set to 200"_s);
	test(r, editorPanes->get(3), 200, 200);
	$System::out->println("Test with only width set to 100"_s);
	test(r, editorPanes->get(4), 100, 100);
	$System::out->println("Test with only height set to 100"_s);
	test(r, editorPanes->get(5), 100, 100);
	$System::out->println("Test with both width and height set to 100"_s);
	test(r, editorPanes->get(6), 100, 100);
	$System::out->println("Test with only width set to 50"_s);
	test(r, editorPanes->get(7), 50, 50);
	$System::out->println("Test with only height set to 50"_s);
	test(r, editorPanes->get(8), 50, 50);
	$System::out->println("Test with only width set to 300"_s);
	test(r, editorPanes->get(9), 300, 300);
	$System::out->println("Test with only height set to 300"_s);
	test(r, editorPanes->get(10), 300, 300);
	$System::out->println("Test Passed."_s);
}

void ImageViewTest::lambda$main$2($JEditorPaneArray* editorPanes, $String* ABSOLUTE_FILE_PATH) {
	$useLocalObjectStack();
	$nc(editorPanes)->set(0, $$new($JEditorPane, "text/html"_s, $$str({"<img height=\"200\" src=\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(1, $$new($JEditorPane, "text/html"_s, $$str({"<img width=\"200\" src=\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(2, $$new($JEditorPane, "text/html"_s, $$str({"<img width=\"200\" height=\"200\" src=\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(3, $$new($JEditorPane, "text/html"_s, $$str({"<img src=\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(4, $$new($JEditorPane, "text/html"_s, $$str({"<img width=\"100\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(5, $$new($JEditorPane, "text/html"_s, $$str({"<img height=\"100\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(6, $$new($JEditorPane, "text/html"_s, $$str({"<img width=\"100\" height=\"100\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(7, $$new($JEditorPane, "text/html"_s, $$str({"<img width=\"50\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(8, $$new($JEditorPane, "text/html"_s, $$str({"<img height=\"50\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(9, $$new($JEditorPane, "text/html"_s, $$str({"<img width=\"300\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
	editorPanes->set(10, $$new($JEditorPane, "text/html"_s, $$str({"<img height=\"300\" src =\"file:///"_s, ABSOLUTE_FILE_PATH, "\""_s})));
}

void ImageViewTest::lambda$test$1($JEditorPane* editorPane, $Robot* r, int32_t WIDTH, int32_t HEIGHT) {
	$useLocalObjectStack();
	$var($Insets, insets, $nc(editorPane)->getInsets());
	$var($Point, loc, editorPane->getLocationOnScreen());
	$init($Color);
	$var($Color, blue, $Color::BLUE);
	int32_t offset = 10;
	$var($Color, center, $nc(r)->getPixelColor($nc(loc)->x + $nc(insets)->left + WIDTH / 2, $nc(loc)->y + $nc(insets)->top + HEIGHT / 2));
	$var($Color, left, r->getPixelColor(loc->x + insets->left + offset, loc->y + insets->top + HEIGHT / 2));
	$var($Color, right, r->getPixelColor(loc->x + insets->left + WIDTH - offset, loc->y + insets->top + HEIGHT / 2));
	$var($Color, bottom, r->getPixelColor(loc->x + insets->left + WIDTH / 2, loc->y + insets->top + HEIGHT - offset));
	$var($Color, top, r->getPixelColor(loc->x + insets->left + WIDTH / 2, loc->y + insets->top + offset));
	$init(ImageViewTest);
	$nc(ImageViewTest::f)->dispose();
	$nc($System::out)->println($$str({"center color: "_s, center}));
	$System::out->println($$str({"left color: "_s, left}));
	$System::out->println($$str({"right color: "_s, right}));
	$System::out->println($$str({"bottom color: "_s, bottom}));
	$System::out->println($$str({"top color: "_s, top}));
	$System::out->println();
	bool var$3 = $nc(blue)->equals(center);
	bool var$2 = var$3 && blue->equals(left);
	bool var$1 = var$2 && blue->equals(right);
	bool var$0 = var$1 && blue->equals(top);
	if (!(var$0 && blue->equals(bottom))) {
		$throwNew($RuntimeException, "Test failed: Image not scaled correctly"_s);
	}
}

void ImageViewTest::lambda$test$0($JEditorPane* editorPane, int32_t WIDTH, int32_t HEIGHT) {
	$init(ImageViewTest);
	$assignStatic(ImageViewTest::f, $new($JFrame));
	$nc(editorPane)->setEditable(false);
	$nc(ImageViewTest::f)->add(editorPane);
	$nc(ImageViewTest::f)->setSize(WIDTH + 20, HEIGHT + 40);
	$nc(ImageViewTest::f)->setLocationRelativeTo(nullptr);
	$nc(ImageViewTest::f)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$$sure($TextUI, editorPane->getUI())->getPreferredSize(editorPane);
	$nc(ImageViewTest::f)->setVisible(true);
}

ImageViewTest::ImageViewTest() {
}

$Class* ImageViewTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ImageViewTest$$Lambda$lambda$test$0")) {
			return ImageViewTest$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals("ImageViewTest$$Lambda$lambda$test$1$1")) {
			return ImageViewTest$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals("ImageViewTest$$Lambda$lambda$main$2$2")) {
			return ImageViewTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ImageViewTest, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageViewTest, init$, void)},
		{"lambda$main$2", "([Ljavax/swing/JEditorPane;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ImageViewTest, lambda$main$2, void, $JEditorPaneArray*, $String*)},
		{"lambda$test$0", "(Ljavax/swing/JEditorPane;II)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ImageViewTest, lambda$test$0, void, $JEditorPane*, int32_t, int32_t)},
		{"lambda$test$1", "(Ljavax/swing/JEditorPane;Ljava/awt/Robot;II)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ImageViewTest, lambda$test$1, void, $JEditorPane*, $Robot*, int32_t, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageViewTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/awt/Robot;Ljavax/swing/JEditorPane;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ImageViewTest, test, void, $Robot*, $JEditorPane*, int32_t, int32_t), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ImageViewTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageViewTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageViewTest);
	});
	return class$;
}

$Class* ImageViewTest::class$ = nullptr;