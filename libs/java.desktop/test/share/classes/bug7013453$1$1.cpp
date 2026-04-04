#include <bug7013453$1$1.h>
#include <bug7013453$1.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $bug7013453$1 = ::bug7013453$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;

void bug7013453$1$1::init$($bug7013453$1* this$0, Object$* val$paintManager, $Field* val$showingField) {
	$set(this, this$0, this$0);
	$set(this, val$paintManager, val$paintManager);
	$set(this, val$showingField, val$showingField);
}

void bug7013453$1$1::run() {
	$beforeCallerSensitive();
	try {
		$Thread::sleep(500);
	} catch ($InterruptedException& e) {
		$throwNew($RuntimeException, e);
	}
	$synchronized(this->val$paintManager) {
		try {
			$nc(this->val$showingField)->setBoolean(this->val$paintManager, false);
		} catch ($IllegalAccessException& e) {
			$throwNew($RuntimeException, e);
		}
	}
}

bug7013453$1$1::bug7013453$1$1() {
}

$Class* bug7013453$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7013453$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7013453$1$1, this$0)},
		{"val$showingField", "Ljava/lang/reflect/Field;", nullptr, $FINAL | $SYNTHETIC, $field(bug7013453$1$1, val$showingField)},
		{"val$paintManager", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(bug7013453$1$1, val$paintManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7013453$1;Ljava/lang/Object;Ljava/lang/reflect/Field;)V", "()V", 0, $method(bug7013453$1$1, init$, void, $bug7013453$1*, Object$*, $Field*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7013453$1$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7013453$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7013453$1", nullptr, nullptr, 0},
		{"bug7013453$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7013453$1$1",
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
		"bug7013453"
	};
	$loadClass(bug7013453$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7013453$1$1);
	});
	return class$;
}

$Class* bug7013453$1$1::class$ = nullptr;