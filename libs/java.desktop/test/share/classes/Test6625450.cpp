#include <Test6625450.h>
#include <Test6625450$1.h>
#include <java/awt/Component.h>
#include <java/lang/Error.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef BORDER
#undef COMPONENT
#undef MAX_VALUE
#undef MIN_VALUE

using $Test6625450$1 = ::Test6625450$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$TitledBorder* Test6625450::BORDER = nullptr;
$Component* Test6625450::COMPONENT = nullptr;

void Test6625450::init$() {
}

void Test6625450::main($StringArray* args) {
	$init(Test6625450);
	test(false, 0, $Integer::MAX_VALUE);
	test(false, 0, 1);
	test(true, 0, -1);
	test(true, 0, $Integer::MIN_VALUE);
	test(false, $Integer::MAX_VALUE, 0);
	test(false, 1, 0);
	test(true, -1, 0);
	test(true, $Integer::MIN_VALUE, 0);
}

void Test6625450::test(bool expected, int32_t width, int32_t height) {
	$init(Test6625450);
	try {
		Test6625450::BORDER->getBaseline(Test6625450::COMPONENT, width, height);
		if (expected) {
			$throwNew($Error, "expected IllegalArgumentException"_s);
		}
	} catch ($IllegalArgumentException& exception) {
		if (!expected) {
			$throwNew($Error, "unexpected exception"_s, exception);
		}
	}
}

void Test6625450::clinit$($Class* clazz) {
	$assignStatic(Test6625450::BORDER, $new($TitledBorder, "123"_s));
	$assignStatic(Test6625450::COMPONENT, $new($Test6625450$1));
}

Test6625450::Test6625450() {
}

$Class* Test6625450::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BORDER", "Ljavax/swing/border/TitledBorder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6625450, BORDER)},
		{"COMPONENT", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6625450, COMPONENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6625450, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6625450, main, void, $StringArray*)},
		{"test", "(ZII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6625450, test, void, bool, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6625450$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6625450",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6625450$1"
	};
	$loadClass(Test6625450, name, initialize, &classInfo$$, Test6625450::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test6625450);
	});
	return class$;
}

$Class* Test6625450::class$ = nullptr;