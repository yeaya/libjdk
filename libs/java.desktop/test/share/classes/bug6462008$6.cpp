#include <bug6462008$6.h>
#include <bug6462008.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6462008$6::init$(int32_t val$index0, int32_t val$index1) {
	this->val$index0 = val$index0;
	this->val$index1 = val$index1;
}

void bug6462008$6::run() {
	$init($bug6462008);
	$$nc($nc($bug6462008::list)->getSelectionModel())->setSelectionInterval(this->val$index0, this->val$index1);
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$6::bug6462008$6() {
}

$Class* bug6462008$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$index1", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$6, val$index1)},
		{"val$index0", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$6, val$index0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", "()V", 0, $method(bug6462008$6, init$, void, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"setSelectionInterval",
		"(II)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$6",
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
		"bug6462008"
	};
	$loadClass(bug6462008$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$6);
	});
	return class$;
}

$Class* bug6462008$6::class$ = nullptr;