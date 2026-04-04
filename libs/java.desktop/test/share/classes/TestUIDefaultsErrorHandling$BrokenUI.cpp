#include <TestUIDefaultsErrorHandling$BrokenUI.h>
#include <TestUIDefaultsErrorHandling.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;

$ComponentUI* TestUIDefaultsErrorHandling$BrokenUI::createUI($JComponent* target) {
	$init(TestUIDefaultsErrorHandling$BrokenUI);
	return $new(TestUIDefaultsErrorHandling$BrokenUI);
}

void TestUIDefaultsErrorHandling$BrokenUI::init$() {
	$BasicLabelUI::init$();
	$throwNew($RuntimeException, "oops, complex problem with diagnostics"_s);
}

TestUIDefaultsErrorHandling$BrokenUI::TestUIDefaultsErrorHandling$BrokenUI() {
}

$Class* TestUIDefaultsErrorHandling$BrokenUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TestUIDefaultsErrorHandling$BrokenUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUIDefaultsErrorHandling$BrokenUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestUIDefaultsErrorHandling$BrokenUI", "TestUIDefaultsErrorHandling", "BrokenUI", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUIDefaultsErrorHandling$BrokenUI",
		"javax.swing.plaf.basic.BasicLabelUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestUIDefaultsErrorHandling"
	};
	$loadClass(TestUIDefaultsErrorHandling$BrokenUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestUIDefaultsErrorHandling$BrokenUI));
	});
	return class$;
}

$Class* TestUIDefaultsErrorHandling$BrokenUI::class$ = nullptr;