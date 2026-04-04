#include <sun/java2d/xr/XRColor.h>
#include <java/awt/Color.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FULL_ALPHA
#undef NO_ALPHA

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

XRColor* XRColor::FULL_ALPHA = nullptr;
XRColor* XRColor::NO_ALPHA = nullptr;

void XRColor::init$() {
	this->red = 0;
	this->green = 0;
	this->blue = 0;
	this->alpha = 0;
}

void XRColor::init$(int32_t alpha, int32_t red, int32_t green, int32_t blue) {
	this->alpha = alpha;
	this->red = red;
	this->green = green;
	this->blue = blue;
}

void XRColor::init$($Color* color) {
	setColorValues(color);
}

void XRColor::setColorValues($Color* color) {
	this->alpha = byteToXRColorValue($nc(color)->getAlpha());
	int32_t var$0 = color->getRed();
	this->red = byteToXRColorValue($cast(int32_t, (var$0 * color->getAlpha() / 255.0)));
	int32_t var$1 = color->getGreen();
	this->green = byteToXRColorValue($cast(int32_t, (var$1 * color->getAlpha() / 255.0)));
	int32_t var$2 = color->getBlue();
	this->blue = byteToXRColorValue($cast(int32_t, (var$2 * color->getAlpha() / 255.0)));
}

$ints* XRColor::ARGBPrePixelToXRColors($ints* pixels) {
	$init(XRColor);
	$useLocalObjectStack();
	$var($ints, colorValues, $new($ints, $nc(pixels)->length * 4));
	$var(XRColor, c, $new(XRColor));
	for (int32_t i = 0; i < pixels->length; ++i) {
		c->setColorValues(pixels->get(i));
		colorValues->set(i * 4 + 0, c->alpha);
		colorValues->set(i * 4 + 1, c->red);
		colorValues->set(i * 4 + 2, c->green);
		colorValues->set(i * 4 + 3, c->blue);
	}
	return colorValues;
}

void XRColor::setColorValues(int32_t pixel) {
	int64_t pix = $XRUtils::intToULong(pixel);
	this->alpha = (int32_t)(((pix & (int32_t)0xff000000) >> 0x10) + 255);
	this->red = (int32_t)(((pix & 0x00ff0000) >> 8) + 255);
	this->green = (int32_t)(((pix & 0xff00) >> 0) + 255);
	this->blue = (int32_t)(((pix & 0xff) << 8) + 255);
	if (this->alpha == 255) {
		this->alpha = 0;
	}
}

int32_t XRColor::byteToXRColorValue(int32_t byteValue) {
	$init(XRColor);
	int32_t xrValue = 0;
	if (byteValue != 0) {
		if (byteValue == 255) {
			xrValue = 0x0000ffff;
		} else {
			xrValue = ((byteValue << 8) + 255);
		}
	}
	return xrValue;
}

$String* XRColor::toString() {
	$useLocalObjectStack();
	return $str({"A:"_s, $$str(this->alpha), "  R:"_s, $$str(this->red), "  G:"_s, $$str(this->green), " B:"_s, $$str(this->blue)});
}

void XRColor::setAlpha(int32_t alpha) {
	this->alpha = alpha;
}

int32_t XRColor::getAlpha() {
	return this->alpha;
}

int32_t XRColor::getRed() {
	return this->red;
}

int32_t XRColor::getGreen() {
	return this->green;
}

int32_t XRColor::getBlue() {
	return this->blue;
}

void XRColor::clinit$($Class* clazz) {
	$assignStatic(XRColor::FULL_ALPHA, $new(XRColor, 0x0000ffff, 0, 0, 0));
	$assignStatic(XRColor::NO_ALPHA, $new(XRColor, 0, 0, 0, 0));
}

XRColor::XRColor() {
}

$Class* XRColor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FULL_ALPHA", "Lsun/java2d/xr/XRColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRColor, FULL_ALPHA)},
		{"NO_ALPHA", "Lsun/java2d/xr/XRColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRColor, NO_ALPHA)},
		{"red", "I", nullptr, 0, $field(XRColor, red)},
		{"green", "I", nullptr, 0, $field(XRColor, green)},
		{"blue", "I", nullptr, 0, $field(XRColor, blue)},
		{"alpha", "I", nullptr, 0, $field(XRColor, alpha)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XRColor, init$, void)},
		{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(XRColor, init$, void, int32_t, int32_t, int32_t, int32_t)},
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(XRColor, init$, void, $Color*)},
		{"ARGBPrePixelToXRColors", "([I)[I", nullptr, $PUBLIC | $STATIC, $staticMethod(XRColor, ARGBPrePixelToXRColors, $ints*, $ints*)},
		{"byteToXRColorValue", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(XRColor, byteToXRColorValue, int32_t, int32_t)},
		{"getAlpha", "()I", nullptr, $PUBLIC, $virtualMethod(XRColor, getAlpha, int32_t)},
		{"getBlue", "()I", nullptr, $PUBLIC, $virtualMethod(XRColor, getBlue, int32_t)},
		{"getGreen", "()I", nullptr, $PUBLIC, $virtualMethod(XRColor, getGreen, int32_t)},
		{"getRed", "()I", nullptr, $PUBLIC, $virtualMethod(XRColor, getRed, int32_t)},
		{"setAlpha", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRColor, setAlpha, void, int32_t)},
		{"setColorValues", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(XRColor, setColorValues, void, $Color*)},
		{"setColorValues", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRColor, setColorValues, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XRColor, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.XRColor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XRColor, name, initialize, &classInfo$$, XRColor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XRColor);
	});
	return class$;
}

$Class* XRColor::class$ = nullptr;

		} // xr
	} // java2d
} // sun