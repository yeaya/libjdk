#include <bug8005019.h>
#include <bug8005019$1.h>
#include <bug8005019$GeneralFilter.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowFilter.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $bug8005019$1 = ::bug8005019$1;
using $bug8005019$GeneralFilter = ::bug8005019$GeneralFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $JTable = ::javax::swing::JTable;
using $RowFilter = ::javax::swing::RowFilter;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

void bug8005019::init$() {
}

void bug8005019::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8005019$1));
}

void bug8005019::testSelectionWithFilterTable() {
	$useLocalObjectStack();
	$var($DefaultTableModel, model, $new($DefaultTableModel, 0, 1));
	int32_t last = 2;
	for (int32_t i = 0; i <= last; ++i) {
		model->addRow($$new($ObjectArray, {$($Integer::valueOf(i))}));
	}
	$var($JTable, table, $new($JTable, model));
	table->setAutoCreateRowSorter(true);
	table->setRowSelectionInterval(last, last);
	$var($RowFilter, filter, $new($bug8005019$GeneralFilter, $$new($ints, {0})));
	$$sure($DefaultRowSorter, table->getRowSorter())->setRowFilter(filter);
	model->insertRow(2, $$new($ObjectArray, {"x"_s}));
}

bug8005019::bug8005019() {
}

$Class* bug8005019::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8005019, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8005019, main, void, $StringArray*), "java.lang.Exception"},
		{"testSelectionWithFilterTable", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8005019, testSelectionWithFilterTable, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8005019$GeneralFilter", "bug8005019", "GeneralFilter", $PRIVATE | $STATIC},
		{"bug8005019$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8005019",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8005019$GeneralFilter,bug8005019$1"
	};
	$loadClass(bug8005019, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8005019);
	});
	return class$;
}

$Class* bug8005019::class$ = nullptr;