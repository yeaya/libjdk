#include <bug6918861.h>
#include <bug6918861$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $bug6918861$1 = ::bug6918861$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

void bug6918861::init$() {
}

void bug6918861::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($SynthLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug6918861$1));
}

bug6918861::bug6918861() {
}

$Class* bug6918861::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6918861, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6918861, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6918861$HackedSynthSliderUI", "bug6918861", "HackedSynthSliderUI", $PRIVATE | $STATIC},
		{"bug6918861$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6918861",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6918861$HackedSynthSliderUI,bug6918861$1"
	};
	$loadClass(bug6918861, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6918861);
	});
	return class$;
}

$Class* bug6918861::class$ = nullptr;