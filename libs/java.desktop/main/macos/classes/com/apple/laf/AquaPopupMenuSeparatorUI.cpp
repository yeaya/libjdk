#include <com/apple/laf/AquaPopupMenuSeparatorUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef VERTICAL

using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaPopupMenuSeparatorUI::instance = nullptr;

void AquaPopupMenuSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* AquaPopupMenuSeparatorUI::createUI($JComponent* c) {
	$init(AquaPopupMenuSeparatorUI);
	return $cast($ComponentUI, AquaPopupMenuSeparatorUI::instance->get());
}

void AquaPopupMenuSeparatorUI::update($Graphics* g, $JComponent* c) {
	paint(g, c);
}

void AquaPopupMenuSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, s, $nc(c)->getSize());
	if ($cast($JSeparator, c)->getOrientation() == $SwingConstants::VERTICAL) {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(5, 1, 5, $nc(s)->height - 2);
		g->setColor($(c->getBackground()));
		g->drawLine(6, 1, 6, s->height - 2);
	} else {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(1, 5, $nc(s)->width - 2, 5);
		g->setColor($(c->getBackground()));
		g->drawLine(1, 6, s->width - 2, 6);
	}
}

$Dimension* AquaPopupMenuSeparatorUI::getPreferredSize($JComponent* c) {
	if ($nc($cast($JSeparator, c))->getOrientation() == $SwingConstants::VERTICAL) {
		return $new($Dimension, 12, 0);
	}
	return $new($Dimension, 0, 12);
}

void AquaPopupMenuSeparatorUI::clinit$($Class* clazz) {
	$assignStatic(AquaPopupMenuSeparatorUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaPopupMenuSeparatorUI::class$));
}

AquaPopupMenuSeparatorUI::AquaPopupMenuSeparatorUI() {
}

$Class* AquaPopupMenuSeparatorUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<Lcom/apple/laf/AquaPopupMenuSeparatorUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaPopupMenuSeparatorUI, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaPopupMenuSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaPopupMenuSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaPopupMenuSeparatorUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaPopupMenuSeparatorUI, paint, void, $Graphics*, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaPopupMenuSeparatorUI, update, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaPopupMenuSeparatorUI",
		"javax.swing.plaf.basic.BasicSeparatorUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaPopupMenuSeparatorUI, name, initialize, &classInfo$$, AquaPopupMenuSeparatorUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaPopupMenuSeparatorUI);
	});
	return class$;
}

$Class* AquaPopupMenuSeparatorUI::class$ = nullptr;

		} // laf
	} // apple
} // com