#include <bug7068740$3.h>
#include <bug7068740.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug7068740 = ::bug7068740;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void bug7068740$3::init$($AtomicInteger* val$row) {
	$set(this, val$row, val$row);
}

void bug7068740$3::run() {
	$init($bug7068740);
	$nc(this->val$row)->set($nc($bug7068740::table)->getSelectedRow());
}

bug7068740$3::bug7068740$3() {
}

$Class* bug7068740$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$row", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(bug7068740$3, val$row)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(bug7068740$3, init$, void, $AtomicInteger*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7068740$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7068740",
		"getSelectedRow",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7068740$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7068740$3",
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
		"bug7068740"
	};
	$loadClass(bug7068740$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7068740$3);
	});
	return class$;
}

$Class* bug7068740$3::class$ = nullptr;