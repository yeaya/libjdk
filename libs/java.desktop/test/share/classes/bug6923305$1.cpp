#include <bug6923305$1.h>
#include <bug6923305$1$1.h>
#include <bug6923305.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/SliderUI.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug6923305$1$1 = ::bug6923305$1$1;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;

void bug6923305$1::init$() {
}

void bug6923305$1::run() {
	$useLocalObjectStack();
	$var($JSlider, slider, $new($JSlider));
	slider->setUI($$new($bug6923305$1$1, this, slider));
	slider->setPaintTrack(false);
	slider->setSize($(slider->getPreferredSize()));
	int32_t var$0 = slider->getWidth();
	$var($BufferedImage, bufferedImage, $new($BufferedImage, var$0, slider->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	slider->paint($(bufferedImage->getGraphics()));
}

bug6923305$1::bug6923305$1() {
}

$Class* bug6923305$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6923305$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6923305$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6923305",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6923305$1", nullptr, nullptr, 0},
		{"bug6923305$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6923305$1",
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
		"bug6923305"
	};
	$loadClass(bug6923305$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6923305$1);
	});
	return class$;
}

$Class* bug6923305$1::class$ = nullptr;