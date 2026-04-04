#include <DockIconRepaint$1.h>
#include <DockIconRepaint.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $DockIconRepaint = ::DockIconRepaint;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

void DockIconRepaint$1::init$() {
	$JPanel::init$();
}

void DockIconRepaint$1::paintComponent($Graphics* g) {
	$init($DockIconRepaint);
	$nc(g)->setColor($DockIconRepaint::color);
	int32_t var$0 = getWidth();
	g->fillRect(0, 0, var$0, getHeight());
}

DockIconRepaint$1::DockIconRepaint$1() {
}

$Class* DockIconRepaint$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DockIconRepaint$1, init$, void)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(DockIconRepaint$1, paintComponent, void, $Graphics*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DockIconRepaint",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DockIconRepaint$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DockIconRepaint$1",
		"javax.swing.JPanel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DockIconRepaint"
	};
	$loadClass(DockIconRepaint$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DockIconRepaint$1));
	});
	return class$;
}

$Class* DockIconRepaint$1::class$ = nullptr;