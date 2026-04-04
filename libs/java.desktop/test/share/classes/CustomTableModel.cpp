#include <CustomTableModel.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

void CustomTableModel::init$($ObjectArray2* data, $ObjectArray* columnNames) {
	$DefaultTableModel::init$(data, columnNames);
}

$Class* CustomTableModel::getColumnClass(int32_t columnIndex) {
	if (getRowCount() > 0) {
		return $$nc(getValueAt(0, columnIndex))->getClass();
	}
	return $DefaultTableModel::getColumnClass(columnIndex);
}

CustomTableModel::CustomTableModel() {
}

$Class* CustomTableModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([[Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CustomTableModel, init$, void, $ObjectArray2*, $ObjectArray*)},
		{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(CustomTableModel, getColumnClass, $Class*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CustomTableModel",
		"javax.swing.table.DefaultTableModel",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CustomTableModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CustomTableModel));
	});
	return class$;
}

$Class* CustomTableModel::class$ = nullptr;