#include <NimbusGlueTest$2.h>
#include <NimbusGlueTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/Box.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH

using $NimbusGlueTest = ::NimbusGlueTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box = ::javax::swing::Box;
using $JFrame = ::javax::swing::JFrame;
using $JToolBar = ::javax::swing::JToolBar;

void NimbusGlueTest$2::init$() {
}

void NimbusGlueTest$2::run() {
	$useLocalObjectStack();
	$init($NimbusGlueTest);
	$assignStatic($NimbusGlueTest::frame, $new($JFrame));
	$assignStatic($NimbusGlueTest::bar, $new($JToolBar));
	$NimbusGlueTest::bar->add($($NimbusGlueTest::createButton(1)));
	$nc($NimbusGlueTest::bar)->add($($NimbusGlueTest::createButton(2)));
	$nc($NimbusGlueTest::bar)->add($($Box::createHorizontalGlue()));
	$nc($NimbusGlueTest::bar)->add($($NimbusGlueTest::createButton(3)));
	$init($BorderLayout);
	$nc($NimbusGlueTest::frame)->add($NimbusGlueTest::bar, $BorderLayout::NORTH);
	$nc($NimbusGlueTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($NimbusGlueTest::frame)->setSize(600, 400);
	$nc($NimbusGlueTest::frame)->setVisible(true);
}

NimbusGlueTest$2::NimbusGlueTest$2() {
}

$Class* NimbusGlueTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NimbusGlueTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NimbusGlueTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NimbusGlueTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NimbusGlueTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NimbusGlueTest$2",
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
		"NimbusGlueTest"
	};
	$loadClass(NimbusGlueTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusGlueTest$2);
	});
	return class$;
}

$Class* NimbusGlueTest$2::class$ = nullptr;