#include <ContextMenuScrollTest$6.h>
#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ContextMenuScrollTest$6::init$() {
}

void ContextMenuScrollTest$6::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$6::ContextMenuScrollTest$6() {
}

$Class* ContextMenuScrollTest$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ContextMenuScrollTest$6, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextMenuScrollTest$6, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ContextMenuScrollTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ContextMenuScrollTest$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ContextMenuScrollTest$6",
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
	$loadClass(ContextMenuScrollTest$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContextMenuScrollTest$6);
	});
	return class$;
}

$Class* ContextMenuScrollTest$6::class$ = nullptr;