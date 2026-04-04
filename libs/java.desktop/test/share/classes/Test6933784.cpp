#include <Test6933784.h>
#include <Test6933784$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Test6933784$1 = ::Test6933784$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

void Test6933784::init$() {
}

void Test6933784::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($SynthLookAndFeel));
	checkImages();
	$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	checkImages();
}

void Test6933784::checkImages() {
	$SwingUtilities::invokeAndWait($$new($Test6933784$1));
}

Test6933784::Test6933784() {
}

$Class* Test6933784::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6933784, init$, void)},
		{"checkImages", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6933784, checkImages, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6933784, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6933784$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6933784",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6933784$1"
	};
	$loadClass(Test6933784, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6933784);
	});
	return class$;
}

$Class* Test6933784::class$ = nullptr;