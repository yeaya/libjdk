#include <DefaultButtonTest$DefaultPanel.h>
#include <DefaultButtonTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/StringBuffer.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

#undef CENTER
#undef NORTH
#undef SOUTH

using $DefaultButtonTest = ::DefaultButtonTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;

void DefaultButtonTest$DefaultPanel::init$($DefaultButtonTest* this$0, $JFrame* root) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, okButton, $new($JButton, "OK"_s));
	$set(this, cancelButton, $new($JButton, "Cancel"_s));
	setLayout($$new($BorderLayout));
	add($(createPanel()), $BorderLayout::NORTH);
	add($(createInfoPanel()), $BorderLayout::CENTER);
	add($(createButtonPanel(root)), $BorderLayout::SOUTH);
}

$JPanel* DefaultButtonTest$DefaultPanel::createPanel() {
	$init($DefaultButtonTest);
	$set(this, combo, $new($JComboBox, $DefaultButtonTest::strData));
	this->combo->addActionListener(this->this$0);
	$set(this, combo2, $new($JComboBox, $DefaultButtonTest::strData2));
	this->combo2->setEditable(true);
	$nc(this->combo2)->addActionListener(this->this$0);
	$var($JPanel, panel, $new($JPanel));
	panel->add(this->combo);
	panel->add(this->combo2);
	return panel;
}

$JScrollPane* DefaultButtonTest$DefaultPanel::createInfoPanel() {
	$useLocalObjectStack();
	$var($StringBuffer, txt, $new($StringBuffer, "Test for 4337071:\n"_s));
	txt->append("ENTER pressed in NON-EDITABLE combo box should be passed to the OK button.\n"_s);
	txt->append("For an EDITABLE combo box, the combo box should fire an action event."_s);
	txt->append("\n\nTest for 4515752:\n"_s);
	txt->append("ENTER on an EDITABLE combo box in which the contents has not changed\n"_s);
	txt->append("should be passed to the default button"_s);
	$var($JTextArea, text, $new($JTextArea, $(txt->toString())));
	text->setEditable(false);
	return $new($JScrollPane, text);
}

$JPanel* DefaultButtonTest$DefaultPanel::createButtonPanel($JFrame* frame) {
	$useLocalObjectStack();
	$$nc($nc(frame)->getRootPane())->setDefaultButton(this->okButton);
	$nc(this->okButton)->addActionListener(this->this$0);
	$var($JPanel, panel, $new($JPanel));
	panel->add(this->okButton);
	panel->add(this->cancelButton);
	return panel;
}

DefaultButtonTest$DefaultPanel::DefaultButtonTest$DefaultPanel() {
}

$Class* DefaultButtonTest$DefaultPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LDefaultButtonTest;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultButtonTest$DefaultPanel, this$0)},
		{"combo", "Ljavax/swing/JComboBox;", nullptr, $PUBLIC, $field(DefaultButtonTest$DefaultPanel, combo)},
		{"combo2", "Ljavax/swing/JComboBox;", nullptr, $PUBLIC, $field(DefaultButtonTest$DefaultPanel, combo2)},
		{"okButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(DefaultButtonTest$DefaultPanel, okButton)},
		{"cancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(DefaultButtonTest$DefaultPanel, cancelButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDefaultButtonTest;Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(DefaultButtonTest$DefaultPanel, init$, void, $DefaultButtonTest*, $JFrame*)},
		{"createButtonPanel", "(Ljavax/swing/JFrame;)Ljavax/swing/JPanel;", nullptr, $PRIVATE, $method(DefaultButtonTest$DefaultPanel, createButtonPanel, $JPanel*, $JFrame*)},
		{"createInfoPanel", "()Ljavax/swing/JScrollPane;", nullptr, $PRIVATE, $method(DefaultButtonTest$DefaultPanel, createInfoPanel, $JScrollPane*)},
		{"createPanel", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE, $method(DefaultButtonTest$DefaultPanel, createPanel, $JPanel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultButtonTest$DefaultPanel", "DefaultButtonTest", "DefaultPanel", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultButtonTest$DefaultPanel",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DefaultButtonTest"
	};
	$loadClass(DefaultButtonTest$DefaultPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultButtonTest$DefaultPanel));
	});
	return class$;
}

$Class* DefaultButtonTest$DefaultPanel::class$ = nullptr;