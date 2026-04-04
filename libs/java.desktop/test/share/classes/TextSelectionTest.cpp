#include <TextSelectionTest.h>
#include <TextSelectionTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE
#undef INSTRUCTIONS
#undef MINUTES
#undef SOUTH

using $TextSelectionTest$1 = ::TextSelectionTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TextSelectionTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(TextSelectionTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TextSelectionTest::createAndShowGUI();
	}
};
$Class* TextSelectionTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextSelectionTest$$Lambda$createAndShowGUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TextSelectionTest$$Lambda$createAndShowGUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TextSelectionTest$$Lambda$createAndShowGUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TextSelectionTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextSelectionTest$$Lambda$createAndShowGUI);
	});
	return class$;
}
$Class* TextSelectionTest$$Lambda$createAndShowGUI::class$ = nullptr;

class TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1 : public $ActionListener {
	$class(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* frame) {
		$set(this, frame, frame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TextSelectionTest::lambda$createAndShowGUI$0(frame, e);
	}
	$JFrame* frame = nullptr;
};
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1);
	});
	return class$;
}
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::class$ = nullptr;

class TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2 : public $ActionListener {
	$class(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* frame) {
		$set(this, frame, frame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TextSelectionTest::lambda$createAndShowGUI$1(frame, e);
	}
	$JFrame* frame = nullptr;
};
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2);
	});
	return class$;
}
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::class$ = nullptr;

$String* TextSelectionTest::INSTRUCTIONS = nullptr;
$CountDownLatch* TextSelectionTest::latch = nullptr;
$volatile(bool) TextSelectionTest::passed = false;

void TextSelectionTest::init$() {
}

void TextSelectionTest::main($StringArray* args) {
	$init(TextSelectionTest);
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(TextSelectionTest$$Lambda$createAndShowGUI));
	$init($TimeUnit);
	TextSelectionTest::latch->await(3, $TimeUnit::MINUTES);
	$nc($System::out)->println($$str({"passed: "_s, $$str(TextSelectionTest::passed)}));
	if (!TextSelectionTest::passed) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void TextSelectionTest::createAndShowGUI() {
	$init(TextSelectionTest);
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame, "Follow the instructions below:"_s));
	frame->setSize(700, 500);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, $$new($BorderLayout)));
	$var($JTextComponent, textComponent, $new($JTextArea, TextSelectionTest::INSTRUCTIONS));
	textComponent->setEditable(false);
	$var($Font, font, textComponent->getFont());
	$assign(font, $nc(font)->deriveFont(24.0f));
	textComponent->setFont(font);
	panel->add(textComponent, $BorderLayout::CENTER);
	$var($JPanel, buttonsPanel, $new($JPanel, $$new($FlowLayout)));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->addActionListener($$new(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, frame));
	$var($JButton, failsButton, $new($JButton, "Fail"_s));
	failsButton->addActionListener($$new(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, frame));
	buttonsPanel->add(passButton);
	buttonsPanel->add(failsButton);
	panel->add(buttonsPanel, $BorderLayout::SOUTH);
	$$nc(frame->getContentPane())->add(panel);
	frame->addWindowListener($$new($TextSelectionTest$1));
	frame->setVisible(true);
}

void TextSelectionTest::lambda$createAndShowGUI$1($JFrame* frame, $ActionEvent* e) {
	$init(TextSelectionTest);
	TextSelectionTest::passed = false;
	TextSelectionTest::latch->countDown();
	$nc(frame)->dispose();
}

void TextSelectionTest::lambda$createAndShowGUI$0($JFrame* frame, $ActionEvent* e) {
	$init(TextSelectionTest);
	TextSelectionTest::passed = true;
	TextSelectionTest::latch->countDown();
	$nc(frame)->dispose();
}

void TextSelectionTest::clinit$($Class* clazz) {
	$assignStatic(TextSelectionTest::INSTRUCTIONS, "This is a manual test.\n\nSelect the current text from the end to the beginning.\n\nIf the text is slightly shiftted from one side to another\nand back during selection press Fail.\nOtherwise, press Pass."_s);
	$assignStatic(TextSelectionTest::latch, $new($CountDownLatch, 1));
	TextSelectionTest::passed = false;
}

TextSelectionTest::TextSelectionTest() {
}

$Class* TextSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TextSelectionTest$$Lambda$createAndShowGUI")) {
			return TextSelectionTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals("TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1")) {
			return TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::load$(name, initialize);
		}
		if (name->equals("TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2")) {
			return TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextSelectionTest, INSTRUCTIONS)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextSelectionTest, latch)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TextSelectionTest, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextSelectionTest, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TextSelectionTest, createAndShowGUI, void)},
		{"lambda$createAndShowGUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TextSelectionTest, lambda$createAndShowGUI$0, void, $JFrame*, $ActionEvent*)},
		{"lambda$createAndShowGUI$1", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TextSelectionTest, lambda$createAndShowGUI$1, void, $JFrame*, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TextSelectionTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TextSelectionTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TextSelectionTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TextSelectionTest$1"
	};
	$loadClass(TextSelectionTest, name, initialize, &classInfo$$, TextSelectionTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TextSelectionTest);
	});
	return class$;
}

$Class* TextSelectionTest::class$ = nullptr;