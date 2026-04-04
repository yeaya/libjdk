#include <sun/swing/text/TextComponentPrintable$3.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
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
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

void TextComponentPrintable$3::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
	$JPasswordField::init$();
	{
		setEchoChar($nc($cast($JPasswordField, this->val$textComponent))->getEchoChar());
		setHorizontalAlignment($cast($JTextField, this->val$textComponent)->getHorizontalAlignment());
	}
}

$FontMetrics* TextComponentPrintable$3::getFontMetrics($Font* font) {
	return ($nc(this->this$0->frc)->get() == nullptr) ? $JPasswordField::getFontMetrics(font) : $cast($FontMetrics, $FontDesignMetrics::getMetrics(font, $$cast($FontRenderContext, this->this$0->frc->get())));
}

TextComponentPrintable$3::TextComponentPrintable$3() {
}

$Class* TextComponentPrintable$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$3, this$0)},
		{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$3, val$textComponent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(TextComponentPrintable$3, init$, void, $TextComponentPrintable*, $JTextComponent*)},
		{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$3, getFontMetrics, $FontMetrics*, $Font*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.text.TextComponentPrintable",
		"createPrintShellOnEDT",
		"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.text.TextComponentPrintable$3",
		"javax.swing.JPasswordField",
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
	$loadClass(TextComponentPrintable$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextComponentPrintable$3));
	});
	return class$;
}

$Class* TextComponentPrintable$3::class$ = nullptr;

		} // text
	} // swing
} // sun