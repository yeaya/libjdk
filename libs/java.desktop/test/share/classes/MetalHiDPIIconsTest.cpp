#include <MetalHiDPIIconsTest.h>
#include <MetalHiDPIIconsTest$1.h>
#include <MetalHiDPIIconsTest$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
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
#include <jcpp.h>

#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $MetalHiDPIIconsTest$1 = ::MetalHiDPIIconsTest$1;
using $MetalHiDPIIconsTest$2 = ::MetalHiDPIIconsTest$2;
using $Color = ::java::awt::Color;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

class MetalHiDPIIconsTest$$Lambda$createUI : public $Runnable {
	$class(MetalHiDPIIconsTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MetalHiDPIIconsTest::createUI();
	}
};
$Class* MetalHiDPIIconsTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalHiDPIIconsTest$$Lambda$createUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MetalHiDPIIconsTest$$Lambda$createUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MetalHiDPIIconsTest$$Lambda$createUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalHiDPIIconsTest$$Lambda$createUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalHiDPIIconsTest$$Lambda$createUI);
	});
	return class$;
}
$Class* MetalHiDPIIconsTest$$Lambda$createUI::class$ = nullptr;

class MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MetalHiDPIIconsTest::lambda$createUI$0(mainFrame, e);
	}
	$JFrame* mainFrame = nullptr;
};
$Class* MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1);
	});
	return class$;
}
$Class* MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$volatile(bool) MetalHiDPIIconsTest::testResult = false;
$volatile($CountDownLatch*) MetalHiDPIIconsTest::countDownLatch = nullptr;
$String* MetalHiDPIIconsTest::INSTRUCTIONS = nullptr;

void MetalHiDPIIconsTest::init$() {
}

void MetalHiDPIIconsTest::main($StringArray* args) {
	$init(MetalHiDPIIconsTest);
	$assignStatic(MetalHiDPIIconsTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater($$new(MetalHiDPIIconsTest$$Lambda$createUI));
	$init($TimeUnit);
	$nc(MetalHiDPIIconsTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!MetalHiDPIIconsTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void MetalHiDPIIconsTest::createUI() {
	$init(MetalHiDPIIconsTest);
	$useLocalObjectStack();
	$var($JFrame, mainFrame, $new($JFrame, "Metal L&F icons test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, layout));
	$var($JPanel, resultButtonPanel, $new($JPanel, layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(MetalHiDPIIconsTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(instructionTextArea, gbc);
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener($$new(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($MetalHiDPIIconsTest$1, mainFrame));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 1;
	mainControlPanel->add(resultButtonPanel, gbc);
	mainFrame->add(mainControlPanel);
	mainFrame->pack();
	mainFrame->addWindowListener($$new($MetalHiDPIIconsTest$2, mainFrame));
	mainFrame->setVisible(true);
}

void MetalHiDPIIconsTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(MetalHiDPIIconsTest);
	MetalHiDPIIconsTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(MetalHiDPIIconsTest::countDownLatch)->countDown();
}

void MetalHiDPIIconsTest::clinit$($Class* clazz) {
	$assignStatic(MetalHiDPIIconsTest::INSTRUCTIONS, "INSTRUCTIONS:\nVerify that icons are painted smoothly for standard Swing UI controls.\n\nIf the display does not support HiDPI mode press PASS.\n\n1. Run the SwingSet2 demo on HiDPI Display.\n2. Select Java Look and Feel. It is equivalent to Metal Look And Feel\n3. Check that the icons are painted smoothly on Swing UI controls like:\n  - JRadioButton\n  - JCheckBox\n  - JComboBox\n  - JScrollPane (vertical and horizontal scroll bars)\n  - JRadioButtonMenuItem\n  - JCheckBoxMenuItem\nand others...\n\nIf so, press PASS, else press FAIL.\n"_s);
	MetalHiDPIIconsTest::testResult = false;
}

MetalHiDPIIconsTest::MetalHiDPIIconsTest() {
}

$Class* MetalHiDPIIconsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MetalHiDPIIconsTest$$Lambda$createUI")) {
			return MetalHiDPIIconsTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals("MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1")) {
			return MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MetalHiDPIIconsTest, testResult)},
		{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MetalHiDPIIconsTest, countDownLatch)},
		{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHiDPIIconsTest, INSTRUCTIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalHiDPIIconsTest, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MetalHiDPIIconsTest, createUI, void)},
		{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalHiDPIIconsTest, lambda$createUI$0, void, $JFrame*, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalHiDPIIconsTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetalHiDPIIconsTest$2", nullptr, nullptr, 0},
		{"MetalHiDPIIconsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetalHiDPIIconsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MetalHiDPIIconsTest$2,MetalHiDPIIconsTest$1"
	};
	$loadClass(MetalHiDPIIconsTest, name, initialize, &classInfo$$, MetalHiDPIIconsTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalHiDPIIconsTest);
	});
	return class$;
}

$Class* MetalHiDPIIconsTest::class$ = nullptr;