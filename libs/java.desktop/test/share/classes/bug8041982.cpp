#include <bug8041982.h>
#include <bug8041982$1.h>
#include <bug8041982$BusyLayer.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8041982$1 = ::bug8041982$1;
using $bug8041982$BusyLayer = ::bug8041982$BusyLayer;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8041982::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($Component, var$0, $new($JPanel));
	add($$new($JLayer, var$0, $$new($bug8041982$BusyLayer, this)));
	setSize(200, 300);
	setVisible(true);
}

void bug8041982::main($StringArray* args) {
	$init(bug8041982);
	$SwingUtilities::invokeLater($$new($bug8041982$1));
	$Thread::sleep(5000);
}

bug8041982::bug8041982() {
}

$Class* bug8041982::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8041982, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug8041982, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041982$BusyLayer", "bug8041982", "BusyLayer", $PRIVATE},
		{"bug8041982$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8041982",
		"javax.swing.JFrame",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8041982$BusyLayer,bug8041982$1"
	};
	$loadClass(bug8041982, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8041982));
	});
	return class$;
}

$Class* bug8041982::class$ = nullptr;