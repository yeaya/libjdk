#include <bug4870644$1.h>
#include <bug4870644.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $bug4870644 = ::bug4870644;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

void bug4870644$1::init$($bug4870644* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void bug4870644$1::actionPerformed($ActionEvent* e) {
	$init($bug4870644);
	$bug4870644::passed = false;
}

bug4870644$1::bug4870644$1() {
}

$Class* bug4870644$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4870644;", nullptr, $FINAL | $SYNTHETIC, $field(bug4870644$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4870644;)V", nullptr, 0, $method(bug4870644$1, init$, void, $bug4870644*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4870644$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4870644",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4870644$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4870644$1",
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
		"bug4870644"
	};
	$loadClass(bug4870644$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4870644$1));
	});
	return class$;
}

$Class* bug4870644$1::class$ = nullptr;