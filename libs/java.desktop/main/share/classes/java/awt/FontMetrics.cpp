#include <java/awt/FontMetrics.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

#undef DEFAULT_FRC

using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace java {
	namespace awt {

$CompoundAttribute _FontMetrics_MethodAnnotations_getMaxDecent18[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _FontMetrics_FieldInfo_[] = {
	{"DEFAULT_FRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontMetrics, DEFAULT_FRC)},
	{"font", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(FontMetrics, font)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontMetrics, serialVersionUID)},
	{}
};

$MethodInfo _FontMetrics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Font;)V", nullptr, $PROTECTED, $method(FontMetrics, init$, void, $Font*)},
	{"bytesWidth", "([BII)I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, bytesWidth, int32_t, $bytes*, int32_t, int32_t)},
	{"charWidth", "(I)I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, charWidth, int32_t, int32_t)},
	{"charWidth", "(C)I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, charWidth, int32_t, char16_t)},
	{"charsWidth", "([CII)I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, charsWidth, int32_t, $chars*, int32_t, int32_t)},
	{"getAscent", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getAscent, int32_t)},
	{"getDescent", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getDescent, int32_t)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getFont, $Font*)},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getFontRenderContext, $FontRenderContext*)},
	{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getHeight, int32_t)},
	{"getLeading", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getLeading, int32_t)},
	{"getLineMetrics", "(Ljava/lang/String;Ljava/awt/Graphics;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getLineMetrics, $LineMetrics*, $String*, $Graphics*)},
	{"getLineMetrics", "(Ljava/lang/String;IILjava/awt/Graphics;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getLineMetrics, $LineMetrics*, $String*, int32_t, int32_t, $Graphics*)},
	{"getLineMetrics", "([CIILjava/awt/Graphics;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getLineMetrics, $LineMetrics*, $chars*, int32_t, int32_t, $Graphics*)},
	{"getLineMetrics", "(Ljava/text/CharacterIterator;IILjava/awt/Graphics;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getLineMetrics, $LineMetrics*, $CharacterIterator*, int32_t, int32_t, $Graphics*)},
	{"getMaxAdvance", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getMaxAdvance, int32_t)},
	{"getMaxAscent", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getMaxAscent, int32_t)},
	{"getMaxCharBounds", "(Ljava/awt/Graphics;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getMaxCharBounds, $Rectangle2D*, $Graphics*)},
	{"getMaxDecent", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(FontMetrics, getMaxDecent, int32_t), nullptr, nullptr, _FontMetrics_MethodAnnotations_getMaxDecent18},
	{"getMaxDescent", "()I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getMaxDescent, int32_t)},
	{"getStringBounds", "(Ljava/lang/String;Ljava/awt/Graphics;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getStringBounds, $Rectangle2D*, $String*, $Graphics*)},
	{"getStringBounds", "(Ljava/lang/String;IILjava/awt/Graphics;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getStringBounds, $Rectangle2D*, $String*, int32_t, int32_t, $Graphics*)},
	{"getStringBounds", "([CIILjava/awt/Graphics;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getStringBounds, $Rectangle2D*, $chars*, int32_t, int32_t, $Graphics*)},
	{"getStringBounds", "(Ljava/text/CharacterIterator;IILjava/awt/Graphics;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getStringBounds, $Rectangle2D*, $CharacterIterator*, int32_t, int32_t, $Graphics*)},
	{"getWidths", "()[I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, getWidths, $ints*)},
	{"hasUniformLineMetrics", "()Z", nullptr, $PUBLIC, $virtualMethod(FontMetrics, hasUniformLineMetrics, bool)},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FontMetrics, initIDs, void)},
	{"myFRC", "(Ljava/awt/Graphics;)Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $method(FontMetrics, myFRC, $FontRenderContext*, $Graphics*)},
	{"stringWidth", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(FontMetrics, stringWidth, int32_t, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontMetrics, toString, $String*)},
	{}
};

#define _METHOD_INDEX_initIDs 26

$ClassInfo _FontMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.FontMetrics",
	"java.lang.Object",
	"java.io.Serializable",
	_FontMetrics_FieldInfo_,
	_FontMetrics_MethodInfo_
};

$Object* allocate$FontMetrics($Class* clazz) {
	return $of($alloc(FontMetrics));
}

$FontRenderContext* FontMetrics::DEFAULT_FRC = nullptr;

void FontMetrics::init$($Font* font) {
	$set(this, font, font);
}

$Font* FontMetrics::getFont() {
	return this->font;
}

$FontRenderContext* FontMetrics::getFontRenderContext() {
	return FontMetrics::DEFAULT_FRC;
}

int32_t FontMetrics::getLeading() {
	return 0;
}

int32_t FontMetrics::getAscent() {
	return $nc(this->font)->getSize();
}

int32_t FontMetrics::getDescent() {
	return 0;
}

int32_t FontMetrics::getHeight() {
	int32_t var$1 = getLeading();
	int32_t var$0 = var$1 + getAscent();
	return var$0 + getDescent();
}

int32_t FontMetrics::getMaxAscent() {
	return getAscent();
}

int32_t FontMetrics::getMaxDescent() {
	return getDescent();
}

int32_t FontMetrics::getMaxDecent() {
	return getMaxDescent();
}

int32_t FontMetrics::getMaxAdvance() {
	return -1;
}

int32_t FontMetrics::charWidth(int32_t codePoint) {
	$useLocalCurrentObjectStackCache();
	if (!$Character::isValidCodePoint(codePoint)) {
		codePoint = 0x0000FFFF;
	}
	if (codePoint < 256) {
		return $nc($(getWidths()))->get(codePoint);
	} else {
		$var($chars, buffer, $new($chars, 2));
		int32_t len = $Character::toChars(codePoint, buffer, 0);
		return charsWidth(buffer, 0, len);
	}
}

int32_t FontMetrics::charWidth(char16_t ch) {
	$useLocalCurrentObjectStackCache();
	if (ch < 256) {
		return $nc($(getWidths()))->get(ch);
	}
	$var($chars, data, $new($chars, {ch}));
	return charsWidth(data, 0, 1);
}

int32_t FontMetrics::stringWidth($String* str) {
	int32_t len = $nc(str)->length();
	$var($chars, data, $new($chars, len));
	str->getChars(0, len, data, 0);
	return charsWidth(data, 0, len);
}

int32_t FontMetrics::charsWidth($chars* data, int32_t off, int32_t len) {
	return stringWidth($$new($String, data, off, len));
}

int32_t FontMetrics::bytesWidth($bytes* data, int32_t off, int32_t len) {
	return stringWidth($$new($String, data, 0, off, len));
}

$ints* FontMetrics::getWidths() {
	$var($ints, widths, $new($ints, 256));
	for (char16_t ch = (char16_t)0; ch < 256; ++ch) {
		widths->set(ch, charWidth(ch));
	}
	return widths;
}

bool FontMetrics::hasUniformLineMetrics() {
	return $nc(this->font)->hasUniformLineMetrics();
}

$LineMetrics* FontMetrics::getLineMetrics($String* str, $Graphics* context) {
	return $nc(this->font)->getLineMetrics(str, $(myFRC(context)));
}

$LineMetrics* FontMetrics::getLineMetrics($String* str, int32_t beginIndex, int32_t limit, $Graphics* context) {
	return $nc(this->font)->getLineMetrics(str, beginIndex, limit, $(myFRC(context)));
}

$LineMetrics* FontMetrics::getLineMetrics($chars* chars, int32_t beginIndex, int32_t limit, $Graphics* context) {
	return $nc(this->font)->getLineMetrics(chars, beginIndex, limit, $(myFRC(context)));
}

$LineMetrics* FontMetrics::getLineMetrics($CharacterIterator* ci, int32_t beginIndex, int32_t limit, $Graphics* context) {
	return $nc(this->font)->getLineMetrics(ci, beginIndex, limit, $(myFRC(context)));
}

$Rectangle2D* FontMetrics::getStringBounds($String* str, $Graphics* context) {
	return $nc(this->font)->getStringBounds(str, $(myFRC(context)));
}

$Rectangle2D* FontMetrics::getStringBounds($String* str, int32_t beginIndex, int32_t limit, $Graphics* context) {
	return $nc(this->font)->getStringBounds(str, beginIndex, limit, $(myFRC(context)));
}

$Rectangle2D* FontMetrics::getStringBounds($chars* chars, int32_t beginIndex, int32_t limit, $Graphics* context) {
	return $nc(this->font)->getStringBounds(chars, beginIndex, limit, $(myFRC(context)));
}

$Rectangle2D* FontMetrics::getStringBounds($CharacterIterator* ci, int32_t beginIndex, int32_t limit, $Graphics* context) {
	return $nc(this->font)->getStringBounds(ci, beginIndex, limit, $(myFRC(context)));
}

$Rectangle2D* FontMetrics::getMaxCharBounds($Graphics* context) {
	return $nc(this->font)->getMaxCharBounds($(myFRC(context)));
}

$FontRenderContext* FontMetrics::myFRC($Graphics* context) {
	if ($instanceOf($Graphics2D, context)) {
		return $nc(($cast($Graphics2D, context)))->getFontRenderContext();
	}
	return FontMetrics::DEFAULT_FRC;
}

$String* FontMetrics::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$7, $$str({$($of(this)->getClass()->getName()), "[font="_s}));
	$var($String, var$6, $$concat(var$7, $(getFont())));
	$var($String, var$5, $$concat(var$6, "ascent="_s));
	$var($String, var$4, $$concat(var$5, $$str(getAscent())));
	$var($String, var$3, $$concat(var$4, ", descent="_s));
	$var($String, var$2, $$concat(var$3, $$str(getDescent())));
	$var($String, var$1, $$concat(var$2, ", height="_s));
	$var($String, var$0, $$concat(var$1, $$str(getHeight())));
	return $concat(var$0, "]"_s);
}

void FontMetrics::initIDs() {
	$init(FontMetrics);
	$prepareNativeStatic(FontMetrics, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$FontMetrics($Class* class$) {
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			FontMetrics::initIDs();
		}
	}
	$assignStatic(FontMetrics::DEFAULT_FRC, $new($FontRenderContext, ($AffineTransform*)nullptr, false, false));
}

FontMetrics::FontMetrics() {
}

$Class* FontMetrics::load$($String* name, bool initialize) {
	$loadClass(FontMetrics, name, initialize, &_FontMetrics_ClassInfo_, clinit$FontMetrics, allocate$FontMetrics);
	return class$;
}

$Class* FontMetrics::class$ = nullptr;

	} // awt
} // java