#include <sun/font/FontStrike.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _FontStrike_FieldInfo_[] = {
	{"disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $PROTECTED, $field(FontStrike, disposer)},
	{"desc", "Lsun/font/FontStrikeDesc;", nullptr, $PROTECTED, $field(FontStrike, desc)},
	{"strikeMetrics", "Lsun/font/StrikeMetrics;", nullptr, $PROTECTED, $field(FontStrike, strikeMetrics)},
	{"algoStyle", "Z", nullptr, $PROTECTED, $field(FontStrike, algoStyle)},
	{"boldness", "F", nullptr, $PROTECTED, $field(FontStrike, boldness)},
	{"italic", "F", nullptr, $PROTECTED, $field(FontStrike, italic)},
	{}
};

$MethodInfo _FontStrike_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FontStrike, init$, void)},
	{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getCharMetrics, $Point2D$Float*, char16_t)},
	{"getCodePointAdvance", "(I)F", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getCodePointAdvance, float, int32_t)},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getFontMetrics, $StrikeMetrics*)},
	{"getGlyphAdvance", "(I)F", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphAdvance, float, int32_t)},
	{"getGlyphImageBounds", "(ILjava/awt/geom/Point2D$Float;Ljava/awt/Rectangle;)V", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphImageBounds, void, int32_t, $Point2D$Float*, $Rectangle*)},
	{"getGlyphImagePtr", "(I)J", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphImagePtr, int64_t, int32_t)},
	{"getGlyphImagePtrs", "([I[JI)V", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphImagePtrs, void, $ints*, $longs*, int32_t)},
	{"getGlyphMetrics", "(I)Ljava/awt/geom/Point2D$Float;", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphMetrics, $Point2D$Float*, int32_t)},
	{"getGlyphOutline", "(IFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphOutline, $GeneralPath*, int32_t, float, float)},
	{"getGlyphOutlineBounds", "(I)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphOutlineBounds, $Rectangle2D$Float*, int32_t)},
	{"getGlyphVectorOutline", "([IFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, $virtualMethod(FontStrike, getGlyphVectorOutline, $GeneralPath*, $ints*, float, float)},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontStrike, getNumGlyphs, int32_t)},
	{}
};

$ClassInfo _FontStrike_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.FontStrike",
	"java.lang.Object",
	nullptr,
	_FontStrike_FieldInfo_,
	_FontStrike_MethodInfo_
};

$Object* allocate$FontStrike($Class* clazz) {
	return $of($alloc(FontStrike));
}

void FontStrike::init$() {
	this->algoStyle = false;
	this->boldness = 1.0f;
	this->italic = 0.0f;
}

FontStrike::FontStrike() {
}

$Class* FontStrike::load$($String* name, bool initialize) {
	$loadClass(FontStrike, name, initialize, &_FontStrike_ClassInfo_, allocate$FontStrike);
	return class$;
}

$Class* FontStrike::class$ = nullptr;

	} // font
} // sun