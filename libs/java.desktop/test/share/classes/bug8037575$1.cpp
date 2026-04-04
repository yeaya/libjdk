#include <bug8037575$1.h>
#include <Sysout.h>
#include <bug8037575.h>
#include <jcpp.h>

using $Sysout = ::Sysout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8037575$1::init$() {
}

void bug8037575$1::run() {
	$var($StringArray, instructions, $new($StringArray, {
		"1) You see a dialog with buttons and text area."_s,
		"2) Pressing Run button will start test. A new Frame will open automatically and minimize after 2 seconds."_s,
		"3) Frame should minimize gradually with animation effect."_s,
		"4) If frame disappers without animation then test failed otherwise passed."_s,
		"5) Pressing Pass/Fail button will mark test as pass/fail and will shutdown JVM as well"_s
	}));
	$Sysout::createDialogWithInstructions(instructions);
	$Sysout::printInstructions(instructions);
}

bug8037575$1::bug8037575$1() {
}

$Class* bug8037575$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8037575$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8037575$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8037575",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8037575$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8037575$1",
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
		"bug8037575"
	};
	$loadClass(bug8037575$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8037575$1);
	});
	return class$;
}

$Class* bug8037575$1::class$ = nullptr;