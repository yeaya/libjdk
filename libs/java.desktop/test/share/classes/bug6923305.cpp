#include <bug6923305.h>
#include <bug6923305$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $bug6923305$1 = ::bug6923305$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

void bug6923305::init$() {
}

void bug6923305::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($SynthLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug6923305$1));
}

bug6923305::bug6923305() {
}

$Class* bug6923305::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6923305, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6923305, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6923305$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6923305",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6923305$1,bug6923305$1$1"
	};
	$loadClass(bug6923305, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6923305);
	});
	return class$;
}

$Class* bug6923305::class$ = nullptr;