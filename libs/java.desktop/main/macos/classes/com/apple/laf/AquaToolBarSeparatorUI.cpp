#include <com/apple/laf/AquaToolBarSeparatorUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicToolBarSeparatorUI.h>
#include <jcpp.h>

#undef CAP_BUTT
#undef HORIZONTAL
#undef JOIN_BEVEL
#undef MAX_VALUE

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $BasicStroke = ::java::awt::BasicStroke;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicToolBarSeparatorUI = ::javax::swing::plaf::basic::BasicToolBarSeparatorUI;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaToolBarSeparatorUI::instance = nullptr;

$ComponentUI* AquaToolBarSeparatorUI::createUI($JComponent* c) {
	$init(AquaToolBarSeparatorUI);
	return $cast($ComponentUI, AquaToolBarSeparatorUI::instance->get());
}

void AquaToolBarSeparatorUI::init$() {
	$BasicToolBarSeparatorUI::init$();
	$set(this, dashedStroke, $new($BasicStroke, 1.0f, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_BEVEL, 0.0f, $$new($floats, {
		1.0f,
		2.0f
	}), 0.0f));
}

void AquaToolBarSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$nc(g)->setColor($($nc(c)->getForeground()));
	$cast($Graphics2D, g)->setStroke(this->dashedStroke);
	int32_t width = c->getWidth();
	int32_t height = c->getHeight();
	if ($cast($JToolBar$Separator, c)->getOrientation() == $SwingConstants::HORIZONTAL) {
		g->drawLine(2, height / 2, width - 3, height / 2);
	} else {
		g->drawLine(width / 2, 2, width / 2, height - 3);
	}
}

$Dimension* AquaToolBarSeparatorUI::getMinimumSize($JComponent* c) {
	$var($JToolBar$Separator, sep, $cast($JToolBar$Separator, c));
	if ($nc(sep)->getOrientation() == $SwingConstants::HORIZONTAL) {
		return $new($Dimension, 1, 11);
	}
	return $new($Dimension, 11, 1);
}

$Dimension* AquaToolBarSeparatorUI::getPreferredSize($JComponent* c) {
	$var($JToolBar$Separator, sep, $cast($JToolBar$Separator, c));
	if ($nc(sep)->getOrientation() == $SwingConstants::HORIZONTAL) {
		return $new($Dimension, 1, 11);
	}
	return $new($Dimension, 11, 1);
}

$Dimension* AquaToolBarSeparatorUI::getMaximumSize($JComponent* c) {
	$var($JToolBar$Separator, sep, $cast($JToolBar$Separator, c));
	if ($nc(sep)->getOrientation() == $SwingConstants::HORIZONTAL) {
		return $new($Dimension, $Integer::MAX_VALUE, 11);
	}
	return $new($Dimension, 11, $Integer::MAX_VALUE);
}

void AquaToolBarSeparatorUI::clinit$($Class* clazz) {
	$assignStatic(AquaToolBarSeparatorUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaToolBarSeparatorUI::class$));
}

AquaToolBarSeparatorUI::AquaToolBarSeparatorUI() {
}

$Class* AquaToolBarSeparatorUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaToolBarSeparatorUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaToolBarSeparatorUI, instance)},
		{"dashedStroke", "Ljava/awt/BasicStroke;", nullptr, 0, $field(AquaToolBarSeparatorUI, dashedStroke)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaToolBarSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaToolBarSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaToolBarSeparatorUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaToolBarSeparatorUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaToolBarSeparatorUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaToolBarSeparatorUI, paint, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaToolBarSeparatorUI",
		"javax.swing.plaf.basic.BasicToolBarSeparatorUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaToolBarSeparatorUI, name, initialize, &classInfo$$, AquaToolBarSeparatorUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaToolBarSeparatorUI);
	});
	return class$;
}

$Class* AquaToolBarSeparatorUI::class$ = nullptr;

		} // laf
	} // apple
} // com