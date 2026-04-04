#include <bug7141573$1.h>
#include <bug7141573.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JProgressBar = ::javax::swing::JProgressBar;

void bug7141573$1::init$() {
}

void bug7141573$1::run() {
	$useLocalObjectStack();
	$var($BufferedImage, image, $new($BufferedImage, 200, 200, $BufferedImage::TYPE_INT_ARGB));
	$var($JProgressBar, bar, $new($JProgressBar));
	bar->setStringPainted(true);
	bar->setSize(100, 1);
	bar->paint($(image->getGraphics()));
	bar->setSize(1, 100);
	bar->paint($(image->getGraphics()));
	$nc($System::out)->println("The test bug7141573 is passed."_s);
}

bug7141573$1::bug7141573$1() {
}

$Class* bug7141573$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7141573$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7141573$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7141573",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7141573$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7141573$1",
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
		"bug7141573"
	};
	$loadClass(bug7141573$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7141573$1);
	});
	return class$;
}

$Class* bug7141573$1::class$ = nullptr;