#include <bug6924059.h>
#include <bug6924059$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $bug6924059$1 = ::bug6924059$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

bool bug6924059::isMethodCalled = false;

void bug6924059::init$() {
}

void bug6924059::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($SynthLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug6924059$1));
}

bug6924059::bug6924059() {
}

$Class* bug6924059::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isMethodCalled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug6924059, isMethodCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6924059, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6924059, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6924059$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6924059",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6924059$1,bug6924059$1$1"
	};
	$loadClass(bug6924059, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6924059);
	});
	return class$;
}

$Class* bug6924059::class$ = nullptr;