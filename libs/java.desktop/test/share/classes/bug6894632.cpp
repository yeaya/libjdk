#include <bug6894632.h>
#include <bug6894632$1.h>
#include <bug6894632$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/util/List.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

#undef ASCENDING
#undef EXIT_ON_CLOSE
#undef UNSORTED

using $bug6894632$1 = ::bug6894632$1;
using $bug6894632$2 = ::bug6894632$2;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

$JTable* bug6894632::table = nullptr;

void bug6894632::init$() {
}

void bug6894632::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6894632$1));
	$nc($System::out)->println("ok"_s);
}

void bug6894632::test($List* sortKeys) {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	$var($Throwable, var$0, nullptr);
	try {
		frame->setUndecorated(true);
		frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
		$init(bug6894632);
		$assignStatic(bug6894632::table, $new($JTable));
		$var($DefaultTableModel, tableModel, $new($bug6894632$2, 10, 1));
		bug6894632::table->setModel(tableModel);
		$var($TableRowSorter, sorter, $new($TableRowSorter, tableModel));
		sorter->setSortKeys(sortKeys);
		$nc(bug6894632::table)->setRowSorter(sorter);
		frame->setContentPane(bug6894632::table);
		frame->pack();
		frame->setLocationRelativeTo(nullptr);
		frame->setVisible(true);
		int32_t lastRow = $nc(bug6894632::table)->getRowCount() - 1;
		$nc(bug6894632::table)->setRowSelectionInterval(lastRow, lastRow);
		tableModel->removeRow(lastRow - 1);
		lastRow = $nc(bug6894632::table)->getRowCount() - 1;
		if (lastRow != $nc(bug6894632::table)->getSelectedRow()) {
			$throwNew($RuntimeException, "last row must be still selected"_s);
		}
		$nc(sortKeys)->clear();
		$init($SortOrder);
		sortKeys->add(0, $$new($RowSorter$SortKey, 0, $SortOrder::ASCENDING));
		sorter->setSortKeys(sortKeys);
		lastRow = $nc(bug6894632::table)->getRowCount() - 1;
		tableModel->removeRow(lastRow - 1);
		if (!$$nc($$nc($nc(bug6894632::table)->getValueAt($nc(bug6894632::table)->getSelectedRow(), 0))->toString())->endsWith("==last"_s)) {
			$throwNew($RuntimeException, "row ends with \"==last\" row must be still selected"_s);
		}
		sortKeys->clear();
		sortKeys->add(0, $$new($RowSorter$SortKey, 0, $SortOrder::UNSORTED));
		sorter->setSortKeys(sortKeys);
		lastRow = $nc(bug6894632::table)->getRowCount() - 1;
		tableModel->removeRow(lastRow - 1);
		lastRow = $nc(bug6894632::table)->getRowCount() - 1;
		if (lastRow != $nc(bug6894632::table)->getSelectedRow()) {
			$throwNew($RuntimeException, "last row must be still selected"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		frame->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bug6894632::bug6894632() {
}

$Class* bug6894632::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug6894632, table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6894632, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6894632, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/swing/RowSorter$SortKey;>;)V", $STATIC, $staticMethod(bug6894632, test, void, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6894632$2", nullptr, nullptr, 0},
		{"bug6894632$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6894632",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6894632$2,bug6894632$1"
	};
	$loadClass(bug6894632, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6894632);
	});
	return class$;
}

$Class* bug6894632::class$ = nullptr;