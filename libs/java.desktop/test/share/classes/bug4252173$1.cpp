#include <bug4252173$1.h>
#include <bug4252173.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef TYPE_4BYTE_ABGR

using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug4252173$1::init$() {
}

void bug4252173$1::run() {
	$useLocalObjectStack();
	$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
	$var($JComponent, component, $new($JLabel));
	$var($Icon, horizontalThumbIcon, $UIManager::getIcon("Slider.horizontalThumbIcon"_s));
	$var($Icon, verticalThumbIcon, $UIManager::getIcon("Slider.verticalThumbIcon"_s));
	$var($Graphics, g, $$new($BufferedImage, 100, 100, $BufferedImage::TYPE_4BYTE_ABGR)->getGraphics());
	$nc(horizontalThumbIcon)->paintIcon(component, g, 0, 0);
	$nc(verticalThumbIcon)->paintIcon(component, g, 0, 0);
}

bug4252173$1::bug4252173$1() {
}

$Class* bug4252173$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4252173$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4252173$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4252173",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4252173$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4252173$1",
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
		"bug4252173"
	};
	$loadClass(bug4252173$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4252173$1);
	});
	return class$;
}

$Class* bug4252173$1::class$ = nullptr;