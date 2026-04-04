#include <Test8043627.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $JButton = ::javax::swing::JButton;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;

void Test8043627::init$() {
}

void Test8043627::main($StringArray* args) {
	$useLocalObjectStack();
	$load(Test8043627);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$$new($SynthButtonUI)->getContext($$new($JButton));
}

Test8043627::Test8043627() {
}

$Class* Test8043627::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8043627, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8043627, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8043627",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8043627, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8043627);
	});
	return class$;
}

$Class* Test8043627::class$ = nullptr;