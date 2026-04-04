#include <bug4529206$1.h>
#include <bug4529206.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug4529206 = ::bug4529206;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4529206$1::init$($bug4529206* this$0) {
	$set(this, this$0, this$0);
}

void bug4529206$1::actionPerformed($ActionEvent* e) {
	this->this$0->buttonPressed(e);
}

bug4529206$1::bug4529206$1() {
}

$Class* bug4529206$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4529206;", nullptr, $FINAL | $SYNTHETIC, $field(bug4529206$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4529206;)V", nullptr, 0, $method(bug4529206$1, init$, void, $bug4529206*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4529206$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4529206",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4529206$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4529206$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4529206"
	};
	$loadClass(bug4529206$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4529206$1);
	});
	return class$;
}

$Class* bug4529206$1::class$ = nullptr;