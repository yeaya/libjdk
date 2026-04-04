#include <JTextAreaWordWrapTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef VERTICAL_SCROLLBAR_ALWAYS

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JTextAreaWordWrapTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JTextAreaWordWrapTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaWordWrapTest::lambda$main$0();
	}
};
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaWordWrapTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaWordWrapTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaWordWrapTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaWordWrapTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaWordWrapTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$0::class$ = nullptr;

class JTextAreaWordWrapTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(JTextAreaWordWrapTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaWordWrapTest::lambda$main$1();
	}
};
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaWordWrapTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaWordWrapTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaWordWrapTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaWordWrapTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaWordWrapTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class JTextAreaWordWrapTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(JTextAreaWordWrapTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaWordWrapTest::lambda$main$2();
	}
};
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaWordWrapTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaWordWrapTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaWordWrapTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaWordWrapTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaWordWrapTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class JTextAreaWordWrapTest$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(JTextAreaWordWrapTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaWordWrapTest::lambda$main$3();
	}
};
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaWordWrapTest$$Lambda$lambda$main$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaWordWrapTest$$Lambda$lambda$main$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaWordWrapTest$$Lambda$lambda$main$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaWordWrapTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaWordWrapTest$$Lambda$lambda$main$3$3);
	});
	return class$;
}
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$3$3::class$ = nullptr;

class JTextAreaWordWrapTest$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(JTextAreaWordWrapTest$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaWordWrapTest::lambda$main$4();
	}
};
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaWordWrapTest$$Lambda$lambda$main$4$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaWordWrapTest$$Lambda$lambda$main$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTextAreaWordWrapTest$$Lambda$lambda$main$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTextAreaWordWrapTest$$Lambda$lambda$main$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaWordWrapTest$$Lambda$lambda$main$4$4);
	});
	return class$;
}
$Class* JTextAreaWordWrapTest$$Lambda$lambda$main$4$4::class$ = nullptr;

$JFrame* JTextAreaWordWrapTest::frame = nullptr;
$JFrame* JTextAreaWordWrapTest::frame1 = nullptr;
$JTextArea* JTextAreaWordWrapTest::textArea = nullptr;
$JTextArea* JTextAreaWordWrapTest::textArea1 = nullptr;

void JTextAreaWordWrapTest::init$() {
}

void JTextAreaWordWrapTest::doWrapOnTest() {
	$useLocalObjectStack();
	$init(JTextAreaWordWrapTest);
	$assignStatic(JTextAreaWordWrapTest::frame, $new($JFrame));
	JTextAreaWordWrapTest::frame->setSize(720, 300);
	$nc(JTextAreaWordWrapTest::frame)->setLayout($$new($BorderLayout));
	$assignStatic(JTextAreaWordWrapTest::textArea, $new($JTextArea));
	JTextAreaWordWrapTest::textArea->setLineWrap(true);
	$nc(JTextAreaWordWrapTest::textArea)->setWrapStyleWord(true);
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < 100; ++i) {
		sb->append("zz zzz zzzz zz zz zz zzz xzzzz zzzzzzzzzzzzzzzzx yyyyyyy tttttttttt sssss hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh\n"_s);
	}
	$nc(JTextAreaWordWrapTest::textArea)->setText($(sb->toString()));
	$var($JScrollPane, pane, $new($JScrollPane, JTextAreaWordWrapTest::textArea, $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED));
	$nc(JTextAreaWordWrapTest::frame)->add(pane, $BorderLayout::CENTER);
	$nc(JTextAreaWordWrapTest::frame)->setVisible(true);
}

void JTextAreaWordWrapTest::doWrapOffTest() {
	$useLocalObjectStack();
	$init(JTextAreaWordWrapTest);
	$assignStatic(JTextAreaWordWrapTest::frame1, $new($JFrame));
	JTextAreaWordWrapTest::frame1->setSize(720, 300);
	$nc(JTextAreaWordWrapTest::frame1)->setLayout($$new($BorderLayout));
	$assignStatic(JTextAreaWordWrapTest::textArea1, $new($JTextArea));
	$var($StringBuffer, sb1, $new($StringBuffer));
	for (int32_t i = 0; i < 100; ++i) {
		sb1->append("zz zzz zzzz zz zz zz zzz xzzzz zzzzzzzzzzzzzzzzx yyyyyyy tttttttttt sssss hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh\n"_s);
	}
	JTextAreaWordWrapTest::textArea1->setText($(sb1->toString()));
	$var($JScrollPane, pane1, $new($JScrollPane, JTextAreaWordWrapTest::textArea1, $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED));
	$nc(JTextAreaWordWrapTest::frame1)->add(pane1, $BorderLayout::CENTER);
	$nc(JTextAreaWordWrapTest::frame1)->setLocationRelativeTo(nullptr);
	$nc(JTextAreaWordWrapTest::frame1)->setVisible(true);
}

void JTextAreaWordWrapTest::main($StringArray* args) {
	$useLocalObjectStack();
	$System::setProperty("sun.java2d.uiScale"_s, "1.25"_s);
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(JTextAreaWordWrapTest$$Lambda$lambda$main$0));
		$Thread::sleep(500);
		$SwingUtilities::invokeAndWait($$new(JTextAreaWordWrapTest$$Lambda$lambda$main$1$1));
		$Thread::sleep(500);
		$SwingUtilities::invokeAndWait($$new(JTextAreaWordWrapTest$$Lambda$lambda$main$2$2));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(JTextAreaWordWrapTest$$Lambda$lambda$main$3$3));
		$SwingUtilities::invokeAndWait($$new(JTextAreaWordWrapTest$$Lambda$lambda$main$4$4));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JTextAreaWordWrapTest::lambda$main$4() {
	$init(JTextAreaWordWrapTest);
	$nc(JTextAreaWordWrapTest::frame1)->dispose();
}

void JTextAreaWordWrapTest::lambda$main$3() {
	$init(JTextAreaWordWrapTest);
	$nc(JTextAreaWordWrapTest::frame)->dispose();
}

void JTextAreaWordWrapTest::lambda$main$2() {
	$useLocalObjectStack();
	$init(JTextAreaWordWrapTest);
	int32_t wraponHeight = $nc(JTextAreaWordWrapTest::textArea)->getHeight();
	$nc($System::out)->println($$str({"wraponheight "_s, $$str(wraponHeight)}));
	int32_t wrapoffHeight = $nc(JTextAreaWordWrapTest::textArea1)->getHeight();
	$System::out->println($$str({"wrapoffheight "_s, $$str(wrapoffHeight)}));
	if (wraponHeight == wrapoffHeight) {
		$throwNew($RuntimeException, "JTextArea line wrapping incorrect when using UI scale"_s);
	}
}

void JTextAreaWordWrapTest::lambda$main$1() {
	doWrapOffTest();
}

void JTextAreaWordWrapTest::lambda$main$0() {
	doWrapOnTest();
}

JTextAreaWordWrapTest::JTextAreaWordWrapTest() {
}

$Class* JTextAreaWordWrapTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JTextAreaWordWrapTest$$Lambda$lambda$main$0")) {
			return JTextAreaWordWrapTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("JTextAreaWordWrapTest$$Lambda$lambda$main$1$1")) {
			return JTextAreaWordWrapTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("JTextAreaWordWrapTest$$Lambda$lambda$main$2$2")) {
			return JTextAreaWordWrapTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("JTextAreaWordWrapTest$$Lambda$lambda$main$3$3")) {
			return JTextAreaWordWrapTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals("JTextAreaWordWrapTest$$Lambda$lambda$main$4$4")) {
			return JTextAreaWordWrapTest$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JTextAreaWordWrapTest, frame)},
		{"frame1", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JTextAreaWordWrapTest, frame1)},
		{"textArea", "Ljavax/swing/JTextArea;", nullptr, $STATIC, $staticField(JTextAreaWordWrapTest, textArea)},
		{"textArea1", "Ljavax/swing/JTextArea;", nullptr, $STATIC, $staticField(JTextAreaWordWrapTest, textArea1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextAreaWordWrapTest, init$, void)},
		{"doWrapOffTest", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextAreaWordWrapTest, doWrapOffTest, void)},
		{"doWrapOnTest", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextAreaWordWrapTest, doWrapOnTest, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaWordWrapTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaWordWrapTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaWordWrapTest, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaWordWrapTest, lambda$main$3, void)},
		{"lambda$main$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTextAreaWordWrapTest, lambda$main$4, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextAreaWordWrapTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTextAreaWordWrapTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTextAreaWordWrapTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaWordWrapTest);
	});
	return class$;
}

$Class* JTextAreaWordWrapTest::class$ = nullptr;