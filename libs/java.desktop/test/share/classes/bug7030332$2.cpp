#include <bug7030332$2.h>
#include <bug7030332.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $bug7030332 = ::bug7030332;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7030332$2::init$($bug7030332* this$0) {
	$set(this, this$0, this$0);
}

void bug7030332$2::run() {
	this->this$0->setContentPane($($bug7030332::createContentPane()));
}

bug7030332$2::bug7030332$2() {
}

$Class* bug7030332$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7030332;", nullptr, $FINAL | $SYNTHETIC, $field(bug7030332$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7030332;)V", nullptr, 0, $method(bug7030332$2, init$, void, $bug7030332*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7030332$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7030332",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7030332$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7030332$2",
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
		"bug7030332"
	};
	$loadClass(bug7030332$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7030332$2);
	});
	return class$;
}

$Class* bug7030332$2::class$ = nullptr;