#include <TestUI$2.h>
#include <TestUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestUI$2::init$($TestUI* this$0) {
	$set(this, this$0, this$0);
}

void TestUI$2::actionPerformed($ActionEvent* e) {
	$nc($System::out)->println("Fail Button pressed!"_s);
	this->this$0->testResult = false;
	$nc(this->this$0->latch)->countDown();
}

TestUI$2::TestUI$2() {
}

$Class* TestUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TestUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestUI;)V", nullptr, 0, $method(TestUI$2, init$, void, $TestUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestUI$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestUI",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestUI$2",
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
	$loadClass(TestUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestUI$2);
	});
	return class$;
}

$Class* TestUI$2::class$ = nullptr;