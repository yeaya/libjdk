#include <TestUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $UIManager = ::javax::swing::UIManager;

class TestUI$$Lambda$lambda$createUI$0 : public $ActionListener {
	$class(TestUI$$Lambda$lambda$createUI$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TestUI* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$0(e);
	}
	TestUI* inst$ = nullptr;
};
$Class* TestUI$$Lambda$lambda$createUI$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestUI$$Lambda$lambda$createUI$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", nullptr, $PUBLIC, $method(TestUI$$Lambda$lambda$createUI$0, init$, void, TestUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestUI$$Lambda$lambda$createUI$0, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestUI$$Lambda$lambda$createUI$0",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUI$$Lambda$lambda$createUI$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestUI$$Lambda$lambda$createUI$0);
	});
	return class$;
}
$Class* TestUI$$Lambda$lambda$createUI$0::class$ = nullptr;

class TestUI$$Lambda$lambda$createUI$1$1 : public $ActionListener {
	$class(TestUI$$Lambda$lambda$createUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TestUI* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$1(e);
	}
	TestUI* inst$ = nullptr;
};
$Class* TestUI$$Lambda$lambda$createUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestUI$$Lambda$lambda$createUI$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", nullptr, $PUBLIC, $method(TestUI$$Lambda$lambda$createUI$1$1, init$, void, TestUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestUI$$Lambda$lambda$createUI$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestUI$$Lambda$lambda$createUI$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUI$$Lambda$lambda$createUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestUI$$Lambda$lambda$createUI$1$1);
	});
	return class$;
}
$Class* TestUI$$Lambda$lambda$createUI$1$1::class$ = nullptr;

$JFrame* TestUI::mainFrame = nullptr;
$JPanel* TestUI::mainControlPanel = nullptr;
$JTextArea* TestUI::instructionTextArea = nullptr;
$JPanel* TestUI::resultButtonPanel = nullptr;
$JButton* TestUI::passButton = nullptr;
$JButton* TestUI::failButton = nullptr;
$GridBagLayout* TestUI::layout = nullptr;

void TestUI::initialize() {
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
}

void TestUI::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
	initialize();
}

void TestUI::createUI() {
	$useLocalObjectStack();
	$assignStatic(TestUI::mainFrame, $new($JFrame));
	$assignStatic(TestUI::layout, $new($GridBagLayout));
	$assignStatic(TestUI::mainControlPanel, $new($JPanel, TestUI::layout));
	$assignStatic(TestUI::resultButtonPanel, $new($JPanel, TestUI::layout));
	$set(this, gbc, $new($GridBagConstraints));
	$var($String, instructions, "Move cursor over disabled button.\nCheck if there is a border around the tooltip text \nIf yes, click on \'pass\' else click on \'fail\'\n"_s);
	$assignStatic(TestUI::instructionTextArea, $new($JTextArea));
	TestUI::instructionTextArea->setText(instructions);
	$nc(TestUI::instructionTextArea)->setEditable(false);
	$nc(TestUI::instructionTextArea)->setBorder($($BorderFactory::createTitledBorder("Test Instructions"_s)));
	$nc(this->gbc)->gridx = 0;
	this->gbc->gridy = 0;
	$nc(TestUI::mainControlPanel)->add(TestUI::instructionTextArea, this->gbc);
	customize();
	$assignStatic(TestUI::passButton, $new($JButton, "Pass"_s));
	TestUI::passButton->setActionCommand("Pass"_s);
	$nc(TestUI::passButton)->addActionListener($$new(TestUI$$Lambda$lambda$createUI$0, this));
	$assignStatic(TestUI::failButton, $new($JButton, "Fail"_s));
	TestUI::failButton->setActionCommand("Fail"_s);
	$nc(TestUI::failButton)->addActionListener($$new(TestUI$$Lambda$lambda$createUI$1$1, this));
	$nc(this->gbc)->gridx = 0;
	this->gbc->gridy = 0;
	$nc(TestUI::resultButtonPanel)->add(TestUI::passButton, this->gbc);
	$nc(this->gbc)->gridx = 1;
	this->gbc->gridy = 0;
	$nc(TestUI::resultButtonPanel)->add(TestUI::failButton, this->gbc);
	$nc(this->gbc)->gridx = 0;
	this->gbc->gridy = 2;
	$nc(TestUI::mainControlPanel)->add(TestUI::resultButtonPanel, this->gbc);
	$nc(TestUI::mainFrame)->add(TestUI::mainControlPanel);
	$nc(TestUI::mainFrame)->pack();
	$nc(TestUI::mainFrame)->setVisible(true);
}

void TestUI::disposeUI() {
	$nc(TestUI::mainFrame)->dispose();
}

void TestUI::customize() {
	$useLocalObjectStack();
	$var($JPanel, customButtonPanel, $new($JPanel, TestUI::layout));
	$nc(TestUI::mainFrame)->setTitle("TestDisabledToolTipBorder"_s);
	$var($JButton, disabledButton, $new($JButton, "Disabled Button"_s));
	disabledButton->setToolTipText("TooltipText"_s);
	disabledButton->setMargin($$new($Insets, 30, 30, 30, 30));
	disabledButton->setEnabled(false);
	$nc(this->gbc)->gridx = 0;
	this->gbc->gridy = 0;
	customButtonPanel->add(disabledButton, this->gbc);
	$nc(this->gbc)->gridx = 0;
	this->gbc->gridy = 1;
	$nc(TestUI::mainControlPanel)->add(customButtonPanel, this->gbc);
}

void TestUI::lambda$createUI$1($ActionEvent* e) {
	$nc($System::out)->println("Fail Button pressed!"_s);
	this->testResult = false;
	$nc(this->latch)->countDown();
	disposeUI();
}

void TestUI::lambda$createUI$0($ActionEvent* e) {
	$nc($System::out)->println("Pass Button pressed!"_s);
	this->testResult = true;
	$nc(this->latch)->countDown();
	disposeUI();
}

TestUI::TestUI() {
}

$Class* TestUI::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestUI$$Lambda$lambda$createUI$0")) {
			return TestUI$$Lambda$lambda$createUI$0::load$(name, initialize);
		}
		if (name->equals("TestUI$$Lambda$lambda$createUI$1$1")) {
			return TestUI$$Lambda$lambda$createUI$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, mainFrame)},
		{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, mainControlPanel)},
		{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, instructionTextArea)},
		{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, resultButtonPanel)},
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, failButton)},
		{"gbc", "Ljava/awt/GridBagConstraints;", nullptr, $PRIVATE, $field(TestUI, gbc)},
		{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, layout)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(TestUI, latch)},
		{"testResult", "Z", nullptr, $PUBLIC, $field(TestUI, testResult)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(TestUI, init$, void, $CountDownLatch*), "java.lang.Exception"},
		{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(TestUI, createUI, void), "java.lang.Exception"},
		{"customize", "()V", nullptr, $PRIVATE, $method(TestUI, customize, void), "java.lang.Exception"},
		{"disposeUI", "()V", nullptr, $PUBLIC, $virtualMethod(TestUI, disposeUI, void)},
		{"initialize", "()V", nullptr, $PUBLIC | $FINAL, $method(TestUI, initialize, void), "java.lang.Exception"},
		{"lambda$createUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(TestUI, lambda$createUI$0, void, $ActionEvent*)},
		{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(TestUI, lambda$createUI$1, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestUI",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestUI);
	});
	return class$;
}

$Class* TestUI::class$ = nullptr;