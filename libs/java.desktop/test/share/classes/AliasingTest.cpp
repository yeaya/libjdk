#include <AliasingTest.h>
#include <AliasingTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH
#undef VERTICAL_SPLIT

using $AliasingTest$1 = ::AliasingTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JButton = ::javax::swing::JButton;
using $JDialog = ::javax::swing::JDialog;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class AliasingTest$$Lambda$lambda$run$0 : public $Runnable {
	$class(AliasingTest$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(AliasingTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$run$0();
	}
	AliasingTest* inst$ = nullptr;
};
$Class* AliasingTest$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AliasingTest$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAliasingTest;)V", nullptr, $PUBLIC, $method(AliasingTest$$Lambda$lambda$run$0, init$, void, AliasingTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AliasingTest$$Lambda$lambda$run$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AliasingTest$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AliasingTest$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AliasingTest$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* AliasingTest$$Lambda$lambda$run$0::class$ = nullptr;

class AliasingTest$$Lambda$lambda$createUI$1$1 : public $ActionListener {
	$class(AliasingTest$$Lambda$lambda$createUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(AliasingTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$1(e);
	}
	AliasingTest* inst$ = nullptr;
};
$Class* AliasingTest$$Lambda$lambda$createUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AliasingTest$$Lambda$lambda$createUI$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAliasingTest;)V", nullptr, $PUBLIC, $method(AliasingTest$$Lambda$lambda$createUI$1$1, init$, void, AliasingTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AliasingTest$$Lambda$lambda$createUI$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AliasingTest$$Lambda$lambda$createUI$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AliasingTest$$Lambda$lambda$createUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AliasingTest$$Lambda$lambda$createUI$1$1);
	});
	return class$;
}
$Class* AliasingTest$$Lambda$lambda$createUI$1$1::class$ = nullptr;

class AliasingTest$$Lambda$lambda$createUI$2$2 : public $ActionListener {
	$class(AliasingTest$$Lambda$lambda$createUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(AliasingTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$2(e);
	}
	AliasingTest* inst$ = nullptr;
};
$Class* AliasingTest$$Lambda$lambda$createUI$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AliasingTest$$Lambda$lambda$createUI$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAliasingTest;)V", nullptr, $PUBLIC, $method(AliasingTest$$Lambda$lambda$createUI$2$2, init$, void, AliasingTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AliasingTest$$Lambda$lambda$createUI$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AliasingTest$$Lambda$lambda$createUI$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AliasingTest$$Lambda$lambda$createUI$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AliasingTest$$Lambda$lambda$createUI$2$2);
	});
	return class$;
}
$Class* AliasingTest$$Lambda$lambda$createUI$2$2::class$ = nullptr;

$JFrame* AliasingTest::f = nullptr;
$JDialog* AliasingTest::dialog = nullptr;

void AliasingTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void AliasingTest::run() {
	$useLocalObjectStack();
	try {
		$SwingUtilities::invokeAndWait($$new(AliasingTest$$Lambda$lambda$run$0, this));
	} catch ($Exception& ex) {
		if (AliasingTest::f != nullptr) {
			AliasingTest::f->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void AliasingTest::dispose() {
	$nc(AliasingTest::dialog)->dispose();
	$nc(AliasingTest::f)->dispose();
}

$String* AliasingTest::getHtml() {
	$init(AliasingTest);
	return "<html><body><ul><li>Text</li><li>Document</li></ul></body></html>"_s;
}

$Component* AliasingTest::createSplitPane() {
	$init(AliasingTest);
	$useLocalObjectStack();
	$var($Component, var$0, createHtmlViewer(false));
	$var($JSplitPane, splitPane, $new($JSplitPane, $JSplitPane::VERTICAL_SPLIT, var$0, $(createHtmlViewer(true))));
	splitPane->setOneTouchExpandable(true);
	splitPane->setResizeWeight(0.5);
	splitPane->setPreferredSize($$new($Dimension, 150, 150));
	return splitPane;
}

$Component* AliasingTest::createHtmlViewer(bool antialiasing) {
	$init(AliasingTest);
	$useLocalObjectStack();
	$var($JEditorPane, editorPane, nullptr);
	if (antialiasing) {
		$assign(editorPane, $new($AliasingTest$1));
	} else {
		$assign(editorPane, $new($JEditorPane));
	}
	$nc(editorPane)->setEditable(false);
	editorPane->setContentType("text/html"_s);
	editorPane->setText($(getHtml()));
	return $new($JScrollPane, editorPane);
}

void AliasingTest::aliasingTest() {
	$init(AliasingTest);
	$assignStatic(AliasingTest::f, $new($JFrame, "List Bullets"_s));
	AliasingTest::f->add($(createSplitPane()));
	$nc(AliasingTest::f)->pack();
	$nc(AliasingTest::f)->setLocationRelativeTo(nullptr);
	$nc(AliasingTest::f)->setVisible(true);
}

void AliasingTest::createUI() {
	$useLocalObjectStack();
	$var($String, description, " INSTRUCTIONS:\n A JEditorPane divided by SplitPane will be shown.\n The upper html is rendered in a default JEditorPane.\n  The lower html is rendered in a JEditorPane using  rendering hints to turn on antialiasing.\n If upper html bullets looks pixelated AND larger than needed relative to text font size\n and not as smooth as shown in lower html\n  then press fail else press pass"_s);
	$assignStatic(AliasingTest::dialog, $new($JDialog));
	AliasingTest::dialog->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener($$new(AliasingTest$$Lambda$lambda$createUI$1$1, this));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener($$new(AliasingTest$$Lambda$lambda$createUI$2$2, this));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	mainPanel->add(textArea, $BorderLayout::CENTER);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(passButton);
	buttonPanel->add(failButton);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	$nc(AliasingTest::dialog)->add(mainPanel);
	$nc(AliasingTest::dialog)->pack();
	$nc(AliasingTest::dialog)->setVisible(true);
}

void AliasingTest::lambda$createUI$2($ActionEvent* e) {
	this->testResult = false;
	dispose();
	$nc(this->latch)->countDown();
}

void AliasingTest::lambda$createUI$1($ActionEvent* e) {
	this->testResult = true;
	dispose();
	$nc(this->latch)->countDown();
}

void AliasingTest::lambda$run$0() {
	createUI();
	aliasingTest();
}

AliasingTest::AliasingTest() {
}

$Class* AliasingTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("AliasingTest$$Lambda$lambda$run$0")) {
			return AliasingTest$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals("AliasingTest$$Lambda$lambda$createUI$1$1")) {
			return AliasingTest$$Lambda$lambda$createUI$1$1::load$(name, initialize);
		}
		if (name->equals("AliasingTest$$Lambda$lambda$createUI$2$2")) {
			return AliasingTest$$Lambda$lambda$createUI$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(AliasingTest, f)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(AliasingTest, dialog)},
		{"testResult", "Z", nullptr, $PUBLIC, $field(AliasingTest, testResult)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(AliasingTest, latch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(AliasingTest, init$, void, $CountDownLatch*), "java.lang.Exception"},
		{"aliasingTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(AliasingTest, aliasingTest, void)},
		{"createHtmlViewer", "(Z)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticMethod(AliasingTest, createHtmlViewer, $Component*, bool)},
		{"createSplitPane", "()Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticMethod(AliasingTest, createSplitPane, $Component*)},
		{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(AliasingTest, createUI, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(AliasingTest, dispose, void)},
		{"getHtml", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AliasingTest, getHtml, $String*)},
		{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(AliasingTest, lambda$createUI$1, void, $ActionEvent*)},
		{"lambda$createUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(AliasingTest, lambda$createUI$2, void, $ActionEvent*)},
		{"lambda$run$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(AliasingTest, lambda$run$0, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AliasingTest, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AliasingTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AliasingTest",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AliasingTest$1"
	};
	$loadClass(AliasingTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AliasingTest);
	});
	return class$;
}

$Class* AliasingTest::class$ = nullptr;