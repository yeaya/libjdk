#include <Test8039464$1.h>
#include <Test8039464.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE

using $Test8039464 = ::Test8039464;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void Test8039464$1::init$() {
}

void Test8039464$1::run() {
	$var($JFrame, frame, $new($JFrame, "8039464"_s));
	$Test8039464::init(frame);
	frame->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	frame->pack();
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

Test8039464$1::Test8039464$1() {
}

$Class* Test8039464$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test8039464$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8039464$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8039464",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8039464$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8039464$1",
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
		"Test8039464"
	};
	$loadClass(Test8039464$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8039464$1);
	});
	return class$;
}

$Class* Test8039464$1::class$ = nullptr;