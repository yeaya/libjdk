#include <bug6493680.h>
#include <bug6493680$Test.h>
#include <jcpp.h>

#undef NUMBER_OF_TRIES

using $bug6493680$Test = ::bug6493680$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6493680::init$() {
}

void bug6493680::main($StringArray* args) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < bug6493680::NUMBER_OF_TRIES; ++i) {
		if (!($$new($bug6493680$Test))->test()) {
			$throwNew($RuntimeException, "failed"_s);
		}
	}
}

bug6493680::bug6493680() {
}

$Class* bug6493680::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NUMBER_OF_TRIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6493680, NUMBER_OF_TRIES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6493680, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6493680, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6493680",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6493680$Test,bug6493680$Test$TestSwingWorker,bug6493680$Test$1"
	};
	$loadClass(bug6493680, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6493680);
	});
	return class$;
}

$Class* bug6493680::class$ = nullptr;