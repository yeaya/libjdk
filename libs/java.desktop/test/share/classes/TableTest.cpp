#include <TableTest.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellEditor.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $JTable = ::javax::swing::JTable;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;

void TableTest::init$() {
}

void TableTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TableTest);
	$beforeCallerSensitive();
	$KeyboardFocusManager::getCurrentKeyboardFocusManager();
	$System::setSecurityManager($$new($SecurityManager));
	$var($JTable, table, $new($JTable));
	$var($TableCellEditor, de, table->getDefaultEditor($Double::class$));
	if (de == nullptr) {
		$throwNew($RuntimeException, "Table default editor is null"_s);
	}
}

TableTest::TableTest() {
}

$Class* TableTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TableTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TableTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TableTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableTest);
	});
	return class$;
}

$Class* TableTest::class$ = nullptr;