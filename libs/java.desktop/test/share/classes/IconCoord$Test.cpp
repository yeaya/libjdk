#include <IconCoord$Test.h>
#include <IconCoord$Test$1.h>
#include <IconCoord.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

#undef CENTER
#undef EAST
#undef FAIL
#undef MAX_VALUE
#undef PASS
#undef SOUTH
#undef WEST

using $IconCoord$Test$1 = ::IconCoord$Test$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;

void IconCoord$Test::init$() {
}

$JFrame* IconCoord$Test::createTestFrame($String* name, $Component* topComponent, $String* instructions, int32_t instrHeight) {
	$useLocalObjectStack();
	$var($String, PASS, "Pass"_s);
	$var($String, FAIL, "Fail"_s);
	$var($JFrame, frame, $new($JFrame, name));
	frame->setLayout($$new($BorderLayout));
	$var($JPanel, testButtonsPanel, $new($JPanel));
	testButtonsPanel->setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, 20));
	$var($ActionListener, btnAL, $new($IconCoord$Test$1, this));
	$var($JButton, passBtn, $new($JButton, PASS));
	passBtn->addActionListener(btnAL);
	passBtn->setActionCommand(PASS);
	$var($JButton, failBtn, $new($JButton, FAIL));
	failBtn->addActionListener(btnAL);
	failBtn->setActionCommand(FAIL);
	testButtonsPanel->add($BorderLayout::WEST, passBtn);
	testButtonsPanel->add($BorderLayout::EAST, failBtn);
	$var($JTextArea, instrText, $new($JTextArea));
	instrText->setLineWrap(true);
	instrText->setEditable(false);
	$var($JScrollPane, instrScrollPane, $new($JScrollPane, instrText));
	instrScrollPane->setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, instrHeight));
	instrText->append(instructions);
	$var($JPanel, servicePanel, $new($JPanel));
	servicePanel->setLayout($$new($BorderLayout));
	servicePanel->add($BorderLayout::CENTER, instrScrollPane);
	servicePanel->add($BorderLayout::SOUTH, testButtonsPanel);
	frame->add($BorderLayout::SOUTH, servicePanel);
	frame->add($BorderLayout::CENTER, topComponent);
	return frame;
}

void IconCoord$Test::pass() {
	$synchronized(this) {
		this->pass$ = true;
		$of(this)->notifyAll();
	}
}

void IconCoord$Test::waitTestResult() {
	$synchronized(this) {
		while (!this->pass$) {
			$of(this)->wait();
		}
	}
}

IconCoord$Test::IconCoord$Test() {
}

$Class* IconCoord$Test::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pass", "Z", nullptr, $PRIVATE, $field(IconCoord$Test, pass$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IconCoord$Test, init$, void)},
		{"createTestFrame", "(Ljava/lang/String;Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JFrame;", nullptr, 0, $virtualMethod(IconCoord$Test, createTestFrame, $JFrame*, $String*, $Component*, $String*, int32_t)},
		{"pass", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(IconCoord$Test, pass, void)},
		{"waitTestResult", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(IconCoord$Test, waitTestResult, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconCoord$Test", "IconCoord", "Test", $STATIC},
		{"IconCoord$Test$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IconCoord$Test",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"IconCoord"
	};
	$loadClass(IconCoord$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IconCoord$Test);
	});
	return class$;
}

$Class* IconCoord$Test::class$ = nullptr;