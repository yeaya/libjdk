#include <bug7027139.h>
#include <bug7027139$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7027139$1 = ::bug7027139$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug7027139::init$() {
}

void bug7027139::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug7027139$1));
	$nc($System::out)->println("Test bug7027139 passed"_s);
}

bug7027139::bug7027139() {
}

$Class* bug7027139::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7027139, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7027139, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7027139$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7027139",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7027139$1,bug7027139$1$1"
	};
	$loadClass(bug7027139, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7027139);
	});
	return class$;
}

$Class* bug7027139::class$ = nullptr;