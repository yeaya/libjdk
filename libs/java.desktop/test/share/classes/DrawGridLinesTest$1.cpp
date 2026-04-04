#include <DrawGridLinesTest$1.h>
#include <DrawGridLinesTest.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

void DrawGridLinesTest$1::init$() {
	$AbstractTableModel::init$();
}

int32_t DrawGridLinesTest$1::getColumnCount() {
	return 10;
}

int32_t DrawGridLinesTest$1::getRowCount() {
	return 10;
}

$Object* DrawGridLinesTest$1::getValueAt(int32_t row, int32_t col) {
	return $of(" "_s);
}

DrawGridLinesTest$1::DrawGridLinesTest$1() {
}

$Class* DrawGridLinesTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DrawGridLinesTest$1, init$, void)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(DrawGridLinesTest$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(DrawGridLinesTest$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DrawGridLinesTest$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DrawGridLinesTest",
		"checkTableGridLines",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DrawGridLinesTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DrawGridLinesTest$1",
		"javax.swing.table.AbstractTableModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DrawGridLinesTest"
	};
	$loadClass(DrawGridLinesTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DrawGridLinesTest$1));
	});
	return class$;
}

$Class* DrawGridLinesTest$1::class$ = nullptr;