#include <HiddenDefaultButtonTest$1.h>
#include <HiddenDefaultButtonTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $HiddenDefaultButtonTest = ::HiddenDefaultButtonTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HiddenDefaultButtonTest$1::init$() {
}

void HiddenDefaultButtonTest$1::actionPerformed($ActionEvent* e) {
	$init($HiddenDefaultButtonTest);
	++$HiddenDefaultButtonTest::ButtonClickCount;
}

HiddenDefaultButtonTest$1::HiddenDefaultButtonTest$1() {
}

$Class* HiddenDefaultButtonTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HiddenDefaultButtonTest$1, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(HiddenDefaultButtonTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HiddenDefaultButtonTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HiddenDefaultButtonTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HiddenDefaultButtonTest$1",
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
		"HiddenDefaultButtonTest"
	};
	$loadClass(HiddenDefaultButtonTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HiddenDefaultButtonTest$1);
	});
	return class$;
}

$Class* HiddenDefaultButtonTest$1::class$ = nullptr;