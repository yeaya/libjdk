#include <com/apple/laf/AquaHighlighter$AquaHighlightPainter.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <java/awt/Window.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace com {
	namespace apple {
		namespace laf {

void AquaHighlighter$AquaHighlightPainter::init$($Color* c) {
	$DefaultHighlighter$DefaultHighlightPainter::init$(c);
}

$Color* AquaHighlighter$AquaHighlightPainter::getColor() {
	return this->selectionColor == nullptr ? $DefaultHighlighter$DefaultHighlightPainter::getColor() : this->selectionColor;
}

$Color* AquaHighlighter$AquaHighlightPainter::getInactiveSelectionColor() {
	if (this->disabledSelectionColor != nullptr) {
		return this->disabledSelectionColor;
	}
	return $set(this, disabledSelectionColor, $UIManager::getColor("TextComponent.selectionBackgroundInactive"_s));
}

void AquaHighlighter$AquaHighlightPainter::setColor($JTextComponent* c) {
	$set(this, selectionColor, $DefaultHighlighter$DefaultHighlightPainter::getColor());
	if (this->selectionColor == nullptr) {
		$set(this, selectionColor, $nc(c)->getSelectionColor());
	}
	$var($Window, owningWindow, $SwingUtilities::getWindowAncestor(c));
	if (owningWindow != nullptr && !owningWindow->isActive()) {
		$set(this, selectionColor, getInactiveSelectionColor());
	}
	if (!$nc(c)->hasFocus()) {
		$set(this, selectionColor, getInactiveSelectionColor());
	}
}

void AquaHighlighter$AquaHighlightPainter::paint($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c) {
	setColor(c);
	$DefaultHighlighter$DefaultHighlightPainter::paint(g, offs0, offs1, bounds, c);
}

$Shape* AquaHighlighter$AquaHighlightPainter::paintLayer($Graphics* g, int32_t offs0, int32_t offs1, $Shape* bounds, $JTextComponent* c, $View* view) {
	setColor(c);
	return $DefaultHighlighter$DefaultHighlightPainter::paintLayer(g, offs0, offs1, bounds, c, view);
}

AquaHighlighter$AquaHighlightPainter::AquaHighlighter$AquaHighlightPainter() {
}

$Class* AquaHighlighter$AquaHighlightPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selectionColor", "Ljava/awt/Color;", nullptr, 0, $field(AquaHighlighter$AquaHighlightPainter, selectionColor)},
		{"disabledSelectionColor", "Ljava/awt/Color;", nullptr, 0, $field(AquaHighlighter$AquaHighlightPainter, disabledSelectionColor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(AquaHighlighter$AquaHighlightPainter, init$, void, $Color*)},
		{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(AquaHighlighter$AquaHighlightPainter, getColor, $Color*)},
		{"getInactiveSelectionColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(AquaHighlighter$AquaHighlightPainter, getInactiveSelectionColor, $Color*)},
		{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $virtualMethod(AquaHighlighter$AquaHighlightPainter, paint, void, $Graphics*, int32_t, int32_t, $Shape*, $JTextComponent*)},
		{"paintLayer", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(AquaHighlighter$AquaHighlightPainter, paintLayer, $Shape*, $Graphics*, int32_t, int32_t, $Shape*, $JTextComponent*, $View*)},
		{"setColor", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $virtualMethod(AquaHighlighter$AquaHighlightPainter, setColor, void, $JTextComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaHighlighter$AquaHighlightPainter", "com.apple.laf.AquaHighlighter", "AquaHighlightPainter", $PUBLIC | $STATIC},
		{"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter", "javax.swing.text.DefaultHighlighter", "DefaultHighlightPainter", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaHighlighter$AquaHighlightPainter",
		"javax.swing.text.DefaultHighlighter$DefaultHighlightPainter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaHighlighter"
	};
	$loadClass(AquaHighlighter$AquaHighlightPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaHighlighter$AquaHighlightPainter);
	});
	return class$;
}

$Class* AquaHighlighter$AquaHighlightPainter::class$ = nullptr;

		} // laf
	} // apple
} // com