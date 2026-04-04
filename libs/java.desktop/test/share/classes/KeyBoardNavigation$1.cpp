#include <KeyBoardNavigation$1.h>
#include <KeyBoardNavigation.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void KeyBoardNavigation$1::init$($StringArray* val$names, $ObjectArray2* val$data) {
	$set(this, val$names, val$names);
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t KeyBoardNavigation$1::getColumnCount() {
	return $nc(this->val$names)->length;
}

int32_t KeyBoardNavigation$1::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* KeyBoardNavigation$1::getValueAt(int32_t row, int32_t col) {
	return $nc($nc(this->val$data)->get(row))->get(col);
}

$String* KeyBoardNavigation$1::getColumnName(int32_t column) {
	return $nc(this->val$names)->get(column);
}

$Class* KeyBoardNavigation$1::getColumnClass(int32_t c) {
	return $$nc(getValueAt(0, c))->getClass();
}

bool KeyBoardNavigation$1::isCellEditable(int32_t row, int32_t col) {
	return true;
}

void KeyBoardNavigation$1::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$nc($System::out)->println($$str({"Setting value to: "_s, aValue}));
	$nc($nc(this->val$data)->get(row))->set(column, aValue);
}

KeyBoardNavigation$1::KeyBoardNavigation$1() {
}

$Class* KeyBoardNavigation$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(KeyBoardNavigation$1, val$data)},
		{"val$names", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(KeyBoardNavigation$1, val$names)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, 0, $method(KeyBoardNavigation$1, init$, void, $StringArray*, $ObjectArray2*)},
		{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, getColumnClass, $Class*, int32_t)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, getColumnCount, int32_t)},
		{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, getColumnName, $String*, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, getValueAt, $Object*, int32_t, int32_t)},
		{"isCellEditable", "(II)Z", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, isCellEditable, bool, int32_t, int32_t)},
		{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$1, setValueAt, void, Object$*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeyBoardNavigation",
		"initTest",
		"(Ljava/awt/Container;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeyBoardNavigation$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeyBoardNavigation$1",
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
		"KeyBoardNavigation"
	};
	$loadClass(KeyBoardNavigation$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KeyBoardNavigation$1));
	});
	return class$;
}

$Class* KeyBoardNavigation$1::class$ = nullptr;