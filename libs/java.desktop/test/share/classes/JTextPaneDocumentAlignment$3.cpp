#include <JTextPaneDocumentAlignment$3.h>
#include <JTextPaneDocumentAlignment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $JTextPaneDocumentAlignment = ::JTextPaneDocumentAlignment;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadLocationException = ::javax::swing::text::BadLocationException;

void JTextPaneDocumentAlignment$3::init$() {
}

void JTextPaneDocumentAlignment$3::run() {
	try {
		$init($JTextPaneDocumentAlignment);
		$JTextPaneDocumentAlignment::position = $nc($($nc($JTextPaneDocumentAlignment::jTextPane)->modelToView(1)))->x;
	} catch ($BadLocationException& e) {
		e->printStackTrace();
	}
	$init($JTextPaneDocumentAlignment);
	$nc($JTextPaneDocumentAlignment::frame)->dispose();
}

JTextPaneDocumentAlignment$3::JTextPaneDocumentAlignment$3() {
}

$Class* JTextPaneDocumentAlignment$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextPaneDocumentAlignment$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextPaneDocumentAlignment$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextPaneDocumentAlignment",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentAlignment$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextPaneDocumentAlignment$3",
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
		"JTextPaneDocumentAlignment"
	};
	$loadClass(JTextPaneDocumentAlignment$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentAlignment$3);
	});
	return class$;
}

$Class* JTextPaneDocumentAlignment$3::class$ = nullptr;