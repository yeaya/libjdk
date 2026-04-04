#include <sun/swing/text/TextComponentPrintable$6.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextPane = ::javax::swing::JTextPane;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

void TextComponentPrintable$6::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
	$JTextPane::init$();
}

$FontMetrics* TextComponentPrintable$6::getFontMetrics($Font* font) {
	return ($nc(this->this$0->frc)->get() == nullptr) ? $JTextPane::getFontMetrics(font) : $cast($FontMetrics, $FontDesignMetrics::getMetrics(font, $$cast($FontRenderContext, this->this$0->frc->get())));
}

$EditorKit* TextComponentPrintable$6::getEditorKit() {
	if (getDocument() == $nc(this->val$textComponent)->getDocument()) {
		return $cast($JTextPane, this->val$textComponent)->getEditorKit();
	} else {
		return $JTextPane::getEditorKit();
	}
}

TextComponentPrintable$6::TextComponentPrintable$6() {
}

$Class* TextComponentPrintable$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$6, this$0)},
		{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$6, val$textComponent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(TextComponentPrintable$6, init$, void, $TextComponentPrintable*, $JTextComponent*)},
		{"getEditorKit", "()Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$6, getEditorKit, $EditorKit*)},
		{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$6, getFontMetrics, $FontMetrics*, $Font*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.text.TextComponentPrintable",
		"createPrintShellOnEDT",
		"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.text.TextComponentPrintable$6",
		"javax.swing.JTextPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.text.TextComponentPrintable"
	};
	$loadClass(TextComponentPrintable$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextComponentPrintable$6));
	});
	return class$;
}

$Class* TextComponentPrintable$6::class$ = nullptr;

		} // text
	} // swing
} // sun