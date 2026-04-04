#include <JTextAreaEmojiTest$1.h>
#include <JTextAreaEmojiTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef HORIZONTAL

using $JTextAreaEmojiTest = ::JTextAreaEmojiTest;
using $Color = ::java::awt::Color;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;

void JTextAreaEmojiTest$1::init$($JTextAreaEmojiTest* this$0) {
	$set(this, this$0, this$0);
}

void JTextAreaEmojiTest$1::run() {
	$useLocalObjectStack();
	$init($JTextAreaEmojiTest);
	$assignStatic($JTextAreaEmojiTest::layout, $new($GridBagLayout));
	$assignStatic($JTextAreaEmojiTest::mainControlPanel, $new($JPanel, $JTextAreaEmojiTest::layout));
	$assignStatic($JTextAreaEmojiTest::instructionPanel, $new($JPanel, $JTextAreaEmojiTest::layout));
	$assignStatic($JTextAreaEmojiTest::resultButtonPanel, $new($JPanel, $JTextAreaEmojiTest::layout));
	$assignStatic($JTextAreaEmojiTest::textAreaPanel, $new($JPanel, $JTextAreaEmojiTest::layout));
	$assignStatic($JTextAreaEmojiTest::controlPanel, $new($JPanel, $JTextAreaEmojiTest::layout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "1) Text Area size should be zero\n2) Select one emoji from Character Viewer\n3) If Text Area size increases displayingBlank or supported emoji for default font, click pass\n4) Else press fail"_s);
	$assignStatic($JTextAreaEmojiTest::instructionTextArea, $new($JTextArea));
	$JTextAreaEmojiTest::instructionTextArea->setText(instructions);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setEnabled(false);
	$init($Color);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setDisabledTextColor($Color::black);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setBackground($Color::white);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($JTextAreaEmojiTest::instructionPanel)->add($JTextAreaEmojiTest::instructionTextArea, gbc);
	$assignStatic($JTextAreaEmojiTest::emojiTextArea, $new($JTextArea));
	$JTextAreaEmojiTest::emojiTextArea->setEnabled(true);
	$nc($JTextAreaEmojiTest::emojiTextArea)->setDisabledTextColor($Color::black);
	$nc($JTextAreaEmojiTest::emojiTextArea)->setBackground($Color::white);
	$nc($JTextAreaEmojiTest::emojiTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($JTextAreaEmojiTest::textAreaPanel)->add($JTextAreaEmojiTest::emojiTextArea, gbc);
	$assignStatic($JTextAreaEmojiTest::passButton, $new($JButton, "Pass"_s));
	$JTextAreaEmojiTest::passButton->setActionCommand("Pass"_s);
	$nc($JTextAreaEmojiTest::passButton)->addActionListener(this->this$0);
	$assignStatic($JTextAreaEmojiTest::failButton, $new($JButton, "Fail"_s));
	$JTextAreaEmojiTest::failButton->setActionCommand("Fail"_s);
	$nc($JTextAreaEmojiTest::failButton)->addActionListener(this->this$0);
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JTextAreaEmojiTest::resultButtonPanel)->add($JTextAreaEmojiTest::passButton, gbc);
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JTextAreaEmojiTest::resultButtonPanel)->add($JTextAreaEmojiTest::failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JTextAreaEmojiTest::mainControlPanel)->add($JTextAreaEmojiTest::instructionPanel, gbc);
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($JTextAreaEmojiTest::mainControlPanel)->add($JTextAreaEmojiTest::textAreaPanel, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc($JTextAreaEmojiTest::mainControlPanel)->add($JTextAreaEmojiTest::resultButtonPanel, gbc);
	$nc($JTextAreaEmojiTest::mainControlPanel)->add($JTextAreaEmojiTest::controlPanel, gbc);
	$assignStatic($JTextAreaEmojiTest::mainFrame, $new($JFrame, "Control Panel"_s));
	$JTextAreaEmojiTest::mainFrame->add($JTextAreaEmojiTest::mainControlPanel);
	$nc($JTextAreaEmojiTest::mainFrame)->pack();
	$nc($JTextAreaEmojiTest::mainFrame)->setDefaultCloseOperation(3);
	$nc($JTextAreaEmojiTest::mainFrame)->setVisible(true);
}

JTextAreaEmojiTest$1::JTextAreaEmojiTest$1() {
}

$Class* JTextAreaEmojiTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJTextAreaEmojiTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTextAreaEmojiTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJTextAreaEmojiTest;)V", nullptr, 0, $method(JTextAreaEmojiTest$1, init$, void, $JTextAreaEmojiTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextAreaEmojiTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextAreaEmojiTest",
		"createControlPanelUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextAreaEmojiTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextAreaEmojiTest$1",
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
		"JTextAreaEmojiTest"
	};
	$loadClass(JTextAreaEmojiTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextAreaEmojiTest$1);
	});
	return class$;
}

$Class* JTextAreaEmojiTest$1::class$ = nullptr;