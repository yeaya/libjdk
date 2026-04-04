#include <bug6797139.h>
#include <bug6797139$1.h>
#include <bug6797139$2.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug6797139$1 = ::bug6797139$1;
using $bug6797139$2 = ::bug6797139$2;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6797139::init$() {
}

void bug6797139::createGui() {
	$useLocalObjectStack();
	$var($JButton, b, $new($JButton, "Probably"_s));
	b->setUI($$new($bug6797139$1));
	b->setSize($(b->getPreferredSize()));
	int32_t var$0 = b->getWidth();
	$var($BufferedImage, image, $new($BufferedImage, var$0, b->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, image->getGraphics());
	b->paint(g);
	$nc(g)->dispose();
}

void bug6797139::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6797139$2));
}

bug6797139::bug6797139() {
}

$Class* bug6797139::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6797139, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6797139, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6797139, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6797139$2", nullptr, nullptr, 0},
		{"bug6797139$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6797139",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6797139$2,bug6797139$1"
	};
	$loadClass(bug6797139, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6797139);
	});
	return class$;
}

$Class* bug6797139::class$ = nullptr;