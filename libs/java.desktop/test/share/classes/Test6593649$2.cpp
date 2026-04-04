#include <Test6593649$2.h>
#include <Test6593649.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef LINE_AXIS
#undef SOUTH

using $Test6593649 = ::Test6593649;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;

void Test6593649$2::init$() {
}

void Test6593649$2::run() {
	$useLocalObjectStack();
	$init($Test6593649);
	$assignStatic($Test6593649::frame, $new($JFrame));
	$Test6593649::frame->setSize(200, 100);
	$assignStatic($Test6593649::textArea, $new($JTextArea, "This is a long line that should wrap, but doesn\'t..."_s));
	$Test6593649::textArea->setLineWrap(true);
	$nc($Test6593649::textArea)->setWrapStyleWord(true);
	$var($JPanel, innerPanel, $new($JPanel));
	innerPanel->setLayout($$new($BoxLayout, innerPanel, $BoxLayout::LINE_AXIS));
	innerPanel->add($Test6593649::textArea);
	$init($BorderLayout);
	$$nc($nc($Test6593649::frame)->getContentPane())->add(innerPanel, $BorderLayout::SOUTH);
	$nc($Test6593649::frame)->setVisible(true);
	$nc($Test6593649::timer)->setRepeats(false);
	$Test6593649::timer->start();
}

Test6593649$2::Test6593649$2() {
}

$Class* Test6593649$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6593649$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6593649$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6593649",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6593649$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6593649$2",
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
		"Test6593649"
	};
	$loadClass(Test6593649$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6593649$2);
	});
	return class$;
}

$Class* Test6593649$2::class$ = nullptr;