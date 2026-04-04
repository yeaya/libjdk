#include <bug6735286$1.h>
#include <bug6735286.h>
#include <java/awt/Component.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

void bug6735286$1::init$() {
}

void bug6735286$1::run() {
	$useLocalObjectStack();
	$$nc($$new($JTable)->getDefaultRenderer($Object::class$))->getTableCellRendererComponent(nullptr, "a value"_s, true, true, 0, 0);
}

bug6735286$1::bug6735286$1() {
}

$Class* bug6735286$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6735286$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6735286$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6735286",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6735286$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6735286$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6735286"
	};
	$loadClass(bug6735286$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6735286$1);
	});
	return class$;
}

$Class* bug6735286$1::class$ = nullptr;