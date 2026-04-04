#include <bug8048110.h>
#include <bug8048110$1.h>
#include <bug8048110$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $bug8048110$1 = ::bug8048110$1;
using $bug8048110$2 = ::bug8048110$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $Element = ::javax::swing::text::Element;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$Robot* bug8048110::robot = nullptr;
$Object* bug8048110::lock = nullptr;
bool bug8048110::isRealSyncPerformed = false;
$String* bug8048110::htmlText = nullptr;

void bug8048110::init$() {
}

void bug8048110::main($StringArray* args) {
	$init(bug8048110);
	$useLocalObjectStack();
	$assignStatic(bug8048110::robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug8048110$1));
	$var($Thread, thread, $new($bug8048110$2));
	thread->start();
	$synchronized(bug8048110::lock) {
		if (!bug8048110::isRealSyncPerformed) {
			bug8048110::lock->wait(5000);
		}
	}
	if (!bug8048110::isRealSyncPerformed) {
		$throwNew($RuntimeException, "Test Failed!"_s);
	}
}

void bug8048110::createAndShowGUI() {
	$init(bug8048110);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
	$var($HTMLEditorKit, editorKit, $new($HTMLEditorKit));
	$var($JTextPane, textPane, $new($JTextPane));
	textPane->setContentType("text/html"_s);
	textPane->setEditorKit(editorKit);
	textPane->setText("Initial text without table"_s);
	$var($JFrame, frame, $new($JFrame, "bug8048110"_s));
	$init($BorderLayout);
	$$nc(frame->getContentPane())->add(textPane, $BorderLayout::CENTER);
	frame->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	frame->setSize(500, 200);
	frame->setVisible(true);
	textPane->setDocument($($$nc(textPane->getEditorKit())->createDefaultDocument()));
	$var($HTMLDocument, htmlDocument, $cast($HTMLDocument, textPane->getDocument()));
	$var($Element, firstParagraph, findFirstElement($($$nc(textPane->getDocument())->getDefaultRootElement()), "p"_s));
	try {
		$nc(htmlDocument)->setInnerHTML(firstParagraph, bug8048110::htmlText);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
}

$Element* bug8048110::findFirstElement($Element* e, $String* name) {
	$init(bug8048110);
	$useLocalObjectStack();
	$var($String, elementName, $nc(e)->getName());
	if (elementName != nullptr && elementName->equalsIgnoreCase(name)) {
		return e;
	}
	for (int32_t i = 0; i < e->getElementCount(); ++i) {
		$var($Element, result, findFirstElement($(e->getElement(i)), name));
		if (result != nullptr) {
			return result;
		}
	}
	return nullptr;
}

void bug8048110::clinit$($Class* clazz) {
	$assignStatic(bug8048110::htmlText, "<table width=\"100%\" cellpadding=\"10\" cellspacing=\"5\" align=\"center\"><tr><th align=\"left\" bgcolor=\"#bec3c6\">Devices</th><th align=\"left\" bgcolor=\"#bec3c6\">State</th></tr><tr><td align=\"left\" bgcolor=\"#bec3c6\">PC</td><td align=\"left\" bgcolor=\"#46a055\">Ok</td></tr></table>"_s);
	$assignStatic(bug8048110::lock, $new($Object));
	bug8048110::isRealSyncPerformed = false;
}

bug8048110::bug8048110() {
}

$Class* bug8048110::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug8048110, robot)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(bug8048110, lock)},
		{"isRealSyncPerformed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8048110, isRealSyncPerformed)},
		{"htmlText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8048110, htmlText)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8048110, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8048110, createAndShowGUI, void)},
		{"findFirstElement", "(Ljavax/swing/text/Element;Ljava/lang/String;)Ljavax/swing/text/Element;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8048110, findFirstElement, $Element*, $Element*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8048110, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8048110$2", nullptr, nullptr, 0},
		{"bug8048110$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8048110",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8048110$2,bug8048110$1"
	};
	$loadClass(bug8048110, name, initialize, &classInfo$$, bug8048110::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8048110);
	});
	return class$;
}

$Class* bug8048110::class$ = nullptr;