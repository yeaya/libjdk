#include <bug4506788$1.h>
#include <bug4506788.h>
#include <jcpp.h>

using $bug4506788 = ::bug4506788;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4506788$1::init$($bug4506788* this$0) {
	$set(this, this$0, this$0);
}

void bug4506788$1::run() {
	this->this$0->createAndShowGUI();
}

bug4506788$1::bug4506788$1() {
}

$Class* bug4506788$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4506788;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4506788;)V", nullptr, 0, $method(bug4506788$1, init$, void, $bug4506788*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4506788$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4506788",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4506788$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4506788$1",
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
		"bug4506788"
	};
	$loadClass(bug4506788$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4506788$1);
	});
	return class$;
}

$Class* bug4506788$1::class$ = nullptr;