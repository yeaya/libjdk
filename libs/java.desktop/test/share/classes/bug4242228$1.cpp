#include <bug4242228$1.h>
#include <bug4242228$1$1.h>
#include <bug4242228.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef BOTTOM

using $bug4242228 = ::bug4242228;
using $bug4242228$1$1 = ::bug4242228$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

void bug4242228$1::init$() {
}

void bug4242228$1::run() {
	$useLocalObjectStack();
	$init($bug4242228);
	$assignStatic($bug4242228::frame, $new($JFrame, "4242228 Test"_s));
	$var($JScrollPane, sourcePane, $new($JScrollPane));
	$var($JTextPane, htmlEditor, $new($JTextPane));
	$var($JTextPane, sourceEditor, $new($JTextPane));
	$var($JScrollPane, editorPane, $new($JScrollPane));
	$assignStatic($bug4242228::tabPane, $new($JTabbedPane));
	htmlEditor->setText(" "_s);
	htmlEditor->setEditorKit($$new($HTMLEditorKit));
	sourceEditor->setText(" "_s);
	sourceEditor->setEditorKit($$new($StyledEditorKit));
	$nc($bug4242228::frame)->setLayout($$new($BorderLayout));
	$$nc(editorPane->getViewport())->add(htmlEditor);
	$nc($bug4242228::tabPane)->addTab("Editor"_s, editorPane);
	$nc($bug4242228::tabPane)->addChangeListener($$new($bug4242228$1$1, this, editorPane, htmlEditor, sourceEditor));
	$$nc(sourcePane->getViewport())->add(sourceEditor);
	$nc($bug4242228::tabPane)->addTab("Source"_s, sourcePane);
	$nc($bug4242228::tabPane)->setTabPlacement($SwingConstants::BOTTOM);
	htmlEditor->setDocument($$cast($AbstractDocument, $new($HTMLDocument)));
	$nc($bug4242228::frame)->add($bug4242228::tabPane);
	$nc($bug4242228::frame)->setSize(400, 300);
	$nc($bug4242228::frame)->setVisible(true);
}

bug4242228$1::bug4242228$1() {
}

$Class* bug4242228$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4242228$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4242228$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4242228",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4242228$1", nullptr, nullptr, 0},
		{"bug4242228$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4242228$1",
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
		"bug4242228"
	};
	$loadClass(bug4242228$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4242228$1);
	});
	return class$;
}

$Class* bug4242228$1::class$ = nullptr;