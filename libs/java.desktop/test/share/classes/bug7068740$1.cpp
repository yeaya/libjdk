#include <bug7068740$1.h>
#include <bug7068740.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

using $bug7068740 = ::bug7068740;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

void bug7068740$1::init$($bug7068740* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableModel::init$();
}

int32_t bug7068740$1::getRowCount() {
	return 20;
}

int32_t bug7068740$1::getColumnCount() {
	return 2;
}

$Object* bug7068740$1::getValueAt(int32_t row, int32_t column) {
	$useLocalObjectStack();
	return $of($str({"("_s, $$str(row), ","_s, $$str(column), ")"_s}));
}

bug7068740$1::bug7068740$1() {
}

$Class* bug7068740$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7068740;", nullptr, $FINAL | $SYNTHETIC, $field(bug7068740$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7068740;)V", nullptr, 0, $method(bug7068740$1, init$, void, $bug7068740*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(bug7068740$1, getColumnCount, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(bug7068740$1, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug7068740$1, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7068740",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7068740$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7068740$1",
		"javax.swing.table.DefaultTableModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7068740"
	};
	$loadClass(bug7068740$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7068740$1));
	});
	return class$;
}

$Class* bug7068740$1::class$ = nullptr;