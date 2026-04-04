#include <ContextMenuScrollTest$5.h>
#include <ContextMenuScrollTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ContextMenuScrollTest$5::init$() {
}

void ContextMenuScrollTest$5::actionPerformed($ActionEvent* event) {
}

ContextMenuScrollTest$5::ContextMenuScrollTest$5() {
}

$Class* ContextMenuScrollTest$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ContextMenuScrollTest$5, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextMenuScrollTest$5, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ContextMenuScrollTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ContextMenuScrollTest$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ContextMenuScrollTest$5",
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
	$loadClass(ContextMenuScrollTest$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContextMenuScrollTest$5);
	});
	return class$;
}

$Class* ContextMenuScrollTest$5::class$ = nullptr;