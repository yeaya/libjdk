#include <TestDefaultFormatter$UserValueClass.h>
#include <TestDefaultFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestDefaultFormatter$UserValueClass::init$($String* str) {
	$set(this, str, str);
}

$String* TestDefaultFormatter$UserValueClass::toString() {
	return $str({"UserValueClass: "_s, this->str});
}

TestDefaultFormatter$UserValueClass::TestDefaultFormatter$UserValueClass() {
}

$Class* TestDefaultFormatter$UserValueClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"str", "Ljava/lang/String;", nullptr, 0, $field(TestDefaultFormatter$UserValueClass, str)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestDefaultFormatter$UserValueClass, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestDefaultFormatter$UserValueClass, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDefaultFormatter$UserValueClass", "TestDefaultFormatter", "UserValueClass", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestDefaultFormatter$UserValueClass",
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
		"TestDefaultFormatter"
	};
	$loadClass(TestDefaultFormatter$UserValueClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDefaultFormatter$UserValueClass);
	});
	return class$;
}

$Class* TestDefaultFormatter$UserValueClass::class$ = nullptr;