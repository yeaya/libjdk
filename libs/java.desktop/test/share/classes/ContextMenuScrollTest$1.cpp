#include <ContextMenuScrollTest$1.h>
#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ContextMenuScrollTest$1::init$() {
}

void ContextMenuScrollTest$1::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$1::ContextMenuScrollTest$1() {
}

$Class* ContextMenuScrollTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ContextMenuScrollTest$1, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextMenuScrollTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ContextMenuScrollTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ContextMenuScrollTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ContextMenuScrollTest$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ContextMenuScrollTest"
	};
	$loadClass(ContextMenuScrollTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContextMenuScrollTest$1);
	});
	return class$;
}

$Class* ContextMenuScrollTest$1::class$ = nullptr;