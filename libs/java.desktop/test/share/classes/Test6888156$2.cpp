#include <Test6888156$2.h>
#include <Test6888156.h>
#include <javax/swing/Icon.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

#undef ICON
#undef TYPE

using $Test6888156 = ::Test6888156;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void Test6888156$2::init$($Test6888156* this$0) {
	$set(this, this$0, this$0);
	$AbstractTableModel::init$();
}

int32_t Test6888156$2::getRowCount() {
	return 3;
}

int32_t Test6888156$2::getColumnCount() {
	return 2;
}

$Object* Test6888156$2::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	return (columnIndex == 1 ? $of(this->this$0->ICON) : $of($Integer::valueOf(4)));
}

$Class* Test6888156$2::getColumnClass(int32_t columnIndex) {
	$load($Icon);
	return (columnIndex == 1 ? $Icon::class$ : $Integer::TYPE);
}

Test6888156$2::Test6888156$2() {
}

$Class* Test6888156$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest6888156;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest6888156;)V", nullptr, 0, $method(Test6888156$2, init$, void, $Test6888156*)},
		{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(Test6888156$2, getColumnClass, $Class*, int32_t)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(Test6888156$2, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(Test6888156$2, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Test6888156$2, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6888156",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6888156$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6888156$2",
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
		"Test6888156"
	};
	$loadClass(Test6888156$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6888156$2));
	});
	return class$;
}

$Class* Test6888156$2::class$ = nullptr;