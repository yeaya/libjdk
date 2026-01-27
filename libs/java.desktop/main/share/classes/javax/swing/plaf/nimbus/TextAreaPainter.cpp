#include <javax/swing/plaf/nimbus/TextAreaPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_DISABLED
#undef BACKGROUND_DISABLED_NOTINSCROLLPANE
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_NOTINSCROLLPANE
#undef BACKGROUND_SELECTED
#undef BORDER_DISABLED_NOTINSCROLLPANE
#undef BORDER_ENABLED_NOTINSCROLLPANE
#undef BORDER_FOCUSED_NOTINSCROLLPANE

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _TextAreaPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_DISABLED_NOTINSCROLLPANE", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BACKGROUND_DISABLED_NOTINSCROLLPANE)},
	{"BACKGROUND_ENABLED_NOTINSCROLLPANE", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BACKGROUND_ENABLED_NOTINSCROLLPANE)},
	{"BACKGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BACKGROUND_SELECTED)},
	{"BORDER_DISABLED_NOTINSCROLLPANE", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BORDER_DISABLED_NOTINSCROLLPANE)},
	{"BORDER_FOCUSED_NOTINSCROLLPANE", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BORDER_FOCUSED_NOTINSCROLLPANE)},
	{"BORDER_ENABLED_NOTINSCROLLPANE", "I", nullptr, $STATIC | $FINAL, $constField(TextAreaPainter, BORDER_ENABLED_NOTINSCROLLPANE)},
	{"state", "I", nullptr, $PRIVATE, $field(TextAreaPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TextAreaPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TextAreaPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TextAreaPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TextAreaPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TextAreaPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TextAreaPainter, color12)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TextAreaPainter, componentColors)},
	{}
};

$MethodInfo _TextAreaPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(TextAreaPainter, init$, void, $AbstractRegionPainter$PaintContext*, int32_t)},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeGradient1, $Paint*, $Shape*)},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeGradient2, $Paint*, $Shape*)},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeGradient3, $Paint*, $Shape*)},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeGradient4, $Paint*, $Shape*)},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeGradient5, $Paint*, $Shape*)},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodePath1, $Path2D*)},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect1, $Rectangle2D*)},
	{"decodeRect10", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect10, $Rectangle2D*)},
	{"decodeRect11", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect11, $Rectangle2D*)},
	{"decodeRect12", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect12, $Rectangle2D*)},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect2, $Rectangle2D*)},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect3, $Rectangle2D*)},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect4, $Rectangle2D*)},
	{"decodeRect5", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect5, $Rectangle2D*)},
	{"decodeRect6", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect6, $Rectangle2D*)},
	{"decodeRect7", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect7, $Rectangle2D*)},
	{"decodeRect8", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect8, $Rectangle2D*)},
	{"decodeRect9", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(TextAreaPainter, decodeRect9, $Rectangle2D*)},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(TextAreaPainter, doPaint, void, $Graphics2D*, $JComponent*, int32_t, int32_t, $ObjectArray*)},
	{"getExtendedCacheKeys", "(Ljavax/swing/JComponent;)[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(TextAreaPainter, getExtendedCacheKeys, $ObjectArray*, $JComponent*)},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TextAreaPainter, getPaintContext, $AbstractRegionPainter$PaintContext*)},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBackgroundDisabled, void, $Graphics2D*)},
	{"paintBackgroundDisabledAndNotInScrollPane", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBackgroundDisabledAndNotInScrollPane, void, $Graphics2D*)},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBackgroundEnabled, void, $Graphics2D*)},
	{"paintBackgroundEnabledAndNotInScrollPane", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBackgroundEnabledAndNotInScrollPane, void, $Graphics2D*)},
	{"paintBackgroundSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBackgroundSelected, void, $Graphics2D*)},
	{"paintBorderDisabledAndNotInScrollPane", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBorderDisabledAndNotInScrollPane, void, $Graphics2D*)},
	{"paintBorderEnabledAndNotInScrollPane", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBorderEnabledAndNotInScrollPane, void, $Graphics2D*)},
	{"paintBorderFocusedAndNotInScrollPane", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(TextAreaPainter, paintBorderFocusedAndNotInScrollPane, void, $Graphics2D*)},
	{}
};

$ClassInfo _TextAreaPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TextAreaPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TextAreaPainter_FieldInfo_,
	_TextAreaPainter_MethodInfo_
};

$Object* allocate$TextAreaPainter($Class* clazz) {
	return $of($alloc(TextAreaPainter));
}

void TextAreaPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.015872955f, -0.07995863f, 0.15294117f, 0));
	$set(this, color2, decodeColor("nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.07187897f, 0.06666666f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07826825f, 0.10588235f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07856284f, 0.11372548f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07796818f, 0.09803921f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.0965403f, -0.18431371f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.1048766f, -0.05098039f, 0));
	$set(this, color9, decodeColor("nimbusLightBackground"_s, 0.6666667f, 0.004901961f, -0.19999999f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10512091f, -0.019607842f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.105344966f, 0.011764705f, 0));
	$set(this, color12, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TextAreaPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TextAreaPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case TextAreaPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case TextAreaPainter::BACKGROUND_DISABLED_NOTINSCROLLPANE:
		{
			paintBackgroundDisabledAndNotInScrollPane(g);
			break;
		}
	case TextAreaPainter::BACKGROUND_ENABLED_NOTINSCROLLPANE:
		{
			paintBackgroundEnabledAndNotInScrollPane(g);
			break;
		}
	case TextAreaPainter::BACKGROUND_SELECTED:
		{
			paintBackgroundSelected(g);
			break;
		}
	case TextAreaPainter::BORDER_DISABLED_NOTINSCROLLPANE:
		{
			paintBorderDisabledAndNotInScrollPane(g);
			break;
		}
	case TextAreaPainter::BORDER_FOCUSED_NOTINSCROLLPANE:
		{
			paintBorderFocusedAndNotInScrollPane(g);
			break;
		}
	case TextAreaPainter::BORDER_ENABLED_NOTINSCROLLPANE:
		{
			paintBorderEnabledAndNotInScrollPane(g);
			break;
		}
	}
}

$ObjectArray* TextAreaPainter::getExtendedCacheKeys($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, extendedCacheKeys, nullptr);
	switch (this->state) {
	case TextAreaPainter::BACKGROUND_ENABLED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {$($of(getComponentColor(c, "background"_s, this->color2, 0.0f, 0.0f, 0)))}));
			break;
		}
	case TextAreaPainter::BACKGROUND_ENABLED_NOTINSCROLLPANE:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {$($of(getComponentColor(c, "background"_s, this->color2, 0.0f, 0.0f, 0)))}));
			break;
		}
	case TextAreaPainter::BORDER_FOCUSED_NOTINSCROLLPANE:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color9, 0.004901961f, -0.19999999f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color2, 0.0f, 0.0f, 0)))
			}));
			break;
		}
	case TextAreaPainter::BORDER_ENABLED_NOTINSCROLLPANE:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color9, 0.004901961f, -0.19999999f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color2, 0.0f, 0.0f, 0)))
			}));
			break;
		}
	}
	return extendedCacheKeys;
}

$AbstractRegionPainter$PaintContext* TextAreaPainter::getPaintContext() {
	return this->ctx;
}

void TextAreaPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void TextAreaPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($cast($Color, $nc(this->componentColors)->get(0)));
	g->fill(this->rect);
}

void TextAreaPainter::paintBackgroundDisabledAndNotInScrollPane($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void TextAreaPainter::paintBackgroundEnabledAndNotInScrollPane($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint($cast($Color, $nc(this->componentColors)->get(0)));
	g->fill(this->rect);
}

void TextAreaPainter::paintBackgroundSelected($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint(this->color2);
	g->fill(this->rect);
}

void TextAreaPainter::paintBorderDisabledAndNotInScrollPane($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect3());
	$nc(g)->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color6);
	g->fill(this->rect);
	$set(this, rect, decodeRect6());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color4);
	g->fill(this->rect);
}

void TextAreaPainter::paintBorderFocusedAndNotInScrollPane($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect8());
	$nc(g)->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect9());
	g->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color10);
	g->fill(this->rect);
	$set(this, rect, decodeRect11());
	g->setPaint(this->color10);
	g->fill(this->rect);
	$set(this, rect, decodeRect12());
	g->setPaint(this->color11);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color12);
	g->fill(this->path);
}

void TextAreaPainter::paintBorderEnabledAndNotInScrollPane($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect8());
	$nc(g)->setPaint($(decodeGradient5(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect9());
	g->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color10);
	g->fill(this->rect);
	$set(this, rect, decodeRect11());
	g->setPaint(this->color10);
	g->fill(this->rect);
	$set(this, rect, decodeRect12());
	g->setPaint(this->color11);
	g->fill(this->rect);
}

$Rectangle2D* TextAreaPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.3333333f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect4() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect5() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect6() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(2.3333333f);
	float var$3 = decodeX(2.3333333f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.3333333f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect7() {
	double var$0 = (double)decodeX(2.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.3333333f);
	double var$2 = (double)(var$3 - decodeX(2.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect8() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect9() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect10() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(0.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect11() {
	double var$0 = (double)decodeX(2.4f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(2.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* TextAreaPainter::decodeRect12() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(2.4f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.4f));
	return this->rect;
}

$Path2D* TextAreaPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.4f);
	$nc(this->path)->moveTo(var$0, decodeY(0.4f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$2, decodeY(2.6f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(0.4f));
	double var$4 = (double)decodeAnchorX(2.6f, 0.0f);
	double var$5 = (double)decodeAnchorY(0.4f, 0.0f);
	double var$6 = (double)decodeAnchorX(2.8800004f, 0.1f);
	double var$7 = (double)decodeAnchorY(0.4f, 0.0f);
	double var$8 = (double)decodeX(2.8800004f);
	$nc(this->path)->curveTo(var$4, var$5, var$6, var$7, var$8, decodeY(0.4f));
	double var$9 = (double)decodeAnchorX(2.8800004f, 0.1f);
	double var$10 = (double)decodeAnchorY(0.4f, 0.0f);
	double var$11 = (double)decodeAnchorX(2.8800004f, 0.0f);
	double var$12 = (double)decodeAnchorY(2.8799999f, 0.0f);
	double var$13 = (double)decodeX(2.8800004f);
	$nc(this->path)->curveTo(var$9, var$10, var$11, var$12, var$13, decodeY(2.8799999f));
	double var$14 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$14, decodeY(2.8799999f));
	double var$15 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$15, decodeY(0.120000005f));
	double var$16 = (double)decodeX(2.8800004f);
	$nc(this->path)->lineTo(var$16, decodeY(0.120000005f));
	double var$17 = (double)decodeX(2.8800004f);
	$nc(this->path)->lineTo(var$17, decodeY(0.4f));
	double var$18 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$18, decodeY(0.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* TextAreaPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* TextAreaPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color5,
		$(decodeColor(this->color5, this->color1, 0.5f)),
		this->color1
	}));
}

$Paint* TextAreaPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.1625f * h) + y, $$new($floats, {
		0.1f,
		0.49999997f,
		0.9f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* TextAreaPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.1f,
		0.49999997f,
		0.9f
	}), $$new($ColorArray, {
		$cast($Color, $nc(this->componentColors)->get(0)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(0)), $cast($Color, $nc(this->componentColors)->get(1)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(1))
	}));
}

$Paint* TextAreaPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.1f,
		0.49999997f,
		0.9f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

TextAreaPainter::TextAreaPainter() {
}

$Class* TextAreaPainter::load$($String* name, bool initialize) {
	$loadClass(TextAreaPainter, name, initialize, &_TextAreaPainter_ClassInfo_, allocate$TextAreaPainter);
	return class$;
}

$Class* TextAreaPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax