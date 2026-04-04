#include <ActionListenerExceptionTest$1.h>
#include <ActionListenerExceptionTest$1$1.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ActionListenerExceptionTest$1$1 = ::ActionListenerExceptionTest$1$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;

void ActionListenerExceptionTest$1::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$1::run() {
	$useLocalObjectStack();
	$set(this->this$0, frame, $new($JFrame));
	this->this$0->frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$set(this->this$0, combo, $new($JComboBox, $$new($StringArray, {
		"One"_s,
		"Two"_s,
		"Three"_s
	})));
	this->this$0->combo->addActionListener($$new($ActionListenerExceptionTest$1$1, this));
	$nc(this->this$0->combo)->setSize(200, 20);
	$nc(this->this$0->frame)->add(this->this$0->combo);
	$nc(this->this$0->frame)->pack();
	$nc(this->this$0->frame)->setLocationRelativeTo(nullptr);
	$nc(this->this$0->frame)->setVisible(true);
}

ActionListenerExceptionTest$1::ActionListenerExceptionTest$1() {
}

$Class* ActionListenerExceptionTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(ActionListenerExceptionTest$1, init$, void, $ActionListenerExceptionTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ActionListenerExceptionTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ActionListenerExceptionTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ActionListenerExceptionTest$1", nullptr, nullptr, 0},
		{"ActionListenerExceptionTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ActionListenerExceptionTest$1",
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
		"ActionListenerExceptionTest"
	};
	$loadClass(ActionListenerExceptionTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionListenerExceptionTest$1);
	});
	return class$;
}

$Class* ActionListenerExceptionTest$1::class$ = nullptr;