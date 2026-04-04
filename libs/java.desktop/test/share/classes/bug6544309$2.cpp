#include <bug6544309$2.h>
#include <bug6544309.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug6544309 = ::bug6544309;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6544309$2::init$($bug6544309* this$0) {
	$set(this, this$0, this$0);
}

void bug6544309$2::actionPerformed($ActionEvent* e) {
	this->this$0->passed = true;
}

bug6544309$2::bug6544309$2() {
}

$Class* bug6544309$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6544309;", nullptr, $FINAL | $SYNTHETIC, $field(bug6544309$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6544309;)V", nullptr, 0, $method(bug6544309$2, init$, void, $bug6544309*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6544309$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6544309",
		"setupUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6544309$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6544309$2",
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
		"bug6544309"
	};
	$loadClass(bug6544309$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6544309$2);
	});
	return class$;
}

$Class* bug6544309$2::class$ = nullptr;