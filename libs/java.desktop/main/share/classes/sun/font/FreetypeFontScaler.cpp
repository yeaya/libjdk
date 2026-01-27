#include <sun/font/FreetypeFontScaler.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontManagerNativeLibrary.h>
#include <sun/font/FontScaler.h>
#include <sun/font/FontScalerException.h>
#include <sun/font/NullFontScaler.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

#undef FFS
#undef TRUETYPE_FONT
#undef TYPE1_FONT

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Font2D = ::sun::font::Font2D;
using $FontManagerNativeLibrary = ::sun::font::FontManagerNativeLibrary;
using $FontScaler = ::sun::font::FontScaler;
using $FontScalerException = ::sun::font::FontScalerException;
using $NullFontScaler = ::sun::font::NullFontScaler;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $Type1Font = ::sun::font::Type1Font;

namespace sun {
	namespace font {

class FreetypeFontScaler$$Lambda$lambda$disposeScaler$0 : public $Runnable {
	$class(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(FreetypeFontScaler* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$disposeScaler$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FreetypeFontScaler$$Lambda$lambda$disposeScaler$0>());
	}
	FreetypeFontScaler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0, inst$)},
	{}
};
$MethodInfo FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::methodInfos[3] = {
	{"<init>", "(Lsun/font/FreetypeFontScaler;)V", nullptr, $PUBLIC, $method(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0, init$, void, FreetypeFontScaler*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0, run, void)},
	{}
};
$ClassInfo FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.FreetypeFontScaler$$Lambda$lambda$disposeScaler$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::load$($String* name, bool initialize) {
	$loadClass(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::class$ = nullptr;

$FieldInfo _FreetypeFontScaler_FieldInfo_[] = {
	{"TRUETYPE_FONT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FreetypeFontScaler, TRUETYPE_FONT)},
	{"TYPE1_FONT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FreetypeFontScaler, TYPE1_FONT)},
	{}
};

$MethodInfo _FreetypeFontScaler_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Font2D;IZI)V", nullptr, $PUBLIC, $method(FreetypeFontScaler, init$, void, $Font2D*, int32_t, bool, int32_t)},
	{"createScalerContext", "([DIIFF)J", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, createScalerContext, int64_t, $doubles*, int32_t, int32_t, float, float)},
	{"createScalerContextNative", "(J[DIIFF)J", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, createScalerContextNative, int64_t, int64_t, $doubles*, int32_t, int32_t, float, float)},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, dispose, void)},
	{"disposeNativeScaler", "(Lsun/font/Font2D;J)V", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, disposeNativeScaler, void, $Font2D*, int64_t)},
	{"disposeScaler", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, disposeScaler, void)},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getFontMetrics, $StrikeMetrics*, int64_t), "sun.font.FontScalerException"},
	{"getFontMetricsNative", "(Lsun/font/Font2D;JJ)Lsun/font/StrikeMetrics;", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getFontMetricsNative, $StrikeMetrics*, $Font2D*, int64_t, int64_t)},
	{"getGlyphAdvance", "(JI)F", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphAdvance, float, int64_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphAdvanceNative", "(Lsun/font/Font2D;JJI)F", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphAdvanceNative, float, $Font2D*, int64_t, int64_t, int32_t)},
	{"getGlyphCode", "(C)I", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphCode, int32_t, char16_t), "sun.font.FontScalerException"},
	{"getGlyphCodeNative", "(Lsun/font/Font2D;JC)I", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphCodeNative, int32_t, $Font2D*, int64_t, char16_t)},
	{"getGlyphImage", "(JI)J", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphImage, int64_t, int64_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphImageNative", "(Lsun/font/Font2D;JJI)J", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphImageNative, int64_t, $Font2D*, int64_t, int64_t, int32_t)},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphMetrics, void, int64_t, int32_t, $Point2D$Float*), "sun.font.FontScalerException"},
	{"getGlyphMetricsNative", "(Lsun/font/Font2D;JJILjava/awt/geom/Point2D$Float;)V", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphMetricsNative, void, $Font2D*, int64_t, int64_t, int32_t, $Point2D$Float*)},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphOutline, $GeneralPath*, int64_t, int32_t, float, float), "sun.font.FontScalerException"},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphOutlineBounds, $Rectangle2D$Float*, int64_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphOutlineBoundsNative", "(Lsun/font/Font2D;JJI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphOutlineBoundsNative, $Rectangle2D$Float*, $Font2D*, int64_t, int64_t, int32_t)},
	{"getGlyphOutlineNative", "(Lsun/font/Font2D;JJIFF)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphOutlineNative, $GeneralPath*, $Font2D*, int64_t, int64_t, int32_t, float, float)},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphPoint, $Point2D$Float*, int64_t, int32_t, int32_t), "sun.font.FontScalerException"},
	{"getGlyphPointNative", "(Lsun/font/Font2D;JJII)Ljava/awt/geom/Point2D$Float;", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphPointNative, $Point2D$Float*, $Font2D*, int64_t, int64_t, int32_t, int32_t)},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getGlyphVectorOutline, $GeneralPath*, int64_t, $ints*, int32_t, float, float), "sun.font.FontScalerException"},
	{"getGlyphVectorOutlineNative", "(Lsun/font/Font2D;JJ[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getGlyphVectorOutlineNative, $GeneralPath*, $Font2D*, int64_t, int64_t, $ints*, int32_t, float, float)},
	{"getMissingGlyphCode", "()I", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getMissingGlyphCode, int32_t), "sun.font.FontScalerException"},
	{"getMissingGlyphCodeNative", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getMissingGlyphCodeNative, int32_t, int64_t)},
	{"getNumGlyphs", "()I", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getNumGlyphs, int32_t), "sun.font.FontScalerException"},
	{"getNumGlyphsNative", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getNumGlyphsNative, int32_t, int64_t)},
	{"getUnitsPerEMNative", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, getUnitsPerEMNative, int64_t, int64_t)},
	{"getUnitsPerEm", "()J", nullptr, $SYNCHRONIZED, $virtualMethod(FreetypeFontScaler, getUnitsPerEm, int64_t)},
	{"initIDs", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $staticMethod(FreetypeFontScaler, initIDs, void, $Class*)},
	{"initNativeScaler", "(Lsun/font/Font2D;IIZI)J", nullptr, $PRIVATE | $NATIVE, $method(FreetypeFontScaler, initNativeScaler, int64_t, $Font2D*, int32_t, int32_t, bool, int32_t)},
	{"invalidateScaler", "()V", nullptr, $PRIVATE, $method(FreetypeFontScaler, invalidateScaler, void), "sun.font.FontScalerException"},
	{"invalidateScalerContext", "(J)V", nullptr, 0, $virtualMethod(FreetypeFontScaler, invalidateScalerContext, void, int64_t)},
	{"lambda$disposeScaler$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(FreetypeFontScaler, lambda$disposeScaler$0, void)},
	{}
};

#define _METHOD_INDEX_createScalerContextNative 2
#define _METHOD_INDEX_disposeNativeScaler 4
#define _METHOD_INDEX_getFontMetricsNative 7
#define _METHOD_INDEX_getGlyphAdvanceNative 9
#define _METHOD_INDEX_getGlyphCodeNative 11
#define _METHOD_INDEX_getGlyphImageNative 13
#define _METHOD_INDEX_getGlyphMetricsNative 15
#define _METHOD_INDEX_getGlyphOutlineBoundsNative 18
#define _METHOD_INDEX_getGlyphOutlineNative 19
#define _METHOD_INDEX_getGlyphPointNative 21
#define _METHOD_INDEX_getGlyphVectorOutlineNative 23
#define _METHOD_INDEX_getMissingGlyphCodeNative 25
#define _METHOD_INDEX_getNumGlyphsNative 27
#define _METHOD_INDEX_getUnitsPerEMNative 28
#define _METHOD_INDEX_initIDs 30
#define _METHOD_INDEX_initNativeScaler 31

$ClassInfo _FreetypeFontScaler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FreetypeFontScaler",
	"sun.font.FontScaler",
	nullptr,
	_FreetypeFontScaler_FieldInfo_,
	_FreetypeFontScaler_MethodInfo_
};

$Object* allocate$FreetypeFontScaler($Class* clazz) {
	return $of($alloc(FreetypeFontScaler));
}

void FreetypeFontScaler::initIDs($Class* FFS) {
	$init(FreetypeFontScaler);
	$prepareNativeStatic(FreetypeFontScaler, initIDs, void, $Class* FFS);
	$invokeNativeStatic(FFS);
	$finishNativeStatic();
}

void FreetypeFontScaler::invalidateScaler() {
	this->nativeScaler = 0;
	$set(this, font, nullptr);
	$throwNew($FontScalerException);
}

void FreetypeFontScaler::init$($Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize) {
	$FontScaler::init$();
	int32_t fonttype = FreetypeFontScaler::TRUETYPE_FONT;
	if ($instanceOf($Type1Font, font)) {
		fonttype = FreetypeFontScaler::TYPE1_FONT;
	}
	this->nativeScaler = initNativeScaler(font, fonttype, indexInCollection, supportsCJK, filesize);
	$set(this, font, $new($WeakReference, font));
}

$StrikeMetrics* FreetypeFontScaler::getFontMetrics(int64_t pScalerContext) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getFontMetricsNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler);
		}
		return $nc($($FontScaler::getNullScaler()))->getFontMetrics(0);
	}
}

float FreetypeFontScaler::getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphAdvanceNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphCode);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphAdvance(0, glyphCode);
	}
}

void FreetypeFontScaler::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			getGlyphMetricsNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphCode, metrics);
			return;
		}
		$nc($($FontScaler::getNullScaler()))->getGlyphMetrics(0, glyphCode, metrics);
	}
}

int64_t FreetypeFontScaler::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphImageNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphCode);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphImage(0, glyphCode);
	}
}

$Rectangle2D$Float* FreetypeFontScaler::getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphOutlineBoundsNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphCode);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphOutlineBounds(0, glyphCode);
	}
}

$GeneralPath* FreetypeFontScaler::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphOutlineNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphCode, x, y);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphOutline(0, glyphCode, x, y);
	}
}

$GeneralPath* FreetypeFontScaler::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphVectorOutlineNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphs, numGlyphs, x, y);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphVectorOutline(0, glyphs, numGlyphs, x, y);
	}
}

void FreetypeFontScaler::dispose() {
	$synchronized(this) {
		if (this->nativeScaler != (int64_t)0) {
			disposeNativeScaler($cast($Font2D, $($nc(this->font)->get())), this->nativeScaler);
			this->nativeScaler = 0;
		}
	}
}

void FreetypeFontScaler::disposeScaler() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			$$new($Thread, nullptr, static_cast<$Runnable*>($$new(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0, this)), "free scaler"_s, 0, false)->start();
		}
	}
}

int32_t FreetypeFontScaler::getNumGlyphs() {
	$synchronized(this) {
		if (this->nativeScaler != (int64_t)0) {
			return getNumGlyphsNative(this->nativeScaler);
		}
		return $nc($($FontScaler::getNullScaler()))->getNumGlyphs();
	}
}

int32_t FreetypeFontScaler::getMissingGlyphCode() {
	$synchronized(this) {
		if (this->nativeScaler != (int64_t)0) {
			return getMissingGlyphCodeNative(this->nativeScaler);
		}
		return $nc($($FontScaler::getNullScaler()))->getMissingGlyphCode();
	}
}

int32_t FreetypeFontScaler::getGlyphCode(char16_t charCode) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphCodeNative($cast($Font2D, $($nc(this->font)->get())), this->nativeScaler, charCode);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphCode(charCode);
	}
}

$Point2D$Float* FreetypeFontScaler::getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->nativeScaler != (int64_t)0) {
			return getGlyphPointNative($cast($Font2D, $($nc(this->font)->get())), pScalerContext, this->nativeScaler, glyphCode, ptNumber);
		}
		return $nc($($FontScaler::getNullScaler()))->getGlyphPoint(pScalerContext, glyphCode, ptNumber);
	}
}

int64_t FreetypeFontScaler::getUnitsPerEm() {
	$synchronized(this) {
		return getUnitsPerEMNative(this->nativeScaler);
	}
}

int64_t FreetypeFontScaler::createScalerContext($doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) {
	$synchronized(this) {
		if (this->nativeScaler != (int64_t)0) {
			return createScalerContextNative(this->nativeScaler, matrix, aa, fm, boldness, italic);
		}
		return $NullFontScaler::getNullScalerContext();
	}
}

int64_t FreetypeFontScaler::initNativeScaler($Font2D* font, int32_t type, int32_t indexInCollection, bool supportsCJK, int32_t filesize) {
	int64_t $ret = 0;
	$prepareNative(FreetypeFontScaler, initNativeScaler, int64_t, $Font2D* font, int32_t type, int32_t indexInCollection, bool supportsCJK, int32_t filesize);
	$ret = $invokeNative(font, type, indexInCollection, supportsCJK, filesize);
	$finishNative();
	return $ret;
}

$StrikeMetrics* FreetypeFontScaler::getFontMetricsNative($Font2D* font, int64_t pScalerContext, int64_t pScaler) {
	$var($StrikeMetrics, $ret, nullptr);
	$prepareNative(FreetypeFontScaler, getFontMetricsNative, $StrikeMetrics*, $Font2D* font, int64_t pScalerContext, int64_t pScaler);
	$assign($ret, $invokeNativeObject(font, pScalerContext, pScaler));
	$finishNative();
	return $ret;
}

float FreetypeFontScaler::getGlyphAdvanceNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode) {
	float $ret = 0.0;
	$prepareNative(FreetypeFontScaler, getGlyphAdvanceNative, float, $Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode);
	$ret = $invokeNative(font, pScalerContext, pScaler, glyphCode);
	$finishNative();
	return $ret;
}

void FreetypeFontScaler::getGlyphMetricsNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, $Point2D$Float* metrics) {
	$prepareNative(FreetypeFontScaler, getGlyphMetricsNative, void, $Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, $Point2D$Float* metrics);
	$invokeNative(font, pScalerContext, pScaler, glyphCode, metrics);
	$finishNative();
}

int64_t FreetypeFontScaler::getGlyphImageNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode) {
	int64_t $ret = 0;
	$prepareNative(FreetypeFontScaler, getGlyphImageNative, int64_t, $Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode);
	$ret = $invokeNative(font, pScalerContext, pScaler, glyphCode);
	$finishNative();
	return $ret;
}

$Rectangle2D$Float* FreetypeFontScaler::getGlyphOutlineBoundsNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode) {
	$var($Rectangle2D$Float, $ret, nullptr);
	$prepareNative(FreetypeFontScaler, getGlyphOutlineBoundsNative, $Rectangle2D$Float*, $Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode);
	$assign($ret, $invokeNativeObject(font, pScalerContext, pScaler, glyphCode));
	$finishNative();
	return $ret;
}

$GeneralPath* FreetypeFontScaler::getGlyphOutlineNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, float x, float y) {
	$var($GeneralPath, $ret, nullptr);
	$prepareNative(FreetypeFontScaler, getGlyphOutlineNative, $GeneralPath*, $Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, float x, float y);
	$assign($ret, $invokeNativeObject(font, pScalerContext, pScaler, glyphCode, x, y));
	$finishNative();
	return $ret;
}

$GeneralPath* FreetypeFontScaler::getGlyphVectorOutlineNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	$var($GeneralPath, $ret, nullptr);
	$prepareNative(FreetypeFontScaler, getGlyphVectorOutlineNative, $GeneralPath*, $Font2D* font, int64_t pScalerContext, int64_t pScaler, $ints* glyphs, int32_t numGlyphs, float x, float y);
	$assign($ret, $invokeNativeObject(font, pScalerContext, pScaler, glyphs, numGlyphs, x, y));
	$finishNative();
	return $ret;
}

$Point2D$Float* FreetypeFontScaler::getGlyphPointNative($Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, int32_t ptNumber) {
	$var($Point2D$Float, $ret, nullptr);
	$prepareNative(FreetypeFontScaler, getGlyphPointNative, $Point2D$Float*, $Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, int32_t ptNumber);
	$assign($ret, $invokeNativeObject(font, pScalerContext, pScaler, glyphCode, ptNumber));
	$finishNative();
	return $ret;
}

void FreetypeFontScaler::disposeNativeScaler($Font2D* font2D, int64_t pScaler) {
	$prepareNative(FreetypeFontScaler, disposeNativeScaler, void, $Font2D* font2D, int64_t pScaler);
	$invokeNative(font2D, pScaler);
	$finishNative();
}

int32_t FreetypeFontScaler::getGlyphCodeNative($Font2D* font, int64_t pScaler, char16_t charCode) {
	int32_t $ret = 0;
	$prepareNative(FreetypeFontScaler, getGlyphCodeNative, int32_t, $Font2D* font, int64_t pScaler, char16_t charCode);
	$ret = $invokeNative(font, pScaler, charCode);
	$finishNative();
	return $ret;
}

int32_t FreetypeFontScaler::getNumGlyphsNative(int64_t pScaler) {
	int32_t $ret = 0;
	$prepareNative(FreetypeFontScaler, getNumGlyphsNative, int32_t, int64_t pScaler);
	$ret = $invokeNative(pScaler);
	$finishNative();
	return $ret;
}

int32_t FreetypeFontScaler::getMissingGlyphCodeNative(int64_t pScaler) {
	int32_t $ret = 0;
	$prepareNative(FreetypeFontScaler, getMissingGlyphCodeNative, int32_t, int64_t pScaler);
	$ret = $invokeNative(pScaler);
	$finishNative();
	return $ret;
}

int64_t FreetypeFontScaler::getUnitsPerEMNative(int64_t pScaler) {
	int64_t $ret = 0;
	$prepareNative(FreetypeFontScaler, getUnitsPerEMNative, int64_t, int64_t pScaler);
	$ret = $invokeNative(pScaler);
	$finishNative();
	return $ret;
}

int64_t FreetypeFontScaler::createScalerContextNative(int64_t pScaler, $doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) {
	int64_t $ret = 0;
	$prepareNative(FreetypeFontScaler, createScalerContextNative, int64_t, int64_t pScaler, $doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic);
	$ret = $invokeNative(pScaler, matrix, aa, fm, boldness, italic);
	$finishNative();
	return $ret;
}

void FreetypeFontScaler::invalidateScalerContext(int64_t pScalerContext) {
}

void FreetypeFontScaler::lambda$disposeScaler$0() {
	dispose();
}

void clinit$FreetypeFontScaler($Class* class$) {
	{
		$FontManagerNativeLibrary::load();
		FreetypeFontScaler::initIDs(FreetypeFontScaler::class$);
	}
}

FreetypeFontScaler::FreetypeFontScaler() {
}

$Class* FreetypeFontScaler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::classInfo$.name)) {
			return FreetypeFontScaler$$Lambda$lambda$disposeScaler$0::load$(name, initialize);
		}
	}
	$loadClass(FreetypeFontScaler, name, initialize, &_FreetypeFontScaler_ClassInfo_, clinit$FreetypeFontScaler, allocate$FreetypeFontScaler);
	return class$;
}

$Class* FreetypeFontScaler::class$ = nullptr;

	} // font
} // sun