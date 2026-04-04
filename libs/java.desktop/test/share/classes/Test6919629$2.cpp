#include <Test6919629$2.h>
#include <Test6919629.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $Test6919629 = ::Test6919629;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test6919629$2::init$($Test6919629* this$0) {
	$set(this, this$0, this$0);
}

void Test6919629$2::run() {
	$$nc($nc(this->this$0->f)->getContentPane())->removeAll();
	$nc(this->this$0->f)->setVisible(false);
	$nc(this->this$0->f)->dispose();
}

Test6919629$2::Test6919629$2() {
}

$Class* Test6919629$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest6919629;", nullptr, $FINAL | $SYNTHETIC, $field(Test6919629$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest6919629;)V", nullptr, 0, $method(Test6919629$2, init$, void, $Test6919629*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6919629$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6919629",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6919629$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6919629$2",
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
		"Test6919629"
	};
	$loadClass(Test6919629$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6919629$2);
	});
	return class$;
}

$Class* Test6919629$2::class$ = nullptr;