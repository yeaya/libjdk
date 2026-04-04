#include <bug7189299.h>
#include <bug7189299$1.h>
#include <bug7189299$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$NamedStyle.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $bug7189299$1 = ::bug7189299$1;
using $bug7189299$2 = ::bug7189299$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext$NamedStyle = ::javax::swing::text::StyleContext$NamedStyle;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$JEditorPane* bug7189299::html = nullptr;
$JFrame* bug7189299::frame = nullptr;

void bug7189299::init$() {
}

void bug7189299::setup() {
	$init(bug7189299);
	$assignStatic(bug7189299::html, $new($JEditorPane, "text/html"_s, "<html><body><form action=\"http://localhost.cgi\"><input type=submit name=submit value=\"submit\"/></form></body></html>"_s));
	$assignStatic(bug7189299::frame, $new($JFrame));
	bug7189299::frame->setLayout($$new($BorderLayout));
	$nc(bug7189299::frame)->add(bug7189299::html, $BorderLayout::CENTER);
	$nc(bug7189299::frame)->setSize(200, 100);
	$nc(bug7189299::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug7189299::frame)->setVisible(true);
}

void bug7189299::doTest() {
	$init(bug7189299);
	$SwingUtilities::updateComponentTreeUI(bug7189299::html);
}

void bug7189299::verifySingleDefaultButtonModelListener() {
	$useLocalObjectStack();
	$init(bug7189299);
	$var($HTMLEditorKit, htmlEditorKit, $cast($HTMLEditorKit, $nc(bug7189299::html)->getEditorKit()));
	$var($StyleContext$NamedStyle, style, $cast($StyleContext$NamedStyle, $nc(htmlEditorKit)->getInputAttributes()));
	$init($StyleConstants);
	$var($DefaultButtonModel, model, $cast($DefaultButtonModel, $nc(style)->getAttribute($StyleConstants::ModelAttribute)));
	$var($ActionListenerArray, listeners, $nc(model)->getActionListeners());
	int32_t actionListenerNum = $nc(listeners)->length;
	if (actionListenerNum != 1) {
		$throwNew($RuntimeException, $$str({"Expected single ActionListener object registered with DefaultButtonModel; found "_s, $$str(actionListenerNum), " listeners registered."_s}));
	}
	int32_t changeListenerNum = $nc($(model->getChangeListeners()))->length;
	if (changeListenerNum != 1) {
		$throwNew($RuntimeException, $$str({"Expected at most one ChangeListener object registered with DefaultButtonModel; found "_s, $$str(changeListenerNum), " listeners registered."_s}));
	}
	int32_t itemListenerNum = $nc($(model->getItemListeners()))->length;
	if (itemListenerNum != 1) {
		$throwNew($RuntimeException, $$str({"Expected at most one ItemListener object registered with DefaultButtonModel; found "_s, $$str(itemListenerNum), " listeners registered."_s}));
	}
}

void bug7189299::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug7189299$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7189299$2));
}

bug7189299::bug7189299() {
}

$Class* bug7189299::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"html", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug7189299, html)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7189299, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7189299, init$, void)},
		{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7189299, doTest, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7189299, main, void, $StringArray*), "java.lang.Exception"},
		{"setup", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7189299, setup, void)},
		{"verifySingleDefaultButtonModelListener", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7189299, verifySingleDefaultButtonModelListener, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7189299$2", nullptr, nullptr, 0},
		{"bug7189299$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7189299",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7189299$2,bug7189299$1"
	};
	$loadClass(bug7189299, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7189299);
	});
	return class$;
}

$Class* bug7189299::class$ = nullptr;