#include <bug8032874$3.h>
#include <bug8032874$TestTableModel.h>
#include <bug8032874.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter.h>
#include <jcpp.h>

using $bug8032874 = ::bug8032874;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8032874$3::init$() {
}

void bug8032874$3::run() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < 5; ++i) {
		$init($bug8032874);
		$nc($bug8032874::tableModel)->remove(0);
		$$nc($nc($bug8032874::table)->getRowSorter())->toggleSortOrder(0);
	}
}

bug8032874$3::bug8032874$3() {
}

$Class* bug8032874$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8032874$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032874$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032874",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032874$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032874$3",
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
	$loadClass(bug8032874$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032874$3);
	});
	return class$;
}

$Class* bug8032874$3::class$ = nullptr;