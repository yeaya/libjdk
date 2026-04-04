#include <ContextMenuScrollTest$4.h>
#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ContextMenuScrollTest$4::init$() {
}

void ContextMenuScrollTest$4::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$4::ContextMenuScrollTest$4() {
}

$Class* ContextMenuScrollTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ContextMenuScrollTest$4, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextMenuScrollTest$4, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ContextMenuScrollTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ContextMenuScrollTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ContextMenuScrollTest$4",
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
	$loadClass(ContextMenuScrollTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContextMenuScrollTest$4);
	});
	return class$;
}

$Class* ContextMenuScrollTest$4::class$ = nullptr;