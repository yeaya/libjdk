#include <Test4759306.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JPanel = ::javax::swing::JPanel;

void Test4759306::init$() {
	$JApplet::init$();
}

void Test4759306::init() {
	$useLocalObjectStack();
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setPreviewPanel($$new($JPanel));
	$$nc(getContentPane())->add(chooser);
}

Test4759306::Test4759306() {
}

$Class* Test4759306::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4759306, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test4759306, init, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4759306",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4759306, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test4759306));
	});
	return class$;
}

$Class* Test4759306::class$ = nullptr;