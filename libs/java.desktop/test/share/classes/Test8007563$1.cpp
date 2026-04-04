#include <Test8007563$1.h>
#include <Test8007563.h>
#include <java/awt/SecondaryLoop.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test8007563 = ::Test8007563;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void Test8007563$1::init$($Test8007563* this$0, $SecondaryLoop* val$secondaryLoop) {
	$set(this, this$0, this$0);
	$set(this, val$secondaryLoop, val$secondaryLoop);
	$Thread::init$();
}

void Test8007563$1::run() {
	try {
		$Thread::sleep(200);
	} catch ($InterruptedException& e) {
	}
	$nc(this->val$secondaryLoop)->exit();
	$SwingUtilities::invokeLater(this->this$0);
}

Test8007563$1::Test8007563$1() {
}

$Class* Test8007563$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest8007563;", nullptr, $FINAL | $SYNTHETIC, $field(Test8007563$1, this$0)},
		{"val$secondaryLoop", "Ljava/awt/SecondaryLoop;", nullptr, $FINAL | $SYNTHETIC, $field(Test8007563$1, val$secondaryLoop)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest8007563;Ljava/awt/SecondaryLoop;)V", nullptr, 0, $method(Test8007563$1, init$, void, $Test8007563*, $SecondaryLoop*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8007563$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8007563",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8007563$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8007563$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test8007563"
	};
	$loadClass(Test8007563$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8007563$1);
	});
	return class$;
}

$Class* Test8007563$1::class$ = nullptr;