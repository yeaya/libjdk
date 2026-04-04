#include <bug8031971$TestTable.h>
#include <bug8031971.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $JTable = ::javax::swing::JTable;

void bug8031971$TestTable::init$() {
	$JTable::init$();
}

$Hashtable* bug8031971$TestTable::getDefaultRenderersByColumnClass() {
	return this->defaultRenderersByColumnClass;
}

$Hashtable* bug8031971$TestTable::getDefaultEditorsByColumnClass() {
	return this->defaultEditorsByColumnClass;
}

bug8031971$TestTable::bug8031971$TestTable() {
}

$Class* bug8031971$TestTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8031971$TestTable, init$, void)},
		{"getDefaultEditorsByColumnClass", "()Ljava/util/Hashtable;", nullptr, 0, $virtualMethod(bug8031971$TestTable, getDefaultEditorsByColumnClass, $Hashtable*)},
		{"getDefaultRenderersByColumnClass", "()Ljava/util/Hashtable;", nullptr, 0, $virtualMethod(bug8031971$TestTable, getDefaultRenderersByColumnClass, $Hashtable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8031971$TestTable", "bug8031971", "TestTable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8031971$TestTable",
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
		"bug8031971"
	};
	$loadClass(bug8031971$TestTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8031971$TestTable));
	});
	return class$;
}

$Class* bug8031971$TestTable::class$ = nullptr;