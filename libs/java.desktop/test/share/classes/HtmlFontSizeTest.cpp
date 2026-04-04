#include <HtmlFontSizeTest.h>
#include <java/awt/Dimension.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef ENGLISH
#undef TRUE
#undef W3C_LENGTH_UNITS

using $Dimension = ::java::awt::Dimension;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Locale = ::java::util::Locale;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Document = ::javax::swing::text::Document;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

class HtmlFontSizeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HtmlFontSizeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HtmlFontSizeTest::lambda$main$0();
	}
};
$Class* HtmlFontSizeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HtmlFontSizeTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HtmlFontSizeTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HtmlFontSizeTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HtmlFontSizeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HtmlFontSizeTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* HtmlFontSizeTest$$Lambda$lambda$main$0::class$ = nullptr;

$volatile($Dimension*) HtmlFontSizeTest::w3cFrameSize = nullptr;
$volatile($Dimension*) HtmlFontSizeTest::stdFrameSize = nullptr;

void HtmlFontSizeTest::init$() {
}

$Dimension* HtmlFontSizeTest::test(bool w3ccheck) {
	$useLocalObjectStack();
	$var($JEditorPane, htmlPane, $new($JEditorPane));
	htmlPane->setEditable(false);
	if (w3ccheck) {
		htmlPane->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $Boolean::TRUE);
	}
	$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
	htmlPane->setEditorKit(kit);
	$var($String, htmlString, "<html>\n<body style=\"font-family:SansSerif; font-size:16pt\">\n<p>This should be 16 pt.</p>\n</body>\n</html>"_s);
	$var($Document, doc, kit->createDefaultDocument());
	htmlPane->setDocument(doc);
	htmlPane->setText(htmlString);
	return htmlPane->getPreferredSize();
}

void HtmlFontSizeTest::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(HtmlFontSizeTest$$Lambda$lambda$main$0));
	$init(HtmlFontSizeTest);
	$nc($System::out)->println($$str({"size with W3C:"_s, HtmlFontSizeTest::w3cFrameSize}));
	$System::out->println($$str({"size without W3C:"_s, HtmlFontSizeTest::stdFrameSize}));
	float ratio = (float)$nc(HtmlFontSizeTest::w3cFrameSize)->width / (float)$nc(HtmlFontSizeTest::stdFrameSize)->width;
	$System::out->println($$str({"w3cFrameSize.width/stdFrameSize.width "_s, $$str(ratio)}));
	$init($Locale);
	if (!"1.3"_s->equals($($String::format($Locale::ENGLISH, "%.1f"_s, $$new($ObjectArray, {$($Float::valueOf(ratio))}))))) {
		$throwNew($RuntimeException, "HTML font size too large with high-DPI scaling and W3C_LENGTH_UNITS"_s);
	}
}

void HtmlFontSizeTest::lambda$main$0() {
	$init(HtmlFontSizeTest);
	$assignStatic(HtmlFontSizeTest::w3cFrameSize, test(true));
	$assignStatic(HtmlFontSizeTest::stdFrameSize, test(false));
}

HtmlFontSizeTest::HtmlFontSizeTest() {
}

$Class* HtmlFontSizeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("HtmlFontSizeTest$$Lambda$lambda$main$0")) {
			return HtmlFontSizeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"w3cFrameSize", "Ljava/awt/Dimension;", nullptr, $STATIC | $VOLATILE, $staticField(HtmlFontSizeTest, w3cFrameSize)},
		{"stdFrameSize", "Ljava/awt/Dimension;", nullptr, $STATIC | $VOLATILE, $staticField(HtmlFontSizeTest, stdFrameSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HtmlFontSizeTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HtmlFontSizeTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HtmlFontSizeTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Z)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticMethod(HtmlFontSizeTest, test, $Dimension*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HtmlFontSizeTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HtmlFontSizeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HtmlFontSizeTest);
	});
	return class$;
}

$Class* HtmlFontSizeTest::class$ = nullptr;