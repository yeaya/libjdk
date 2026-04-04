#include <DefaultRowSorterIOOBEtest$1.h>
#include <DefaultRowSorterIOOBEtest.h>
#include <java/util/List.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest = ::DefaultRowSorterIOOBEtest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void DefaultRowSorterIOOBEtest$1::init$() {
	$AbstractTableModel::init$();
}

int32_t DefaultRowSorterIOOBEtest$1::getRowCount() {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::rows)->size();
}

int32_t DefaultRowSorterIOOBEtest$1::getColumnCount() {
	return 1;
}

$Object* DefaultRowSorterIOOBEtest$1::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::rows)->get(rowIndex);
}

DefaultRowSorterIOOBEtest$1::DefaultRowSorterIOOBEtest$1() {
}

$Class* DefaultRowSorterIOOBEtest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultRowSorterIOOBEtest$1, init$, void)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DefaultRowSorterIOOBEtest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultRowSorterIOOBEtest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultRowSorterIOOBEtest$1",
		"javax.swing.table.AbstractTableModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DefaultRowSorterIOOBEtest"
	};
	$loadClass(DefaultRowSorterIOOBEtest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultRowSorterIOOBEtest$1));
	});
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$1::class$ = nullptr;