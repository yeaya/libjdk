#include <bug4314199$1.h>
#include <bug4314199.h>
#include <jcpp.h>

using $bug4314199 = ::bug4314199;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4314199$1::init$($bug4314199* this$0) {
	$set(this, this$0, this$0);
}

void bug4314199$1::run() {
	this->this$0->createAndShowGUI();
}

bug4314199$1::bug4314199$1() {
}

$Class* bug4314199$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4314199;", nullptr, $FINAL | $SYNTHETIC, $field(bug4314199$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4314199;)V", nullptr, 0, $method(bug4314199$1, init$, void, $bug4314199*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4314199$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4314199",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4314199$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4314199$1",
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
		"bug4314199"
	};
	$loadClass(bug4314199$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4314199$1);
	});
	return class$;
}

$Class* bug4314199$1::class$ = nullptr;