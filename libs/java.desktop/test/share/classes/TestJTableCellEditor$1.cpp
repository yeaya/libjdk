#include <TestJTableCellEditor$1.h>
#include <TestJTableCellEditor.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void TestJTableCellEditor$1::init$($Class* val$cls) {
	$set(this, val$cls, val$cls);
	$AbstractTableModel::init$();
}

int32_t TestJTableCellEditor$1::getRowCount() {
	return 0;
}

int32_t TestJTableCellEditor$1::getColumnCount() {
	return 1;
}

$Object* TestJTableCellEditor$1::getValueAt(int32_t r, int32_t c) {
	return $of("Some Value"_s);
}

$Class* TestJTableCellEditor$1::getColumnClass(int32_t c) {
	return this->val$cls;
}

TestJTableCellEditor$1::TestJTableCellEditor$1() {
}

$Class* TestJTableCellEditor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$cls", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TestJTableCellEditor$1, val$cls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(TestJTableCellEditor$1, init$, void, $Class*)},
		{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC, $virtualMethod(TestJTableCellEditor$1, getColumnClass, $Class*, int32_t)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(TestJTableCellEditor$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(TestJTableCellEditor$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestJTableCellEditor$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJTableCellEditor",
		"testJTableCellEditor",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJTableCellEditor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJTableCellEditor$1",
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
		"TestJTableCellEditor"
	};
	$loadClass(TestJTableCellEditor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestJTableCellEditor$1));
	});
	return class$;
}

$Class* TestJTableCellEditor$1::class$ = nullptr;