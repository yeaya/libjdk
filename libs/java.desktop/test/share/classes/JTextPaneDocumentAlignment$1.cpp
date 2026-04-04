#include <JTextPaneDocumentAlignment$1.h>
#include <JTextPaneDocumentAlignment.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef ALIGN_RIGHT
#undef EXIT_ON_CLOSE

using $JTextPaneDocumentAlignment = ::JTextPaneDocumentAlignment;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $WindowConstants = ::javax::swing::WindowConstants;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;

void JTextPaneDocumentAlignment$1::init$() {
}

void JTextPaneDocumentAlignment$1::run() {
	$useLocalObjectStack();
	$init($JTextPaneDocumentAlignment);
	$assignStatic($JTextPaneDocumentAlignment::frame, $new($JFrame));
	$JTextPaneDocumentAlignment::frame->setUndecorated(true);
	$nc($JTextPaneDocumentAlignment::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc($JTextPaneDocumentAlignment::frame)->setSize(200, 200);
	$assignStatic($JTextPaneDocumentAlignment::jTextPane, $new($JTextPane));
	$JTextPaneDocumentAlignment::jTextPane->setContentType("text/html"_s);
	$nc($JTextPaneDocumentAlignment::jTextPane)->setText("<html><body><b id=\'test\'>Test</b></body></html>"_s);
	$var($SimpleAttributeSet, right, $new($SimpleAttributeSet));
	$StyleConstants::setAlignment(right, $StyleConstants::ALIGN_RIGHT);
	$$nc($nc($JTextPaneDocumentAlignment::jTextPane)->getStyledDocument())->setParagraphAttributes(0, 10, right, true);
	$$nc($nc($JTextPaneDocumentAlignment::frame)->getContentPane())->add($JTextPaneDocumentAlignment::jTextPane);
	$nc($JTextPaneDocumentAlignment::frame)->setVisible(true);
}

JTextPaneDocumentAlignment$1::JTextPaneDocumentAlignment$1() {
}

$Class* JTextPaneDocumentAlignment$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextPaneDocumentAlignment$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextPaneDocumentAlignment$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextPaneDocumentAlignment",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentAlignment$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextPaneDocumentAlignment$1",
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
	$loadClass(JTextPaneDocumentAlignment$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentAlignment$1);
	});
	return class$;
}

$Class* JTextPaneDocumentAlignment$1::class$ = nullptr;