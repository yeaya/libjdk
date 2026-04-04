#include <TestBasicComboBoxEditor.h>
#include <TestBasicComboBoxEditor$UserComboBoxEditorType.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <jcpp.h>

using $TestBasicComboBoxEditor$UserComboBoxEditorType = ::TestBasicComboBoxEditor$UserComboBoxEditorType;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;

class TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor : public $Runnable {
	$class(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBasicComboBoxEditor::testBasicComboBoxEditor();
	}
};
$Class* TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor);
	});
	return class$;
}
$Class* TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::class$ = nullptr;

void TestBasicComboBoxEditor::init$() {
}

void TestBasicComboBoxEditor::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestBasicComboBoxEditor);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor));
}

void TestBasicComboBoxEditor::testBasicComboBoxEditor() {
	$useLocalObjectStack();
	$var($BasicComboBoxEditor, comboBoxEditor, $new($BasicComboBoxEditor));
	comboBoxEditor->setItem($$new($TestBasicComboBoxEditor$UserComboBoxEditorType, "100"_s));
	$var($JTextField, editor, $cast($JTextField, comboBoxEditor->getEditorComponent()));
	$nc(editor)->setText("200"_s);
	$var($TestBasicComboBoxEditor$UserComboBoxEditorType, item, $cast($TestBasicComboBoxEditor$UserComboBoxEditorType, comboBoxEditor->getItem()));
	if (!$nc($nc(item)->str)->equals("200"_s)) {
		$throwNew($RuntimeException, "Wrong itme value!"_s);
	}
}

TestBasicComboBoxEditor::TestBasicComboBoxEditor() {
}

$Class* TestBasicComboBoxEditor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor")) {
			return TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestBasicComboBoxEditor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestBasicComboBoxEditor, main, void, $StringArray*), "java.lang.Exception"},
		{"testBasicComboBoxEditor", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestBasicComboBoxEditor, testBasicComboBoxEditor, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestBasicComboBoxEditor$UserComboBoxEditorType", "TestBasicComboBoxEditor", "UserComboBoxEditorType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestBasicComboBoxEditor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestBasicComboBoxEditor$UserComboBoxEditorType"
	};
	$loadClass(TestBasicComboBoxEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBasicComboBoxEditor);
	});
	return class$;
}

$Class* TestBasicComboBoxEditor::class$ = nullptr;