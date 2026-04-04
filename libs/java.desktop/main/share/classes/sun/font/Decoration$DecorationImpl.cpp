#include <sun/font/Decoration$DecorationImpl.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/Area.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/Decoration.h>
#include <sun/font/Underline.h>
#include <jcpp.h>

#undef BLACK
#undef CAP_BUTT
#undef JOIN_MITER
#undef WHITE

using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Area = ::java::awt::geom::Area;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;
using $Decoration$Label = ::sun::font::Decoration$Label;
using $Underline = ::sun::font::Underline;

namespace sun {
	namespace font {

void Decoration$DecorationImpl::init$($Paint* foreground, $Paint* background, bool swapColors, bool strikethrough, $Underline* stdUnderline, $Underline* imUnderline) {
	$Decoration::init$();
	$set(this, fgPaint, nullptr);
	$set(this, bgPaint, nullptr);
	this->swapColors = false;
	this->strikethrough = false;
	$set(this, stdUnderline, nullptr);
	$set(this, imUnderline, nullptr);
	$set(this, fgPaint, foreground);
	$set(this, bgPaint, background);
	this->swapColors = swapColors;
	this->strikethrough = strikethrough;
	$set(this, stdUnderline, stdUnderline);
	$set(this, imUnderline, imUnderline);
}

bool Decoration$DecorationImpl::areEqual(Object$* lhs, Object$* rhs) {
	$init(Decoration$DecorationImpl);
	if (lhs == nullptr) {
		return rhs == nullptr;
	} else {
		return $of(lhs)->equals(rhs);
	}
}

bool Decoration$DecorationImpl::equals(Object$* rhs) {
	if ($equals(rhs, this)) {
		return true;
	}
	if (rhs == nullptr) {
		return false;
	}
	$var(Decoration$DecorationImpl, other, nullptr);
	try {
		$assign(other, $cast(Decoration$DecorationImpl, rhs));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!(this->swapColors == $nc(other)->swapColors && this->strikethrough == other->strikethrough)) {
		return false;
	}
	if (!areEqual(this->stdUnderline, other->stdUnderline)) {
		return false;
	}
	if (!areEqual(this->fgPaint, other->fgPaint)) {
		return false;
	}
	if (!areEqual(this->bgPaint, other->bgPaint)) {
		return false;
	}
	return areEqual(this->imUnderline, other->imUnderline);
}

int32_t Decoration$DecorationImpl::hashCode() {
	int32_t hc = 1;
	if (this->strikethrough) {
		hc |= 2;
	}
	if (this->swapColors) {
		hc |= 4;
	}
	if (this->stdUnderline != nullptr) {
		hc += this->stdUnderline->hashCode();
	}
	return hc;
}

float Decoration$DecorationImpl::getUnderlineMaxY($CoreMetrics* cm) {
	float maxY = 0;
	if (this->stdUnderline != nullptr) {
		float ulBottom = $nc(cm)->underlineOffset;
		ulBottom += this->stdUnderline->getLowerDrawLimit(cm->underlineThickness);
		maxY = $Math::max(maxY, ulBottom);
	}
	if (this->imUnderline != nullptr) {
		float ulBottom = $nc(cm)->underlineOffset;
		ulBottom += this->imUnderline->getLowerDrawLimit(cm->underlineThickness);
		maxY = $Math::max(maxY, ulBottom);
	}
	return maxY;
}

void Decoration$DecorationImpl::drawTextAndEmbellishments($Decoration$Label* label, $Graphics2D* g2d, float x, float y) {
	$useLocalObjectStack();
	$nc(label)->handleDraw(g2d, x, y);
	if (!this->strikethrough && this->stdUnderline == nullptr && this->imUnderline == nullptr) {
		return;
	}
	float x1 = x;
	float x2 = x1 + (float)$$nc(label->getLogicalBounds())->getWidth();
	$var($CoreMetrics, cm, label->getCoreMetrics());
	if (this->strikethrough) {
		$var($Stroke, savedStroke, $nc(g2d)->getStroke());
		g2d->setStroke($$new($BasicStroke, $nc(cm)->strikethroughThickness, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER));
		float strikeY = y + cm->strikethroughOffset;
		g2d->draw($$new($Line2D$Float, x1, strikeY, x2, strikeY));
		g2d->setStroke(savedStroke);
	}
	float ulOffset = $nc(cm)->underlineOffset;
	float ulThickness = cm->underlineThickness;
	if (this->stdUnderline != nullptr) {
		this->stdUnderline->drawUnderline(g2d, ulThickness, x1, x2, y + ulOffset);
	}
	if (this->imUnderline != nullptr) {
		this->imUnderline->drawUnderline(g2d, ulThickness, x1, x2, y + ulOffset);
	}
}

void Decoration$DecorationImpl::drawTextAndDecorations($Decoration$Label* label, $Graphics2D* g2d, float x, float y) {
	$useLocalObjectStack();
	if (this->fgPaint == nullptr && this->bgPaint == nullptr && this->swapColors == false) {
		drawTextAndEmbellishments(label, g2d, x, y);
	} else {
		$var($Paint, savedPaint, $nc(g2d)->getPaint());
		$var($Paint, foreground, nullptr);
		$var($Paint, background, nullptr);
		if (this->swapColors) {
			$assign(background, this->fgPaint == nullptr ? savedPaint : this->fgPaint);
			if (this->bgPaint == nullptr) {
				if ($instanceOf($Color, background)) {
					$var($Color, bg, $cast($Color, background));
					int32_t var$1 = 33 * bg->getRed();
					int32_t var$0 = var$1 + 53 * bg->getGreen();
					int32_t brightness = var$0 + 14 * bg->getBlue();
					$assign(foreground, brightness > 18500 ? $Color::BLACK : $Color::WHITE);
				} else {
					$init($Color);
					$assign(foreground, $Color::WHITE);
				}
			} else {
				$assign(foreground, this->bgPaint);
			}
		} else {
			$assign(foreground, this->fgPaint == nullptr ? savedPaint : this->fgPaint);
			$assign(background, this->bgPaint);
		}
		if (background != nullptr) {
			$var($Rectangle2D, bgArea, $nc(label)->getLogicalBounds());
			float var$2 = x + (float)$nc(bgArea)->getX();
			float var$3 = y + (float)bgArea->getY();
			float var$4 = (float)bgArea->getWidth();
			$assign(bgArea, $new($Rectangle2D$Float, var$2, var$3, var$4, (float)bgArea->getHeight()));
			g2d->setPaint(background);
			g2d->fill(bgArea);
		}
		g2d->setPaint(foreground);
		drawTextAndEmbellishments(label, g2d, x, y);
		g2d->setPaint(savedPaint);
	}
}

$Rectangle2D* Decoration$DecorationImpl::getVisualBounds($Decoration$Label* label) {
	$useLocalObjectStack();
	$var($Rectangle2D, visBounds, $nc(label)->handleGetVisualBounds());
	if (this->swapColors || this->bgPaint != nullptr || this->strikethrough || this->stdUnderline != nullptr || this->imUnderline != nullptr) {
		float minX = 0;
		$var($Rectangle2D, lb, label->getLogicalBounds());
		float minY = 0;
		float maxY = 0;
		if (this->swapColors || this->bgPaint != nullptr) {
			minY = (float)$nc(lb)->getY();
			maxY = minY + (float)lb->getHeight();
		}
		maxY = $Math::max(maxY, getUnderlineMaxY($(label->getCoreMetrics())));
		$var($Rectangle2D, ab, $new($Rectangle2D$Float, minX, minY, (float)$nc(lb)->getWidth(), maxY - minY));
		$nc(visBounds)->add(ab);
	}
	return visBounds;
}

$Shape* Decoration$DecorationImpl::getOutline($Decoration$Label* label, float x, float y) {
	$useLocalObjectStack();
	if (!this->strikethrough && this->stdUnderline == nullptr && this->imUnderline == nullptr) {
		return $nc(label)->handleGetOutline(x, y);
	}
	$var($CoreMetrics, cm, $nc(label)->getCoreMetrics());
	float ulThickness = $nc(cm)->underlineThickness;
	float ulOffset = cm->underlineOffset;
	$var($Rectangle2D, lb, label->getLogicalBounds());
	float x1 = x;
	float x2 = x1 + (float)$nc(lb)->getWidth();
	$var($Area, area, nullptr);
	if (this->stdUnderline != nullptr) {
		$var($Shape, ul, this->stdUnderline->getUnderlineShape(ulThickness, x1, x2, y + ulOffset));
		$assign(area, $new($Area, ul));
	}
	if (this->strikethrough) {
		$var($Stroke, stStroke, $new($BasicStroke, cm->strikethroughThickness, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER));
		float shiftY = y + cm->strikethroughOffset;
		$var($Line2D, line, $new($Line2D$Float, x1, shiftY, x2, shiftY));
		$var($Area, slArea, $new($Area, $(stStroke->createStrokedShape(line))));
		if (area == nullptr) {
			$assign(area, slArea);
		} else {
			area->add(slArea);
		}
	}
	if (this->imUnderline != nullptr) {
		$var($Shape, ul, this->imUnderline->getUnderlineShape(ulThickness, x1, x2, y + ulOffset));
		$var($Area, ulArea, $new($Area, ul));
		if (area == nullptr) {
			$assign(area, ulArea);
		} else {
			area->add(ulArea);
		}
	}
	$nc(area)->add($$new($Area, $(label->handleGetOutline(x, y))));
	return $new($GeneralPath, area);
}

$String* Decoration$DecorationImpl::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Decoration::toString()));
	sb->append("["_s);
	if (this->fgPaint != nullptr) {
		sb->append($$str({"fgPaint: "_s, this->fgPaint}));
	}
	if (this->bgPaint != nullptr) {
		sb->append($$str({" bgPaint: "_s, this->bgPaint}));
	}
	if (this->swapColors) {
		sb->append(" swapColors: true"_s);
	}
	if (this->strikethrough) {
		sb->append(" strikethrough: true"_s);
	}
	if (this->stdUnderline != nullptr) {
		sb->append($$str({" stdUnderline: "_s, this->stdUnderline}));
	}
	if (this->imUnderline != nullptr) {
		sb->append($$str({" imUnderline: "_s, this->imUnderline}));
	}
	sb->append("]"_s);
	return sb->toString();
}

Decoration$DecorationImpl::Decoration$DecorationImpl() {
}

$Class* Decoration$DecorationImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fgPaint", "Ljava/awt/Paint;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, fgPaint)},
		{"bgPaint", "Ljava/awt/Paint;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, bgPaint)},
		{"swapColors", "Z", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, swapColors)},
		{"strikethrough", "Z", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, strikethrough)},
		{"stdUnderline", "Lsun/font/Underline;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, stdUnderline)},
		{"imUnderline", "Lsun/font/Underline;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, imUnderline)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Paint;Ljava/awt/Paint;ZZLsun/font/Underline;Lsun/font/Underline;)V", nullptr, 0, $method(Decoration$DecorationImpl, init$, void, $Paint*, $Paint*, bool, bool, $Underline*, $Underline*)},
		{"areEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Decoration$DecorationImpl, areEqual, bool, Object$*, Object$*)},
		{"drawTextAndDecorations", "(Lsun/font/Decoration$Label;Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC, $virtualMethod(Decoration$DecorationImpl, drawTextAndDecorations, void, $Decoration$Label*, $Graphics2D*, float, float)},
		{"drawTextAndEmbellishments", "(Lsun/font/Decoration$Label;Ljava/awt/Graphics2D;FF)V", nullptr, $PRIVATE, $method(Decoration$DecorationImpl, drawTextAndEmbellishments, void, $Decoration$Label*, $Graphics2D*, float, float)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Decoration$DecorationImpl, equals, bool, Object$*)},
		{"getOutline", "(Lsun/font/Decoration$Label;FF)Ljava/awt/Shape;", nullptr, 0, $virtualMethod(Decoration$DecorationImpl, getOutline, $Shape*, $Decoration$Label*, float, float)},
		{"getUnderlineMaxY", "(Lsun/font/CoreMetrics;)F", nullptr, $PRIVATE, $method(Decoration$DecorationImpl, getUnderlineMaxY, float, $CoreMetrics*)},
		{"getVisualBounds", "(Lsun/font/Decoration$Label;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(Decoration$DecorationImpl, getVisualBounds, $Rectangle2D*, $Decoration$Label*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Decoration$DecorationImpl, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Decoration$DecorationImpl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.Decoration$DecorationImpl", "sun.font.Decoration", "DecorationImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.font.Decoration$DecorationImpl",
		"sun.font.Decoration",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.Decoration"
	};
	$loadClass(Decoration$DecorationImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoration$DecorationImpl);
	});
	return class$;
}

$Class* Decoration$DecorationImpl::class$ = nullptr;

	} // font
} // sun