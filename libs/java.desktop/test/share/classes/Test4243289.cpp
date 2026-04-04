#include <Test4243289.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef DEFAULT_JUSTIFICATION
#undef DEFAULT_POSITION
#undef PLAIN

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JPanel = ::javax::swing::JPanel;
using $TitledBorder = ::javax::swing::border::TitledBorder;

void Test4243289::init$() {
	$JApplet::init$();
}

void Test4243289::init() {
	$useLocalObjectStack();
	$var($Font, font, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
	$var($TitledBorder, border, $BorderFactory::createTitledBorder($($BorderFactory::createEtchedBorder()), "Panel Title"_s, $TitledBorder::DEFAULT_JUSTIFICATION, $TitledBorder::DEFAULT_POSITION, font));
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder(border);
	$$nc(getContentPane())->add(panel);
}

Test4243289::Test4243289() {
}

$Class* Test4243289::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4243289, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test4243289, init, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4243289",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4243289, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test4243289));
	});
	return class$;
}

$Class* Test4243289::class$ = nullptr;