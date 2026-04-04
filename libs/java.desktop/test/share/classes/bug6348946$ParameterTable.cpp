#include <bug6348946$ParameterTable.h>
#include <bug6348946$Editor.h>
#include <bug6348946$Renderer.h>
#include <bug6348946.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6348946$Editor = ::bug6348946$Editor;
using $bug6348946$Renderer = ::bug6348946$Renderer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

void bug6348946$ParameterTable::init$() {
	$useLocalObjectStack();
	$JTable::init$($$new($ObjectArray2, {$$new($ObjectArray, {$($Integer::valueOf(5))})}), $$new($StringArray, {"Value"_s}));
	$$nc($$nc(getColumnModel())->getColumn(0))->setCellRenderer($$new($bug6348946$Renderer));
	$$nc($$nc(getColumnModel())->getColumn(0))->setCellEditor($$new($bug6348946$Editor));
}

bug6348946$ParameterTable::bug6348946$ParameterTable() {
}

$Class* bug6348946$ParameterTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6348946$ParameterTable, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6348946$ParameterTable", "bug6348946", "ParameterTable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6348946$ParameterTable",
		"javax.swing.JTable",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6348946"
	};
	$loadClass(bug6348946$ParameterTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6348946$ParameterTable));
	});
	return class$;
}

$Class* bug6348946$ParameterTable::class$ = nullptr;