#include <TestUI$1.h>
#include <TestUI.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestUI$1::init$($TestUI* this$0) {
	$set(this, this$0, this$0);
}

void TestUI$1::actionPerformed($ActionEvent* e) {
	this->this$0->testResult = false;
	$nc($TestUI::mainFrame)->dispose();
	$nc(this->this$0->latch)->countDown();
}

TestUI$1::TestUI$1() {
}

$Class* TestUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TestUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", nullptr, 0, $method(TestUI$1, init$, void, $TestUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestUI$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestUI",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestUI$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestUI"
	};
	$loadClass(TestUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestUI$1);
	});
	return class$;
}

$Class* TestUI$1::class$ = nullptr;