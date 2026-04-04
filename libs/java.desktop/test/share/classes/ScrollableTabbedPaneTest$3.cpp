#include <ScrollableTabbedPaneTest$3.h>
#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LEFT
#undef SCROLL_TAB_LAYOUT

using $ScrollableTabbedPaneTest = ::ScrollableTabbedPaneTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;

void ScrollableTabbedPaneTest$3::init$($String* val$shortLAF) {
	$set(this, val$shortLAF, val$shortLAF);
}

void ScrollableTabbedPaneTest$3::run() {
	$init($ScrollableTabbedPaneTest);
	$assignStatic($ScrollableTabbedPaneTest::frame, $new($JFrame, this->val$shortLAF));
	$ScrollableTabbedPaneTest::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($ScrollableTabbedPaneTest::frame)->setVisible(true);
	$assignStatic($ScrollableTabbedPaneTest::pane, $new($JTabbedPane));
	$ScrollableTabbedPaneTest::pane->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
	$nc($ScrollableTabbedPaneTest::pane)->setTabPlacement($SwingConstants::LEFT);
	$nc($ScrollableTabbedPaneTest::frame)->add($ScrollableTabbedPaneTest::pane);
	$nc($ScrollableTabbedPaneTest::frame)->setSize(500, 500);
}

ScrollableTabbedPaneTest$3::ScrollableTabbedPaneTest$3() {
}

$Class* ScrollableTabbedPaneTest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$shortLAF", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollableTabbedPaneTest$3, val$shortLAF)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(ScrollableTabbedPaneTest$3, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScrollableTabbedPaneTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ScrollableTabbedPaneTest",
		"createLeftUI",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ScrollableTabbedPaneTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ScrollableTabbedPaneTest$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ScrollableTabbedPaneTest"
	};
	$loadClass(ScrollableTabbedPaneTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollableTabbedPaneTest$3);
	});
	return class$;
}

$Class* ScrollableTabbedPaneTest$3::class$ = nullptr;