#include <HeadlessJTable$1.h>
#include <HeadlessJTable.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void HeadlessJTable$1::init$($ObjectArray2* val$data) {
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t HeadlessJTable$1::getColumnCount() {
	return 3;
}

int32_t HeadlessJTable$1::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* HeadlessJTable$1::getValueAt(int32_t row, int32_t col) {
	return $nc($nc(this->val$data)->get(row))->get(col);
}

HeadlessJTable$1::HeadlessJTable$1() {
}

$Class* HeadlessJTable$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(HeadlessJTable$1, val$data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([[Ljava/lang/Object;)V", nullptr, 0, $method(HeadlessJTable$1, init$, void, $ObjectArray2*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(HeadlessJTable$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(HeadlessJTable$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessJTable$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJTable",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJTable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJTable$1",
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
		"HeadlessJTable"
	};
	$loadClass(HeadlessJTable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJTable$1));
	});
	return class$;
}

$Class* HeadlessJTable$1::class$ = nullptr;