#include <bug4962534$5.h>
#include <bug4962534.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4962534$5::init$($bug4962534* this$0, $booleans* val$result) {
	$set(this, this$0, this$0);
	$set(this, val$result, val$result);
}

void bug4962534$5::run() {
	if ($nc(this->this$0->newFrameLocation)->x > $nc(this->this$0->gcBounds)->width || $nc(this->this$0->newFrameLocation)->x < 0 || $nc(this->this$0->newFrameLocation)->y > this->this$0->gcBounds->height || $nc(this->this$0->newFrameLocation)->y < 0) {
		$nc(this->val$result)->set(0, true);
	}
}

bug4962534$5::bug4962534$5() {
}

$Class* bug4962534$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$5, this$0)},
		{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$5, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4962534;[Z)V", "()V", 0, $method(bug4962534$5, init$, void, $bug4962534*, $booleans*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4962534",
		"checkFrameIsOutOfScreenEDT",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4962534$5",
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
	$loadClass(bug4962534$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$5);
	});
	return class$;
}

$Class* bug4962534$5::class$ = nullptr;