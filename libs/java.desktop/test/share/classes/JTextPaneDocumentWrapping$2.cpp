#include <JTextPaneDocumentWrapping$2.h>
#include <JTextPaneDocumentWrapping.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <jcpp.h>

#undef WHITE_SPACE

using $JTextPaneDocumentWrapping = ::JTextPaneDocumentWrapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;

void JTextPaneDocumentWrapping$2::init$() {
}

void JTextPaneDocumentWrapping$2::run() {
	$useLocalObjectStack();
	try {
		$init($JTextPaneDocumentWrapping);
		$JTextPaneDocumentWrapping::position = $nc($($nc($JTextPaneDocumentWrapping::jTextPane)->modelToView(100)))->y;
		$var($SimpleAttributeSet, wrap, $new($SimpleAttributeSet));
		$init($CSS$Attribute);
		wrap->addAttribute($CSS$Attribute::WHITE_SPACE, "nowrap"_s);
		$$nc($nc($JTextPaneDocumentWrapping::jTextPane)->getStyledDocument())->setParagraphAttributes(0, 10, wrap, true);
	} catch ($BadLocationException& e) {
		e->printStackTrace();
	}
}

JTextPaneDocumentWrapping$2::JTextPaneDocumentWrapping$2() {
}

$Class* JTextPaneDocumentWrapping$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextPaneDocumentWrapping$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextPaneDocumentWrapping$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextPaneDocumentWrapping",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentWrapping$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextPaneDocumentWrapping$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JTextPaneDocumentWrapping"
	};
	$loadClass(JTextPaneDocumentWrapping$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentWrapping$2);
	});
	return class$;
}

$Class* JTextPaneDocumentWrapping$2::class$ = nullptr;