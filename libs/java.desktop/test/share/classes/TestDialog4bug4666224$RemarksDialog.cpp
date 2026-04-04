#include <TestDialog4bug4666224$RemarksDialog.h>
#include <TestDialog4bug4666224.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Panel.h>
#include <java/awt/TextArea.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $TestDialog4bug4666224 = ::TestDialog4bug4666224;
using $BorderLayout = ::java::awt::BorderLayout;
using $Button = ::java::awt::Button;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $Panel = ::java::awt::Panel;
using $TextArea = ::java::awt::TextArea;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$String* TestDialog4bug4666224$RemarksDialog::toString() {
	 return this->$Dialog::toString();
}

int32_t TestDialog4bug4666224$RemarksDialog::hashCode() {
	 return this->$Dialog::hashCode();
}

bool TestDialog4bug4666224$RemarksDialog::equals(Object$* arg0) {
	 return this->$Dialog::equals(arg0);
}

$Object* TestDialog4bug4666224$RemarksDialog::clone() {
	 return this->$Dialog::clone();
}

void TestDialog4bug4666224$RemarksDialog::finalize() {
	this->$Dialog::finalize();
}

void TestDialog4bug4666224$RemarksDialog::init$($TestDialog4bug4666224* this$0, $Dialog* owner, $String* title, bool modal) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$Dialog::init$(owner, title, modal);
	$set(this, rootPanel, $new($Panel, $$new($BorderLayout)));
	$set(this, remarksPanel, $new($Panel, $$new($FlowLayout)));
	$set(this, textarea, $new($TextArea, 5, 30));
	$set(this, addRemarks, $new($Button, "Add Remarks"_s));
	this->addRemarks->addActionListener(this);
	$set(this, cancelRemarks, $new($Button, "Cancel Remarks"_s));
	this->cancelRemarks->addActionListener(this);
	$nc(this->remarksPanel)->add(this->addRemarks);
	$nc(this->remarksPanel)->add(this->cancelRemarks);
	$nc(this->rootPanel)->add(this->textarea, "Center"_s);
	$nc(this->rootPanel)->add(this->remarksPanel, "South"_s);
	add(this->rootPanel);
	setBounds(150, 150, 400, 200);
	setVisible(true);
}

void TestDialog4bug4666224$RemarksDialog::actionPerformed($ActionEvent* ae) {
	$useLocalObjectStack();
	$set(this->this$0, remarksMessage, nullptr);
	if ($equals($nc(ae)->getSource(), this->addRemarks)) {
		$var($String, msg, $$nc($nc(this->textarea)->getText())->trim());
		if (msg->length() > 0) {
			$set(this->this$0, remarksMessage, msg);
		}
	}
	dispose();
}

TestDialog4bug4666224$RemarksDialog::TestDialog4bug4666224$RemarksDialog() {
}

$Class* TestDialog4bug4666224$RemarksDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestDialog4bug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4bug4666224$RemarksDialog, this$0)},
		{"rootPanel", "Ljava/awt/Panel;", nullptr, 0, $field(TestDialog4bug4666224$RemarksDialog, rootPanel)},
		{"remarksPanel", "Ljava/awt/Panel;", nullptr, 0, $field(TestDialog4bug4666224$RemarksDialog, remarksPanel)},
		{"textarea", "Ljava/awt/TextArea;", nullptr, 0, $field(TestDialog4bug4666224$RemarksDialog, textarea)},
		{"addRemarks", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4666224$RemarksDialog, addRemarks)},
		{"cancelRemarks", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4666224$RemarksDialog, cancelRemarks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(LTestDialog4bug4666224;Ljava/awt/Dialog;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(TestDialog4bug4666224$RemarksDialog, init$, void, $TestDialog4bug4666224*, $Dialog*, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug4666224$RemarksDialog, actionPerformed, void, $ActionEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDialog4bug4666224$RemarksDialog", "TestDialog4bug4666224", "RemarksDialog", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDialog4bug4666224$RemarksDialog",
		"java.awt.Dialog",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestDialog4bug4666224"
	};
	$loadClass(TestDialog4bug4666224$RemarksDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestDialog4bug4666224$RemarksDialog));
	});
	return class$;
}

$Class* TestDialog4bug4666224$RemarksDialog::class$ = nullptr;