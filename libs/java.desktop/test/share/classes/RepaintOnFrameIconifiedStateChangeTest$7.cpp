#include <RepaintOnFrameIconifiedStateChangeTest$7.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

void RepaintOnFrameIconifiedStateChangeTest$7::init$($String* arg0) {
	$JButton::init$(arg0);
}

void RepaintOnFrameIconifiedStateChangeTest$7::paint($Graphics* g) {
	$JButton::paint(g);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	if ($RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->set(1, true);
	}
}

RepaintOnFrameIconifiedStateChangeTest$7::RepaintOnFrameIconifiedStateChangeTest$7() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(RepaintOnFrameIconifiedStateChangeTest$7, init$, void, $String*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(RepaintOnFrameIconifiedStateChangeTest$7, paint, void, $Graphics*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintOnFrameIconifiedStateChangeTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintOnFrameIconifiedStateChangeTest$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintOnFrameIconifiedStateChangeTest$7",
		"javax.swing.JButton",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RepaintOnFrameIconifiedStateChangeTest"
	};
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$7));
	});
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$7::class$ = nullptr;