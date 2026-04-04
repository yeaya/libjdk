#include <JInternalFrameIconTest$1.h>
#include <JInternalFrameIconTest$1$1.h>
#include <JInternalFrameIconTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JInternalFrameIconTest = ::JInternalFrameIconTest;
using $JInternalFrameIconTest$1$1 = ::JInternalFrameIconTest$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

void JInternalFrameIconTest$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void JInternalFrameIconTest$1::run() {
	$useLocalObjectStack();
	$init($JInternalFrameIconTest);
	$assignStatic($JInternalFrameIconTest::desktopPane, $new($JDesktopPane));
	$assignStatic($JInternalFrameIconTest::internalFrame, $new($JInternalFrame));
	$assignStatic($JInternalFrameIconTest::frame, $new($JFrame));
	$JInternalFrameIconTest::internalFrame->setTitle(this->val$lookAndFeelString);
	$assignStatic($JInternalFrameIconTest::titleImageIcon, $new($JInternalFrameIconTest$1$1, this));
	$nc($JInternalFrameIconTest::internalFrame)->setFrameIcon($JInternalFrameIconTest::titleImageIcon);
	$nc($JInternalFrameIconTest::internalFrame)->setSize(500, 200);
	$nc($JInternalFrameIconTest::internalFrame)->setVisible(true);
	$nc($JInternalFrameIconTest::desktopPane)->add($JInternalFrameIconTest::internalFrame);
	$nc($JInternalFrameIconTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$$nc($nc($JInternalFrameIconTest::frame)->getContentPane())->setLayout($$new($BorderLayout));
	$$nc($nc($JInternalFrameIconTest::frame)->getContentPane())->add($JInternalFrameIconTest::desktopPane, "Center"_s);
	$nc($JInternalFrameIconTest::frame)->setSize(500, 500);
	$nc($JInternalFrameIconTest::frame)->setLocationRelativeTo(nullptr);
	$nc($JInternalFrameIconTest::frame)->setVisible(true);
	$nc($JInternalFrameIconTest::frame)->toFront();
}

JInternalFrameIconTest$1::JInternalFrameIconTest$1() {
}

$Class* JInternalFrameIconTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrameIconTest$1, val$lookAndFeelString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(JInternalFrameIconTest$1, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JInternalFrameIconTest",
		"createImageIconUI",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JInternalFrameIconTest$1", nullptr, nullptr, 0},
		{"JInternalFrameIconTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JInternalFrameIconTest$1",
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
		"JInternalFrameIconTest"
	};
	$loadClass(JInternalFrameIconTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JInternalFrameIconTest$1);
	});
	return class$;
}

$Class* JInternalFrameIconTest$1::class$ = nullptr;