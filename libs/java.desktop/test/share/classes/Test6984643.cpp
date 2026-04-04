#include <Test6984643.h>
#include <Test6984643$1.h>
#include <Test6984643$2.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Test6984643$1 = ::Test6984643$1;
using $Test6984643$2 = ::Test6984643$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

void Test6984643::init$() {
}

void Test6984643::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($Test6984643$1));
	$SwingUtilities::invokeAndWait($$new($Test6984643$2));
}

Test6984643::Test6984643() {
}

$Class* Test6984643::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6984643, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6984643, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6984643$2", nullptr, nullptr, 0},
		{"Test6984643$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6984643",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6984643$2,Test6984643$1"
	};
	$loadClass(Test6984643, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6984643);
	});
	return class$;
}

$Class* Test6984643::class$ = nullptr;