#include <javax/swing/border/TitledBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef ABOVE_BOTTOM
#undef ABOVE_TOP
#undef BELOW_BOTTOM
#undef BELOW_TOP
#undef BOTTOM
#undef CENTER
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef DEFAULT_JUSTIFICATION
#undef DEFAULT_POSITION
#undef DIALOG
#undef EDGE_SPACING
#undef LEADING
#undef LEFT
#undef OTHER
#undef PLAIN
#undef RIGHT
#undef TEXT_INSET_H
#undef TEXT_SPACING
#undef TOP
#undef TRAILING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace javax {
	namespace swing {
		namespace border {

class TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0 : public $PropertyChangeListener {
	$class(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($WeakReference* weakReference) {
		$set(this, weakReference, weakReference);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		TitledBorder::lambda$installPropertyChangeListeners$0(weakReference, evt);
	}
	$WeakReference* weakReference = nullptr;
};
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"weakReference", "Ljava/lang/ref/WeakReference;", nullptr, $PUBLIC, $field(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, weakReference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ref/WeakReference;)V", nullptr, $PUBLIC, $method(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, init$, void, $WeakReference*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.border.TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0);
	});
	return class$;
}
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::class$ = nullptr;

class TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1 : public $Runnable {
	$class(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($PropertyChangeListener* listener) {
		$set(this, listener, listener);
	}
	virtual void run() override {
		TitledBorder::lambda$installPropertyChangeListeners$1(listener);
	}
	$PropertyChangeListener* listener = nullptr;
};
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listener", "Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $field(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $method(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, init$, void, $PropertyChangeListener*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.border.TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1);
	});
	return class$;
}
$Class* TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::class$ = nullptr;

void TitledBorder::init$($String* title) {
	TitledBorder::init$(nullptr, title, TitledBorder::LEADING, TitledBorder::DEFAULT_POSITION, nullptr, nullptr);
}

void TitledBorder::init$($Border* border) {
	TitledBorder::init$(border, ""_s, TitledBorder::LEADING, TitledBorder::DEFAULT_POSITION, nullptr, nullptr);
}

void TitledBorder::init$($Border* border, $String* title) {
	TitledBorder::init$(border, title, TitledBorder::LEADING, TitledBorder::DEFAULT_POSITION, nullptr, nullptr);
}

void TitledBorder::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition) {
	TitledBorder::init$(border, title, titleJustification, titlePosition, nullptr, nullptr);
}

void TitledBorder::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont) {
	TitledBorder::init$(border, title, titleJustification, titlePosition, titleFont, nullptr);
}

void TitledBorder::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont, $Color* titleColor) {
	$AbstractBorder::init$();
	$set(this, title, title);
	$set(this, border, border);
	$set(this, titleFont, titleFont);
	$set(this, titleColor, titleColor);
	setTitleJustification(titleJustification);
	setTitlePosition(titlePosition);
	$set(this, label, $new($JLabel));
	this->label->setOpaque(false);
	$init($BasicHTML);
	this->label->putClientProperty($BasicHTML::propertyKey, nullptr);
	installPropertyChangeListeners();
}

void TitledBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($Border, border, getBorder());
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		int32_t edge = ($instanceOf(TitledBorder, border)) ? 0 : TitledBorder::EDGE_SPACING;
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		$var($Insets, insets, getBorderInsets(border, c, $$new($Insets, 0, 0, 0, 0)));
		int32_t borderX = x + edge;
		int32_t borderY = y + edge;
		int32_t borderW = width - edge - edge;
		int32_t borderH = height - edge - edge;
		int32_t labelY = y;
		int32_t labelH = $nc(size)->height;
		int32_t position = getPosition();
		switch (position) {
		case TitledBorder::ABOVE_TOP:
			$nc(insets)->left = 0;
			insets->right = 0;
			borderY += labelH - edge;
			borderH -= labelH - edge;
			break;
		case TitledBorder::TOP:
			$nc(insets)->top = edge + $nc(insets)->top / 2 - labelH / 2;
			if (insets->top < edge) {
				borderY -= insets->top;
				borderH += insets->top;
			} else {
				labelY += insets->top;
			}
			break;
		case TitledBorder::BELOW_TOP:
			labelY += $nc(insets)->top + edge;
			break;
		case TitledBorder::ABOVE_BOTTOM:
			labelY += height - labelH - $nc(insets)->bottom - edge;
			break;
		case TitledBorder::BOTTOM:
			labelY += height - labelH;
			$nc(insets)->bottom = edge + ($nc(insets)->bottom - labelH) / 2;
			if (insets->bottom < edge) {
				borderH += insets->bottom;
			} else {
				labelY -= insets->bottom;
			}
			break;
		case TitledBorder::BELOW_BOTTOM:
			$nc(insets)->left = 0;
			insets->right = 0;
			labelY += height - labelH;
			borderH -= labelH - edge;
			break;
		}
		$nc(insets)->left += edge + TitledBorder::TEXT_INSET_H;
		insets->right += edge + TitledBorder::TEXT_INSET_H;
		int32_t labelX = x;
		int32_t labelW = width - insets->left - insets->right;
		if (labelW > size->width) {
			labelW = size->width;
		}
		switch (getJustification(c)) {
		case TitledBorder::LEFT:
			labelX += insets->left;
			break;
		case TitledBorder::RIGHT:
			labelX += width - insets->right - labelW;
			break;
		case TitledBorder::CENTER:
			labelX += (width - labelW) / 2;
			break;
		}
		if (border != nullptr) {
			if ((position != TitledBorder::TOP) && (position != TitledBorder::BOTTOM)) {
				border->paintBorder(c, g, borderX, borderY, borderW, borderH);
			} else {
				$var($Graphics, g2, $nc(g)->create());
				if ($instanceOf($Graphics2D, g2)) {
					$var($Graphics2D, g2d, $cast($Graphics2D, g2));
					$var($Path2D, path, $new($Path2D$Float));
					path->append($$new($Rectangle, borderX, borderY, borderW, labelY - borderY), false);
					path->append($$new($Rectangle, borderX, labelY, labelX - borderX - TitledBorder::TEXT_SPACING, labelH), false);
					path->append($$new($Rectangle, labelX + labelW + TitledBorder::TEXT_SPACING, labelY, borderX - labelX + borderW - labelW - TitledBorder::TEXT_SPACING, labelH), false);
					path->append($$new($Rectangle, borderX, labelY + labelH, borderW, borderY - labelY + borderH - labelH), false);
					g2d->clip(path);
				}
				border->paintBorder(c, g2, borderX, borderY, borderW, borderH);
				$nc(g2)->dispose();
			}
		}
		$nc(g)->translate(labelX, labelY);
		label->setSize(labelW, labelH);
		label->paint(g);
		g->translate(-labelX, -labelY);
	} else if (border != nullptr) {
		border->paintBorder(c, g, x, y, width, height);
	}
}

$Insets* TitledBorder::getBorderInsets($Component* c, $Insets* insets$renamed) {
	$useLocalObjectStack();
	$var($Insets, insets, insets$renamed);
	$var($Border, border, getBorder());
	$assign(insets, getBorderInsets(border, c, insets));
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		int32_t edge = ($instanceOf(TitledBorder, border)) ? 0 : TitledBorder::EDGE_SPACING;
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		switch (getPosition()) {
		case TitledBorder::ABOVE_TOP:
			$nc(insets)->top += $nc(size)->height - edge;
			break;
		case TitledBorder::TOP:
			{
				if ($nc(insets)->top < $nc(size)->height) {
					insets->top = size->height - edge;
				}
				break;
			}
		case TitledBorder::BELOW_TOP:
			$nc(insets)->top += $nc(size)->height;
			break;
		case TitledBorder::ABOVE_BOTTOM:
			$nc(insets)->bottom += $nc(size)->height;
			break;
		case TitledBorder::BOTTOM:
			{
				if ($nc(insets)->bottom < $nc(size)->height) {
					insets->bottom = size->height - edge;
				}
				break;
			}
		case TitledBorder::BELOW_BOTTOM:
			$nc(insets)->bottom += $nc(size)->height - edge;
			break;
		}
		$nc(insets)->top += edge + TitledBorder::TEXT_SPACING;
		insets->left += edge + TitledBorder::TEXT_SPACING;
		insets->right += edge + TitledBorder::TEXT_SPACING;
		insets->bottom += edge + TitledBorder::TEXT_SPACING;
	}
	return insets;
}

bool TitledBorder::isBorderOpaque() {
	return false;
}

$String* TitledBorder::getTitle() {
	return this->title;
}

$Border* TitledBorder::getBorder() {
	return this->border != nullptr ? this->border : $UIManager::getBorder("TitledBorder.border"_s);
}

int32_t TitledBorder::getTitlePosition() {
	return this->titlePosition;
}

int32_t TitledBorder::getTitleJustification() {
	return this->titleJustification;
}

$Font* TitledBorder::getTitleFont() {
	return this->titleFont == nullptr ? $UIManager::getFont("TitledBorder.font"_s) : this->titleFont;
}

$Color* TitledBorder::getTitleColor() {
	return this->titleColor == nullptr ? $UIManager::getColor("TitledBorder.titleColor"_s) : this->titleColor;
}

void TitledBorder::setTitle($String* title) {
	$set(this, title, title);
}

void TitledBorder::setBorder($Border* border) {
	$set(this, border, border);
}

void TitledBorder::setTitlePosition(int32_t titlePosition) {
	$useLocalObjectStack();
	switch (titlePosition) {
	case TitledBorder::ABOVE_TOP:
	case TitledBorder::TOP:
	case TitledBorder::BELOW_TOP:
	case TitledBorder::ABOVE_BOTTOM:
	case TitledBorder::BOTTOM:
	case TitledBorder::BELOW_BOTTOM:
	case TitledBorder::DEFAULT_POSITION:
		this->titlePosition = titlePosition;
		break;
	default:
		$throwNew($IllegalArgumentException, $$str({$$str(titlePosition), " is not a valid title position."_s}));
	}
}

void TitledBorder::setTitleJustification(int32_t titleJustification) {
	$useLocalObjectStack();
	switch (titleJustification) {
	case TitledBorder::DEFAULT_JUSTIFICATION:
	case TitledBorder::LEFT:
	case TitledBorder::CENTER:
	case TitledBorder::RIGHT:
	case TitledBorder::LEADING:
	case TitledBorder::TRAILING:
		this->titleJustification = titleJustification;
		break;
	default:
		$throwNew($IllegalArgumentException, $$str({$$str(titleJustification), " is not a valid title justification."_s}));
	}
}

void TitledBorder::setTitleFont($Font* titleFont) {
	$set(this, titleFont, titleFont);
}

void TitledBorder::setTitleColor($Color* titleColor) {
	$set(this, titleColor, titleColor);
}

$Dimension* TitledBorder::getMinimumSize($Component* c) {
	$useLocalObjectStack();
	$var($Insets, insets, getBorderInsets(c));
	$var($Dimension, minSize, $new($Dimension, $nc(insets)->right + $nc(insets)->left, $nc(insets)->top + $nc(insets)->bottom));
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		int32_t position = getPosition();
		if ((position != TitledBorder::ABOVE_TOP) && (position != TitledBorder::BELOW_BOTTOM)) {
			minSize->width += $nc(size)->width;
		} else if (minSize->width < $nc(size)->width) {
			minSize->width += size->width;
		}
	}
	return minSize;
}

int32_t TitledBorder::getBaseline($Component* c, int32_t width, int32_t height) {
	$useLocalObjectStack();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Must supply non-null component"_s);
	}
	if (width < 0) {
		$throwNew($IllegalArgumentException, "Width must be >= 0"_s);
	}
	if (height < 0) {
		$throwNew($IllegalArgumentException, "Height must be >= 0"_s);
	}
	$var($Border, border, getBorder());
	$var($String, title, getTitle());
	if ((title != nullptr) && !title->isEmpty()) {
		int32_t edge = ($instanceOf(TitledBorder, border)) ? 0 : TitledBorder::EDGE_SPACING;
		$var($JLabel, label, getLabel(c));
		$var($Dimension, size, $nc(label)->getPreferredSize());
		$var($Insets, insets, getBorderInsets(border, c, $$new($Insets, 0, 0, 0, 0)));
		int32_t baseline = label->getBaseline($nc(size)->width, $nc(size)->height);
		switch (getPosition()) {
		case TitledBorder::ABOVE_TOP:
			return baseline;
		case TitledBorder::TOP:
			$nc(insets)->top = edge + ($nc(insets)->top - size->height) / 2;
			return (insets->top < edge) ? baseline : baseline + insets->top;
		case TitledBorder::BELOW_TOP:
			return baseline + $nc(insets)->top + edge;
		case TitledBorder::ABOVE_BOTTOM:
			return baseline + height - size->height - $nc(insets)->bottom - edge;
		case TitledBorder::BOTTOM:
			$nc(insets)->bottom = edge + ($nc(insets)->bottom - size->height) / 2;
			return (insets->bottom < edge) ? baseline + height - size->height : baseline + height - size->height + insets->bottom;
		case TitledBorder::BELOW_BOTTOM:
			return baseline + height - size->height;
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* TitledBorder::getBaselineResizeBehavior($Component* c) {
	$AbstractBorder::getBaselineResizeBehavior(c);
	switch (getPosition()) {
	case TitledBorder::ABOVE_TOP:
	case TitledBorder::TOP:
	case TitledBorder::BELOW_TOP:
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
	case TitledBorder::ABOVE_BOTTOM:
	case TitledBorder::BOTTOM:
	case TitledBorder::BELOW_BOTTOM:
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

int32_t TitledBorder::getPosition() {
	$useLocalObjectStack();
	int32_t position = getTitlePosition();
	if (position != TitledBorder::DEFAULT_POSITION) {
		return position;
	}
	$var($Object, value, $UIManager::get("TitledBorder.position"_s));
	if ($instanceOf($Integer, value)) {
		int32_t i = $cast($Integer, value)->intValue();
		if ((0 < i) && (i <= 6)) {
			return i;
		}
	} else if ($instanceOf($String, value)) {
		$var($String, s, $cast($String, value));
		if (s->equalsIgnoreCase("ABOVE_TOP"_s)) {
			return TitledBorder::ABOVE_TOP;
		}
		if (s->equalsIgnoreCase("TOP"_s)) {
			return TitledBorder::TOP;
		}
		if (s->equalsIgnoreCase("BELOW_TOP"_s)) {
			return TitledBorder::BELOW_TOP;
		}
		if (s->equalsIgnoreCase("ABOVE_BOTTOM"_s)) {
			return TitledBorder::ABOVE_BOTTOM;
		}
		if (s->equalsIgnoreCase("BOTTOM"_s)) {
			return TitledBorder::BOTTOM;
		}
		if (s->equalsIgnoreCase("BELOW_BOTTOM"_s)) {
			return TitledBorder::BELOW_BOTTOM;
		}
	}
	return TitledBorder::TOP;
}

int32_t TitledBorder::getJustification($Component* c) {
	$useLocalObjectStack();
	int32_t justification = getTitleJustification();
	if ((justification == TitledBorder::LEADING) || (justification == TitledBorder::DEFAULT_JUSTIFICATION)) {
		return $$nc($nc(c)->getComponentOrientation())->isLeftToRight() ? TitledBorder::LEFT : TitledBorder::RIGHT;
	}
	if (justification == TitledBorder::TRAILING) {
		return $$nc($nc(c)->getComponentOrientation())->isLeftToRight() ? TitledBorder::RIGHT : TitledBorder::LEFT;
	}
	return justification;
}

$Font* TitledBorder::getFont($Component* c) {
	$var($Font, font, getTitleFont());
	if (font != nullptr) {
		return font;
	}
	if (c != nullptr) {
		$assign(font, c->getFont());
		if (font != nullptr) {
			return font;
		}
	}
	$init($Font);
	return $new($Font, $Font::DIALOG, $Font::PLAIN, 12);
}

$Color* TitledBorder::getColor($Component* c) {
	$var($Color, color, getTitleColor());
	if (color != nullptr) {
		return color;
	}
	return (c != nullptr) ? c->getForeground() : ($Color*)nullptr;
}

$JLabel* TitledBorder::getLabel($Component* c) {
	$useLocalObjectStack();
	$nc(this->label)->setText($(getTitle()));
	this->label->setFont($(getFont(c)));
	this->label->setForeground($(getColor(c)));
	this->label->setComponentOrientation($($nc(c)->getComponentOrientation()));
	this->label->setEnabled(c->isEnabled());
	return this->label;
}

$Insets* TitledBorder::getBorderInsets($Border* border, $Component* c, $Insets* insets$renamed) {
	$init(TitledBorder);
	$useLocalObjectStack();
	$var($Insets, insets, insets$renamed);
	if (border == nullptr) {
		$nc(insets)->set(0, 0, 0, 0);
	} else if ($instanceOf($AbstractBorder, border)) {
		$var($AbstractBorder, ab, $cast($AbstractBorder, border));
		$assign(insets, ab->getBorderInsets(c, insets));
	} else {
		$var($Insets, i, border->getBorderInsets(c));
		$nc(insets)->set($nc(i)->top, $nc(i)->left, $nc(i)->bottom, $nc(i)->right);
	}
	return insets;
}

void TitledBorder::installPropertyChangeListeners() {
	$useLocalObjectStack();
	$var($WeakReference, weakReference, $new($WeakReference, this));
	$var($PropertyChangeListener, listener, $new(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0, weakReference));
	$UIManager::addPropertyChangeListener(listener);
	$$nc($UIManager::getDefaults())->addPropertyChangeListener(listener);
	$$nc($CleanerFactory::cleaner())->register$(this, $$new(TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1, listener));
}

void TitledBorder::lambda$installPropertyChangeListeners$1($PropertyChangeListener* listener) {
	$init(TitledBorder);
	$UIManager::removePropertyChangeListener(listener);
	$$nc($UIManager::getDefaults())->removePropertyChangeListener(listener);
}

void TitledBorder::lambda$installPropertyChangeListeners$0($WeakReference* weakReference, $PropertyChangeEvent* evt) {
	$init(TitledBorder);
	$useLocalObjectStack();
	$var(TitledBorder, tb, $cast(TitledBorder, $nc(weakReference)->get()));
	$var($String, prop, $nc(evt)->getPropertyName());
	bool var$0 = tb != nullptr;
	if (var$0) {
		bool var$1 = "lookAndFeel"_s->equals(prop);
		var$0 = var$1 || "LabelUI"_s->equals(prop);
	}
	if (var$0) {
		$nc($nc(tb)->label)->updateUI();
	}
}

TitledBorder::TitledBorder() {
}

$Class* TitledBorder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.border.TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0")) {
			return TitledBorder$$Lambda$lambda$installPropertyChangeListeners$0::load$(name, initialize);
		}
		if (name->equals("javax.swing.border.TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1")) {
			return TitledBorder$$Lambda$lambda$installPropertyChangeListeners$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"title", "Ljava/lang/String;", nullptr, $PROTECTED, $field(TitledBorder, title)},
		{"border", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(TitledBorder, border)},
		{"titlePosition", "I", nullptr, $PROTECTED, $field(TitledBorder, titlePosition)},
		{"titleJustification", "I", nullptr, $PROTECTED, $field(TitledBorder, titleJustification)},
		{"titleFont", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(TitledBorder, titleFont)},
		{"titleColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(TitledBorder, titleColor)},
		{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $FINAL, $field(TitledBorder, label)},
		{"DEFAULT_POSITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, DEFAULT_POSITION)},
		{"ABOVE_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, ABOVE_TOP)},
		{"TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, TOP)},
		{"BELOW_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, BELOW_TOP)},
		{"ABOVE_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, ABOVE_BOTTOM)},
		{"BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, BOTTOM)},
		{"BELOW_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, BELOW_BOTTOM)},
		{"DEFAULT_JUSTIFICATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, DEFAULT_JUSTIFICATION)},
		{"LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, LEFT)},
		{"CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, CENTER)},
		{"RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, RIGHT)},
		{"LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, LEADING)},
		{"TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TitledBorder, TRAILING)},
		{"EDGE_SPACING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TitledBorder, EDGE_SPACING)},
		{"TEXT_SPACING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TitledBorder, TEXT_SPACING)},
		{"TEXT_INSET_H", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TitledBorder, TEXT_INSET_H)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "border"},
		{'s', "title"},
		{'s', "titleJustification"},
		{'s', "titlePosition"},
		{'s', "titleFont"},
		{'s', "titleColor"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$5$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$5[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$5$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $Border*)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $Border*, $String*)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $Border*, $String*, int32_t, int32_t)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $Border*, $String*, int32_t, int32_t, $Font*)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $Border*, $String*, int32_t, int32_t, $Font*, $Color*), nullptr, nullptr, init$methodAnnotations$$$5},
		{"getBaseline", "(Ljava/awt/Component;II)I", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getBaseline, int32_t, $Component*, int32_t, int32_t)},
		{"getBaselineResizeBehavior", "(Ljava/awt/Component;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getBaselineResizeBehavior, $Component$BaselineResizeBehavior*, $Component*)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getBorder, $Border*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"getBorderInsets", "(Ljavax/swing/border/Border;Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticMethod(TitledBorder, getBorderInsets, $Insets*, $Border*, $Component*, $Insets*)},
		{"getColor", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PRIVATE, $method(TitledBorder, getColor, $Color*, $Component*)},
		{"getFont", "(Ljava/awt/Component;)Ljava/awt/Font;", nullptr, $PROTECTED, $virtualMethod(TitledBorder, getFont, $Font*, $Component*)},
		{"getJustification", "(Ljava/awt/Component;)I", nullptr, $PRIVATE, $method(TitledBorder, getJustification, int32_t, $Component*)},
		{"getLabel", "(Ljava/awt/Component;)Ljavax/swing/JLabel;", nullptr, $PRIVATE, $method(TitledBorder, getLabel, $JLabel*, $Component*)},
		{"getMinimumSize", "(Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getMinimumSize, $Dimension*, $Component*)},
		{"getPosition", "()I", nullptr, $PRIVATE, $method(TitledBorder, getPosition, int32_t)},
		{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getTitle, $String*)},
		{"getTitleColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getTitleColor, $Color*)},
		{"getTitleFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getTitleFont, $Font*)},
		{"getTitleJustification", "()I", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getTitleJustification, int32_t)},
		{"getTitlePosition", "()I", nullptr, $PUBLIC, $virtualMethod(TitledBorder, getTitlePosition, int32_t)},
		{"installPropertyChangeListeners", "()V", nullptr, $PRIVATE, $method(TitledBorder, installPropertyChangeListeners, void)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(TitledBorder, isBorderOpaque, bool)},
		{"lambda$installPropertyChangeListeners$0", "(Ljava/lang/ref/WeakReference;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TitledBorder, lambda$installPropertyChangeListeners$0, void, $WeakReference*, $PropertyChangeEvent*)},
		{"lambda$installPropertyChangeListeners$1", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TitledBorder, lambda$installPropertyChangeListeners$1, void, $PropertyChangeListener*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, setBorder, void, $Border*)},
		{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, setTitle, void, $String*)},
		{"setTitleColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, setTitleColor, void, $Color*)},
		{"setTitleFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, setTitleFont, void, $Font*)},
		{"setTitleJustification", "(I)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, setTitleJustification, void, int32_t)},
		{"setTitlePosition", "(I)V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, setTitlePosition, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.border.TitledBorder",
		"javax.swing.border.AbstractBorder",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TitledBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TitledBorder));
	});
	return class$;
}

$Class* TitledBorder::class$ = nullptr;

		} // border
	} // swing
} // javax