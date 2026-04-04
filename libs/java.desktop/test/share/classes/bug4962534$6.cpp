#include <bug4962534$6.h>
#include <bug4962534.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4962534$6::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$6::run() {
	$useLocalObjectStack();
	$init($bug4962534);
	int32_t var$1 = $nc($($nc($bug4962534::frame)->getLocationOnScreen()))->x;
	int32_t var$0 = var$1 + $bug4962534::frame->getWidth() / 2;
	int32_t var$2 = $nc($($bug4962534::frame->getLocationOnScreen()))->y;
	$set(this->this$0, newFrameLocation, $new($Point, var$0, var$2 + $nc(this->this$0->titleComponent)->getHeight() / 2));
}

bug4962534$6::bug4962534$6() {
}

$Class* bug4962534$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(bug4962534$6, init$, void, $bug4962534*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4962534",
		"setNewFrameLocationEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4962534$6",
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
	$loadClass(bug4962534$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$6);
	});
	return class$;
}

$Class* bug4962534$6::class$ = nullptr;