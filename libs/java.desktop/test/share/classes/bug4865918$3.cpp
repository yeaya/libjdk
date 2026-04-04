#include <bug4865918$3.h>
#include <bug4865918$TestScrollBar.h>
#include <bug4865918.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $bug4865918 = ::bug4865918;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4865918$3::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4865918$3::run() {
	$init($bug4865918);
	$nc(this->val$result)->set(0, $nc($bug4865918::sbar)->getValue());
}

bug4865918$3::bug4865918$3() {
}

$Class* bug4865918$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4865918$3, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", "()V", 0, $method(bug4865918$3, init$, void, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4865918$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4865918",
		"getValue",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4865918$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4865918$3",
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
		"bug4865918"
	};
	$loadClass(bug4865918$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4865918$3);
	});
	return class$;
}

$Class* bug4865918$3::class$ = nullptr;