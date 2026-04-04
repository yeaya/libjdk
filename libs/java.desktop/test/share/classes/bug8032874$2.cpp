#include <bug8032874$2.h>
#include <bug8032874.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/RowSorter.h>
#include <jcpp.h>

#undef SINGLE_INTERVAL_SELECTION

using $bug8032874 = ::bug8032874;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

void bug8032874$2::init$() {
}

void bug8032874$2::run() {
	$useLocalObjectStack();
	$init($bug8032874);
	$$nc($nc($bug8032874::table)->getRowSorter())->toggleSortOrder(0);
	$$nc($nc($bug8032874::table)->getSelectionModel())->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	$nc($bug8032874::table)->setRowSelectionInterval(1, 2);
}

bug8032874$2::bug8032874$2() {
}

$Class* bug8032874$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8032874$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032874$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032874",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032874$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032874$2",
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
		"bug8032874"
	};
	$loadClass(bug8032874$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032874$2);
	});
	return class$;
}

$Class* bug8032874$2::class$ = nullptr;