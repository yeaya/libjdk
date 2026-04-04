#include <JTableScrollTest$2.h>
#include <JTableScrollTest.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void JTableScrollTest$2::init$($StringArray* val$names, $ObjectArray2* val$data) {
	$set(this, val$names, val$names);
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t JTableScrollTest$2::getColumnCount() {
	return $nc(this->val$names)->length;
}

int32_t JTableScrollTest$2::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* JTableScrollTest$2::getValueAt(int32_t row, int32_t col) {
	return $nc($nc(this->val$data)->get(row))->get(col);
}

$String* JTableScrollTest$2::getColumnName(int32_t column) {
	return $nc(this->val$names)->get(column);
}

$Class* JTableScrollTest$2::getColumnClass(int32_t c) {
	return $$nc(getValueAt(0, c))->getClass();
}

bool JTableScrollTest$2::isCellEditable(int32_t row, int32_t col) {
	return col != 5;
}

void JTableScrollTest$2::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$nc($nc(this->val$data)->get(row))->set(column, aValue);
}

JTableScrollTest$2::JTableScrollTest$2() {
}

$Class* JTableScrollTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JTableScrollTest$2, val$data)},
		{"val$names", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JTableScrollTest$2, val$names)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, 0, $method(JTableScrollTest$2, init$, void, $StringArray*, $ObjectArray2*)},
		{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, getColumnClass, $Class*, int32_t)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, getColumnCount, int32_t)},
		{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, getColumnName, $String*, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, getValueAt, $Object*, int32_t, int32_t)},
		{"isCellEditable", "(II)Z", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, isCellEditable, bool, int32_t, int32_t)},
		{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$2, setValueAt, void, Object$*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTableScrollTest",
		"createTable",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTableScrollTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTableScrollTest$2",
		"javax.swing.table.AbstractTableModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JTableScrollTest"
	};
	$loadClass(JTableScrollTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTableScrollTest$2));
	});
	return class$;
}

$Class* JTableScrollTest$2::class$ = nullptr;