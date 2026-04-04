#include <DerivedColorHueTest.h>
#include <java/awt/Color.h>
#include <java/lang/Math.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

void DerivedColorHueTest::init$() {
}

void DerivedColorHueTest::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$var($Color, base, $UIManager::getColor("nimbusBlueGrey"_s));
	$var($floats, hsbBase, hsb(base));
	float hueShift = 0.5f - 10;
	$var($Color, derived, $$sure($NimbusLookAndFeel, $UIManager::getLookAndFeel())->getDerivedColor("nimbusBlueGrey"_s, hueShift, 0, 0, 0, false));
	$var($Color, derivedCorrect, $new($Color, $Color::HSBtoRGB($nc(hsbBase)->get(0) + hueShift, $nc(hsbBase)->get(1), $nc(hsbBase)->get(2))));
	float hueDerived = $nc($(hsb(derived)))->get(0);
	float hueCorrect = $nc($(hsb(derivedCorrect)))->get(0);
	if (hueCorrect < 0.01f || hueCorrect > 0.99f) {
		$throwNew($RuntimeException, "Test indeterminate! (Hue too close to red)"_s);
	}
	$nc($System::out)->println($$str({" base: "_s, $(hsbString(base))}));
	$System::out->println($$str({" derived: "_s, $(hsbString(derived))}));
	$System::out->println($$str({"derivedCorrect: "_s, $(hsbString(derivedCorrect))}));
	if ($Math::abs(hueDerived - hueCorrect) < 0.001f) {
		$System::out->println("[PASS]"_s);
	} else {
		$throwNew($RuntimeException, "Nimbus derived hue color is not correct"_s);
	}
}

$floats* DerivedColorHueTest::hsb($Color* c) {
	int32_t var$0 = $nc(c)->getRed();
	int32_t var$1 = c->getGreen();
	return $Color::RGBtoHSB(var$0, var$1, c->getBlue(), nullptr);
}

$String* DerivedColorHueTest::hsbString($Color* c) {
	$useLocalObjectStack();
	$var($floats, hsb, DerivedColorHueTest::hsb(c));
	return $String::format("H=%.2f, S=%.2f, B=%.2f"_s, $$new($ObjectArray, {
		$($Float::valueOf($nc(hsb)->get(0))),
		$($Float::valueOf($nc(hsb)->get(1))),
		$($Float::valueOf($nc(hsb)->get(2)))
	}));
}

DerivedColorHueTest::DerivedColorHueTest() {
}

$Class* DerivedColorHueTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DerivedColorHueTest, init$, void)},
		{"hsb", "(Ljava/awt/Color;)[F", nullptr, $PRIVATE | $STATIC, $staticMethod(DerivedColorHueTest, hsb, $floats*, $Color*)},
		{"hsbString", "(Ljava/awt/Color;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DerivedColorHueTest, hsbString, $String*, $Color*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DerivedColorHueTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DerivedColorHueTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DerivedColorHueTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DerivedColorHueTest);
	});
	return class$;
}

$Class* DerivedColorHueTest::class$ = nullptr;