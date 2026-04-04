#include <JColorChooserTest$1.h>
#include <JColorChooserTest$1$1.h>
#include <JColorChooserTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
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
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/EmptyBorder.h>
#include <jcpp.h>

#undef BLUE
#undef HORIZONTAL

using $JColorChooserTest = ::JColorChooserTest;
using $JColorChooserTest$1$1 = ::JColorChooserTest$1$1;
using $Color = ::java::awt::Color;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $UIManager = ::javax::swing::UIManager;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;

class JColorChooserTest$1$$Lambda$lambda$run$0 : public $ActionListener {
	$class(JColorChooserTest$1$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(JColorChooserTest$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	JColorChooserTest$1* inst$ = nullptr;
};
$Class* JColorChooserTest$1$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JColorChooserTest$1$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJColorChooserTest$1;)V", nullptr, $PUBLIC, $method(JColorChooserTest$1$$Lambda$lambda$run$0, init$, void, JColorChooserTest$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooserTest$1$$Lambda$lambda$run$0, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JColorChooserTest$1$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JColorChooserTest$1$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JColorChooserTest$1$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* JColorChooserTest$1$$Lambda$lambda$run$0::class$ = nullptr;

void JColorChooserTest$1::init$($JColorChooserTest* this$0) {
	$set(this, this$0, this$0);
}

void JColorChooserTest$1::run() {
	$useLocalObjectStack();
	$init($JColorChooserTest);
	$assignStatic($JColorChooserTest::mainFrame, $new($JFrame, "JColorChooser Test"_s));
	$assignStatic($JColorChooserTest::layout, $new($GridBagLayout));
	$assignStatic($JColorChooserTest::mainControlPanel, $new($JPanel, $JColorChooserTest::layout));
	$assignStatic($JColorChooserTest::resultButtonPanel, $new($JPanel, $JColorChooserTest::layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "INSTRUCTIONS:\n Select HSV, HSL, RGB or CMYK tab.\n If able to shift and view JColorChooser tabs\n then click Pass, else Fail."_s);
	$assignStatic($JColorChooserTest::instructionTextArea, $new($JTextArea));
	$JColorChooserTest::instructionTextArea->setText(instructions);
	$nc($JColorChooserTest::instructionTextArea)->setEnabled(true);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($JColorChooserTest::mainControlPanel)->add($JColorChooserTest::instructionTextArea, gbc);
	$UIManager::put("FormattedTextField.border"_s, $$new($EmptyBorder, 0, 10, 0, 10));
	$init($Color);
	$assignStatic($JColorChooserTest::colorChooser, $new($JColorChooser, $Color::BLUE));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($JColorChooserTest::mainControlPanel)->add($JColorChooserTest::colorChooser, gbc);
	$assignStatic($JColorChooserTest::passButton, $new($JButton, "Pass"_s));
	$JColorChooserTest::passButton->setActionCommand("Pass"_s);
	$nc($JColorChooserTest::passButton)->addActionListener($$new(JColorChooserTest$1$$Lambda$lambda$run$0, this));
	$assignStatic($JColorChooserTest::failButton, $new($JButton, "Fail"_s));
	$JColorChooserTest::failButton->setActionCommand("Fail"_s);
	$nc($JColorChooserTest::failButton)->addActionListener($$new($JColorChooserTest$1$1, this));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JColorChooserTest::resultButtonPanel)->add($JColorChooserTest::passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JColorChooserTest::resultButtonPanel)->add($JColorChooserTest::failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc($JColorChooserTest::mainControlPanel)->add($JColorChooserTest::resultButtonPanel, gbc);
	$nc($JColorChooserTest::mainFrame)->add($JColorChooserTest::mainControlPanel);
	$nc($JColorChooserTest::mainFrame)->pack();
	$nc($JColorChooserTest::mainFrame)->setVisible(true);
}

void JColorChooserTest$1::lambda$run$0($ActionEvent* e) {
	this->this$0->testResult = true;
	$nc($JColorChooserTest::mainFrame)->dispose();
	$nc(this->this$0->latch)->countDown();
}

JColorChooserTest$1::JColorChooserTest$1() {
}

$Class* JColorChooserTest$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JColorChooserTest$1$$Lambda$lambda$run$0")) {
			return JColorChooserTest$1$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJColorChooserTest;", nullptr, $FINAL | $SYNTHETIC, $field(JColorChooserTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJColorChooserTest;)V", nullptr, 0, $method(JColorChooserTest$1, init$, void, $JColorChooserTest*)},
		{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(JColorChooserTest$1, lambda$run$0, void, $ActionEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JColorChooserTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JColorChooserTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JColorChooserTest$1", nullptr, nullptr, 0},
		{"JColorChooserTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JColorChooserTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JColorChooserTest"
	};
	$loadClass(JColorChooserTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JColorChooserTest$1);
	});
	return class$;
}

$Class* JColorChooserTest$1::class$ = nullptr;