#include <JColorChooserTest$1$1.h>
#include <JColorChooserTest$1.h>
#include <JColorChooserTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JColorChooserTest = ::JColorChooserTest;
using $JColorChooserTest$1 = ::JColorChooserTest$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JColorChooserTest$1$1::init$($JColorChooserTest$1* this$1) {
	$set(this, this$1, this$1);
}

void JColorChooserTest$1$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$1->this$0)->testResult = false;
	$nc($JColorChooserTest::mainFrame)->dispose();
	$nc(this->this$1->this$0->latch)->countDown();
}

JColorChooserTest$1$1::JColorChooserTest$1$1() {
}

$Class* JColorChooserTest$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LJColorChooserTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(JColorChooserTest$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJColorChooserTest$1;)V", nullptr, 0, $method(JColorChooserTest$1$1, init$, void, $JColorChooserTest$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooserTest$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JColorChooserTest$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JColorChooserTest$1", nullptr, nullptr, 0},
		{"JColorChooserTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JColorChooserTest$1$1",
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
		"JColorChooserTest"
	};
	$loadClass(JColorChooserTest$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JColorChooserTest$1$1);
	});
	return class$;
}

$Class* JColorChooserTest$1$1::class$ = nullptr;