#include <bug6938583$1.h>
#include <bug6938583.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

#undef MOUSE_CLICKED

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

void bug6938583$1::init$() {
}

void bug6938583$1::run() {
	$useLocalObjectStack();
	$var($JTextArea, jta, $new($JTextArea));
	$var($DefaultCaret, dc, $new($DefaultCaret));
	jta->setCaret(dc);
	dc->deinstall(jta);
	dc->mouseClicked($$new($MouseEvent, jta, $MouseEvent::MOUSE_CLICKED, 0, 0, 0, 0, 0, false));
}

bug6938583$1::bug6938583$1() {
}

$Class* bug6938583$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6938583$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6938583$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6938583",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6938583$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6938583$1",
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
		"bug6938583"
	};
	$loadClass(bug6938583$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6938583$1);
	});
	return class$;
}

$Class* bug6938583$1::class$ = nullptr;