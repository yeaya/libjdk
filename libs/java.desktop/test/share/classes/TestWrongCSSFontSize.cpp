#include <TestWrongCSSFontSize.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Consumer.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef TEXT
#undef TRUE
#undef TYPE_INT_ARGB
#undef W3C_LENGTH_UNITS

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Consumer = ::java::util::function::Consumer;
using $ImageIO = ::javax::imageio::ImageIO;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $Document = ::javax::swing::text::Document;
using $GlyphView = ::javax::swing::text::GlyphView;
using $View = ::javax::swing::text::View;

class TestWrongCSSFontSize$$Lambda$assertFontSize : public $Consumer {
	$class(TestWrongCSSFontSize$$Lambda$assertFontSize, $NO_CLASS_INIT, $Consumer)
public:
	void init$(TestWrongCSSFontSize* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* child) override {
		$nc(inst$)->assertFontSize($cast($GlyphView, child));
	}
	TestWrongCSSFontSize* inst$ = nullptr;
};
$Class* TestWrongCSSFontSize$$Lambda$assertFontSize::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$assertFontSize, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestWrongCSSFontSize;)V", nullptr, $PUBLIC, $method(TestWrongCSSFontSize$$Lambda$assertFontSize, init$, void, TestWrongCSSFontSize*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TestWrongCSSFontSize$$Lambda$assertFontSize, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestWrongCSSFontSize$$Lambda$assertFontSize",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestWrongCSSFontSize$$Lambda$assertFontSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestWrongCSSFontSize$$Lambda$assertFontSize);
	});
	return class$;
}
$Class* TestWrongCSSFontSize$$Lambda$assertFontSize::class$ = nullptr;

class TestWrongCSSFontSize$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestWrongCSSFontSize* test, $AtomicReference* failure, $StringArray* args) {
		$set(this, test, test);
		$set(this, failure, failure);
		$set(this, args, args);
	}
	virtual void run() override {
		TestWrongCSSFontSize::lambda$main$0(test, failure, args);
	}
	TestWrongCSSFontSize* test = nullptr;
	$AtomicReference* failure = nullptr;
	$StringArray* args = nullptr;
};
$Class* TestWrongCSSFontSize$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "LTestWrongCSSFontSize;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, test)},
		{"failure", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, failure)},
		{"args", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestWrongCSSFontSize;Ljava/util/concurrent/atomic/AtomicReference;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, init$, void, TestWrongCSSFontSize*, $AtomicReference*, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestWrongCSSFontSize$$Lambda$lambda$main$0$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestWrongCSSFontSize$$Lambda$lambda$main$0$1);
	});
	return class$;
}
$Class* TestWrongCSSFontSize$$Lambda$lambda$main$0$1::class$ = nullptr;

$String* TestWrongCSSFontSize::TEXT = nullptr;

void TestWrongCSSFontSize::init$(bool w3cUnits) {
	this->w3cUnits = w3cUnits;
}

void TestWrongCSSFontSize::setUp() {
	$set(this, editor, $new($JEditorPane));
	this->editor->setContentType("text/html"_s);
	if (this->w3cUnits) {
		$nc(this->editor)->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $Boolean::TRUE);
	}
	$nc(this->editor)->setText(TestWrongCSSFontSize::TEXT);
	$nc(this->editor)->setSize($($nc(this->editor)->getPreferredSize()));
}

void TestWrongCSSFontSize::run() {
	$useLocalObjectStack();
	$var($View, var$0, $$sure($TextUI, $nc(this->editor)->getUI())->getRootView(this->editor));
	int32_t count = forEachTextRun(var$0, $$new(TestWrongCSSFontSize$$Lambda$assertFontSize, this));
	if (count != TestWrongCSSFontSize::expectedAssertions) {
		$throwNew($AssertionError, $$of($str({(this->w3cUnits ? "w3cUnits - "_s : ""_s), "assertion count expected ["_s, $$str(TestWrongCSSFontSize::expectedAssertions), "] but found ["_s, $$str(count), "]"_s})));
	}
}

int32_t TestWrongCSSFontSize::forEachTextRun($View* view, $Consumer* action) {
	$useLocalObjectStack();
	int32_t tested = 0;
	for (int32_t i = 0; i < $nc(view)->getViewCount(); ++i) {
		$var($View, child, view->getView(i));
		if ($instanceOf($GlyphView, child)) {
			if ($equals($$nc($$nc(child->getElement())->getAttributes())->getAttribute("CR"_s), $Boolean::TRUE)) {
				continue;
			}
			$nc(action)->accept($cast($GlyphView, child));
			tested += 1;
		} else {
			tested += forEachTextRun(child, action);
		}
	}
	return tested;
}

void TestWrongCSSFontSize::assertFontSize($GlyphView* child) {
	$useLocalObjectStack();
	printSource(child);
	int32_t actualFontSize = $$nc($nc(child)->getFont())->getSize();
	if (actualFontSize != TestWrongCSSFontSize::expectedFontSize) {
		$throwNew($AssertionError, $$of($str({(this->w3cUnits ? "w3cUnits - "_s : ""_s), "font size expected ["_s, $$str(TestWrongCSSFontSize::expectedFontSize), "] but found ["_s, $$str(actualFontSize), "]"_s})));
	}
}

void TestWrongCSSFontSize::printSource($View* textRun) {
	$useLocalObjectStack();
	try {
		$var($OutputStream, var$0, $System::out);
		$var($Document, var$1, $nc(this->editor)->getDocument());
		int32_t var$2 = $nc(textRun)->getStartOffset();
		int32_t var$3 = textRun->getEndOffset();
		$$nc($nc(this->editor)->getEditorKit())->write(var$0, var$1, var$2, var$3 - textRun->getStartOffset());
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void TestWrongCSSFontSize::captureImage($Component* comp, $String* suffix) {
	$init(TestWrongCSSFontSize);
	$useLocalObjectStack();
	try {
		int32_t var$0 = $nc(comp)->getWidth();
		$var($BufferedImage, capture, $new($BufferedImage, var$0, comp->getHeight(), $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics, g, capture->getGraphics());
		comp->paint(g);
		$nc(g)->dispose();
		$ImageIO::write(capture, "png"_s, $$new($File, $$str({$(TestWrongCSSFontSize::class$->getSimpleName()), suffix, ".png"_s})));
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void TestWrongCSSFontSize::main($StringArray* args) {
	$init(TestWrongCSSFontSize);
	$useLocalObjectStack();
	$var(TestWrongCSSFontSize, test, $new(TestWrongCSSFontSize, argW3CUnits(args)));
	$var($AtomicReference, failure, $new($AtomicReference));
	$SwingUtilities::invokeAndWait($$new(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, test, failure, args));
	if (failure->get() != nullptr) {
		$throw($$cast($Throwable, failure->get()));
	}
}

bool TestWrongCSSFontSize::argW3CUnits($StringArray* args) {
	$init(TestWrongCSSFontSize);
	return $$nc($Arrays::asList(args))->contains("-w3cUnits"_s);
}

bool TestWrongCSSFontSize::argCapture($StringArray* args) {
	$init(TestWrongCSSFontSize);
	return $$nc($Arrays::asList(args))->contains("-capture"_s);
}

void TestWrongCSSFontSize::lambda$main$0(TestWrongCSSFontSize* test, $AtomicReference* failure, $StringArray* args) {
	$init(TestWrongCSSFontSize);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(test)->setUp();
			test->run();
		} catch ($Throwable& e) {
			$nc(failure)->set(e);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$var($String, suffix, $nc(test)->w3cUnits ? "-w3cUnits"_s : ""_s);
		if ($nc(failure)->get() != nullptr) {
			captureImage(test->editor, $$str({suffix, "-failure"_s}));
		} else if (argCapture(args)) {
			captureImage(test->editor, $$str({suffix, "-success"_s}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

TestWrongCSSFontSize::TestWrongCSSFontSize() {
}

void TestWrongCSSFontSize::clinit$($Class* clazz) {
	$assignStatic(TestWrongCSSFontSize::TEXT, "<html><head><style>body { font-size: 14 }div span { font-size: 150% }span { font-size: 200% }h2, .h2 { font-size: 150% }</style></head><body><h2>Foo</h2><div class=h2>Bar</div><ol class=h2><li>Baz</li></ol><table class=h2><tr><td>Qux</td></tr></table><table><thead class=h2><tr><th>Qux</th></tr></thead></table><table><tr class=h2><td>Qux</td></tr></table><table><tr><td class=h2>Qux</td></tr></table><div><span>Quux</span></div></body></html>"_s);
}

$Class* TestWrongCSSFontSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestWrongCSSFontSize$$Lambda$assertFontSize")) {
			return TestWrongCSSFontSize$$Lambda$assertFontSize::load$(name, initialize);
		}
		if (name->equals("TestWrongCSSFontSize$$Lambda$lambda$main$0$1")) {
			return TestWrongCSSFontSize$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestWrongCSSFontSize, TEXT)},
		{"expectedFontSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestWrongCSSFontSize, expectedFontSize)},
		{"expectedAssertions", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestWrongCSSFontSize, expectedAssertions)},
		{"w3cUnits", "Z", nullptr, $PRIVATE | $FINAL, $field(TestWrongCSSFontSize, w3cUnits)},
		{"editor", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(TestWrongCSSFontSize, editor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(TestWrongCSSFontSize, init$, void, bool)},
		{"argCapture", "([Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(TestWrongCSSFontSize, argCapture, bool, $StringArray*)},
		{"argW3CUnits", "([Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(TestWrongCSSFontSize, argW3CUnits, bool, $StringArray*)},
		{"assertFontSize", "(Ljavax/swing/text/GlyphView;)V", nullptr, $PRIVATE, $method(TestWrongCSSFontSize, assertFontSize, void, $GlyphView*)},
		{"captureImage", "(Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestWrongCSSFontSize, captureImage, void, $Component*, $String*)},
		{"forEachTextRun", "(Ljavax/swing/text/View;Ljava/util/function/Consumer;)I", "(Ljavax/swing/text/View;Ljava/util/function/Consumer<Ljavax/swing/text/GlyphView;>;)I", $PRIVATE, $method(TestWrongCSSFontSize, forEachTextRun, int32_t, $View*, $Consumer*)},
		{"lambda$main$0", "(LTestWrongCSSFontSize;Ljava/util/concurrent/atomic/AtomicReference;[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestWrongCSSFontSize, lambda$main$0, void, TestWrongCSSFontSize*, $AtomicReference*, $StringArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestWrongCSSFontSize, main, void, $StringArray*), "java.lang.Throwable"},
		{"printSource", "(Ljavax/swing/text/View;)V", nullptr, $PRIVATE, $method(TestWrongCSSFontSize, printSource, void, $View*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestWrongCSSFontSize, run, void)},
		{"setUp", "()V", nullptr, $PUBLIC, $virtualMethod(TestWrongCSSFontSize, setUp, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestWrongCSSFontSize",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestWrongCSSFontSize, name, initialize, &classInfo$$, TestWrongCSSFontSize::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestWrongCSSFontSize);
	});
	return class$;
}

$Class* TestWrongCSSFontSize::class$ = nullptr;