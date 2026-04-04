#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <jcpp.h>

#undef FALSE
#undef VERTICAL

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSeparatorUI::init$() {
	$SeparatorUI::init$();
}

$ComponentUI* BasicSeparatorUI::createUI($JComponent* c) {
	$init(BasicSeparatorUI);
	return $new(BasicSeparatorUI);
}

void BasicSeparatorUI::installUI($JComponent* c) {
	installDefaults($cast($JSeparator, c));
	installListeners($cast($JSeparator, c));
}

void BasicSeparatorUI::uninstallUI($JComponent* c) {
	uninstallDefaults($cast($JSeparator, c));
	uninstallListeners($cast($JSeparator, c));
}

void BasicSeparatorUI::installDefaults($JSeparator* s) {
	$LookAndFeel::installColors(s, "Separator.background"_s, "Separator.foreground"_s);
	$LookAndFeel::installProperty(s, "opaque"_s, $Boolean::FALSE);
}

void BasicSeparatorUI::uninstallDefaults($JSeparator* s) {
}

void BasicSeparatorUI::installListeners($JSeparator* s) {
}

void BasicSeparatorUI::uninstallListeners($JSeparator* s) {
}

void BasicSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, s, $nc(c)->getSize());
	if ($cast($JSeparator, c)->getOrientation() == $JSeparator::VERTICAL) {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(0, 0, 0, $nc(s)->height);
		g->setColor($(c->getBackground()));
		g->drawLine(1, 0, 1, s->height);
	} else {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(0, 0, $nc(s)->width, 0);
		g->setColor($(c->getBackground()));
		g->drawLine(0, 1, s->width, 1);
	}
}

$Dimension* BasicSeparatorUI::getPreferredSize($JComponent* c) {
	if ($nc($cast($JSeparator, c))->getOrientation() == $JSeparator::VERTICAL) {
		return $new($Dimension, 2, 0);
	} else {
		return $new($Dimension, 0, 2);
	}
}

$Dimension* BasicSeparatorUI::getMinimumSize($JComponent* c) {
	return nullptr;
}

$Dimension* BasicSeparatorUI::getMaximumSize($JComponent* c) {
	return nullptr;
}

BasicSeparatorUI::BasicSeparatorUI() {
}

$Class* BasicSeparatorUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicSeparatorUI, shadow)},
		{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicSeparatorUI, highlight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicSeparatorUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicSeparatorUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicSeparatorUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $virtualMethod(BasicSeparatorUI, installDefaults, void, $JSeparator*)},
		{"installListeners", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $virtualMethod(BasicSeparatorUI, installListeners, void, $JSeparator*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSeparatorUI, installUI, void, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSeparatorUI, paint, void, $Graphics*, $JComponent*)},
		{"uninstallDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $virtualMethod(BasicSeparatorUI, uninstallDefaults, void, $JSeparator*)},
		{"uninstallListeners", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $virtualMethod(BasicSeparatorUI, uninstallListeners, void, $JSeparator*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSeparatorUI, uninstallUI, void, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSeparatorUI",
		"javax.swing.plaf.SeparatorUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicSeparatorUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSeparatorUI);
	});
	return class$;
}

$Class* BasicSeparatorUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax