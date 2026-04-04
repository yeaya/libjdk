#include <DefaultRowSorterCacheTest.h>
#include <CustomTableModel.h>
#include <DefaultRowSorterCacheTest$1.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

using $CustomTableModel = ::CustomTableModel;
using $DefaultRowSorterCacheTest$1 = ::DefaultRowSorterCacheTest$1;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

void DefaultRowSorterCacheTest::init$() {
}

void DefaultRowSorterCacheTest::testSort() {
	$useLocalObjectStack();
	$var($ObjectArray, values, $new($ObjectArray, {
		$($Integer::valueOf(1)),
		$($Integer::valueOf(2)),
		$($Integer::valueOf(10))
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {values->get(0)}),
		$$new($ObjectArray, {values->get(1)}),
		$$new($ObjectArray, {values->get(2)})
	}));
	$var($DefaultTableModel, model, $new($CustomTableModel, data, $$new($ObjectArray, {"A"_s})));
	$var($TableRowSorter, rowSorter, $new($TableRowSorter, model));
	rowSorter->toggleSortOrder(0);
	for (int32_t row = 0; row < model->getRowCount(); ++row) {
		if (row != rowSorter->convertRowIndexToView(row)) {
			$throwNew($RuntimeException, "Wrong sorting before making any changes in test case"_s);
		}
	}
	model->setRowCount(0);
	rowSorter->rowsDeleted(0, values->length - 1);
	for (int32_t i = 0; i < values->length; ++i) {
		model->addRow($$new($ObjectArray, {values->get(i)}));
		rowSorter->rowsInserted(i, i);
	}
	for (int32_t row = 0; row < model->getRowCount(); ++row) {
		if (row != rowSorter->convertRowIndexToView(row)) {
			$throwNew($RuntimeException, "Wrong sorting at end of test case"_s);
		}
	}
}

void DefaultRowSorterCacheTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($DefaultRowSorterCacheTest$1));
}

DefaultRowSorterCacheTest::DefaultRowSorterCacheTest() {
}

$Class* DefaultRowSorterCacheTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultRowSorterCacheTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultRowSorterCacheTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testSort", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterCacheTest, testSort, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultRowSorterCacheTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultRowSorterCacheTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"DefaultRowSorterCacheTest$1"
	};
	$loadClass(DefaultRowSorterCacheTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRowSorterCacheTest);
	});
	return class$;
}

$Class* DefaultRowSorterCacheTest::class$ = nullptr;