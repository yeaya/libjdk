#include <bug7003777.h>
#include <bug7003777$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TEST_STRINGS

using $bug7003777$1 = ::bug7003777$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$StringArray* bug7003777::TEST_STRINGS = nullptr;

void bug7003777::init$() {
}

void bug7003777::main($StringArray* args) {
	$init(bug7003777);
	$SwingUtilities::invokeAndWait($$new($bug7003777$1));
}

void bug7003777::clinit$($Class* clazz) {
	$assignStatic(bug7003777::TEST_STRINGS, $new($StringArray, {
		"&a"_s,
		"&aa"_s,
		"&a;"_s,
		"&aa;"_s
	}));
}

bug7003777::bug7003777() {
}

$Class* bug7003777::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_STRINGS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7003777, TEST_STRINGS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7003777, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7003777, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7003777$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7003777",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7003777$1"
	};
	$loadClass(bug7003777, name, initialize, &classInfo$$, bug7003777::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7003777);
	});
	return class$;
}

$Class* bug7003777::class$ = nullptr;