#include <TestJTableCellEditor.h>
#include <TestJTableCellEditor$1.h>
#include <TestJTableCellEditor$UserEditor.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef TEST_VALUE

using $TestJTableCellEditor$1 = ::TestJTableCellEditor$1;
using $TestJTableCellEditor$UserEditor = ::TestJTableCellEditor$UserEditor;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;

class TestJTableCellEditor$$Lambda$testJTableCellEditor : public $Runnable {
	$class(TestJTableCellEditor$$Lambda$testJTableCellEditor, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJTableCellEditor::testJTableCellEditor();
	}
};
$Class* TestJTableCellEditor$$Lambda$testJTableCellEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJTableCellEditor$$Lambda$testJTableCellEditor, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJTableCellEditor$$Lambda$testJTableCellEditor, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJTableCellEditor$$Lambda$testJTableCellEditor",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJTableCellEditor$$Lambda$testJTableCellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTableCellEditor$$Lambda$testJTableCellEditor);
	});
	return class$;
}
$Class* TestJTableCellEditor$$Lambda$testJTableCellEditor::class$ = nullptr;

void TestJTableCellEditor::init$() {
}

void TestJTableCellEditor::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestJTableCellEditor);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestJTableCellEditor$$Lambda$testJTableCellEditor));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestJTableCellEditor$$Lambda$testJTableCellEditor));
}

void TestJTableCellEditor::testJTableCellEditor() {
	$useLocalObjectStack();
	$load($TestJTableCellEditor$UserEditor);
	$Class* cls = $TestJTableCellEditor$UserEditor::class$;
	$var($JTable, table, $new($JTable, $$new($TestJTableCellEditor$1, cls)));
	$var($TableCellEditor, editor, table->getDefaultEditor($Object::class$));
	$init($TestJTableCellEditor$UserEditor);
	$nc(editor)->getTableCellEditorComponent(table, $TestJTableCellEditor$UserEditor::TEST_VALUE, false, 0, 0);
	editor->stopCellEditing();
	$var($Object, obj, editor->getCellEditorValue());
	if (obj == nullptr) {
		$throwNew($RuntimeException, "Editor object is null!"_s);
	}
	if (!$nc($TestJTableCellEditor$UserEditor::TEST_VALUE)->equals($nc($cast($TestJTableCellEditor$UserEditor, obj))->value)) {
		$throwNew($RuntimeException, "Value is incorrect!"_s);
	}
}

TestJTableCellEditor::TestJTableCellEditor() {
}

$Class* TestJTableCellEditor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJTableCellEditor$$Lambda$testJTableCellEditor")) {
			return TestJTableCellEditor$$Lambda$testJTableCellEditor::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJTableCellEditor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJTableCellEditor, main, void, $StringArray*), "java.lang.Exception"},
		{"testJTableCellEditor", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJTableCellEditor, testJTableCellEditor, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJTableCellEditor$UserEditor", "TestJTableCellEditor", "UserEditor", $PUBLIC | $STATIC},
		{"TestJTableCellEditor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJTableCellEditor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJTableCellEditor$UserEditor,TestJTableCellEditor$1"
	};
	$loadClass(TestJTableCellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTableCellEditor);
	});
	return class$;
}

$Class* TestJTableCellEditor::class$ = nullptr;