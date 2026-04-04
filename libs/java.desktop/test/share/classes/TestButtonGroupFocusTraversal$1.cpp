#include <TestButtonGroupFocusTraversal$1.h>
#include <TestButtonGroupFocusTraversal$1$1.h>
#include <TestButtonGroupFocusTraversal$1$2.h>
#include <TestButtonGroupFocusTraversal$1$3.h>
#include <TestButtonGroupFocusTraversal$1$4.h>
#include <TestButtonGroupFocusTraversal.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $TestButtonGroupFocusTraversal = ::TestButtonGroupFocusTraversal;
using $TestButtonGroupFocusTraversal$1$1 = ::TestButtonGroupFocusTraversal$1$1;
using $TestButtonGroupFocusTraversal$1$2 = ::TestButtonGroupFocusTraversal$1$2;
using $TestButtonGroupFocusTraversal$1$3 = ::TestButtonGroupFocusTraversal$1$3;
using $TestButtonGroupFocusTraversal$1$4 = ::TestButtonGroupFocusTraversal$1$4;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JFrame = ::javax::swing::JFrame;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;

void TestButtonGroupFocusTraversal$1::init$() {
}

void TestButtonGroupFocusTraversal$1::run() {
	$useLocalObjectStack();
	$init($TestButtonGroupFocusTraversal);
	$assignStatic($TestButtonGroupFocusTraversal::textFieldFirst, $new($JTextField, "First"_s));
	$assignStatic($TestButtonGroupFocusTraversal::textFieldLast, $new($JTextField, "Last"_s));
	$assignStatic($TestButtonGroupFocusTraversal::toggleButton1, $new($JToggleButton, "1"_s));
	$assignStatic($TestButtonGroupFocusTraversal::toggleButton2, $new($JToggleButton, "2"_s));
	$assignStatic($TestButtonGroupFocusTraversal::radioButton1, $new($JRadioButton, "1"_s));
	$assignStatic($TestButtonGroupFocusTraversal::radioButton2, $new($JRadioButton, "2"_s));
	$assignStatic($TestButtonGroupFocusTraversal::checkBox1, $new($JCheckBox, "1"_s));
	$assignStatic($TestButtonGroupFocusTraversal::checkBox2, $new($JCheckBox, "2"_s));
	$TestButtonGroupFocusTraversal::toggleButton1->setAction($$new($TestButtonGroupFocusTraversal$1$1, this));
	$nc($TestButtonGroupFocusTraversal::toggleButton2)->setAction($$new($TestButtonGroupFocusTraversal$1$2, this));
	$nc($TestButtonGroupFocusTraversal::checkBox1)->setAction($$new($TestButtonGroupFocusTraversal$1$3, this));
	$nc($TestButtonGroupFocusTraversal::checkBox2)->setAction($$new($TestButtonGroupFocusTraversal$1$4, this));
	$var($ButtonGroup, toggleGroup, $new($ButtonGroup));
	toggleGroup->add($TestButtonGroupFocusTraversal::toggleButton1);
	toggleGroup->add($TestButtonGroupFocusTraversal::toggleButton2);
	$var($ButtonGroup, radioGroup, $new($ButtonGroup));
	radioGroup->add($TestButtonGroupFocusTraversal::radioButton1);
	radioGroup->add($TestButtonGroupFocusTraversal::radioButton2);
	$var($ButtonGroup, checkboxButtonGroup, $new($ButtonGroup));
	checkboxButtonGroup->add($TestButtonGroupFocusTraversal::checkBox1);
	checkboxButtonGroup->add($TestButtonGroupFocusTraversal::checkBox2);
	$nc($TestButtonGroupFocusTraversal::toggleButton2)->setSelected(true);
	$nc($TestButtonGroupFocusTraversal::radioButton2)->setSelected(true);
	$nc($TestButtonGroupFocusTraversal::checkBox2)->setSelected(true);
	$assignStatic($TestButtonGroupFocusTraversal::frame, $new($JFrame, "Test"_s));
	$TestButtonGroupFocusTraversal::frame->setLayout($$new($FlowLayout));
	$var($Container, pane, $nc($TestButtonGroupFocusTraversal::frame)->getContentPane());
	$nc(pane)->add($TestButtonGroupFocusTraversal::textFieldFirst);
	pane->add($TestButtonGroupFocusTraversal::toggleButton1);
	pane->add($TestButtonGroupFocusTraversal::toggleButton2);
	pane->add($TestButtonGroupFocusTraversal::radioButton1);
	pane->add($TestButtonGroupFocusTraversal::radioButton2);
	pane->add($TestButtonGroupFocusTraversal::checkBox1);
	pane->add($TestButtonGroupFocusTraversal::checkBox2);
	pane->add($TestButtonGroupFocusTraversal::textFieldLast);
	$nc($TestButtonGroupFocusTraversal::frame)->pack();
	$nc($TestButtonGroupFocusTraversal::frame)->setAlwaysOnTop(true);
	$nc($TestButtonGroupFocusTraversal::frame)->setLocationRelativeTo(nullptr);
	$nc($TestButtonGroupFocusTraversal::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($TestButtonGroupFocusTraversal::frame)->setVisible(true);
}

TestButtonGroupFocusTraversal$1::TestButtonGroupFocusTraversal$1() {
}

$Class* TestButtonGroupFocusTraversal$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestButtonGroupFocusTraversal$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestButtonGroupFocusTraversal$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestButtonGroupFocusTraversal",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestButtonGroupFocusTraversal$1", nullptr, nullptr, 0},
		{"TestButtonGroupFocusTraversal$1$4", nullptr, nullptr, 0},
		{"TestButtonGroupFocusTraversal$1$3", nullptr, nullptr, 0},
		{"TestButtonGroupFocusTraversal$1$2", nullptr, nullptr, 0},
		{"TestButtonGroupFocusTraversal$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestButtonGroupFocusTraversal$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestButtonGroupFocusTraversal"
	};
	$loadClass(TestButtonGroupFocusTraversal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestButtonGroupFocusTraversal$1);
	});
	return class$;
}

$Class* TestButtonGroupFocusTraversal$1::class$ = nullptr;