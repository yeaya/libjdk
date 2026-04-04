#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolTipUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToolTipUI$PropertyChangeHandler.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef TRUE
#undef X_AXIS
#undef Y_AXIS

using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolTipUI = ::javax::swing::plaf::ToolTipUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToolTipUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicToolTipUI$PropertyChangeHandler;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

BasicToolTipUI* BasicToolTipUI::sharedInstance = nullptr;
$PropertyChangeListener* BasicToolTipUI::sharedPropertyChangedListener = nullptr;

$ComponentUI* BasicToolTipUI::createUI($JComponent* c) {
	$init(BasicToolTipUI);
	return BasicToolTipUI::sharedInstance;
}

void BasicToolTipUI::init$() {
	$ToolTipUI::init$();
}

void BasicToolTipUI::installUI($JComponent* c) {
	installDefaults(c);
	installComponents(c);
	installListeners(c);
}

void BasicToolTipUI::uninstallUI($JComponent* c) {
	uninstallDefaults(c);
	uninstallComponents(c);
	uninstallListeners(c);
}

void BasicToolTipUI::installDefaults($JComponent* c) {
	$LookAndFeel::installColorsAndFont(c, "ToolTip.background"_s, "ToolTip.foreground"_s, "ToolTip.font"_s);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::TRUE);
	componentChanged(c);
}

void BasicToolTipUI::uninstallDefaults($JComponent* c) {
	$LookAndFeel::uninstallBorder(c);
}

void BasicToolTipUI::installComponents($JComponent* c) {
	$BasicHTML::updateRenderer(c, $($nc($cast($JToolTip, c))->getTipText()));
}

void BasicToolTipUI::uninstallComponents($JComponent* c) {
	$BasicHTML::updateRenderer(c, ""_s);
}

void BasicToolTipUI::installListeners($JComponent* c) {
	$set(this, propertyChangeListener, createPropertyChangeListener(c));
	$nc(c)->addPropertyChangeListener(this->propertyChangeListener);
}

void BasicToolTipUI::uninstallListeners($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->propertyChangeListener);
	$set(this, propertyChangeListener, nullptr);
}

$PropertyChangeListener* BasicToolTipUI::createPropertyChangeListener($JComponent* c) {
	if (BasicToolTipUI::sharedPropertyChangedListener == nullptr) {
		$assignStatic(BasicToolTipUI::sharedPropertyChangedListener, $new($BasicToolTipUI$PropertyChangeHandler));
	}
	return BasicToolTipUI::sharedPropertyChangedListener;
}

void BasicToolTipUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($Font, font, $nc(c)->getFont());
	$var($FontMetrics, metrics, $SwingUtilities2::getFontMetrics(c, g, font));
	$var($Dimension, size, c->getSize());
	$nc(g)->setColor($(c->getForeground()));
	$var($String, tipText, $cast($JToolTip, c)->getTipText());
	if (tipText == nullptr) {
		$assign(tipText, ""_s);
	}
	$var($Insets, insets, c->getInsets());
	$var($Rectangle, paintTextR, $new($Rectangle, $nc(insets)->left + 3, $nc(insets)->top, $nc(size)->width - ($nc(insets)->left + $nc(insets)->right) - 6, $nc(size)->height - ($nc(insets)->top + $nc(insets)->bottom)));
	$init($BasicHTML);
	$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		v->paint(g, paintTextR);
	} else {
		g->setFont(font);
		$SwingUtilities2::drawString(c, g, tipText, paintTextR->x, paintTextR->y + $nc(metrics)->getAscent());
	}
}

$Dimension* BasicToolTipUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Font, font, $nc(c)->getFont());
	$var($FontMetrics, fm, c->getFontMetrics(font));
	$var($Insets, insets, c->getInsets());
	$var($Dimension, prefSize, $new($Dimension, $nc(insets)->left + $nc(insets)->right, $nc(insets)->top + $nc(insets)->bottom));
	$var($String, text, $cast($JToolTip, c)->getTipText());
	if (text == nullptr) {
		$assign(text, ""_s);
	} else {
		$var($View, v, (c != nullptr) ? $cast($View, c->getClientProperty("html"_s)) : ($View*)nullptr);
		if (v != nullptr) {
			prefSize->width += $cast(int32_t, v->getPreferredSpan($View::X_AXIS)) + 6;
			prefSize->height += $cast(int32_t, v->getPreferredSpan($View::Y_AXIS));
		} else {
			prefSize->width += $SwingUtilities2::stringWidth(c, fm, text) + 6;
			prefSize->height += $nc(fm)->getHeight();
		}
	}
	return prefSize;
}

$Dimension* BasicToolTipUI::getMinimumSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(d)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* BasicToolTipUI::getMaximumSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(d)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return d;
}

void BasicToolTipUI::componentChanged($JComponent* c) {
	$var($JComponent, comp, $nc($cast($JToolTip, c))->getComponent());
	if (comp != nullptr && !(comp->isEnabled())) {
		if ($UIManager::getBorder("ToolTip.borderInactive"_s) != nullptr) {
			$LookAndFeel::installBorder(c, "ToolTip.borderInactive"_s);
		} else {
			$LookAndFeel::installBorder(c, "ToolTip.border"_s);
		}
		if ($UIManager::getColor("ToolTip.backgroundInactive"_s) != nullptr) {
			$LookAndFeel::installColors(c, "ToolTip.backgroundInactive"_s, "ToolTip.foregroundInactive"_s);
		} else {
			$LookAndFeel::installColors(c, "ToolTip.background"_s, "ToolTip.foreground"_s);
		}
	} else {
		$LookAndFeel::installBorder(c, "ToolTip.border"_s);
		$LookAndFeel::installColors(c, "ToolTip.background"_s, "ToolTip.foreground"_s);
	}
}

void BasicToolTipUI::clinit$($Class* clazz) {
	$assignStatic(BasicToolTipUI::sharedInstance, $new(BasicToolTipUI));
}

BasicToolTipUI::BasicToolTipUI() {
}

$Class* BasicToolTipUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sharedInstance", "Ljavax/swing/plaf/basic/BasicToolTipUI;", nullptr, $STATIC, $staticField(BasicToolTipUI, sharedInstance)},
		{"sharedPropertyChangedListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolTipUI, sharedPropertyChangedListener)},
		{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicToolTipUI, propertyChangeListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicToolTipUI, init$, void)},
		{"componentChanged", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(BasicToolTipUI, componentChanged, void, $JComponent*)},
		{"createPropertyChangeListener", "(Ljavax/swing/JComponent;)Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(BasicToolTipUI, createPropertyChangeListener, $PropertyChangeListener*, $JComponent*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicToolTipUI, createUI, $ComponentUI*, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installComponents", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(BasicToolTipUI, installComponents, void, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(BasicToolTipUI, installDefaults, void, $JComponent*)},
		{"installListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(BasicToolTipUI, installListeners, void, $JComponent*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI, installUI, void, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI, paint, void, $Graphics*, $JComponent*)},
		{"uninstallComponents", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(BasicToolTipUI, uninstallComponents, void, $JComponent*)},
		{"uninstallDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(BasicToolTipUI, uninstallDefaults, void, $JComponent*)},
		{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(BasicToolTipUI, uninstallListeners, void, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI, uninstallUI, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicToolTipUI", "PropertyChangeHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolTipUI",
		"javax.swing.plaf.ToolTipUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler"
	};
	$loadClass(BasicToolTipUI, name, initialize, &classInfo$$, BasicToolTipUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToolTipUI);
	});
	return class$;
}

$Class* BasicToolTipUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax