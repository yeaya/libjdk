#include <Test4461329.h>
#include <java/lang/Error.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;

void Test4461329::init$() {
}

void Test4461329::main($StringArray* args) {
	$useLocalObjectStack();
	$var($JColorChooser, chooser, $new($JColorChooser));
	if (nullptr == chooser->getPreviewPanel()) {
		$throwNew($Error, "Failed: getPreviewPanel() returned null"_s);
	}
	$var($JButton, button, $new($JButton, "Color"_s));
	chooser->setPreviewPanel(button);
	if (!$equals(button, chooser->getPreviewPanel())) {
		$throwNew($Error, "Failed in setPreviewPanel()"_s);
	}
}

Test4461329::Test4461329() {
}

$Class* Test4461329::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4461329, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4461329, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4461329",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4461329, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4461329);
	});
	return class$;
}

$Class* Test4461329::class$ = nullptr;