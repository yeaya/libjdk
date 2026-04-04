#include <bug4251579.h>
#include <bug4251579$1.h>
#include <bug4251579$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug4251579$1 = ::bug4251579$1;
using $bug4251579$2 = ::bug4251579$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JLabel* bug4251579::htmlComponent = nullptr;

void bug4251579::init$() {
}

void bug4251579::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug4251579$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4251579$2, robot));
}

void bug4251579::createAndShowGUI() {
	$useLocalObjectStack();
	$var($String, htmlText, "<html><head><style> .blue{ color:blue; } </style></head><body<P class=\"blue\"> should be rendered with BLUE class definition</P></body>"_s);
	$var($JFrame, mainFrame, $new($JFrame, "bug4251579"_s));
	mainFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init(bug4251579);
	$assignStatic(bug4251579::htmlComponent, $new($JLabel, htmlText));
	$$nc(mainFrame->getContentPane())->add(bug4251579::htmlComponent);
	mainFrame->pack();
	mainFrame->setVisible(true);
}

bug4251579::bug4251579() {
}

$Class* bug4251579::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"htmlComponent", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(bug4251579, htmlComponent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4251579, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4251579, createAndShowGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4251579, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4251579$2", nullptr, nullptr, 0},
		{"bug4251579$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4251579",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4251579$2,bug4251579$1"
	};
	$loadClass(bug4251579, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4251579);
	});
	return class$;
}

$Class* bug4251579::class$ = nullptr;