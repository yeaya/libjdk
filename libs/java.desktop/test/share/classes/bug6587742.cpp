#include <bug6587742.h>
#include <bug6587742$TestPanel.h>
#include <java/awt/Container.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $bug6587742$TestPanel = ::bug6587742$TestPanel;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JSlider = ::javax::swing::JSlider;
using $SwingConstants = ::javax::swing::SwingConstants;

void bug6587742::init$() {
	$JApplet::init$();
}

void bug6587742::init() {
	$var($bug6587742$TestPanel, panel, $new($bug6587742$TestPanel, this));
	setContentPane(panel);
}

$JSlider* bug6587742::createSlider(bool vertical, $Boolean* filled, bool enabled, bool inverted) {
	$init(bug6587742);
	$useLocalObjectStack();
	$var($JSlider, result, $new($JSlider, vertical ? $SwingConstants::VERTICAL : $SwingConstants::HORIZONTAL, 0, 100, 50));
	result->setMajorTickSpacing(20);
	result->setMinorTickSpacing(5);
	result->setPaintTicks(true);
	result->setPaintLabels(true);
	result->setEnabled(enabled);
	if (filled != nullptr) {
		result->putClientProperty("JSlider.isFilled"_s, filled);
	}
	result->setInverted(inverted);
	result->setToolTipText($$str({"<html>vertical = "_s, $$str(vertical), "<br>enabled = "_s, $$str(enabled), "<br>filled = "_s, filled, "<br>inverted = "_s, $$str(inverted), "</html>"_s}));
	return result;
}

bug6587742::bug6587742() {
}

$Class* bug6587742::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6587742, init$, void)},
		{"createSlider", "(ZLjava/lang/Boolean;ZZ)Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6587742, createSlider, $JSlider*, bool, $Boolean*, bool, bool)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug6587742, init, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6587742$TestPanel", "bug6587742", "TestPanel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6587742",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6587742$TestPanel,bug6587742$TestPanel$1"
	};
	$loadClass(bug6587742, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6587742));
	});
	return class$;
}

$Class* bug6587742::class$ = nullptr;