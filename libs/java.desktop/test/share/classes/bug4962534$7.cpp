#include <bug4962534$7.h>
#include <bug4962534.h>
#include <java/awt/Component.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4962534$7::init$($bug4962534* this$0, $ints* val$result) {
	$set(this, this$0, this$0);
	$set(this, val$result, val$result);
}

void bug4962534$7::run() {
	$init($bug4962534);
	$nc(this->val$result)->set(0, $nc($bug4962534::frame)->getWidth());
}

bug4962534$7::bug4962534$7() {
}

$Class* bug4962534$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$7, this$0)},
		{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$7, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4962534;[I)V", "()V", 0, $method(bug4962534$7, init$, void, $bug4962534*, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4962534",
		"getJFrameWidthEDT",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4962534$7",
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
	$loadClass(bug4962534$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$7);
	});
	return class$;
}

$Class* bug4962534$7::class$ = nullptr;