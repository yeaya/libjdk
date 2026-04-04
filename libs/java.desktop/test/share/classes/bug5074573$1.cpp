#include <bug5074573$1.h>
#include <bug5074573.h>
#include <jcpp.h>

using $bug5074573 = ::bug5074573;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug5074573$1::init$($Class* val$textComponentClass) {
	$set(this, val$textComponentClass, val$textComponentClass);
}

void bug5074573$1::run() {
	$bug5074573::initialize(this->val$textComponentClass);
}

bug5074573$1::bug5074573$1() {
}

$Class* bug5074573$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$textComponentClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(bug5074573$1, val$textComponentClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(bug5074573$1, init$, void, $Class*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug5074573$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug5074573",
		"test",
		"(Ljava/lang/Class;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5074573$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug5074573$1",
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
		"bug5074573"
	};
	$loadClass(bug5074573$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5074573$1);
	});
	return class$;
}

$Class* bug5074573$1::class$ = nullptr;