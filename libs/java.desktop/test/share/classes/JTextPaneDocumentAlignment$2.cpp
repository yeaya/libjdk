#include <JTextPaneDocumentAlignment$2.h>
#include <JTextPaneDocumentAlignment.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef ALIGN_CENTER

using $JTextPaneDocumentAlignment = ::JTextPaneDocumentAlignment;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;

void JTextPaneDocumentAlignment$2::init$() {
}

void JTextPaneDocumentAlignment$2::run() {
	$useLocalObjectStack();
	try {
		$init($JTextPaneDocumentAlignment);
		$JTextPaneDocumentAlignment::position = $nc($($nc($JTextPaneDocumentAlignment::jTextPane)->modelToView(1)))->x;
		$var($SimpleAttributeSet, center, $new($SimpleAttributeSet));
		$StyleConstants::setAlignment(center, $StyleConstants::ALIGN_CENTER);
		$$nc($nc($JTextPaneDocumentAlignment::jTextPane)->getStyledDocument())->setParagraphAttributes(0, 10, center, true);
	} catch ($BadLocationException& e) {
		e->printStackTrace();
	}
}

JTextPaneDocumentAlignment$2::JTextPaneDocumentAlignment$2() {
}

$Class* JTextPaneDocumentAlignment$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextPaneDocumentAlignment$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextPaneDocumentAlignment$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextPaneDocumentAlignment",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentAlignment$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextPaneDocumentAlignment$2",
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
	$loadClass(JTextPaneDocumentAlignment$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentAlignment$2);
	});
	return class$;
}

$Class* JTextPaneDocumentAlignment$2::class$ = nullptr;