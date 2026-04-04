#include <Test4760089.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT
#undef TOP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JPanel = ::javax::swing::JPanel;
using $Border = ::javax::swing::border::Border;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

void Test4760089::init$() {
	$JApplet::init$();
}

void Test4760089::init() {
	$useLocalObjectStack();
	$var($Border, border, $new($EtchedBorder));
	$assign(border, $new($TitledBorder, border, "LEFT"_s, $TitledBorder::LEFT, $TitledBorder::TOP));
	$assign(border, $new($TitledBorder, border, "RIGHT"_s, $TitledBorder::RIGHT, $TitledBorder::TOP));
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder(border);
	$$nc(getContentPane())->add(panel);
}

Test4760089::Test4760089() {
}

$Class* Test4760089::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4760089, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test4760089, init, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4760089",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4760089, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test4760089));
	});
	return class$;
}

$Class* Test4760089::class$ = nullptr;