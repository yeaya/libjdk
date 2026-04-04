#include <java/awt/Color.h>
#include <java/awt/ColorPaintContext.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Paint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef BITMASK
#undef BLACK
#undef BLUE
#undef CYAN
#undef DARK_GRAY
#undef FACTOR
#undef GRAY
#undef GREEN
#undef LIGHT_GRAY
#undef MAGENTA
#undef OPAQUE
#undef ORANGE
#undef PINK
#undef RED
#undef TRANSLUCENT
#undef WHITE
#undef YELLOW

using $ColorPaintContext = ::java::awt::ColorPaintContext;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Paint = ::java::awt::Paint;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace awt {

$Object* Color::clone() {
	 return this->$Paint::clone();
}

void Color::finalize() {
	this->$Paint::finalize();
}

Color* Color::white = nullptr;
Color* Color::WHITE = nullptr;
Color* Color::lightGray = nullptr;
Color* Color::LIGHT_GRAY = nullptr;
Color* Color::gray = nullptr;
Color* Color::GRAY = nullptr;
Color* Color::darkGray = nullptr;
Color* Color::DARK_GRAY = nullptr;
Color* Color::black = nullptr;
Color* Color::BLACK = nullptr;
Color* Color::red = nullptr;
Color* Color::RED = nullptr;
Color* Color::pink = nullptr;
Color* Color::PINK = nullptr;
Color* Color::orange = nullptr;
Color* Color::ORANGE = nullptr;
Color* Color::yellow = nullptr;
Color* Color::YELLOW = nullptr;
Color* Color::green = nullptr;
Color* Color::GREEN = nullptr;
Color* Color::magenta = nullptr;
Color* Color::MAGENTA = nullptr;
Color* Color::cyan = nullptr;
Color* Color::CYAN = nullptr;
Color* Color::blue = nullptr;
Color* Color::BLUE = nullptr;
double Color::FACTOR = 0.0;

void Color::initIDs() {
	$init(Color);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Color::testColorValueRange(int32_t r, int32_t g, int32_t b, int32_t a) {
	$init(Color);
	$useLocalObjectStack();
	bool rangeError = false;
	$var($String, badComponentString, ""_s);
	if (a < 0 || a > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Alpha"_s}));
	}
	if (r < 0 || r > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Red"_s}));
	}
	if (g < 0 || g > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Green"_s}));
	}
	if (b < 0 || b > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Blue"_s}));
	}
	if (rangeError == true) {
		$throwNew($IllegalArgumentException, $$str({"Color parameter outside of expected range:"_s, badComponentString}));
	}
}

void Color::testColorValueRange(float r, float g, float b, float a) {
	$init(Color);
	$useLocalObjectStack();
	bool rangeError = false;
	$var($String, badComponentString, ""_s);
	if (a < 0.0 || a > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Alpha"_s}));
	}
	if (r < 0.0 || r > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Red"_s}));
	}
	if (g < 0.0 || g > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Green"_s}));
	}
	if (b < 0.0 || b > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Blue"_s}));
	}
	if (rangeError == true) {
		$throwNew($IllegalArgumentException, $$str({"Color parameter outside of expected range:"_s, badComponentString}));
	}
}

void Color::init$(int32_t r, int32_t g, int32_t b) {
	Color::init$(r, g, b, 255);
}

void Color::init$(int32_t r, int32_t g, int32_t b, int32_t a) {
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	this->value = ((((a & 0xff) << 24) | ((r & 0xff) << 16)) | ((g & 0xff) << 8)) | ((b & 0xff) << 0);
	testColorValueRange(r, g, b, a);
}

void Color::init$(int32_t rgb) {
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	this->value = (int32_t)0xff000000 | rgb;
}

void Color::init$(int32_t rgba, bool hasalpha) {
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	if (hasalpha) {
		this->value = rgba;
	} else {
		this->value = (int32_t)0xff000000 | rgba;
	}
}

void Color::init$(float r, float g, float b) {
	Color::init$($cast(int32_t, (r * 255 + 0.5)), $cast(int32_t, (g * 255 + 0.5)), $cast(int32_t, (b * 255 + 0.5)));
	testColorValueRange(r, g, b, 1.0f);
	$set(this, frgbvalue, $new($floats, 3));
	this->frgbvalue->set(0, r);
	this->frgbvalue->set(1, g);
	this->frgbvalue->set(2, b);
	this->falpha = 1.0f;
	$set(this, fvalue, this->frgbvalue);
}

void Color::init$(float r, float g, float b, float a) {
	Color::init$($cast(int32_t, (r * 255 + 0.5)), $cast(int32_t, (g * 255 + 0.5)), $cast(int32_t, (b * 255 + 0.5)), $cast(int32_t, (a * 255 + 0.5)));
	$set(this, frgbvalue, $new($floats, 3));
	this->frgbvalue->set(0, r);
	this->frgbvalue->set(1, g);
	this->frgbvalue->set(2, b);
	this->falpha = a;
	$set(this, fvalue, this->frgbvalue);
}

void Color::init$($ColorSpace* cspace, $floats* components, float alpha) {
	$useLocalObjectStack();
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	bool rangeError = false;
	$var($String, badComponentString, ""_s);
	int32_t n = $nc(cspace)->getNumComponents();
	$set(this, fvalue, $new($floats, n));
	for (int32_t i = 0; i < n; ++i) {
		if ($nc(components)->get(i) < 0.0 || components->get(i) > 1.0) {
			rangeError = true;
			$assign(badComponentString, $str({badComponentString, "Component "_s, $$str(i), " "_s}));
		} else {
			this->fvalue->set(i, components->get(i));
		}
	}
	if (alpha < 0.0 || alpha > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, "Alpha"_s}));
	} else {
		this->falpha = alpha;
	}
	if (rangeError) {
		$throwNew($IllegalArgumentException, $$str({"Color parameter outside of expected range: "_s, badComponentString}));
	}
	$set(this, frgbvalue, cspace->toRGB(this->fvalue));
	$set(this, cs, cspace);
	this->value = ((((($cast(int32_t, (this->falpha * 255))) & 0xff) << 24) | ((($cast(int32_t, ($nc(this->frgbvalue)->get(0) * 255))) & 0xff) << 16)) | ((($cast(int32_t, ($nc(this->frgbvalue)->get(1) * 255))) & 0xff) << 8)) | ((($cast(int32_t, ($nc(this->frgbvalue)->get(2) * 255))) & 0xff) << 0);
}

int32_t Color::getRed() {
	return (getRGB() >> 16) & 0xff;
}

int32_t Color::getGreen() {
	return (getRGB() >> 8) & 0xff;
}

int32_t Color::getBlue() {
	return (getRGB() >> 0) & 0xff;
}

int32_t Color::getAlpha() {
	return (getRGB() >> 24) & 0xff;
}

int32_t Color::getRGB() {
	return this->value;
}

Color* Color::brighter() {
	int32_t r = getRed();
	int32_t g = getGreen();
	int32_t b = getBlue();
	int32_t alpha = getAlpha();
	int32_t i = $cast(int32_t, ($div(1.0, (1.0 - Color::FACTOR))));
	if (r == 0 && g == 0 && b == 0) {
		return $new(Color, i, i, i, alpha);
	}
	if (r > 0 && r < i) {
		r = i;
	}
	if (g > 0 && g < i) {
		g = i;
	}
	if (b > 0 && b < i) {
		b = i;
	}
	int32_t var$0 = $Math::min($cast(int32_t, ($div(r, Color::FACTOR))), 255);
	int32_t var$1 = $Math::min($cast(int32_t, ($div(g, Color::FACTOR))), 255);
	return $new(Color, var$0, var$1, $Math::min($cast(int32_t, ($div(b, Color::FACTOR))), 255), alpha);
}

Color* Color::darker() {
	int32_t var$0 = $Math::max($cast(int32_t, (getRed() * Color::FACTOR)), 0);
	int32_t var$1 = $Math::max($cast(int32_t, (getGreen() * Color::FACTOR)), 0);
	int32_t var$2 = $Math::max($cast(int32_t, (getBlue() * Color::FACTOR)), 0);
	return $new(Color, var$0, var$1, var$2, getAlpha());
}

int32_t Color::hashCode() {
	return this->value;
}

bool Color::equals(Object$* obj) {
	bool var$0 = $instanceOf(Color, obj);
	if (var$0) {
		int32_t var$1 = $cast(Color, obj)->getRGB();
		var$0 = var$1 == this->getRGB();
	}
	return var$0;
}

$String* Color::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[r="_s);
	var$0->append(getRed());
	var$0->append(",g="_s);
	var$0->append(getGreen());
	var$0->append(",b="_s);
	var$0->append(getBlue());
	var$0->append("]"_s);
	return $str(var$0);
}

Color* Color::decode($String* nm) {
	$init(Color);
	$var($Integer, intval, $Integer::decode(nm));
	int32_t i = intval->intValue();
	return $new(Color, (i >> 16) & 0xff, (i >> 8) & 0xff, i & 0xff);
}

Color* Color::getColor($String* nm) {
	$init(Color);
	return getColor(nm, nullptr);
}

Color* Color::getColor($String* nm, Color* v) {
	$init(Color);
	$var($Integer, intval, $Integer::getInteger(nm));
	if (intval == nullptr) {
		return v;
	}
	int32_t i = $nc(intval)->intValue();
	return $new(Color, (i >> 16) & 0xff, (i >> 8) & 0xff, i & 0xff);
}

Color* Color::getColor($String* nm, int32_t v) {
	$init(Color);
	$var($Integer, intval, $Integer::getInteger(nm));
	int32_t i = (intval != nullptr) ? intval->intValue() : v;
	return $new(Color, (i >> 16) & 0xff, (i >> 8) & 0xff, (i >> 0) & 0xff);
}

int32_t Color::HSBtoRGB(float hue, float saturation, float brightness) {
	$init(Color);
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	if (saturation == 0) {
		r = (g = (b = $cast(int32_t, (brightness * 255.0f + 0.5f))));
	} else {
		float h = (hue - (float)$Math::floor(hue)) * 6.0f;
		float f = h - (float)$Math::floor(h);
		float p = brightness * (1.0f - saturation);
		float q = brightness * (1.0f - saturation * f);
		float t = brightness * (1.0f - (saturation * (1.0f - f)));
		switch ($cast(int32_t, h)) {
		case 0:
			r = $cast(int32_t, (brightness * 255.0f + 0.5f));
			g = $cast(int32_t, (t * 255.0f + 0.5f));
			b = $cast(int32_t, (p * 255.0f + 0.5f));
			break;
		case 1:
			r = $cast(int32_t, (q * 255.0f + 0.5f));
			g = $cast(int32_t, (brightness * 255.0f + 0.5f));
			b = $cast(int32_t, (p * 255.0f + 0.5f));
			break;
		case 2:
			r = $cast(int32_t, (p * 255.0f + 0.5f));
			g = $cast(int32_t, (brightness * 255.0f + 0.5f));
			b = $cast(int32_t, (t * 255.0f + 0.5f));
			break;
		case 3:
			r = $cast(int32_t, (p * 255.0f + 0.5f));
			g = $cast(int32_t, (q * 255.0f + 0.5f));
			b = $cast(int32_t, (brightness * 255.0f + 0.5f));
			break;
		case 4:
			r = $cast(int32_t, (t * 255.0f + 0.5f));
			g = $cast(int32_t, (p * 255.0f + 0.5f));
			b = $cast(int32_t, (brightness * 255.0f + 0.5f));
			break;
		case 5:
			r = $cast(int32_t, (brightness * 255.0f + 0.5f));
			g = $cast(int32_t, (p * 255.0f + 0.5f));
			b = $cast(int32_t, (q * 255.0f + 0.5f));
			break;
		}
	}
	return (((int32_t)0xff000000 | (r << 16)) | (g << 8)) | (b << 0);
}

$floats* Color::RGBtoHSB(int32_t r, int32_t g, int32_t b, $floats* hsbvals$renamed) {
	$init(Color);
	$var($floats, hsbvals, hsbvals$renamed);
	float hue = 0.0;
	float saturation = 0.0;
	float brightness = 0.0;
	if (hsbvals == nullptr) {
		$assign(hsbvals, $new($floats, 3));
	}
	int32_t cmax = (r > g) ? r : g;
	if (b > cmax) {
		cmax = b;
	}
	int32_t cmin = (r < g) ? r : g;
	if (b < cmin) {
		cmin = b;
	}
	brightness = ((float)cmax) / 255.0f;
	if (cmax != 0) {
		saturation = ((float)(cmax - cmin)) / ((float)cmax);
	} else {
		saturation = 0;
	}
	if (saturation == 0) {
		hue = 0;
	} else {
		float redc = ((float)(cmax - r)) / ((float)(cmax - cmin));
		float greenc = ((float)(cmax - g)) / ((float)(cmax - cmin));
		float bluec = ((float)(cmax - b)) / ((float)(cmax - cmin));
		if (r == cmax) {
			hue = bluec - greenc;
		} else if (g == cmax) {
			hue = 2.0f + redc - bluec;
		} else {
			hue = 4.0f + greenc - redc;
		}
		hue = hue / 6.0f;
		if (hue < 0) {
			hue = hue + 1.0f;
		}
	}
	$nc(hsbvals)->set(0, hue);
	hsbvals->set(1, saturation);
	hsbvals->set(2, brightness);
	return hsbvals;
}

Color* Color::getHSBColor(float h, float s, float b) {
	$init(Color);
	return $new(Color, HSBtoRGB(h, s, b));
}

$floats* Color::getRGBComponents($floats* compArray) {
	$var($floats, f, nullptr);
	if (compArray == nullptr) {
		$assign(f, $new($floats, 4));
	} else {
		$assign(f, compArray);
	}
	if (this->frgbvalue == nullptr) {
		$nc(f)->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
		f->set(3, ((float)getAlpha()) / 255.0f);
	} else {
		$nc(f)->set(0, this->frgbvalue->get(0));
		f->set(1, this->frgbvalue->get(1));
		f->set(2, this->frgbvalue->get(2));
		f->set(3, this->falpha);
	}
	return f;
}

$floats* Color::getRGBColorComponents($floats* compArray) {
	$var($floats, f, nullptr);
	if (compArray == nullptr) {
		$assign(f, $new($floats, 3));
	} else {
		$assign(f, compArray);
	}
	if (this->frgbvalue == nullptr) {
		$nc(f)->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
	} else {
		$nc(f)->set(0, this->frgbvalue->get(0));
		f->set(1, this->frgbvalue->get(1));
		f->set(2, this->frgbvalue->get(2));
	}
	return f;
}

$floats* Color::getComponents($floats* compArray) {
	if (this->fvalue == nullptr) {
		return getRGBComponents(compArray);
	}
	$var($floats, f, nullptr);
	int32_t n = $nc(this->fvalue)->length;
	if (compArray == nullptr) {
		$assign(f, $new($floats, n + 1));
	} else {
		$assign(f, compArray);
	}
	for (int32_t i = 0; i < n; ++i) {
		$nc(f)->set(i, this->fvalue->get(i));
	}
	$nc(f)->set(n, this->falpha);
	return f;
}

$floats* Color::getColorComponents($floats* compArray) {
	if (this->fvalue == nullptr) {
		return getRGBColorComponents(compArray);
	}
	$var($floats, f, nullptr);
	int32_t n = $nc(this->fvalue)->length;
	if (compArray == nullptr) {
		$assign(f, $new($floats, n));
	} else {
		$assign(f, compArray);
	}
	for (int32_t i = 0; i < n; ++i) {
		$nc(f)->set(i, this->fvalue->get(i));
	}
	return f;
}

$floats* Color::getComponents($ColorSpace* cspace, $floats* compArray$renamed) {
	$useLocalObjectStack();
	$var($floats, compArray, compArray$renamed);
	if (this->cs == nullptr) {
		$set(this, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	}
	$var($floats, f, nullptr);
	if (this->fvalue == nullptr) {
		$assign(f, $new($floats, 3));
		f->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
	} else {
		$assign(f, this->fvalue);
	}
	$var($floats, tmp, $nc(this->cs)->toCIEXYZ(f));
	$var($floats, tmpout, $nc(cspace)->fromCIEXYZ(tmp));
	if (compArray == nullptr) {
		$assign(compArray, $new($floats, $nc(tmpout)->length + 1));
	}
	for (int32_t i = 0; i < $nc(tmpout)->length; ++i) {
		$nc(compArray)->set(i, tmpout->get(i));
	}
	if (this->fvalue == nullptr) {
		$nc(compArray)->set(tmpout->length, ((float)getAlpha()) / 255.0f);
	} else {
		$nc(compArray)->set(tmpout->length, this->falpha);
	}
	return compArray;
}

$floats* Color::getColorComponents($ColorSpace* cspace, $floats* compArray) {
	$useLocalObjectStack();
	if (this->cs == nullptr) {
		$set(this, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	}
	$var($floats, f, nullptr);
	if (this->fvalue == nullptr) {
		$assign(f, $new($floats, 3));
		f->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
	} else {
		$assign(f, this->fvalue);
	}
	$var($floats, tmp, $nc(this->cs)->toCIEXYZ(f));
	$var($floats, tmpout, $nc(cspace)->fromCIEXYZ(tmp));
	if (compArray == nullptr) {
		return tmpout;
	}
	for (int32_t i = 0; i < $nc(tmpout)->length; ++i) {
		$nc(compArray)->set(i, tmpout->get(i));
	}
	return compArray;
}

$ColorSpace* Color::getColorSpace() {
	if (this->cs == nullptr) {
		$set(this, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	}
	return this->cs;
}

$PaintContext* Color::createContext($ColorModel* cm, $Rectangle* r, $Rectangle2D* r2d, $AffineTransform* xform, $RenderingHints* hints) {
	$synchronized(this) {
		return $new($ColorPaintContext, getRGB(), cm);
	}
}

int32_t Color::getTransparency() {
	int32_t alpha = getAlpha();
	if (alpha == 255) {
		return $Transparency::OPAQUE;
	} else if (alpha == 0) {
		return $Transparency::BITMASK;
	} else {
		return $Transparency::TRANSLUCENT;
	}
}

void Color::clinit$($Class* clazz) {
	Color::FACTOR = 0.7;
	$assignStatic(Color::white, $new(Color, 255, 255, 255));
	$assignStatic(Color::WHITE, Color::white);
	$assignStatic(Color::lightGray, $new(Color, 192, 192, 192));
	$assignStatic(Color::LIGHT_GRAY, Color::lightGray);
	$assignStatic(Color::gray, $new(Color, 128, 128, 128));
	$assignStatic(Color::GRAY, Color::gray);
	$assignStatic(Color::darkGray, $new(Color, 64, 64, 64));
	$assignStatic(Color::DARK_GRAY, Color::darkGray);
	$assignStatic(Color::black, $new(Color, 0, 0, 0));
	$assignStatic(Color::BLACK, Color::black);
	$assignStatic(Color::red, $new(Color, 255, 0, 0));
	$assignStatic(Color::RED, Color::red);
	$assignStatic(Color::pink, $new(Color, 255, 175, 175));
	$assignStatic(Color::PINK, Color::pink);
	$assignStatic(Color::orange, $new(Color, 255, 200, 0));
	$assignStatic(Color::ORANGE, Color::orange);
	$assignStatic(Color::yellow, $new(Color, 255, 255, 0));
	$assignStatic(Color::YELLOW, Color::yellow);
	$assignStatic(Color::green, $new(Color, 0, 255, 0));
	$assignStatic(Color::GREEN, Color::green);
	$assignStatic(Color::magenta, $new(Color, 255, 0, 255));
	$assignStatic(Color::MAGENTA, Color::magenta);
	$assignStatic(Color::cyan, $new(Color, 0, 255, 255));
	$assignStatic(Color::CYAN, Color::cyan);
	$assignStatic(Color::blue, $new(Color, 0, 0, 255));
	$assignStatic(Color::BLUE, Color::blue);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Color::initIDs();
		}
	}
}

Color::Color() {
}

$Class* Color::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"white", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, white)},
		{"WHITE", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, WHITE)},
		{"lightGray", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, lightGray)},
		{"LIGHT_GRAY", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, LIGHT_GRAY)},
		{"gray", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, gray)},
		{"GRAY", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, GRAY)},
		{"darkGray", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, darkGray)},
		{"DARK_GRAY", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, DARK_GRAY)},
		{"black", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, black)},
		{"BLACK", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, BLACK)},
		{"red", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, red)},
		{"RED", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, RED)},
		{"pink", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, pink)},
		{"PINK", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, PINK)},
		{"orange", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, orange)},
		{"ORANGE", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, ORANGE)},
		{"yellow", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, yellow)},
		{"YELLOW", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, YELLOW)},
		{"green", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, green)},
		{"GREEN", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, GREEN)},
		{"magenta", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, magenta)},
		{"MAGENTA", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, MAGENTA)},
		{"cyan", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, cyan)},
		{"CYAN", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, CYAN)},
		{"blue", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, blue)},
		{"BLUE", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, BLUE)},
		{"value", "I", nullptr, 0, $field(Color, value)},
		{"frgbvalue", "[F", nullptr, $PRIVATE, $field(Color, frgbvalue)},
		{"fvalue", "[F", nullptr, $PRIVATE, $field(Color, fvalue)},
		{"falpha", "F", nullptr, $PRIVATE, $field(Color, falpha)},
		{"cs", "Ljava/awt/color/ColorSpace;", nullptr, $PRIVATE, $field(Color, cs)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Color, serialVersionUID)},
		{"FACTOR", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Color, FACTOR)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "red"},
		{'s', "green"},
		{'s', "blue"},
		{'s', "alpha"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(III)V", nullptr, $PUBLIC, $method(Color, init$, void, int32_t, int32_t, int32_t)},
		{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(Color, init$, void, int32_t, int32_t, int32_t, int32_t), nullptr, nullptr, init$methodAnnotations$$$1},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Color, init$, void, int32_t)},
		{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(Color, init$, void, int32_t, bool)},
		{"<init>", "(FFF)V", nullptr, $PUBLIC, $method(Color, init$, void, float, float, float)},
		{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(Color, init$, void, float, float, float, float)},
		{"<init>", "(Ljava/awt/color/ColorSpace;[FF)V", nullptr, $PUBLIC, $method(Color, init$, void, $ColorSpace*, $floats*, float)},
		{"HSBtoRGB", "(FFF)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, HSBtoRGB, int32_t, float, float, float)},
		{"RGBtoHSB", "(III[F)[F", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, RGBtoHSB, $floats*, int32_t, int32_t, int32_t, $floats*)},
		{"brighter", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(Color, brighter, Color*)},
		{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Color, createContext, $PaintContext*, $ColorModel*, $Rectangle*, $Rectangle2D*, $AffineTransform*, $RenderingHints*)},
		{"darker", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(Color, darker, Color*)},
		{"decode", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, decode, Color*, $String*), "java.lang.NumberFormatException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Color, equals, bool, Object$*)},
		{"getAlpha", "()I", nullptr, $PUBLIC, $virtualMethod(Color, getAlpha, int32_t)},
		{"getBlue", "()I", nullptr, $PUBLIC, $virtualMethod(Color, getBlue, int32_t)},
		{"getColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, getColor, Color*, $String*)},
		{"getColor", "(Ljava/lang/String;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, getColor, Color*, $String*, Color*)},
		{"getColor", "(Ljava/lang/String;I)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, getColor, Color*, $String*, int32_t)},
		{"getColorComponents", "([F)[F", nullptr, $PUBLIC, $virtualMethod(Color, getColorComponents, $floats*, $floats*)},
		{"getColorComponents", "(Ljava/awt/color/ColorSpace;[F)[F", nullptr, $PUBLIC, $virtualMethod(Color, getColorComponents, $floats*, $ColorSpace*, $floats*)},
		{"getColorSpace", "()Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC, $virtualMethod(Color, getColorSpace, $ColorSpace*)},
		{"getComponents", "([F)[F", nullptr, $PUBLIC, $virtualMethod(Color, getComponents, $floats*, $floats*)},
		{"getComponents", "(Ljava/awt/color/ColorSpace;[F)[F", nullptr, $PUBLIC, $virtualMethod(Color, getComponents, $floats*, $ColorSpace*, $floats*)},
		{"getGreen", "()I", nullptr, $PUBLIC, $virtualMethod(Color, getGreen, int32_t)},
		{"getHSBColor", "(FFF)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(Color, getHSBColor, Color*, float, float, float)},
		{"getRGB", "()I", nullptr, $PUBLIC, $virtualMethod(Color, getRGB, int32_t)},
		{"getRGBColorComponents", "([F)[F", nullptr, $PUBLIC, $virtualMethod(Color, getRGBColorComponents, $floats*, $floats*)},
		{"getRGBComponents", "([F)[F", nullptr, $PUBLIC, $virtualMethod(Color, getRGBComponents, $floats*, $floats*)},
		{"getRed", "()I", nullptr, $PUBLIC, $virtualMethod(Color, getRed, int32_t)},
		{"getTransparency", "()I", nullptr, $PUBLIC, $virtualMethod(Color, getTransparency, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Color, hashCode, int32_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Color, initIDs, void)},
		{"testColorValueRange", "(IIII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Color, testColorValueRange, void, int32_t, int32_t, int32_t, int32_t)},
		{"testColorValueRange", "(FFFF)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Color, testColorValueRange, void, float, float, float, float)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Color, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Color",
		"java.lang.Object",
		"java.awt.Paint,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Color, name, initialize, &classInfo$$, Color::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Color));
	});
	return class$;
}

$Class* Color::class$ = nullptr;

	} // awt
} // java