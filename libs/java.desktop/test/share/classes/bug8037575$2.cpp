#include <bug8037575$2.h>
#include <Sysout.h>
#include <bug8037575.h>
#include <java/awt/Frame.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $Sysout = ::Sysout;
using $bug8037575 = ::bug8037575;
using $Frame = ::java::awt::Frame;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

void bug8037575$2::init$() {
	$AbstractAction::init$();
}

void bug8037575$2::actionPerformed($ActionEvent* ae) {
	$init($bug8037575);
	$nc($bug8037575::frame)->setExtendedState($Frame::ICONIFIED);
	$bug8037575::frame->dispose();
	$Sysout::println("Test completed please press/fail button"_s);
}

bug8037575$2::bug8037575$2() {
}

$Class* bug8037575$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8037575$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8037575$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8037575",
		"runTest",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8037575$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8037575$2",
		"javax.swing.AbstractAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8037575"
	};
	$loadClass(bug8037575$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8037575$2));
	});
	return class$;
}

$Class* bug8037575$2::class$ = nullptr;