#include <TestJInternalFrameIconify$1.h>
#include <TestJInternalFrameIconify.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $TestJInternalFrameIconify = ::TestJInternalFrameIconify;
using $Component = ::java::awt::Component;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

void TestJInternalFrameIconify$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void TestJInternalFrameIconify$1::run() {
	$useLocalObjectStack();
	$init($TestJInternalFrameIconify);
	$assignStatic($TestJInternalFrameIconify::frame, $new($JFrame, this->val$lookAndFeelString));
	$assignStatic($TestJInternalFrameIconify::desktopPane, $new($JDesktopPane));
	$$nc($TestJInternalFrameIconify::frame->getContentPane())->add($TestJInternalFrameIconify::desktopPane);
	$nc($TestJInternalFrameIconify::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JInternalFrame, f, $new($JInternalFrame, "Child "_s, true, true, true, true));
	f->setSize(200, 300);
	f->setLocation(20, 20);
	try {
		f->setIcon(true);
	} catch ($PropertyVetoException& ex) {
		$plusAssignStatic($TestJInternalFrameIconify::errorMessage, $$str({$(ex->getMessage()), "\n"_s}));
	}
	$nc($TestJInternalFrameIconify::desktopPane)->add(f);
	f->setVisible(true);
	$nc($TestJInternalFrameIconify::frame)->setSize(500, 500);
	$nc($TestJInternalFrameIconify::frame)->setLocationRelativeTo(nullptr);
	$nc($TestJInternalFrameIconify::frame)->setVisible(true);
}

TestJInternalFrameIconify$1::TestJInternalFrameIconify$1() {
}

$Class* TestJInternalFrameIconify$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TestJInternalFrameIconify$1, val$lookAndFeelString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(TestJInternalFrameIconify$1, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJInternalFrameIconify$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJInternalFrameIconify",
		"createUI",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJInternalFrameIconify$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJInternalFrameIconify$1",
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
		"TestJInternalFrameIconify"
	};
	$loadClass(TestJInternalFrameIconify$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJInternalFrameIconify$1);
	});
	return class$;
}

$Class* TestJInternalFrameIconify$1::class$ = nullptr;