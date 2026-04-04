#include <TestBasicComboBoxEditor$UserComboBoxEditorType.h>
#include <TestBasicComboBoxEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestBasicComboBoxEditor$UserComboBoxEditorType::init$($String* str) {
	$set(this, str, str);
}

TestBasicComboBoxEditor$UserComboBoxEditorType* TestBasicComboBoxEditor$UserComboBoxEditorType::valueOf($String* str) {
	return $new(TestBasicComboBoxEditor$UserComboBoxEditorType, str);
}

$String* TestBasicComboBoxEditor$UserComboBoxEditorType::toString() {
	return $str({"UserComboBoxEditorType: "_s, this->str});
}

TestBasicComboBoxEditor$UserComboBoxEditorType::TestBasicComboBoxEditor$UserComboBoxEditorType() {
}

$Class* TestBasicComboBoxEditor$UserComboBoxEditorType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"str", "Ljava/lang/String;", nullptr, 0, $field(TestBasicComboBoxEditor$UserComboBoxEditorType, str)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestBasicComboBoxEditor$UserComboBoxEditorType, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestBasicComboBoxEditor$UserComboBoxEditorType, toString, $String*)},
		{"valueOf", "(Ljava/lang/String;)LTestBasicComboBoxEditor$UserComboBoxEditorType;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestBasicComboBoxEditor$UserComboBoxEditorType, valueOf, TestBasicComboBoxEditor$UserComboBoxEditorType*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestBasicComboBoxEditor$UserComboBoxEditorType", "TestBasicComboBoxEditor", "UserComboBoxEditorType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestBasicComboBoxEditor$UserComboBoxEditorType",
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
		"TestBasicComboBoxEditor"
	};
	$loadClass(TestBasicComboBoxEditor$UserComboBoxEditorType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestBasicComboBoxEditor$UserComboBoxEditorType);
	});
	return class$;
}

$Class* TestBasicComboBoxEditor$UserComboBoxEditorType::class$ = nullptr;