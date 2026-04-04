#include <bug7160604$1.h>
#include <bug7160604.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $bug7160604 = ::bug7160604;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

void bug7160604$1::init$($bug7160604* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0);
}

void bug7160604$1::actionPerformed($ActionEvent* e) {
}

bug7160604$1::bug7160604$1() {
}

$Class* bug7160604$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7160604;", nullptr, $FINAL | $SYNTHETIC, $field(bug7160604$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7160604;Ljava/lang/String;)V", nullptr, 0, $method(bug7160604$1, init$, void, $bug7160604*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7160604$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7160604",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7160604$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7160604$1",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7160604"
	};
	$loadClass(bug7160604$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7160604$1));
	});
	return class$;
}

$Class* bug7160604$1::class$ = nullptr;