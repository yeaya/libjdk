#include <bug4530474.h>
#include <bug4530474$1.h>
#include <bug4530474$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BLUE
#undef EXIT_ON_CLOSE
#undef TEST_COLOR

using $bug4530474$1 = ::bug4530474$1;
using $bug4530474$2 = ::bug4530474$2;
using $Color = ::java::awt::Color;
using $Robot = ::java::awt::Robot;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$Color* bug4530474::TEST_COLOR = nullptr;
$JEditorPane* bug4530474::jep = nullptr;

void bug4530474::init$() {
}

void bug4530474::main($StringArray* args) {
	$init(bug4530474);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug4530474$1));
	robot->waitForIdle();
	robot->delay(500);
	$SwingUtilities::invokeAndWait($$new($bug4530474$2, robot));
}

void bug4530474::createAndShowGUI() {
	$init(bug4530474);
	$useLocalObjectStack();
	$var($JFrame, mainFrame, $new($JFrame, "bug4530474"_s));
	mainFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug4530474::jep, $new($JEditorPane));
	try {
		$var($File, file, $new($File, $($System::getProperty("test.src"_s, "."_s)), "test.html"_s));
		bug4530474::jep->setPage($(file->toURL()));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$$nc(mainFrame->getContentPane())->add(bug4530474::jep);
	mainFrame->pack();
	mainFrame->setVisible(true);
}

void bug4530474::clinit$($Class* clazz) {
	$init($Color);
	$assignStatic(bug4530474::TEST_COLOR, $Color::BLUE);
}

bug4530474::bug4530474() {
}

$Class* bug4530474::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4530474, TEST_COLOR)},
		{"jep", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4530474, jep)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4530474, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4530474, createAndShowGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4530474, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4530474$2", nullptr, nullptr, 0},
		{"bug4530474$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4530474",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4530474$2,bug4530474$1"
	};
	$loadClass(bug4530474, name, initialize, &classInfo$$, bug4530474::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4530474);
	});
	return class$;
}

$Class* bug4530474::class$ = nullptr;