#include <bug6953396.h>
#include <bug6953396$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6953396$1 = ::bug6953396$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$volatile(bool) bug6953396::flag = false;

void bug6953396::init$() {
}

void bug6953396::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6953396$1));
	$init(bug6953396);
	if (bug6953396::flag) {
		$throwNew($RuntimeException, "uninstallDefaults() hasn\'t been called"_s);
	}
}

bug6953396::bug6953396() {
}

$Class* bug6953396::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"flag", "Z", nullptr, $STATIC | $VOLATILE, $staticField(bug6953396, flag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6953396, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6953396, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6953396$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6953396",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6953396$1,bug6953396$1$1"
	};
	$loadClass(bug6953396, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6953396);
	});
	return class$;
}

$Class* bug6953396::class$ = nullptr;