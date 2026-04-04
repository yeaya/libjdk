#include <bug8031109$1.h>
#include <bug8031109.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TRUE

using $bug8031109 = ::bug8031109;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $EditorKit = ::javax::swing::text::EditorKit;

void bug8031109$1::init$() {
}

void bug8031109$1::run() {
	$useLocalObjectStack();
	$var($JEditorPane, editorPane, $new($JEditorPane));
	editorPane->setEditable(false);
	$var($EditorKit, defaultHtmlEditor, $JEditorPane::createEditorKitForContentType("text/html"_s));
	editorPane->setEditorKitForContentType("text/html"_s, defaultHtmlEditor);
	editorPane->setContentType("text/html"_s);
	$$nc(editorPane->getDocument())->putProperty("IgnoreCharsetDirective"_s, $Boolean::TRUE);
	$var($URL, url, $bug8031109::generateHtmlFile());
	$var($String, html, $str({"<html><frameset rows=\"120px, 120 PX ,  * , 10 *\">\n   <frame name=\"top\" src=\""_s, url, "\" />\n   <frame name=\"center\" src=\""_s, url, "\" />\n   <frame name=\"main\" src=\""_s, url, "\" />\n   <noframes>\n   <body>\n      Your browser does not support frames.\n   </body>\n   </noframes>\n</frameset>"_s}));
	editorPane->setText(html);
	$var($JScrollPane, scrollPane, $new($JScrollPane, editorPane));
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$$nc(frame->getContentPane())->add(scrollPane);
	frame->setSize(500, 500);
	frame->setVisible(true);
}

bug8031109$1::bug8031109$1() {
}

$Class* bug8031109$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8031109$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8031109$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8031109",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8031109$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8031109$1",
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
		"bug8031109"
	};
	$loadClass(bug8031109$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031109$1);
	});
	return class$;
}

$Class* bug8031109$1::class$ = nullptr;