#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <jcpp.h>

#undef BOTTOM_ALIGNMENT
#undef CENTER_BASELINE
#undef HANGING_BASELINE
#undef ROMAN_BASELINE
#undef TOP_ALIGNMENT

using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

void GraphicAttribute::init$(int32_t alignment) {
	if (alignment < GraphicAttribute::BOTTOM_ALIGNMENT || alignment > GraphicAttribute::HANGING_BASELINE) {
		$throwNew($IllegalArgumentException, "bad alignment"_s);
	}
	this->fAlignment = alignment;
}

$Rectangle2D* GraphicAttribute::getBounds() {
	float ascent = getAscent();
	float var$0 = -ascent;
	float var$1 = getAdvance();
	return $new($Rectangle2D$Float, 0, var$0, var$1, ascent + getDescent());
}

$Shape* GraphicAttribute::getOutline($AffineTransform* tx) {
	$var($Shape, b, getBounds());
	if (tx != nullptr) {
		$assign(b, tx->createTransformedShape(b));
	}
	return b;
}

int32_t GraphicAttribute::getAlignment() {
	return this->fAlignment;
}

$GlyphJustificationInfo* GraphicAttribute::getJustificationInfo() {
	float advance = getAdvance();
	return $new($GlyphJustificationInfo, advance, false, 2, advance / 3, advance / 3, false, 1, 0, 0);
}

GraphicAttribute::GraphicAttribute() {
}

$Class* GraphicAttribute::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fAlignment", "I", nullptr, $PRIVATE, $field(GraphicAttribute, fAlignment)},
		{"TOP_ALIGNMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicAttribute, TOP_ALIGNMENT)},
		{"BOTTOM_ALIGNMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicAttribute, BOTTOM_ALIGNMENT)},
		{"ROMAN_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicAttribute, ROMAN_BASELINE)},
		{"CENTER_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicAttribute, CENTER_BASELINE)},
		{"HANGING_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicAttribute, HANGING_BASELINE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(GraphicAttribute, init$, void, int32_t)},
		{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicAttribute, draw, void, $Graphics2D*, float, float)},
		{"getAdvance", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicAttribute, getAdvance, float)},
		{"getAlignment", "()I", nullptr, $PUBLIC | $FINAL, $method(GraphicAttribute, getAlignment, int32_t)},
		{"getAscent", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicAttribute, getAscent, float)},
		{"getBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(GraphicAttribute, getBounds, $Rectangle2D*)},
		{"getDescent", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicAttribute, getDescent, float)},
		{"getJustificationInfo", "()Ljava/awt/font/GlyphJustificationInfo;", nullptr, $PUBLIC, $virtualMethod(GraphicAttribute, getJustificationInfo, $GlyphJustificationInfo*)},
		{"getOutline", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(GraphicAttribute, getOutline, $Shape*, $AffineTransform*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.font.GraphicAttribute",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GraphicAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicAttribute);
	});
	return class$;
}

$Class* GraphicAttribute::class$ = nullptr;

		} // font
	} // awt
} // java