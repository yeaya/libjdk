#include <bug4962534$4.h>
#include <bug4962534.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4962534$4::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$4::run() {
	$init($bug4962534);
	$set(this->this$0, framePosition, $nc($bug4962534::frame)->getLocationOnScreen());
}

bug4962534$4::bug4962534$4() {
}

$Class* bug4962534$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(bug4962534$4, init$, void, $bug4962534*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4962534",
		"setFramePosEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4962534$4",
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
		"bug4962534"
	};
	$loadClass(bug4962534$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$4);
	});
	return class$;
}

$Class* bug4962534$4::class$ = nullptr;