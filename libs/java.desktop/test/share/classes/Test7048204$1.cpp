#include <Test7048204$1.h>
#include <Test7048204.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;

void Test7048204$1::init$() {
}

void Test7048204$1::run() {
	$useLocalObjectStack();
	$new($JLabel);
	$var($UIDefaults, uid, $UIManager::getDefaults());
	$nc(uid)->putDefaults($$new($ObjectArray, 0));
	uid->put("what.ever"_s, "else"_s);
}

Test7048204$1::Test7048204$1() {
}

$Class* Test7048204$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test7048204$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test7048204$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test7048204",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7048204$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test7048204$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test7048204"
	};
	$loadClass(Test7048204$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7048204$1);
	});
	return class$;
}

$Class* Test7048204$1::class$ = nullptr;