#include <sun/font/TextLineComponent.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/font/CoreMetrics.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNCHANGED

using $GlyphJustificationInfoArray = $Array<::java::awt::font::GlyphJustificationInfo>;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;

namespace sun {
	namespace font {

$FieldInfo _TextLineComponent_FieldInfo_[] = {
	{"LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextLineComponent, LEFT_TO_RIGHT)},
	{"RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextLineComponent, RIGHT_TO_LEFT)},
	{"UNCHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextLineComponent, UNCHANGED)},
	{}
};

$MethodInfo _TextLineComponent_MethodInfo_[] = {
	{"applyJustificationDeltas", "([FI[Z)Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, applyJustificationDeltas, TextLineComponent*, $floats*, int32_t, $booleans*)},
	{"caretAtOffsetIsValid", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, caretAtOffsetIsValid, bool, int32_t)},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, draw, void, $Graphics2D*, float, float)},
	{"getAdvance", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getAdvance, float)},
	{"getAdvanceBetween", "(II)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getAdvanceBetween, float, int32_t, int32_t)},
	{"getBaselineTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getBaselineTransform, $AffineTransform*)},
	{"getCharAdvance", "(I)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getCharAdvance, float, int32_t)},
	{"getCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getCharVisualBounds, $Rectangle2D*, int32_t)},
	{"getCharX", "(I)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getCharX, float, int32_t)},
	{"getCharY", "(I)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getCharY, float, int32_t)},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getCoreMetrics, $CoreMetrics*)},
	{"getItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getItalicBounds, $Rectangle2D*)},
	{"getJustificationInfos", "([Ljava/awt/font/GlyphJustificationInfo;III)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getJustificationInfos, void, $GlyphJustificationInfoArray*, int32_t, int32_t, int32_t)},
	{"getLineBreakIndex", "(IF)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getLineBreakIndex, int32_t, int32_t, float)},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getLogicalBounds, $Rectangle2D*)},
	{"getNumCharacters", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getNumCharacters, int32_t)},
	{"getNumJustificationInfos", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getNumJustificationInfos, int32_t)},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getOutline, $Shape*, float, float)},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getPixelBounds, $Rectangle*, $FontRenderContext*, float, float)},
	{"getSubset", "(III)Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getSubset, TextLineComponent*, int32_t, int32_t, int32_t)},
	{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, getVisualBounds, $Rectangle2D*)},
	{"isSimple", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextLineComponent, isSimple, bool)},
	{}
};

$ClassInfo _TextLineComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.TextLineComponent",
	nullptr,
	nullptr,
	_TextLineComponent_FieldInfo_,
	_TextLineComponent_MethodInfo_
};

$Object* allocate$TextLineComponent($Class* clazz) {
	return $of($alloc(TextLineComponent));
}

$Class* TextLineComponent::load$($String* name, bool initialize) {
	$loadClass(TextLineComponent, name, initialize, &_TextLineComponent_ClassInfo_, allocate$TextLineComponent);
	return class$;
}

$Class* TextLineComponent::class$ = nullptr;

	} // font
} // sun