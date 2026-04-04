#include <TitledBorderLabelUITest$TestLookAndFeel.h>
#include <TitledBorderLabelUITest$TestLabelUI.h>
#include <TitledBorderLabelUITest.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $TitledBorderLabelUITest$TestLabelUI = ::TitledBorderLabelUITest$TestLabelUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void TitledBorderLabelUITest$TestLookAndFeel::init$() {
	$MetalLookAndFeel::init$();
}

void TitledBorderLabelUITest$TestLookAndFeel::initClassDefaults($UIDefaults* table) {
	$MetalLookAndFeel::initClassDefaults(table);
	$load($TitledBorderLabelUITest$TestLabelUI);
	$nc(table)->put("LabelUI"_s, $($TitledBorderLabelUITest$TestLabelUI::class$->getName()));
}

TitledBorderLabelUITest$TestLookAndFeel::TitledBorderLabelUITest$TestLookAndFeel() {
}

$Class* TitledBorderLabelUITest$TestLookAndFeel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TitledBorderLabelUITest$TestLookAndFeel, init$, void)},
		{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(TitledBorderLabelUITest$TestLookAndFeel, initClassDefaults, void, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TitledBorderLabelUITest$TestLookAndFeel", "TitledBorderLabelUITest", "TestLookAndFeel", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TitledBorderLabelUITest$TestLookAndFeel",
		"javax.swing.plaf.metal.MetalLookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TitledBorderLabelUITest"
	};
	$loadClass(TitledBorderLabelUITest$TestLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TitledBorderLabelUITest$TestLookAndFeel));
	});
	return class$;
}

$Class* TitledBorderLabelUITest$TestLookAndFeel::class$ = nullptr;