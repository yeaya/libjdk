#include <Test4193384.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/Error.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JLabel = ::javax::swing::JLabel;

void Test4193384::init$() {
}

void Test4193384::main($StringArray* args) {
	$useLocalObjectStack();
	test($$new($ColorArray, {
		$$new($Color, 11, 12, 13),
		$$new($Color, 204, 0, 204),
		$$new($Color, 0, 51, 51)
	}));
}

void Test4193384::test($ColorArray* colors) {
	$useLocalObjectStack();
	$var($JLabel, label, $new($JLabel, "Preview Panel"_s));
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setPreviewPanel(label);
	$var($floats, hsb, $new($floats, 3));
	for (int32_t i = 0; i < $nc(colors)->length; ++i) {
		$var($Color, color, colors->get(i));
		int32_t var$0 = $nc(color)->getRed();
		int32_t var$1 = color->getGreen();
		$Color::RGBtoHSB(var$0, var$1, color->getBlue(), hsb);
		if (!color->equals($($Color::getHSBColor(hsb->get(0), hsb->get(1), hsb->get(2))))) {
			$throwNew($Error, "color conversion is failed"_s);
		}
		if (!color->equals($($$new($JColorChooser, color)->getColor()))) {
			$throwNew($Error, "constructor sets incorrect initial color"_s);
		}
		chooser->setColor(color);
		if (!color->equals($(label->getForeground()))) {
			$throwNew($Error, "a custom preview panel doesn\'t handle colors"_s);
		}
	}
}

Test4193384::Test4193384() {
}

$Class* Test4193384::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4193384, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4193384, main, void, $StringArray*)},
		{"test", "([Ljava/awt/Color;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4193384, test, void, $ColorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4193384",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4193384, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4193384);
	});
	return class$;
}

$Class* Test4193384::class$ = nullptr;