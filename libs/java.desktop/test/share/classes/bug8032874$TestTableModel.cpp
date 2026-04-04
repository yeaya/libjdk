#include <bug8032874$TestTableModel.h>
#include <bug8032874.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void bug8032874$TestTableModel::init$() {
	$useLocalObjectStack();
	$AbstractTableModel::init$();
	$set(this, data, $new($ArrayList));
	for (int32_t i = 0; i < 5; ++i) {
		this->data->add($($Integer::valueOf(i)));
	}
}

int32_t bug8032874$TestTableModel::getRowCount() {
	return this->data->size();
}

int32_t bug8032874$TestTableModel::getColumnCount() {
	return 1;
}

$Object* bug8032874$TestTableModel::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	return this->data->get(rowIndex);
}

void bug8032874$TestTableModel::remove(int32_t row) {
	this->data->remove(row);
	fireTableRowsDeleted(row, row);
}

bug8032874$TestTableModel::bug8032874$TestTableModel() {
}

$Class* bug8032874$TestTableModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(bug8032874$TestTableModel, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8032874$TestTableModel, init$, void)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(bug8032874$TestTableModel, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(bug8032874$TestTableModel, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug8032874$TestTableModel, getValueAt, $Object*, int32_t, int32_t)},
		{"remove", "(I)V", nullptr, $PUBLIC, $virtualMethod(bug8032874$TestTableModel, remove, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032874$TestTableModel", "bug8032874", "TestTableModel", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032874$TestTableModel",
		"javax.swing.table.AbstractTableModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8032874"
	};
	$loadClass(bug8032874$TestTableModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8032874$TestTableModel));
	});
	return class$;
}

$Class* bug8032874$TestTableModel::class$ = nullptr;