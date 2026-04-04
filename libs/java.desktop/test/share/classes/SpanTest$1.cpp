#include <SpanTest$1.h>
#include <SpanTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef CENTER

using $SpanTest = ::SpanTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

void SpanTest$1::init$() {
}

void SpanTest$1::run() {
	$useLocalObjectStack();
	$var($JLabel, label, $new($JLabel, "<html><span>A few words to get started before the bug</span><span>overlapping text</span></html>"_s));
	$init($SpanTest);
	$assignStatic($SpanTest::f, $new($JFrame, ""_s));
	$init($BorderLayout);
	$$nc($SpanTest::f->getContentPane())->add(label, $BorderLayout::CENTER);
	$nc($SpanTest::f)->setSize(500, 500);
	$nc($SpanTest::f)->setVisible(true);
}

SpanTest$1::SpanTest$1() {
}

$Class* SpanTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpanTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpanTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SpanTest",
		"spanTest",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpanTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpanTest$1",
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
		"SpanTest"
	};
	$loadClass(SpanTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanTest$1);
	});
	return class$;
}

$Class* SpanTest$1::class$ = nullptr;