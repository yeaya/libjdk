#include <JMenuItemToolTipKeyBindingsTest$2.h>
#include <JMenuItemToolTipKeyBindingsTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $JMenuItemToolTipKeyBindingsTest = ::JMenuItemToolTipKeyBindingsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JMenuItemToolTipKeyBindingsTest$2::init$() {
}

void JMenuItemToolTipKeyBindingsTest$2::actionPerformed($ActionEvent* e) {
	$init($JMenuItemToolTipKeyBindingsTest);
	$JMenuItemToolTipKeyBindingsTest::testResult = false;
	$JMenuItemToolTipKeyBindingsTest::completeTest();
}

JMenuItemToolTipKeyBindingsTest$2::JMenuItemToolTipKeyBindingsTest$2() {
}

$Class* JMenuItemToolTipKeyBindingsTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JMenuItemToolTipKeyBindingsTest$2, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JMenuItemToolTipKeyBindingsTest$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JMenuItemToolTipKeyBindingsTest",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JMenuItemToolTipKeyBindingsTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JMenuItemToolTipKeyBindingsTest$2",
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
	$loadClass(JMenuItemToolTipKeyBindingsTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMenuItemToolTipKeyBindingsTest$2);
	});
	return class$;
}

$Class* JMenuItemToolTipKeyBindingsTest$2::class$ = nullptr;