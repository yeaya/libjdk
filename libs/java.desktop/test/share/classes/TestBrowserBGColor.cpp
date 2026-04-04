#include <TestBrowserBGColor.h>
#include <TestBrowserBGColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <jcpp.h>

#undef ACTIVATED
#undef DO_NOTHING_ON_CLOSE
#undef WHITE

using $TestBrowserBGColor$1 = ::TestBrowserBGColor$1;
using $Color = ::java::awt::Color;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;

class TestBrowserBGColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestBrowserBGColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBrowserBGColor::lambda$main$0();
	}
};
$Class* TestBrowserBGColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBrowserBGColor$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBrowserBGColor$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBrowserBGColor$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestBrowserBGColor$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBrowserBGColor$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestBrowserBGColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestBrowserBGColor$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestBrowserBGColor$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Robot* r) {
		$set(this, r, r);
	}
	virtual void run() override {
		TestBrowserBGColor::lambda$main$1(r);
	}
	$Robot* r = nullptr;
};
$Class* TestBrowserBGColor$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"r", "Ljava/awt/Robot;", nullptr, $PUBLIC, $field(TestBrowserBGColor$$Lambda$lambda$main$1$1, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC, $method(TestBrowserBGColor$$Lambda$lambda$main$1$1, init$, void, $Robot*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBrowserBGColor$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBrowserBGColor$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestBrowserBGColor$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBrowserBGColor$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestBrowserBGColor$$Lambda$lambda$main$1$1::class$ = nullptr;

$String* TestBrowserBGColor::toString() {
	 return this->$JFrame::toString();
}

int32_t TestBrowserBGColor::hashCode() {
	 return this->$JFrame::hashCode();
}

bool TestBrowserBGColor::equals(Object$* arg0) {
	 return this->$JFrame::equals(arg0);
}

$Object* TestBrowserBGColor::clone() {
	 return this->$JFrame::clone();
}

void TestBrowserBGColor::finalize() {
	this->$JFrame::finalize();
}

TestBrowserBGColor* TestBrowserBGColor::b = nullptr;
$JEditorPane* TestBrowserBGColor::browser = nullptr;

void TestBrowserBGColor::main($StringArray* args) {
	$init(TestBrowserBGColor);
	$useLocalObjectStack();
	$var($Robot, r, $new($Robot));
	$SwingUtilities::invokeAndWait($$new(TestBrowserBGColor$$Lambda$lambda$main$0));
	r->waitForIdle();
	r->delay(500);
	$SwingUtilities::invokeAndWait($$new(TestBrowserBGColor$$Lambda$lambda$main$1$1, r));
}

void TestBrowserBGColor::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	$set(this, htmlDoc, " <!DOCTYPE html> <html><style> body { background: #FFF; } </style> <head> <title>Title</title> </head> <body> </body> </html>"_s);
	$assignStatic(TestBrowserBGColor::browser, $new($JEditorPane, "text/html"_s, this->htmlDoc));
	TestBrowserBGColor::browser->setEditable(false);
	$nc(TestBrowserBGColor::browser)->addHyperlinkListener(this);
	$var($JScrollPane, scroll, $new($JScrollPane, TestBrowserBGColor::browser));
	$$nc(getContentPane())->add(scroll);
}

void TestBrowserBGColor::hyperlinkUpdate($HyperlinkEvent* e) {
	$useLocalObjectStack();
	$init($HyperlinkEvent$EventType);
	if ($nc(e)->getEventType() == $HyperlinkEvent$EventType::ACTIVATED) {
		$var($JEditorPane, pane, $cast($JEditorPane, e->getSource()));
		if ($instanceOf($HTMLFrameHyperlinkEvent, e)) {
			$var($HTMLFrameHyperlinkEvent, evt, $cast($HTMLFrameHyperlinkEvent, e));
			$var($HTMLDocument, doc, $cast($HTMLDocument, $nc(pane)->getDocument()));
			$nc(doc)->processHTMLFrameHyperlinkEvent(evt);
		} else {
			try {
				$nc(pane)->setPage($(e->getURL()));
			} catch ($Throwable& t) {
				t->printStackTrace();
			}
		}
	}
}

void TestBrowserBGColor::lambda$main$1($Robot* r) {
	$init(TestBrowserBGColor);
	$useLocalObjectStack();
	$var($Insets, insets, $nc(TestBrowserBGColor::browser)->getInsets());
	$var($Point, loc, $nc(TestBrowserBGColor::browser)->getLocationOnScreen());
	$var($Color, c, $nc(r)->getPixelColor($nc(loc)->x + $nc(insets)->left + 100, $nc(loc)->y + $nc(insets)->top + 100));
	$nc(TestBrowserBGColor::b)->dispose();
	$init($Color);
	if (!$nc(c)->equals($Color::WHITE)) {
		$throwNew($RuntimeException, "webpage background color wrong"_s);
	}
}

void TestBrowserBGColor::lambda$main$0() {
	$init(TestBrowserBGColor);
	$useLocalObjectStack();
	try {
		$assignStatic(TestBrowserBGColor::b, $new(TestBrowserBGColor));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$nc(TestBrowserBGColor::b)->setSize($($$nc($Toolkit::getDefaultToolkit())->getScreenSize()));
	$nc(TestBrowserBGColor::b)->setVisible(true);
	$nc(TestBrowserBGColor::b)->setDefaultCloseOperation($JFrame::DO_NOTHING_ON_CLOSE);
	$nc(TestBrowserBGColor::b)->addWindowListener($$new($TestBrowserBGColor$1));
}

TestBrowserBGColor::TestBrowserBGColor() {
}

$Class* TestBrowserBGColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestBrowserBGColor$$Lambda$lambda$main$0")) {
			return TestBrowserBGColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestBrowserBGColor$$Lambda$lambda$main$1$1")) {
			return TestBrowserBGColor$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"b", "LTestBrowserBGColor;", nullptr, $PRIVATE | $STATIC, $staticField(TestBrowserBGColor, b)},
		{"browser", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestBrowserBGColor, browser)},
		{"htmlDoc", "Ljava/lang/String;", nullptr, 0, $field(TestBrowserBGColor, htmlDoc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBrowserBGColor, init$, void), "java.io.IOException,java.net.MalformedURLException"},
		{"hyperlinkUpdate", "(Ljavax/swing/event/HyperlinkEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestBrowserBGColor, hyperlinkUpdate, void, $HyperlinkEvent*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestBrowserBGColor, lambda$main$0, void)},
		{"lambda$main$1", "(Ljava/awt/Robot;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestBrowserBGColor, lambda$main$1, void, $Robot*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestBrowserBGColor, main, void, $StringArray*), "java.lang.Exception"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestBrowserBGColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestBrowserBGColor",
		"javax.swing.JFrame",
		"javax.swing.event.HyperlinkListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestBrowserBGColor$1"
	};
	$loadClass(TestBrowserBGColor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestBrowserBGColor));
	});
	return class$;
}

$Class* TestBrowserBGColor::class$ = nullptr;