#include <TitledBorder$1$1.h>
#include <TitledBorder$1.h>
#include <TitledBorder.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TitledBorder = ::TitledBorder;
using $TitledBorder$1 = ::TitledBorder$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TitledBorder$1$1::init$($TitledBorder$1* this$1) {
	$set(this, this$1, this$1);
}

void TitledBorder$1$1::actionPerformed($ActionEvent* e) {
	$nc($System::out)->println("Fail Button pressed!"_s);
	$nc(this->this$1->this$0)->testResult = false;
	$nc($TitledBorder::mainFrame)->dispose();
	$nc(this->this$1->this$0->latch)->countDown();
}

TitledBorder$1$1::TitledBorder$1$1() {
}

$Class* TitledBorder$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LTitledBorder$1;", nullptr, $FINAL | $SYNTHETIC, $field(TitledBorder$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTitledBorder$1;)V", nullptr, 0, $method(TitledBorder$1$1, init$, void, $TitledBorder$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TitledBorder$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TitledBorder$1", nullptr, nullptr, 0},
		{"TitledBorder$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TitledBorder$1$1",
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
		"TitledBorder"
	};
	$loadClass(TitledBorder$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorder$1$1);
	});
	return class$;
}

$Class* TitledBorder$1$1::class$ = nullptr;