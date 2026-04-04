#include <javax/swing/plaf/synth/SynthTextPaneUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthEditorPaneUI.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef DEFAULT_STYLE

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthEditorPaneUI = ::javax::swing::plaf::synth::SynthEditorPaneUI;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyledDocument = ::javax::swing::text::StyledDocument;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTextPaneUI::init$() {
	$SynthEditorPaneUI::init$();
}

$ComponentUI* SynthTextPaneUI::createUI($JComponent* c) {
	$init(SynthTextPaneUI);
	return $new(SynthTextPaneUI);
}

$String* SynthTextPaneUI::getPropertyPrefix() {
	return "TextPane"_s;
}

void SynthTextPaneUI::installUI($JComponent* c) {
	$useLocalObjectStack();
	$SynthEditorPaneUI::installUI(c);
	updateForeground($($nc(c)->getForeground()));
	updateFont($(c->getFont()));
}

void SynthTextPaneUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$SynthEditorPaneUI::propertyChange(evt);
	$var($String, name, $nc(evt)->getPropertyName());
	if ($nc(name)->equals("foreground"_s)) {
		updateForeground($$cast($Color, evt->getNewValue()));
	} else if (name->equals("font"_s)) {
		updateFont($$cast($Font, evt->getNewValue()));
	} else if (name->equals("document"_s)) {
		$var($JComponent, comp, getComponent());
		updateForeground($($nc(comp)->getForeground()));
		updateFont($(comp->getFont()));
	}
}

void SynthTextPaneUI::updateForeground($Color* color) {
	$useLocalObjectStack();
	$var($StyledDocument, doc, $cast($StyledDocument, $$nc(getComponent())->getDocument()));
	$init($StyleContext);
	$var($Style, style, $nc(doc)->getStyle($StyleContext::DEFAULT_STYLE));
	if (style == nullptr) {
		return;
	}
	if (color == nullptr) {
		$init($StyleConstants);
		$nc(style)->removeAttribute($StyleConstants::Foreground);
	} else {
		$StyleConstants::setForeground(style, color);
	}
}

void SynthTextPaneUI::updateFont($Font* font) {
	$useLocalObjectStack();
	$var($StyledDocument, doc, $cast($StyledDocument, $$nc(getComponent())->getDocument()));
	$init($StyleContext);
	$var($Style, style, $nc(doc)->getStyle($StyleContext::DEFAULT_STYLE));
	if (style == nullptr) {
		return;
	}
	if (font == nullptr) {
		$init($StyleConstants);
		$nc(style)->removeAttribute($StyleConstants::FontFamily);
		style->removeAttribute($StyleConstants::FontSize);
		style->removeAttribute($StyleConstants::Bold);
		style->removeAttribute($StyleConstants::Italic);
	} else {
		$StyleConstants::setFontFamily(style, $(font->getName()));
		$StyleConstants::setFontSize(style, font->getSize());
		$StyleConstants::setBold(style, font->isBold());
		$StyleConstants::setItalic(style, font->isItalic());
	}
}

void SynthTextPaneUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	int32_t var$0 = $nc(c)->getWidth();
	$$nc($nc(context)->getPainter())->paintTextPaneBackground(context, g, 0, 0, var$0, c->getHeight());
}

void SynthTextPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$$nc($nc(context)->getPainter())->paintTextPaneBorder(context, g, x, y, w, h);
}

SynthTextPaneUI::SynthTextPaneUI() {
}

$Class* SynthTextPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthTextPaneUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthTextPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SynthTextPaneUI, getPropertyPrefix, $String*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTextPaneUI, installUI, void, $JComponent*)},
		{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(SynthTextPaneUI, paintBackground, void, $SynthContext*, $Graphics*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthTextPaneUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED, $virtualMethod(SynthTextPaneUI, propertyChange, void, $PropertyChangeEvent*)},
		{"updateFont", "(Ljava/awt/Font;)V", nullptr, $PRIVATE, $method(SynthTextPaneUI, updateFont, void, $Font*)},
		{"updateForeground", "(Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(SynthTextPaneUI, updateForeground, void, $Color*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthTextPaneUI",
		"javax.swing.plaf.synth.SynthEditorPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthTextPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTextPaneUI));
	});
	return class$;
}

$Class* SynthTextPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax