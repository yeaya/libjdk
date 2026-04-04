#include <TitledBorder$1.h>
#include <TitledBorder$1$1.h>
#include <TitledBorder.h>
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
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef HORIZONTAL

using $TitledBorder = ::TitledBorder;
using $TitledBorder$1$1 = ::TitledBorder$1$1;
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
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;

class TitledBorder$1$$Lambda$lambda$run$0 : public $ActionListener {
	$class(TitledBorder$1$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TitledBorder$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	TitledBorder$1* inst$ = nullptr;
};
$Class* TitledBorder$1$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TitledBorder$1$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTitledBorder$1;)V", nullptr, $PUBLIC, $method(TitledBorder$1$$Lambda$lambda$run$0, init$, void, TitledBorder$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder$1$$Lambda$lambda$run$0, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TitledBorder$1$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TitledBorder$1$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorder$1$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* TitledBorder$1$$Lambda$lambda$run$0::class$ = nullptr;

void TitledBorder$1::init$($TitledBorder* this$0) {
	$set(this, this$0, this$0);
}

void TitledBorder$1::run() {
	$useLocalObjectStack();
	$init($TitledBorder);
	$assignStatic($TitledBorder::mainFrame, $new($JFrame, "Window LAF TitledBorder Test"_s));
	$assignStatic($TitledBorder::layout, $new($GridBagLayout));
	$assignStatic($TitledBorder::mainControlPanel, $new($JPanel, $TitledBorder::layout));
	$assignStatic($TitledBorder::resultButtonPanel, $new($JPanel, $TitledBorder::layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "INSTRUCTIONS:\n set Windows Theme to HighContrast#1.\n (ControlPanel->Personalization->High Contrast#1)\n If Titled Border(Border Line) is visible then test passes else failed."_s);
	$assignStatic($TitledBorder::instructionTextArea, $new($JTextArea));
	$TitledBorder::instructionTextArea->setText(instructions);
	$nc($TitledBorder::instructionTextArea)->setEnabled(false);
	$init($Color);
	$nc($TitledBorder::instructionTextArea)->setDisabledTextColor($Color::black);
	$nc($TitledBorder::instructionTextArea)->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($TitledBorder::mainControlPanel)->add($TitledBorder::instructionTextArea, gbc);
	$nc($TitledBorder::mainControlPanel)->setBorder($($BorderFactory::createTitledBorder("Titled Border"_s)));
	$assignStatic($TitledBorder::passButton, $new($JButton, "Pass"_s));
	$TitledBorder::passButton->setActionCommand("Pass"_s);
	$nc($TitledBorder::passButton)->addActionListener($$new(TitledBorder$1$$Lambda$lambda$run$0, this));
	$assignStatic($TitledBorder::failButton, $new($JButton, "Fail"_s));
	$TitledBorder::failButton->setActionCommand("Fail"_s);
	$nc($TitledBorder::failButton)->addActionListener($$new($TitledBorder$1$1, this));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($TitledBorder::resultButtonPanel)->add($TitledBorder::passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($TitledBorder::resultButtonPanel)->add($TitledBorder::failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($TitledBorder::mainControlPanel)->add($TitledBorder::resultButtonPanel, gbc);
	$nc($TitledBorder::mainFrame)->add($TitledBorder::mainControlPanel);
	$nc($TitledBorder::mainFrame)->pack();
	$nc($TitledBorder::mainFrame)->setVisible(true);
}

void TitledBorder$1::lambda$run$0($ActionEvent* e) {
	$nc($System::out)->println("Pass Button pressed!"_s);
	this->this$0->testResult = true;
	$nc($TitledBorder::mainFrame)->dispose();
	$nc(this->this$0->latch)->countDown();
}

TitledBorder$1::TitledBorder$1() {
}

$Class* TitledBorder$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TitledBorder$1$$Lambda$lambda$run$0")) {
			return TitledBorder$1$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTitledBorder;", nullptr, $FINAL | $SYNTHETIC, $field(TitledBorder$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTitledBorder;)V", nullptr, 0, $method(TitledBorder$1, init$, void, $TitledBorder*)},
		{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(TitledBorder$1, lambda$run$0, void, $ActionEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TitledBorder$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TitledBorder",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TitledBorder$1", nullptr, nullptr, 0},
		{"TitledBorder$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TitledBorder$1",
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
		"TitledBorder"
	};
	$loadClass(TitledBorder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorder$1);
	});
	return class$;
}

$Class* TitledBorder$1::class$ = nullptr;