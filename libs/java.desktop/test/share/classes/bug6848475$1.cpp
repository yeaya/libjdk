#include <bug6848475$1.h>
#include <bug6848475$1$1.h>
#include <bug6848475.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

using $bug6848475 = ::bug6848475;
using $bug6848475$1$1 = ::bug6848475$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;

void bug6848475$1::init$() {
}

void bug6848475$1::run() {
	$useLocalObjectStack();
	$init($bug6848475);
	$assignStatic($bug6848475::frame, $new($JFrame));
	$var($DefaultBoundedRangeModel, sliderModel, $new($bug6848475$1$1, this));
	$assignStatic($bug6848475::slider, $new($JSlider, sliderModel));
	$$nc($bug6848475::frame->getContentPane())->add($bug6848475::slider);
	$nc($bug6848475::frame)->pack();
	$nc($bug6848475::frame)->setVisible(true);
}

bug6848475$1::bug6848475$1() {
}

$Class* bug6848475$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6848475$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6848475$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6848475",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6848475$1", nullptr, nullptr, 0},
		{"bug6848475$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6848475$1",
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
		"bug6848475"
	};
	$loadClass(bug6848475$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6848475$1);
	});
	return class$;
}

$Class* bug6848475$1::class$ = nullptr;