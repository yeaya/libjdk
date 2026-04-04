#include <Test4711996.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <jcpp.h>

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;

void Test4711996::init$() {
}

void Test4711996::main($StringArray* args) {
	$useLocalObjectStack();
	$var($JColorChooser, chooser, $new($JColorChooser));
	$var($AbstractColorChooserPanelArray, panels, chooser->getChooserPanels());
	chooser->removeChooserPanel($nc(panels)->get(0));
	chooser->updateUI();
}

Test4711996::Test4711996() {
}

$Class* Test4711996::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4711996, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4711996, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4711996",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4711996, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4711996);
	});
	return class$;
}

$Class* Test4711996::class$ = nullptr;