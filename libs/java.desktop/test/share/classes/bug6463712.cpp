#include <bug6463712.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

void bug6463712::init$() {
	$useLocalObjectStack();
	$var($SpinnerNumberModel, m1, $new($SpinnerNumberModel));
	$var($JSpinner, s, $new($JSpinner, m1));
	s->addChangeListener(this);
	$var($SpinnerDateModel, m2, $new($SpinnerDateModel));
	s->setModel(m2);
	m1->setValue($$new($Integer, 1));
}

void bug6463712::stateChanged($ChangeEvent* e) {
	$throwNew($RuntimeException, "Should not receive this event."_s);
}

void bug6463712::main($StringArray* args) {
	$init(bug6463712);
	$var(bug6463712, bug, $new(bug6463712));
}

bug6463712::bug6463712() {
}

$Class* bug6463712::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6463712, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6463712, main, void, $StringArray*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6463712, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6463712",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6463712, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6463712);
	});
	return class$;
}

$Class* bug6463712::class$ = nullptr;