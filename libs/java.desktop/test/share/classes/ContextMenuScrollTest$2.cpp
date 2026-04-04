#include <ContextMenuScrollTest$2.h>
#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ContextMenuScrollTest$2::init$() {
}

void ContextMenuScrollTest$2::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$2::ContextMenuScrollTest$2() {
}

$Class* ContextMenuScrollTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ContextMenuScrollTest$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextMenuScrollTest$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ContextMenuScrollTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ContextMenuScrollTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ContextMenuScrollTest$2",
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
	$loadClass(ContextMenuScrollTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContextMenuScrollTest$2);
	});
	return class$;
}

$Class* ContextMenuScrollTest$2::class$ = nullptr;