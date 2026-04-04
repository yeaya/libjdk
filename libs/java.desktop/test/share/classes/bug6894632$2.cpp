#include <bug6894632$2.h>
#include <bug6894632.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

void bug6894632$2::init$(int32_t arg0, int32_t arg1) {
	$DefaultTableModel::init$(arg0, arg1);
}

$Object* bug6894632$2::getValueAt(int32_t row, int32_t column) {
	return row == getRowCount() - 1 ? $of($str({$$str(row), "==last"_s})) : $of($Integer::valueOf(row));
}

bug6894632$2::bug6894632$2() {
}

$Class* bug6894632$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(bug6894632$2, init$, void, int32_t, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug6894632$2, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6894632",
		"test",
		"(Ljava/util/List;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6894632$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6894632$2",
		"javax.swing.table.DefaultTableModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6894632"
	};
	$loadClass(bug6894632$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6894632$2));
	});
	return class$;
}

$Class* bug6894632$2::class$ = nullptr;