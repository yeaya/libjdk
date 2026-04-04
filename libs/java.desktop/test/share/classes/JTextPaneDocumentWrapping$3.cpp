#include <JTextPaneDocumentWrapping$3.h>
#include <JTextPaneDocumentWrapping.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $JTextPaneDocumentWrapping = ::JTextPaneDocumentWrapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadLocationException = ::javax::swing::text::BadLocationException;

void JTextPaneDocumentWrapping$3::init$() {
}

void JTextPaneDocumentWrapping$3::run() {
	try {
		$init($JTextPaneDocumentWrapping);
		$JTextPaneDocumentWrapping::position = $nc($($nc($JTextPaneDocumentWrapping::jTextPane)->modelToView(100)))->y;
	} catch ($BadLocationException& e) {
		e->printStackTrace();
	}
	$init($JTextPaneDocumentWrapping);
	$nc($JTextPaneDocumentWrapping::frame)->dispose();
}

JTextPaneDocumentWrapping$3::JTextPaneDocumentWrapping$3() {
}

$Class* JTextPaneDocumentWrapping$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextPaneDocumentWrapping$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextPaneDocumentWrapping$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextPaneDocumentWrapping",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentWrapping$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextPaneDocumentWrapping$3",
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
	$loadClass(JTextPaneDocumentWrapping$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentWrapping$3);
	});
	return class$;
}

$Class* JTextPaneDocumentWrapping$3::class$ = nullptr;