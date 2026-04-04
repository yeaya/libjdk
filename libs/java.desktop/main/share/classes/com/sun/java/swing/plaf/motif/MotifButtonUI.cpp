#include <com/sun/java/swing/plaf/motif/MotifButtonUI.h>
#include <com/sun/java/swing/plaf/motif/MotifButtonListener.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef FALSE
#undef MOTIF_BUTTON_UI_KEY

using $MotifButtonListener = ::com::sun::java::swing::plaf::motif::MotifButtonListener;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$Object* MotifButtonUI::MOTIF_BUTTON_UI_KEY = nullptr;

void MotifButtonUI::init$() {
	$BasicButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MotifButtonUI::createUI($JComponent* c) {
	$init(MotifButtonUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifButtonUI, motifButtonUI, $cast(MotifButtonUI, $nc(appContext)->get(MotifButtonUI::MOTIF_BUTTON_UI_KEY)));
	if (motifButtonUI == nullptr) {
		$assign(motifButtonUI, $new(MotifButtonUI));
		appContext->put(MotifButtonUI::MOTIF_BUTTON_UI_KEY, motifButtonUI);
	}
	return motifButtonUI;
}

$BasicButtonListener* MotifButtonUI::createButtonListener($AbstractButton* b) {
	return $new($MotifButtonListener, b);
}

void MotifButtonUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$BasicButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
		this->defaults_initialized = true;
	}
	$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::FALSE);
}

void MotifButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MotifButtonUI::getSelectColor() {
	return this->selectColor;
}

void MotifButtonUI::paint($Graphics* g, $JComponent* c) {
	fillContentArea(g, $cast($AbstractButton, c), $($nc(c)->getBackground()));
	$BasicButtonUI::paint(g, c);
}

void MotifButtonUI::paintIcon($Graphics* g, $JComponent* c, $Rectangle* iconRect) {
	$useLocalObjectStack();
	$var($Shape, oldClip, $nc(g)->getClip());
	$var($Border, var$0, $nc(c)->getBorder());
	int32_t var$1 = c->getWidth();
	$var($Rectangle, newClip, $AbstractBorder::getInteriorRectangle(c, var$0, 0, 0, var$1, c->getHeight()));
	$var($Rectangle, r, $nc(oldClip)->getBounds());
	$assign(newClip, $SwingUtilities::computeIntersection($nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height, newClip));
	g->setClip(newClip);
	$BasicButtonUI::paintIcon(g, c, iconRect);
	g->setClip(oldClip);
}

void MotifButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
}

void MotifButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	fillContentArea(g, b, this->selectColor);
}

void MotifButtonUI::fillContentArea($Graphics* g, $AbstractButton* b, $Color* fillColor) {
	$useLocalObjectStack();
	if ($nc(b)->isContentAreaFilled()) {
		$var($Insets, margin, b->getMargin());
		$var($Insets, insets, b->getInsets());
		$var($Dimension, size, b->getSize());
		$nc(g)->setColor(fillColor);
		g->fillRect($nc(insets)->left - $nc(margin)->left, $nc(insets)->top - $nc(margin)->top, $nc(size)->width - ($nc(insets)->left - $nc(margin)->left) - ($nc(insets)->right - $nc(margin)->right), $nc(size)->height - ($nc(insets)->top - $nc(margin)->top) - ($nc(insets)->bottom - $nc(margin)->bottom));
	}
}

void MotifButtonUI::clinit$($Class* clazz) {
	$assignStatic(MotifButtonUI::MOTIF_BUTTON_UI_KEY, $new($Object));
}

MotifButtonUI::MotifButtonUI() {
}

$Class* MotifButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifButtonUI, selectColor)},
		{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MotifButtonUI, defaults_initialized)},
		{"MOTIF_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifButtonUI, MOTIF_BUTTON_UI_KEY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifButtonUI, init$, void)},
		{"createButtonListener", "(Ljavax/swing/AbstractButton;)Ljavax/swing/plaf/basic/BasicButtonListener;", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, createButtonListener, $BasicButtonListener*, $AbstractButton*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"fillContentArea", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Color;)V", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, fillContentArea, void, $Graphics*, $AbstractButton*, $Color*)},
		{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, getSelectColor, $Color*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $virtualMethod(MotifButtonUI, installDefaults, void, $AbstractButton*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MotifButtonUI, paint, void, $Graphics*, $JComponent*)},
		{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, paintButtonPressed, void, $Graphics*, $AbstractButton*)},
		{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, paintFocus, void, $Graphics*, $AbstractButton*, $Rectangle*, $Rectangle*, $Rectangle*)},
		{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, paintIcon, void, $Graphics*, $JComponent*, $Rectangle*)},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MotifButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifButtonUI",
		"javax.swing.plaf.basic.BasicButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MotifButtonUI, name, initialize, &classInfo$$, MotifButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MotifButtonUI);
	});
	return class$;
}

$Class* MotifButtonUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com