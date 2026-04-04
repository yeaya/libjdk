#include <bug6462008$3.h>
#include <bug6462008.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

void bug6462008$3::init$() {
}

void bug6462008$3::run() {
	$useLocalObjectStack();
	$init($bug6462008);
	$$nc($nc($bug6462008::list)->getSelectionModel())->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	$$nc($nc($bug6462008::list)->getSelectionModel())->clearSelection();
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$3::bug6462008$3() {
}

$Class* bug6462008$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6462008$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"resetList",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6462008"
	};
	$loadClass(bug6462008$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$3);
	});
	return class$;
}

$Class* bug6462008$3::class$ = nullptr;