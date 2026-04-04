#include <PrintManualTest_FitWidthMultiple$1$1.h>
#include <PrintManualTest_FitWidthMultiple$1.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void PrintManualTest_FitWidthMultiple$1$1::init$($PrintManualTest_FitWidthMultiple$1* this$1) {
	$set(this, this$1, this$1);
	$AbstractTableModel::init$();
}

int32_t PrintManualTest_FitWidthMultiple$1$1::getColumnCount() {
	return 50;
}

int32_t PrintManualTest_FitWidthMultiple$1$1::getRowCount() {
	return 50;
}

$Object* PrintManualTest_FitWidthMultiple$1$1::getValueAt(int32_t row, int32_t column) {
	return $of($new($Integer, row * column));
}

PrintManualTest_FitWidthMultiple$1$1::PrintManualTest_FitWidthMultiple$1$1() {
}

$Class* PrintManualTest_FitWidthMultiple$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPrintManualTest_FitWidthMultiple$1;)V", nullptr, 0, $method(PrintManualTest_FitWidthMultiple$1$1, init$, void, $PrintManualTest_FitWidthMultiple$1*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(PrintManualTest_FitWidthMultiple$1$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(PrintManualTest_FitWidthMultiple$1$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintManualTest_FitWidthMultiple$1$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PrintManualTest_FitWidthMultiple$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
		{"PrintManualTest_FitWidthMultiple$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrintManualTest_FitWidthMultiple$1$1",
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
		"PrintManualTest_FitWidthMultiple"
	};
	$loadClass(PrintManualTest_FitWidthMultiple$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrintManualTest_FitWidthMultiple$1$1));
	});
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$1::class$ = nullptr;