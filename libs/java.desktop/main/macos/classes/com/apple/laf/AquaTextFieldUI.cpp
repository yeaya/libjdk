#include <com/apple/laf/AquaTextFieldUI.h>
#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$JComponentPainter.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaCaret = ::com::apple::laf::AquaCaret;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaHighlighter = ::com::apple::laf::AquaHighlighter;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $AquaTextFieldBorder = ::com::apple::laf::AquaTextFieldBorder;
using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$JComponentPainter = ::com::apple::laf::AquaUtils$JComponentPainter;
using $Graphics = ::java::awt::Graphics;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $Caret = ::javax::swing::text::Caret;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
	this->oldDragState = false;
}

$ComponentUI* AquaTextFieldUI::createUI($JComponent* c) {
	$init(AquaTextFieldUI);
	return $new(AquaTextFieldUI);
}

void AquaTextFieldUI::installListeners() {
	$useLocalObjectStack();
	$BasicTextFieldUI::installListeners();
	$set(this, handler, $new($AquaFocusHandler));
	$var($JTextComponent, c, getComponent());
	$nc(c)->addFocusListener(this->handler);
	c->addPropertyChangeListener(this->handler);
	$LookAndFeel::installProperty(c, "opaque"_s, $($Boolean::valueOf($UIManager::getBoolean($$str({$(getPropertyPrefix()), "opaque"_s})))));
	$AquaUtilControlSize::addSizePropertyListener(c);
	$AquaTextFieldSearch::installSearchFieldListener(c);
}

void AquaTextFieldUI::uninstallListeners() {
	$var($JTextComponent, c, getComponent());
	$AquaTextFieldSearch::uninstallSearchFieldListener(c);
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$nc(c)->removeFocusListener(this->handler);
	c->removePropertyChangeListener(this->handler);
	$set(this, handler, nullptr);
	$BasicTextFieldUI::uninstallListeners();
}

void AquaTextFieldUI::installDefaults() {
	$useLocalObjectStack();
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $$nc(getComponent())->getDragEnabled();
		$$nc(getComponent())->setDragEnabled(true);
	}
	$BasicTextFieldUI::installDefaults();
}

void AquaTextFieldUI::uninstallDefaults() {
	$BasicTextFieldUI::uninstallDefaults();
	if (!$GraphicsEnvironment::isHeadless()) {
		$$nc(getComponent())->setDragEnabled(this->oldDragState);
	}
}

void AquaTextFieldUI::installKeyboardActions() {
	$useLocalObjectStack();
	$BasicTextFieldUI::installKeyboardActions();
	$$nc($AquaKeyBindings::instance())->setDefaultAction($(getKeymapName()));
}

$Rectangle* AquaTextFieldUI::getVisibleEditorRect() {
	$useLocalObjectStack();
	$var($Rectangle, rect, $BasicTextFieldUI::getVisibleEditorRect());
	if (rect == nullptr) {
		return nullptr;
	}
	if (!$$nc(getComponent())->isOpaque()) {
		$nc(rect)->y -= 3;
		rect->height += 6;
	}
	return rect;
}

void AquaTextFieldUI::paintSafely($Graphics* g) {
	paintBackgroundSafely(g);
	$BasicTextFieldUI::paintSafely(g);
}

void AquaTextFieldUI::paintBackgroundSafely($Graphics* g) {
	$useLocalObjectStack();
	$var($JTextComponent, c, getComponent());
	int32_t width = $nc(c)->getWidth();
	int32_t height = c->getHeight();
	if (this->delegate != nullptr) {
		this->delegate->paint(c, g, 0, 0, width, height);
		return;
	}
	bool isOpaque = c->isOpaque();
	if (!($instanceOf($AquaTextFieldBorder, $(c->getBorder())))) {
		if (!isOpaque && $AquaUtils::hasOpaqueBeenExplicitlySet(c)) {
			return;
		}
		$nc(g)->setColor($(c->getBackground()));
		g->fillRect(0, 0, width, height);
		return;
	}
	$nc(g)->setColor($(c->getBackground()));
	if (isOpaque) {
		g->fillRect(0, 0, width, height);
		return;
	}
	$var($Insets, margin, c->getMargin());
	$var($Insets, insets, c->getInsets());
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	if (margin != nullptr) {
		$nc(insets)->top -= margin->top;
		insets->left -= margin->left;
		insets->bottom -= margin->bottom;
		insets->right -= margin->right;
	}
	int32_t shrinkage = $AquaTextFieldBorder::getShrinkageFor(c, height);
	g->fillRect($nc(insets)->left - 2, $nc(insets)->top - shrinkage - 1, width - $nc(insets)->right - $nc(insets)->left + 4, height - $nc(insets)->bottom - $nc(insets)->top + shrinkage * 2 + 2);
}

void AquaTextFieldUI::paintBackground($Graphics* g) {
}

$Caret* AquaTextFieldUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaTextFieldUI::createHighlighter() {
	return $new($AquaHighlighter);
}

void AquaTextFieldUI::setPaintingDelegate($AquaUtils$JComponentPainter* delegate) {
	$set(this, delegate, delegate);
}

AquaTextFieldUI::AquaTextFieldUI() {
}

$Class* AquaTextFieldUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Lcom/apple/laf/AquaUtils$JComponentPainter;", nullptr, $PROTECTED, $field(AquaTextFieldUI, delegate)},
		{"handler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, $PROTECTED, $field(AquaTextFieldUI, handler)},
		{"oldDragState", "Z", nullptr, 0, $field(AquaTextFieldUI, oldDragState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaTextFieldUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, createCaret, $Caret*)},
		{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, createHighlighter, $Highlighter*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getVisibleEditorRect", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, getVisibleEditorRect, $Rectangle*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, installDefaults, void)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, installKeyboardActions, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, installListeners, void)},
		{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, paintBackground, void, $Graphics*)},
		{"paintBackgroundSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, paintBackgroundSafely, void, $Graphics*)},
		{"paintSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, paintSafely, void, $Graphics*)},
		{"setPaintingDelegate", "(Lcom/apple/laf/AquaUtils$JComponentPainter;)V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, setPaintingDelegate, void, $AquaUtils$JComponentPainter*)},
		{"uninstallDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, uninstallDefaults, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTextFieldUI, uninstallListeners, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTextFieldUI",
		"javax.swing.plaf.basic.BasicTextFieldUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextFieldUI));
	});
	return class$;
}

$Class* AquaTextFieldUI::class$ = nullptr;

		} // laf
	} // apple
} // com