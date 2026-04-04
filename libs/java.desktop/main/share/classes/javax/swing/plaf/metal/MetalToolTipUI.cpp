#include <javax/swing/plaf/metal/MetalToolTipUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef WHEN_IN_FOCUSED_WINDOW

using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToolTipUI = ::javax::swing::plaf::basic::BasicToolTipUI;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

MetalToolTipUI* MetalToolTipUI::sharedInstance = nullptr;

void MetalToolTipUI::init$() {
	$BasicToolTipUI::init$();
}

$ComponentUI* MetalToolTipUI::createUI($JComponent* c) {
	$init(MetalToolTipUI);
	return MetalToolTipUI::sharedInstance;
}

void MetalToolTipUI::installUI($JComponent* c) {
	$useLocalObjectStack();
	$BasicToolTipUI::installUI(c);
	$set(this, tip, $cast($JToolTip, c));
	$var($Font, f, $nc(c)->getFont());
	$var($String, var$0, $nc(f)->getName());
	int32_t var$1 = f->getStyle();
	$set(this, smallFont, $new($Font, var$0, var$1, f->getSize() - 2));
	$set(this, acceleratorDelimiter, $UIManager::getString("MenuItem.acceleratorDelimiter"_s));
	if (this->acceleratorDelimiter == nullptr) {
		$set(this, acceleratorDelimiter, "-"_s);
	}
}

void MetalToolTipUI::uninstallUI($JComponent* c) {
	$BasicToolTipUI::uninstallUI(c);
	$set(this, tip, nullptr);
}

void MetalToolTipUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($JToolTip, tip, $cast($JToolTip, c));
	$var($Font, font, $nc(c)->getFont());
	$var($FontMetrics, metrics, $SwingUtilities2::getFontMetrics(c, g, font));
	$var($Dimension, size, c->getSize());
	int32_t accelBL = 0;
	$nc(g)->setColor($(c->getForeground()));
	$var($String, tipText, $nc(tip)->getTipText());
	if (tipText == nullptr) {
		$assign(tipText, ""_s);
	}
	$var($String, accelString, getAcceleratorString(tip));
	$var($FontMetrics, accelMetrics, $SwingUtilities2::getFontMetrics(c, g, this->smallFont));
	int32_t accelSpacing = calcAccelSpacing(c, accelMetrics, accelString);
	$var($Insets, insets, tip->getInsets());
	$var($Rectangle, paintTextR, $new($Rectangle, $nc(insets)->left + 3, $nc(insets)->top, $nc(size)->width - ($nc(insets)->left + $nc(insets)->right) - 6 - accelSpacing, $nc(size)->height - ($nc(insets)->top + $nc(insets)->bottom)));
	if (paintTextR->width <= 0 || paintTextR->height <= 0) {
		return;
	}
	$init($BasicHTML);
	$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		v->paint(g, paintTextR);
		accelBL = $BasicHTML::getHTMLBaseline(v, paintTextR->width, paintTextR->height);
	} else {
		g->setFont(font);
		$SwingUtilities2::drawString(tip, g, tipText, paintTextR->x, paintTextR->y + $nc(metrics)->getAscent());
		accelBL = metrics->getAscent();
	}
	if (!$nc(accelString)->isEmpty()) {
		g->setFont(this->smallFont);
		g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
		$SwingUtilities2::drawString(tip, g, accelString, tip->getWidth() - 1 - insets->right - accelSpacing + MetalToolTipUI::padSpaceBetweenStrings - 3, paintTextR->y + accelBL);
	}
}

int32_t MetalToolTipUI::calcAccelSpacing($JComponent* c, $FontMetrics* fm, $String* accel) {
	return $nc(accel)->isEmpty() ? 0 : MetalToolTipUI::padSpaceBetweenStrings + $SwingUtilities2::stringWidth(c, fm, accel);
}

$Dimension* MetalToolTipUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, d, $BasicToolTipUI::getPreferredSize(c));
	$var($String, key, getAcceleratorString($cast($JToolTip, c)));
	if (!$nc(key)->isEmpty()) {
		$nc(d)->width += calcAccelSpacing(c, $($nc(c)->getFontMetrics(this->smallFont)), key);
	}
	return d;
}

bool MetalToolTipUI::isAcceleratorHidden() {
	$var($Boolean, b, $cast($Boolean, $UIManager::get("ToolTip.hideAccelerator"_s)));
	return b != nullptr && b->booleanValue();
}

$String* MetalToolTipUI::getAcceleratorString($JToolTip* tip) {
	$set(this, tip, tip);
	$var($String, retValue, getAcceleratorString());
	$set(this, tip, nullptr);
	return retValue;
}

$String* MetalToolTipUI::getAcceleratorString() {
	$useLocalObjectStack();
	if (this->tip == nullptr || isAcceleratorHidden()) {
		return ""_s;
	}
	$var($JComponent, comp, $nc(this->tip)->getComponent());
	if (!($instanceOf($AbstractButton, comp))) {
		return ""_s;
	}
	$var($KeyStrokeArray, keys, $$nc($nc(comp)->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW))->keys());
	if (keys == nullptr) {
		return ""_s;
	}
	$var($String, controlKeyStr, ""_s);
	for (int32_t i = 0; i < $nc(keys)->length; i++) {
		int32_t mod = $nc(keys->get(i))->getModifiers();
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($KeyEvent::getKeyModifiersText(mod)));
		var$0->append(this->acceleratorDelimiter);
		var$0->append($($KeyEvent::getKeyText($nc(keys->get(i))->getKeyCode())));
		$assign(controlKeyStr, $str(var$0));
		break;
	}
	return controlKeyStr;
}

void MetalToolTipUI::clinit$($Class* clazz) {
	$assignStatic(MetalToolTipUI::sharedInstance, $new(MetalToolTipUI));
}

MetalToolTipUI::MetalToolTipUI() {
}

$Class* MetalToolTipUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sharedInstance", "Ljavax/swing/plaf/metal/MetalToolTipUI;", nullptr, $STATIC, $staticField(MetalToolTipUI, sharedInstance)},
		{"smallFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(MetalToolTipUI, smallFont)},
		{"tip", "Ljavax/swing/JToolTip;", nullptr, $PRIVATE, $field(MetalToolTipUI, tip)},
		{"padSpaceBetweenStrings", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MetalToolTipUI, padSpaceBetweenStrings)},
		{"acceleratorDelimiter", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalToolTipUI, acceleratorDelimiter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalToolTipUI, init$, void)},
		{"calcAccelSpacing", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(MetalToolTipUI, calcAccelSpacing, int32_t, $JComponent*, $FontMetrics*, $String*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalToolTipUI, createUI, $ComponentUI*, $JComponent*)},
		{"getAcceleratorString", "(Ljavax/swing/JToolTip;)Ljava/lang/String;", nullptr, $PRIVATE, $method(MetalToolTipUI, getAcceleratorString, $String*, $JToolTip*)},
		{"getAcceleratorString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MetalToolTipUI, getAcceleratorString, $String*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalToolTipUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalToolTipUI, installUI, void, $JComponent*)},
		{"isAcceleratorHidden", "()Z", nullptr, $PROTECTED, $virtualMethod(MetalToolTipUI, isAcceleratorHidden, bool)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalToolTipUI, paint, void, $Graphics*, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalToolTipUI, uninstallUI, void, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalToolTipUI",
		"javax.swing.plaf.basic.BasicToolTipUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalToolTipUI, name, initialize, &classInfo$$, MetalToolTipUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalToolTipUI);
	});
	return class$;
}

$Class* MetalToolTipUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax