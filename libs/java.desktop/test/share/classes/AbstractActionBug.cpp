#include <AbstractActionBug.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <jcpp.h>

#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;

void AbstractActionBug::main($StringArray* args) {
	$init(AbstractActionBug);
	$useLocalObjectStack();
	$var(AbstractActionBug, a1, $new(AbstractActionBug, "a1"_s));
	$assign(a1, $cast(AbstractActionBug, a1->clone()));
	$nc($System::out)->println("a1 cloned ok"_s);
	$var(AbstractActionBug, a2, $new(AbstractActionBug, "a2"_s));
	$init($Action);
	a2->putValue($Action::NAME, "null"_s);
	$assign(a2, $cast(AbstractActionBug, a2->clone()));
	$System::out->println("a2 cloned ok"_s);
	$var(AbstractActionBug, a3, $new(AbstractActionBug, nullptr));
	$assign(a3, $cast(AbstractActionBug, a3->clone()));
	$System::out->println("a3 cloned ok"_s);
}

void AbstractActionBug::init$($String* name) {
	$AbstractAction::init$();
	$init($Action);
	putValue($Action::NAME, name);
}

void AbstractActionBug::actionPerformed($ActionEvent* e) {
}

AbstractActionBug::AbstractActionBug() {
}

$Class* AbstractActionBug::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(AbstractActionBug, init$, void, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AbstractActionBug, actionPerformed, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(AbstractActionBug, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"AbstractActionBug",
		"javax.swing.AbstractAction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AbstractActionBug, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractActionBug));
	});
	return class$;
}

$Class* AbstractActionBug::class$ = nullptr;