#include <bug6726866.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef GREEN

using $Color = ::java::awt::Color;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;

void bug6726866::init$() {
	$JApplet::init$();
}

void bug6726866::init() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame, "bug6726866"_s));
	frame->setUndecorated(true);
	setWindowNonOpaque(frame);
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$init($Color);
	desktop->setBackground($Color::GREEN);
	$var($JInternalFrame, iFrame, $new($JInternalFrame, "Test"_s, true, true, true, true));
	iFrame->add($$new($JLabel, "internal Frame"_s));
	iFrame->setBounds(10, 10, 300, 200);
	iFrame->setVisible(true);
	desktop->add(iFrame);
	frame->add(desktop);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setSize(400, 400);
	frame->setVisible(true);
	frame->toFront();
}

void bug6726866::setWindowNonOpaque($Window* window) {
	$init(bug6726866);
	$useLocalObjectStack();
	$var($Color, bg, $nc(window)->getBackground());
	if (bg == nullptr) {
		$assign(bg, $new($Color, 0, 0, 0, 0));
	}
	int32_t var$0 = $nc(bg)->getRed();
	int32_t var$1 = bg->getGreen();
	window->setBackground($$new($Color, var$0, var$1, bg->getBlue(), 0));
}

bug6726866::bug6726866() {
}

$Class* bug6726866::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6726866, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug6726866, init, void)},
		{"setWindowNonOpaque", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6726866, setWindowNonOpaque, void, $Window*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6726866",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6726866, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6726866));
	});
	return class$;
}

$Class* bug6726866::class$ = nullptr;