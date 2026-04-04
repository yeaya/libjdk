#include <Test6977726.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JLabel = ::javax::swing::JLabel;

void Test6977726::init$() {
	$JApplet::init$();
}

void Test6977726::init() {
	$useLocalObjectStack();
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setPreviewPanel($$new($JLabel, "Text Preview Panel"_s));
	$$nc(getContentPane())->add(chooser);
}

Test6977726::Test6977726() {
}

$Class* Test6977726::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6977726, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test6977726, init, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6977726",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6977726, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6977726));
	});
	return class$;
}

$Class* Test6977726::class$ = nullptr;