#include <JMenuItemToolTipKeyBindingsTest$1.h>
#include <JMenuItemToolTipKeyBindingsTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $JMenuItemToolTipKeyBindingsTest = ::JMenuItemToolTipKeyBindingsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JMenuItemToolTipKeyBindingsTest$1::init$() {
}

void JMenuItemToolTipKeyBindingsTest$1::actionPerformed($ActionEvent* e) {
	$init($JMenuItemToolTipKeyBindingsTest);
	$JMenuItemToolTipKeyBindingsTest::testResult = true;
	$JMenuItemToolTipKeyBindingsTest::completeTest();
}

JMenuItemToolTipKeyBindingsTest$1::JMenuItemToolTipKeyBindingsTest$1() {
}

$Class* JMenuItemToolTipKeyBindingsTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JMenuItemToolTipKeyBindingsTest$1, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItemToolTipKeyBindingsTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JMenuItemToolTipKeyBindingsTest",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JMenuItemToolTipKeyBindingsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JMenuItemToolTipKeyBindingsTest$1",
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
		"JMenuItemToolTipKeyBindingsTest"
	};
	$loadClass(JMenuItemToolTipKeyBindingsTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMenuItemToolTipKeyBindingsTest$1);
	});
	return class$;
}

$Class* JMenuItemToolTipKeyBindingsTest$1::class$ = nullptr;