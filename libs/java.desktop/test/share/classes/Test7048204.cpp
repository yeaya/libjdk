#include <Test7048204.h>
#include <Test7048204$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $Test7048204$1 = ::Test7048204$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

void Test7048204::init$() {
}

void Test7048204::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($Test7048204$1));
}

Test7048204::Test7048204() {
}

$Class* Test7048204::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test7048204, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test7048204, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7048204$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test7048204",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test7048204$1"
	};
	$loadClass(Test7048204, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7048204);
	});
	return class$;
}

$Class* Test7048204::class$ = nullptr;