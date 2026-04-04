#include <javax/swing/colorchooser/ColorModelCMYK.h>
#include <javax/swing/colorchooser/ColorModel.h>
#include <javax/swing/colorchooser/ColorModelHSL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;
using $ColorModelHSL = ::javax::swing::colorchooser::ColorModelHSL;

namespace javax {
	namespace swing {
		namespace colorchooser {

void ColorModelCMYK::init$() {
	$ColorModel::init$("cmyk"_s, $$new($StringArray, {
		"Cyan"_s,
		"Magenta"_s,
		"Yellow"_s,
		"Black"_s,
		"Alpha"_s
	}));
}

void ColorModelCMYK::setColor(int32_t color, $floats* space) {
	$ColorModel::setColor(color, space);
	$nc(space)->set(4, $nc(space)->get(3));
	RGBtoCMYK(space, space);
}

int32_t ColorModelCMYK::getColor($floats* space) {
	CMYKtoRGB(space, space);
	$nc(space)->set(3, $nc(space)->get(4));
	return $ColorModel::getColor(space);
}

$floats* ColorModelCMYK::CMYKtoRGB($floats* cmyk, $floats* rgb$renamed) {
	$init(ColorModelCMYK);
	$var($floats, rgb, rgb$renamed);
	if (rgb == nullptr) {
		$assign(rgb, $new($floats, 3));
	}
	$nc(rgb)->set(0, 1.0f + $nc(cmyk)->get(0) * $nc(cmyk)->get(3) - $nc(cmyk)->get(3) - $nc(cmyk)->get(0));
	rgb->set(1, 1.0f + cmyk->get(1) * cmyk->get(3) - cmyk->get(3) - cmyk->get(1));
	rgb->set(2, 1.0f + cmyk->get(2) * cmyk->get(3) - cmyk->get(3) - cmyk->get(2));
	return rgb;
}

$floats* ColorModelCMYK::RGBtoCMYK($floats* rgb, $floats* cmyk$renamed) {
	$init(ColorModelCMYK);
	$var($floats, cmyk, cmyk$renamed);
	if (cmyk == nullptr) {
		$assign(cmyk, $new($floats, 4));
	}
	float max = $ColorModelHSL::max($nc(rgb)->get(0), $nc(rgb)->get(1), $nc(rgb)->get(2));
	if (max > 0.0f) {
		$nc(cmyk)->set(0, 1.0f - rgb->get(0) / max);
		cmyk->set(1, 1.0f - rgb->get(1) / max);
		cmyk->set(2, 1.0f - rgb->get(2) / max);
	} else {
		$nc(cmyk)->set(0, 0.0f);
		cmyk->set(1, 0.0f);
		cmyk->set(2, 0.0f);
	}
	$nc(cmyk)->set(3, 1.0f - max);
	return cmyk;
}

ColorModelCMYK::ColorModelCMYK() {
}

$Class* ColorModelCMYK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ColorModelCMYK, init$, void)},
		{"CMYKtoRGB", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $staticMethod(ColorModelCMYK, CMYKtoRGB, $floats*, $floats*, $floats*)},
		{"RGBtoCMYK", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $staticMethod(ColorModelCMYK, RGBtoCMYK, $floats*, $floats*, $floats*)},
		{"getColor", "([F)I", nullptr, 0, $virtualMethod(ColorModelCMYK, getColor, int32_t, $floats*)},
		{"setColor", "(I[F)V", nullptr, 0, $virtualMethod(ColorModelCMYK, setColor, void, int32_t, $floats*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.colorchooser.ColorModelCMYK",
		"javax.swing.colorchooser.ColorModel",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ColorModelCMYK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorModelCMYK);
	});
	return class$;
}

$Class* ColorModelCMYK::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax