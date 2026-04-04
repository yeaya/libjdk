#include <JTextPaneDocumentWrapping$1.h>
#include <JTextPaneDocumentWrapping.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JTextPaneDocumentWrapping = ::JTextPaneDocumentWrapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $WindowConstants = ::javax::swing::WindowConstants;

void JTextPaneDocumentWrapping$1::init$() {
}

void JTextPaneDocumentWrapping$1::run() {
	$init($JTextPaneDocumentWrapping);
	$assignStatic($JTextPaneDocumentWrapping::frame, $new($JFrame));
	$JTextPaneDocumentWrapping::frame->setUndecorated(true);
	$nc($JTextPaneDocumentWrapping::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc($JTextPaneDocumentWrapping::frame)->setSize(200, 200);
	$assignStatic($JTextPaneDocumentWrapping::jTextPane, $new($JTextPane));
	$JTextPaneDocumentWrapping::jTextPane->setContentType("text/html"_s);
	$nc($JTextPaneDocumentWrapping::jTextPane)->setText("<html><body><b id=\'test\'>Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test Test</b></body></html>"_s);
	$$nc($nc($JTextPaneDocumentWrapping::frame)->getContentPane())->add($JTextPaneDocumentWrapping::jTextPane);
	$nc($JTextPaneDocumentWrapping::frame)->setVisible(true);
}

JTextPaneDocumentWrapping$1::JTextPaneDocumentWrapping$1() {
}

$Class* JTextPaneDocumentWrapping$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTextPaneDocumentWrapping$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextPaneDocumentWrapping$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTextPaneDocumentWrapping",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentWrapping$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTextPaneDocumentWrapping$1",
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
	$loadClass(JTextPaneDocumentWrapping$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentWrapping$1);
	});
	return class$;
}

$Class* JTextPaneDocumentWrapping$1::class$ = nullptr;