#include <bug6918861$1.h>
#include <bug6918861$HackedSynthSliderUI.h>
#include <bug6918861.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/SliderUI.h>
#include <jcpp.h>

using $bug6918861$HackedSynthSliderUI = ::bug6918861$HackedSynthSliderUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JSlider = ::javax::swing::JSlider;
using $SliderUI = ::javax::swing::plaf::SliderUI;

void bug6918861$1::init$() {
}

void bug6918861$1::run() {
	$useLocalObjectStack();
	$var($JSlider, slider, $new($JSlider));
	$var($bug6918861$HackedSynthSliderUI, ui, $new($bug6918861$HackedSynthSliderUI, slider));
	slider->setUI(ui);
	if (ui->counter != 111) {
		$throwNew($RuntimeException, "Some installers of SynthSliderUI weren\'t invoked"_s);
	}
	slider->setUI(($SliderUI*)nullptr);
	if (ui->counter != 0) {
		$throwNew($RuntimeException, "Some uninstallers of SynthSliderUI weren\'t invoked"_s);
	}
}

bug6918861$1::bug6918861$1() {
}

$Class* bug6918861$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6918861$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6918861$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6918861",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6918861$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6918861$1",
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
		"bug6918861"
	};
	$loadClass(bug6918861$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6918861$1);
	});
	return class$;
}

$Class* bug6918861$1::class$ = nullptr;