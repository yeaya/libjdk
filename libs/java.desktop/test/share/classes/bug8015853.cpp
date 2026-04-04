#include <bug8015853.h>
#include <bug8015853$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/Scanner.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8015853$1 = ::bug8015853$1;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $Scanner = ::java::util::Scanner;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$String* bug8015853::text = nullptr;

void bug8015853::init$() {
}

void bug8015853::main($StringArray* args) {
	$init(bug8015853);
	$useLocalObjectStack();
	try {
		$var($URL, path, $ClassLoader::getSystemResource("bug8015853.txt"_s));
		$var($File, file, $new($File, $($nc(path)->toURI())));
		$var($Scanner, scanner, $new($Scanner, file));
		while (scanner->hasNextLine()) {
			$plusAssignStatic(bug8015853::text, $$str({$(scanner->nextLine()), "\n"_s}));
		}
		scanner->close();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
	$plusAssignStatic(bug8015853::text, bug8015853::text);
	$SwingUtilities::invokeAndWait($$new($bug8015853$1));
}

void bug8015853::createAndShowGUI() {
	$init(bug8015853);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JEditorPane, editorPane, $new($JEditorPane));
	$var($HTMLEditorKit, editorKit, $new($HTMLEditorKit));
	editorPane->setEditorKit(editorKit);
	editorPane->setText(bug8015853::text);
	frame->add(editorPane);
	frame->setVisible(true);
}

void bug8015853::clinit$($Class* clazz) {
	$assignStatic(bug8015853::text, ""_s);
}

bug8015853::bug8015853() {
}

$Class* bug8015853::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug8015853, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8015853, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8015853, createAndShowGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8015853, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8015853$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8015853",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8015853$1"
	};
	$loadClass(bug8015853, name, initialize, &classInfo$$, bug8015853::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8015853);
	});
	return class$;
}

$Class* bug8015853::class$ = nullptr;