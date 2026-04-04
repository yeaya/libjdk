#include <SetInvokerJPopupMenuTest$1.h>
#include <SetInvokerJPopupMenuTest$MyPopupMenu.h>
#include <SetInvokerJPopupMenuTest.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $SetInvokerJPopupMenuTest = ::SetInvokerJPopupMenuTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SetInvokerJPopupMenuTest$1::init$() {
}

void SetInvokerJPopupMenuTest$1::actionPerformed($ActionEvent* ev) {
	$init($SetInvokerJPopupMenuTest);
	if (!$nc($SetInvokerJPopupMenuTest::popup)->isVisible()) {
		$SetInvokerJPopupMenuTest::postUp();
	} else {
		$SetInvokerJPopupMenuTest::postDown();
	}
}

SetInvokerJPopupMenuTest$1::SetInvokerJPopupMenuTest$1() {
}

$Class* SetInvokerJPopupMenuTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SetInvokerJPopupMenuTest$1, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SetInvokerJPopupMenuTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SetInvokerJPopupMenuTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SetInvokerJPopupMenuTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SetInvokerJPopupMenuTest$1",
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
		"SetInvokerJPopupMenuTest"
	};
	$loadClass(SetInvokerJPopupMenuTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetInvokerJPopupMenuTest$1);
	});
	return class$;
}

$Class* SetInvokerJPopupMenuTest$1::class$ = nullptr;