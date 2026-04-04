#include <TestDialog4bug4644444.h>
#include <TestDialog4bug4644444$HandleAssert.h>
#include <TestDialog4bug4644444$RemarksDialog.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Frame.h>
#include <java/awt/Panel.h>
#include <java/awt/TextArea.h>
#include <jcpp.h>

#undef SCROLLBARS_BOTH

using $TestDialog4bug4644444$HandleAssert = ::TestDialog4bug4644444$HandleAssert;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Button = ::java::awt::Button;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $Frame = ::java::awt::Frame;
using $Panel = ::java::awt::Panel;
using $TextArea = ::java::awt::TextArea;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestDialog4bug4644444::init$($Frame* frame, $String* name) {
	$Dialog::init$(frame, name);
	this->maxStringLength = 70;
	this->failStatus = false;
	this->instructionCounter = 0;
	this->exceptionCounter = 0;
	$set(this, failureMessages, "<br>"_s);
	$set(this, remarksMessage, nullptr);
	int32_t scrollBoth = $TextArea::SCROLLBARS_BOTH;
	$set(this, instructionsText, $new($TextArea, ""_s, 14, this->maxStringLength, scrollBoth));
	add("North"_s, this->instructionsText);
	$set(this, messageText, $new($TextArea, ""_s, 3, this->maxStringLength, scrollBoth));
	add("Center"_s, this->messageText);
	$set(this, assertPanel, $new($Panel, $$new($FlowLayout)));
	$set(this, assertPass, $new($Button, "Assertion Pass"_s));
	this->assertPass->setName("Assertion Pass"_s);
	$set(this, assertFail, $new($Button, "Assertion Fail"_s));
	this->assertFail->setName("Assertion Fail"_s);
	$set(this, remarks, $new($Button, "Assertion Fail Remarks"_s));
	this->remarks->setEnabled(false);
	$nc(this->remarks)->setName("Assertion Remarks"_s);
	$nc(this->assertPanel)->add(this->assertPass);
	$nc(this->assertPanel)->add(this->assertFail);
	$nc(this->assertPanel)->add(this->remarks);
	$set(this, handleAssert, $new($TestDialog4bug4644444$HandleAssert, this));
	$nc(this->assertPass)->addActionListener(this->handleAssert);
	$nc(this->assertFail)->addActionListener(this->handleAssert);
	$nc(this->remarks)->addActionListener(this->handleAssert);
	add("South"_s, this->assertPanel);
	pack();
	show();
}

void TestDialog4bug4644444::printInstructions($StringArray* instructions) {
	$useLocalObjectStack();
	$nc(this->instructionsText)->setText(""_s);
	$var($String, printStr, nullptr);
	$var($String, remainingStr, nullptr);
	for (int32_t i = 0; i < $nc(instructions)->length; ++i) {
		$assign(remainingStr, instructions->get(i));
		while ($nc(remainingStr)->length() > 0) {
			if (remainingStr->length() >= this->maxStringLength) {
				int32_t posOfSpace = remainingStr->lastIndexOf(u' ', this->maxStringLength - 1);
				if (posOfSpace <= 0) {
					posOfSpace = this->maxStringLength - 1;
				}
				$assign(printStr, remainingStr->substring(0, posOfSpace + 1));
				$assign(remainingStr, remainingStr->substring(posOfSpace + 1));
			} else {
				$assign(printStr, remainingStr);
				$assign(remainingStr, ""_s);
			}
			$nc(this->instructionsText)->append($$str({printStr, "\n"_s}));
		}
	}
}

void TestDialog4bug4644444::displayMessage($String* messageIn) {
	$nc(this->messageText)->append($$str({messageIn, "\n"_s}));
}

void TestDialog4bug4644444::emptyMessage() {
	$nc(this->messageText)->setText(""_s);
}

void TestDialog4bug4644444::setInstructions($StringArray2* insStr) {
	$set(this, instructions, insStr);
}

void TestDialog4bug4644444::setExceptionMessages($StringArray* exceptionMessages) {
	$set(this, exceptionMessages, exceptionMessages);
}

TestDialog4bug4644444::TestDialog4bug4644444() {
}

$Class* TestDialog4bug4644444::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instructionsText", "Ljava/awt/TextArea;", nullptr, 0, $field(TestDialog4bug4644444, instructionsText)},
		{"messageText", "Ljava/awt/TextArea;", nullptr, 0, $field(TestDialog4bug4644444, messageText)},
		{"maxStringLength", "I", nullptr, 0, $field(TestDialog4bug4644444, maxStringLength)},
		{"assertPanel", "Ljava/awt/Panel;", nullptr, 0, $field(TestDialog4bug4644444, assertPanel)},
		{"assertPass", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4644444, assertPass)},
		{"assertFail", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4644444, assertFail)},
		{"remarks", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4644444, remarks)},
		{"handleAssert", "LTestDialog4bug4644444$HandleAssert;", nullptr, 0, $field(TestDialog4bug4644444, handleAssert)},
		{"failStatus", "Z", nullptr, 0, $field(TestDialog4bug4644444, failStatus)},
		{"instructionCounter", "I", nullptr, 0, $field(TestDialog4bug4644444, instructionCounter)},
		{"instructions", "[[Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4644444, instructions)},
		{"exceptionCounter", "I", nullptr, 0, $field(TestDialog4bug4644444, exceptionCounter)},
		{"exceptionMessages", "[Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4644444, exceptionMessages)},
		{"failureMessages", "Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4644444, failureMessages)},
		{"remarksMessage", "Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4644444, remarksMessage)},
		{"remarksDialog", "LTestDialog4bug4644444$RemarksDialog;", nullptr, 0, $field(TestDialog4bug4644444, remarksDialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestDialog4bug4644444, init$, void, $Frame*, $String*)},
		{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug4644444, displayMessage, void, $String*)},
		{"emptyMessage", "()V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug4644444, emptyMessage, void)},
		{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug4644444, printInstructions, void, $StringArray*)},
		{"setExceptionMessages", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug4644444, setExceptionMessages, void, $StringArray*)},
		{"setInstructions", "([[Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug4644444, setInstructions, void, $StringArray2*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDialog4bug4644444$RemarksDialog", "TestDialog4bug4644444", "RemarksDialog", 0},
		{"TestDialog4bug4644444$HandleAssert", "TestDialog4bug4644444", "HandleAssert", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDialog4bug4644444",
		"java.awt.Dialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestDialog4bug4644444$RemarksDialog,TestDialog4bug4644444$HandleAssert"
	};
	$loadClass(TestDialog4bug4644444, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestDialog4bug4644444));
	});
	return class$;
}

$Class* TestDialog4bug4644444::class$ = nullptr;