#include <bug6462008$5.h>
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

void bug6462008$5::init$(int32_t val$selectionMode) {
	this->val$selectionMode = val$selectionMode;
}

void bug6462008$5::run() {
	$init($bug6462008);
	$$nc($nc($bug6462008::list)->getSelectionModel())->setSelectionMode(this->val$selectionMode);
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$5::bug6462008$5() {
}

$Class* bug6462008$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$selectionMode", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$5, val$selectionMode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(bug6462008$5, init$, void, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"setSelectionMode",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$5",
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
	$loadClass(bug6462008$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$5);
	});
	return class$;
}

$Class* bug6462008$5::class$ = nullptr;