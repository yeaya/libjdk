#include <JMenuSelectedColorTest$1.h>
#include <JMenuSelectedColorTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $JMenuSelectedColorTest = ::JMenuSelectedColorTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;

void JMenuSelectedColorTest$1::init$() {
}

void JMenuSelectedColorTest$1::run() {
	$useLocalObjectStack();
	$init($JMenuSelectedColorTest);
	$assignStatic($JMenuSelectedColorTest::menu, $new($JMenu, "         "_s));
	$assignStatic($JMenuSelectedColorTest::menuitem, $new($JMenuItem, "        "_s));
	$JMenuSelectedColorTest::menu->add($JMenuSelectedColorTest::menuitem);
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BorderLayout));
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$var($JPanel, menuPanel, $new($JPanel));
	menuPanel->setLayout($$new($FlowLayout));
	menuBar->add($JMenuSelectedColorTest::menu);
	menuPanel->add(menuBar);
	panel->add(menuPanel, $BorderLayout::CENTER);
	$assignStatic($JMenuSelectedColorTest::frame, $new($JFrame, "JMenuSelectedColor"_s));
	$JMenuSelectedColorTest::frame->add(panel);
	$nc($JMenuSelectedColorTest::frame)->setSize(200, 200);
	$nc($JMenuSelectedColorTest::frame)->setAlwaysOnTop(true);
	$nc($JMenuSelectedColorTest::frame)->setLocationRelativeTo(nullptr);
	$nc($JMenuSelectedColorTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($JMenuSelectedColorTest::frame)->setVisible(true);
}

JMenuSelectedColorTest$1::JMenuSelectedColorTest$1() {
}

$Class* JMenuSelectedColorTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JMenuSelectedColorTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JMenuSelectedColorTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JMenuSelectedColorTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JMenuSelectedColorTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JMenuSelectedColorTest$1",
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
		"JMenuSelectedColorTest"
	};
	$loadClass(JMenuSelectedColorTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMenuSelectedColorTest$1);
	});
	return class$;
}

$Class* JMenuSelectedColorTest$1::class$ = nullptr;