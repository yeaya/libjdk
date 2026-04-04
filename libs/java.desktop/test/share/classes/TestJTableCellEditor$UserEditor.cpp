#include <TestJTableCellEditor$UserEditor.h>
#include <TestJTableCellEditor.h>
#include <jcpp.h>

#undef TEST_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$String* TestJTableCellEditor$UserEditor::TEST_VALUE = nullptr;

void TestJTableCellEditor$UserEditor::init$($String* value) {
	$set(this, value, value);
}

TestJTableCellEditor$UserEditor::TestJTableCellEditor$UserEditor() {
}

void TestJTableCellEditor$UserEditor::clinit$($Class* clazz) {
	$assignStatic(TestJTableCellEditor$UserEditor::TEST_VALUE, "Test Value"_s);
}

$Class* TestJTableCellEditor$UserEditor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJTableCellEditor$UserEditor, TEST_VALUE)},
		{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TestJTableCellEditor$UserEditor, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestJTableCellEditor$UserEditor, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJTableCellEditor$UserEditor", "TestJTableCellEditor", "UserEditor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJTableCellEditor$UserEditor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestJTableCellEditor"
	};
	$loadClass(TestJTableCellEditor$UserEditor, name, initialize, &classInfo$$, TestJTableCellEditor$UserEditor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestJTableCellEditor$UserEditor);
	});
	return class$;
}

$Class* TestJTableCellEditor$UserEditor::class$ = nullptr;