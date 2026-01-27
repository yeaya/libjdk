#include <sun/font/PhysicalFont.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _PhysicalFont_FieldInfo_[] = {
	{"platName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(PhysicalFont, platName)},
	{"nativeNames", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(PhysicalFont, nativeNames)},
	{}
};

$MethodInfo _PhysicalFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(PhysicalFont, init$, void, $String*, Object$*), "java.awt.FontFormatException"},
	{"<init>", "()V", nullptr, $PROTECTED, $method(PhysicalFont, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PhysicalFont, equals, bool, Object$*)},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getFontMetrics, $StrikeMetrics*, int64_t)},
	{"getGlyphAdvance", "(JI)F", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getGlyphAdvance, float, int64_t, int32_t)},
	{"getGlyphImage", "(JI)J", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getGlyphImage, int64_t, int64_t, int32_t)},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getGlyphMetrics, void, int64_t, int32_t, $Point2D$Float*)},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getGlyphOutline, $GeneralPath*, int64_t, int32_t, float, float)},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getGlyphOutlineBounds, $Rectangle2D$Float*, int64_t, int32_t)},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, 0, $virtualMethod(PhysicalFont, getGlyphPoint, $Point2D$Float*, int64_t, int32_t, int32_t)},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $ABSTRACT, $virtualMethod(PhysicalFont, getGlyphVectorOutline, $GeneralPath*, int64_t, $ints*, int32_t, float, float)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PhysicalFont, hashCode, int32_t)},
	{}
};

$ClassInfo _PhysicalFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.PhysicalFont",
	"sun.font.Font2D",
	nullptr,
	_PhysicalFont_FieldInfo_,
	_PhysicalFont_MethodInfo_
};

$Object* allocate$PhysicalFont($Class* clazz) {
	return $of($alloc(PhysicalFont));
}

bool PhysicalFont::equals(Object$* o) {
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $nc($of(o))->getClass() != $of(this)->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(PhysicalFont, other, $cast(PhysicalFont, o));
	bool var$1 = ($nc(this->fullName)->equals($nc(other)->fullName));
	return var$1 && ((this->platName == nullptr && $nc(other)->platName == nullptr) || (this->platName != nullptr && $nc(this->platName)->equals($nc(other)->platName)));
}

int32_t PhysicalFont::hashCode() {
	int32_t var$0 = $nc(this->fullName)->hashCode();
	return var$0 + (this->platName != nullptr ? $nc(this->platName)->hashCode() : 0);
}

void PhysicalFont::init$($String* platname, Object$* nativeNames) {
	$Font2D::init$();
	$set(this, handle, $new($Font2DHandle, this));
	$set(this, platName, platname);
	$set(this, nativeNames, nativeNames);
}

void PhysicalFont::init$() {
	$Font2D::init$();
	$set(this, handle, $new($Font2DHandle, this));
}

$Point2D$Float* PhysicalFont::getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) {
	return $new($Point2D$Float);
}

PhysicalFont::PhysicalFont() {
}

$Class* PhysicalFont::load$($String* name, bool initialize) {
	$loadClass(PhysicalFont, name, initialize, &_PhysicalFont_ClassInfo_, allocate$PhysicalFont);
	return class$;
}

$Class* PhysicalFont::class$ = nullptr;

	} // font
} // sun