#include <javax/swing/border/BevelBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

#undef LOWERED
#undef RAISED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace javax {
	namespace swing {
		namespace border {

void BevelBorder::init$(int32_t bevelType) {
	$AbstractBorder::init$();
	this->bevelType = bevelType;
}

void BevelBorder::init$(int32_t bevelType, $Color* highlight, $Color* shadow) {
	$useLocalObjectStack();
	$var($Color, var$0, $nc(highlight)->brighter());
	BevelBorder::init$(bevelType, var$0, highlight, shadow, $($nc(shadow)->brighter()));
}

void BevelBorder::init$(int32_t bevelType, $Color* highlightOuterColor, $Color* highlightInnerColor, $Color* shadowOuterColor, $Color* shadowInnerColor) {
	BevelBorder::init$(bevelType);
	$set(this, highlightOuter, highlightOuterColor);
	$set(this, highlightInner, highlightInnerColor);
	$set(this, shadowOuter, shadowOuterColor);
	$set(this, shadowInner, shadowInnerColor);
}

void BevelBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->bevelType == BevelBorder::RAISED) {
		paintRaisedBevel(c, g, x, y, width, height);
	} else if (this->bevelType == BevelBorder::LOWERED) {
		paintLoweredBevel(c, g, x, y, width, height);
	}
}

$Insets* BevelBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 2);
	return insets;
}

$Color* BevelBorder::getHighlightOuterColor($Component* c) {
	$useLocalObjectStack();
	$var($Color, highlight, getHighlightOuterColor());
	return highlight != nullptr ? highlight : $$nc($$nc($nc(c)->getBackground())->brighter())->brighter();
}

$Color* BevelBorder::getHighlightInnerColor($Component* c) {
	$useLocalObjectStack();
	$var($Color, highlight, getHighlightInnerColor());
	return highlight != nullptr ? highlight : $$nc($nc(c)->getBackground())->brighter();
}

$Color* BevelBorder::getShadowInnerColor($Component* c) {
	$useLocalObjectStack();
	$var($Color, shadow, getShadowInnerColor());
	return shadow != nullptr ? shadow : $$nc($nc(c)->getBackground())->darker();
}

$Color* BevelBorder::getShadowOuterColor($Component* c) {
	$useLocalObjectStack();
	$var($Color, shadow, getShadowOuterColor());
	return shadow != nullptr ? shadow : $$nc($$nc($nc(c)->getBackground())->darker())->darker();
}

$Color* BevelBorder::getHighlightOuterColor() {
	return this->highlightOuter;
}

$Color* BevelBorder::getHighlightInnerColor() {
	return this->highlightInner;
}

$Color* BevelBorder::getShadowInnerColor() {
	return this->shadowInner;
}

$Color* BevelBorder::getShadowOuterColor() {
	return this->shadowOuter;
}

int32_t BevelBorder::getBevelType() {
	return this->bevelType;
}

bool BevelBorder::isBorderOpaque() {
	return true;
}

void BevelBorder::paintRaisedBevel($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t h = height;
	int32_t w = width;
	g->translate(x, y);
	g->setColor($(getHighlightOuterColor(c)));
	g->drawLine(0, 0, 0, h - 2);
	g->drawLine(1, 0, w - 2, 0);
	g->setColor($(getHighlightInnerColor(c)));
	g->drawLine(1, 1, 1, h - 3);
	g->drawLine(2, 1, w - 3, 1);
	g->setColor($(getShadowOuterColor(c)));
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, 0, w - 1, h - 2);
	g->setColor($(getShadowInnerColor(c)));
	g->drawLine(1, h - 2, w - 2, h - 2);
	g->drawLine(w - 2, 1, w - 2, h - 3);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void BevelBorder::paintLoweredBevel($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t h = height;
	int32_t w = width;
	g->translate(x, y);
	g->setColor($(getShadowInnerColor(c)));
	g->drawLine(0, 0, 0, h - 1);
	g->drawLine(1, 0, w - 1, 0);
	g->setColor($(getShadowOuterColor(c)));
	g->drawLine(1, 1, 1, h - 2);
	g->drawLine(2, 1, w - 2, 1);
	g->setColor($(getHighlightOuterColor(c)));
	g->drawLine(1, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, 1, w - 1, h - 2);
	g->setColor($(getHighlightInnerColor(c)));
	g->drawLine(2, h - 2, w - 2, h - 2);
	g->drawLine(w - 2, 2, w - 2, h - 3);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

BevelBorder::BevelBorder() {
}

$Class* BevelBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RAISED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BevelBorder, RAISED)},
		{"LOWERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BevelBorder, LOWERED)},
		{"bevelType", "I", nullptr, $PROTECTED, $field(BevelBorder, bevelType)},
		{"highlightOuter", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, highlightOuter)},
		{"highlightInner", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, highlightInner)},
		{"shadowInner", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, shadowInner)},
		{"shadowOuter", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BevelBorder, shadowOuter)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "bevelType"},
		{'s', "highlightOuterColor"},
		{'s', "highlightInnerColor"},
		{'s', "shadowOuterColor"},
		{'s', "shadowInnerColor"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$2$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$2[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$2$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BevelBorder, init$, void, int32_t)},
		{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BevelBorder, init$, void, int32_t, $Color*, $Color*)},
		{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BevelBorder, init$, void, int32_t, $Color*, $Color*, $Color*, $Color*), nullptr, nullptr, init$methodAnnotations$$$2},
		{"getBevelType", "()I", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getBevelType, int32_t)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"getHighlightInnerColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getHighlightInnerColor, $Color*, $Component*)},
		{"getHighlightInnerColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getHighlightInnerColor, $Color*)},
		{"getHighlightOuterColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getHighlightOuterColor, $Color*, $Component*)},
		{"getHighlightOuterColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getHighlightOuterColor, $Color*)},
		{"getShadowInnerColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getShadowInnerColor, $Color*, $Component*)},
		{"getShadowInnerColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getShadowInnerColor, $Color*)},
		{"getShadowOuterColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getShadowOuterColor, $Color*, $Component*)},
		{"getShadowOuterColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(BevelBorder, getShadowOuterColor, $Color*)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(BevelBorder, isBorderOpaque, bool)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(BevelBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"paintLoweredBevel", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED, $virtualMethod(BevelBorder, paintLoweredBevel, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"paintRaisedBevel", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED, $virtualMethod(BevelBorder, paintRaisedBevel, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.border.BevelBorder",
		"javax.swing.border.AbstractBorder",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BevelBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BevelBorder));
	});
	return class$;
}

$Class* BevelBorder::class$ = nullptr;

		} // border
	} // swing
} // javax