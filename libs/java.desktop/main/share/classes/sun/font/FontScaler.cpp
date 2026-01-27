#include <sun/font/FontScaler.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FreetypeFontScaler.h>
#include <sun/font/NullFontScaler.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FreetypeFontScaler = ::sun::font::FreetypeFontScaler;
using $NullFontScaler = ::sun::font::NullFontScaler;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _FontScaler_FieldInfo_[] = {
	{"nullScaler", "Lsun/font/FontScaler;", nullptr, $PRIVATE | $STATIC, $staticField(FontScaler, nullScaler)},
	{"font", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/font/Font2D;>;", $PROTECTED, $field(FontScaler, font)},
	{"nativeScaler", "J", nullptr, $PROTECTED, $field(FontScaler, nativeScaler)},
	{"disposed", "Z", nullptr, $PROTECTED, $field(FontScaler, disposed)},
	{}
};

$MethodInfo _FontScaler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FontScaler, init$, void)},
	{"createScalerContext", "([DIIFF)J", nullptr, $ABSTRACT, $virtualMethod(FontScaler, createScalerContext, int64_t, $doubles*, int32_t, int32_t, float, float)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(FontScaler, dispose, void)},
	{"disposeScaler", "()V", nullptr, $PUBLIC, $virtualMethod(FontScaler, disposeScaler, void)},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getFontMetrics, $StrikeMetrics*, int64_t), "sun.font.FontScalerException"},
	{"getGlyphAdvance", "(JI)F", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphAdvance, float, int64_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphCode", "(C)I", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphCode, int32_t, char16_t), "sun.font.FontScalerException"},
	{"getGlyphImage", "(JI)J", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphImage, int64_t, int64_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphMetrics, void, int64_t, int32_t, $Point2D$Float*), "sun.font.FontScalerException"},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphOutline, $GeneralPath*, int64_t, int32_t, float, float), "sun.font.FontScalerException"},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphOutlineBounds, $Rectangle2D$Float*, int64_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphPoint, $Point2D$Float*, int64_t, int32_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getGlyphVectorOutline, $GeneralPath*, int64_t, $ints*, int32_t, float, float), "sun.font.FontScalerException"},
	{"getMissingGlyphCode", "()I", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getMissingGlyphCode, int32_t), "sun.font.FontScalerException"},
	{"getNullScaler", "()Lsun/font/FontScaler;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(FontScaler, getNullScaler, FontScaler*)},
	{"getNumGlyphs", "()I", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getNumGlyphs, int32_t), "sun.font.FontScalerException"},
	{"getScaler", "(Lsun/font/Font2D;IZI)Lsun/font/FontScaler;", nullptr, $PUBLIC | $STATIC, $staticMethod(FontScaler, getScaler, FontScaler*, $Font2D*, int32_t, bool, int32_t)},
	{"getUnitsPerEm", "()J", nullptr, $ABSTRACT, $virtualMethod(FontScaler, getUnitsPerEm, int64_t)},
	{"invalidateScalerContext", "(J)V", nullptr, $ABSTRACT, $virtualMethod(FontScaler, invalidateScalerContext, void, int64_t)},
	{}
};

$ClassInfo _FontScaler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.FontScaler",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_FontScaler_FieldInfo_,
	_FontScaler_MethodInfo_
};

$Object* allocate$FontScaler($Class* clazz) {
	return $of($alloc(FontScaler));
}

FontScaler* FontScaler::nullScaler = nullptr;

void FontScaler::init$() {
	$set(this, font, nullptr);
	this->nativeScaler = 0;
	this->disposed = false;
}

FontScaler* FontScaler::getScaler($Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize) {
	$init(FontScaler);
	$useLocalCurrentObjectStackCache();
	$var(FontScaler, scaler, nullptr);
	try {
		$assign(scaler, $new($FreetypeFontScaler, font, indexInCollection, supportsCJK, filesize));
		$Disposer::addObjectRecord(font, scaler);
	} catch ($Throwable& e) {
		$assign(scaler, getNullScaler());
		$var($FontManager, fm, $FontManagerFactory::getInstance());
		$nc(fm)->deRegisterBadFont(font);
	}
	return scaler;
}

FontScaler* FontScaler::getNullScaler() {
	$load(FontScaler);
	$synchronized(class$) {
		$init(FontScaler);
		if (FontScaler::nullScaler == nullptr) {
			$assignStatic(FontScaler::nullScaler, $new($NullFontScaler));
		}
		return FontScaler::nullScaler;
	}
}

void FontScaler::dispose() {
}

void FontScaler::disposeScaler() {
}

void clinit$FontScaler($Class* class$) {
	$assignStatic(FontScaler::nullScaler, nullptr);
}

FontScaler::FontScaler() {
}

$Class* FontScaler::load$($String* name, bool initialize) {
	$loadClass(FontScaler, name, initialize, &_FontScaler_ClassInfo_, clinit$FontScaler, allocate$FontScaler);
	return class$;
}

$Class* FontScaler::class$ = nullptr;

	} // font
} // sun