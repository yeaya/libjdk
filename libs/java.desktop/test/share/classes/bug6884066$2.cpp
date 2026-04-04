#include <bug6884066$2.h>
#include <bug6884066.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $bug6884066 = ::bug6884066;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

void bug6884066$2::init$() {
}

void bug6884066$2::run() {
	$init($bug6884066);
	$var($TableColumnModel, model, $nc($bug6884066::header)->getColumnModel());
	$bug6884066::checkColumn($nc(model)->getColumnCount() - 1, "A"_s);
}

bug6884066$2::bug6884066$2() {
}

$Class* bug6884066$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6884066$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6884066$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6884066",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6884066$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6884066$2",
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
		"bug6884066"
	};
	$loadClass(bug6884066$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6884066$2);
	});
	return class$;
}

$Class* bug6884066$2::class$ = nullptr;