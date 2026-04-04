#include <Test7034614.h>
#include <Test7034614$BrokenBorder.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

using $Test7034614$BrokenBorder = ::Test7034614$BrokenBorder;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TitledBorder = ::javax::swing::border::TitledBorder;

void Test7034614::init$() {
}

void Test7034614::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Graphics, g, $$new($BufferedImage, 9, 9, 9)->getGraphics());
	$var($Test7034614$BrokenBorder, broken, $new($Test7034614$BrokenBorder));
	$var($TitledBorder, titled, $new($TitledBorder, broken, $($of(broken)->getClass()->getName())));
	$var($Insets, insets, $cast($Insets, $$nc(broken->getBorderInsets(broken))->clone()));
	titled->getBorderInsets(broken);
	broken->validate(insets);
	for (int32_t i = 0; i < 10; ++i) {
		titled->paintBorder(broken, g, 0, 0, i, i);
		broken->validate(insets);
		titled->getBaseline(broken, i, i);
		broken->validate(insets);
	}
}

Test7034614::Test7034614() {
}

$Class* Test7034614::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test7034614, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test7034614, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7034614$BrokenBorder", "Test7034614", "BrokenBorder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test7034614",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test7034614$BrokenBorder"
	};
	$loadClass(Test7034614, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7034614);
	});
	return class$;
}

$Class* Test7034614::class$ = nullptr;