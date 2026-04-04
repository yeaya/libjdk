#include <bug6848475$1$1.h>
#include <bug6848475$1.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <jcpp.h>

using $bug6848475$1 = ::bug6848475$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;

void bug6848475$1$1::init$($bug6848475$1* this$0) {
	$set(this, this$0, this$0);
	$DefaultBoundedRangeModel::init$();
}

void bug6848475$1$1::setValue(int32_t n) {
}

bug6848475$1$1::bug6848475$1$1() {
}

$Class* bug6848475$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6848475$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6848475$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6848475$1;)V", nullptr, 0, $method(bug6848475$1$1, init$, void, $bug6848475$1*)},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(bug6848475$1$1, setValue, void, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6848475$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6848475$1", nullptr, nullptr, 0},
		{"bug6848475$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6848475$1$1",
		"javax.swing.DefaultBoundedRangeModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6848475"
	};
	$loadClass(bug6848475$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6848475$1$1));
	});
	return class$;
}

$Class* bug6848475$1$1::class$ = nullptr;