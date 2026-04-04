#include <bug6777378$1$1.h>
#include <bug6777378$1.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $bug6777378$1 = ::bug6777378$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void bug6777378$1$1::init$($bug6777378$1* this$0) {
	$set(this, this$0, this$0);
	$AbstractTableModel::init$();
}

int32_t bug6777378$1$1::getRowCount() {
	return 10;
}

int32_t bug6777378$1$1::getColumnCount() {
	return 10;
}

$Object* bug6777378$1$1::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	$useLocalObjectStack();
	return $of($str({""_s, $$str(rowIndex), " "_s, $$str(columnIndex)}));
}

bug6777378$1$1::bug6777378$1$1() {
}

$Class* bug6777378$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6777378$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6777378$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6777378$1;)V", nullptr, 0, $method(bug6777378$1$1, init$, void, $bug6777378$1*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(bug6777378$1$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(bug6777378$1$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug6777378$1$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6777378$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6777378$1", nullptr, nullptr, 0},
		{"bug6777378$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6777378$1$1",
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
		"bug6777378"
	};
	$loadClass(bug6777378$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6777378$1$1));
	});
	return class$;
}

$Class* bug6777378$1$1::class$ = nullptr;