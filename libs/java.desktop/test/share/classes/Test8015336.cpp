#include <Test8015336.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

void Test8015336::init$() {
}

void Test8015336::main($StringArray* args) {
	$useLocalObjectStack();
	$$nc($$new($JComboBox)->getEditor())->setItem($$new(Test8015336));
}

$String* Test8015336::toString() {
	return nullptr;
}

Test8015336::Test8015336() {
}

$Class* Test8015336::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8015336, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8015336, main, void, $StringArray*), "java.lang.Exception"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Test8015336, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8015336",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8015336, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8015336);
	});
	return class$;
}

$Class* Test8015336::class$ = nullptr;