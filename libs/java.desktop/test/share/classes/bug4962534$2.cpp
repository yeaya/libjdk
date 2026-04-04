#include <bug4962534$2.h>
#include <bug4962534.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4962534$2::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$2::run() {
	$init($bug4962534);
	$set(this->this$0, lPane, $nc($bug4962534::frame)->getLayeredPane());
	$nc($System::out)->println($$str({"JFrame\'s LayeredPane "_s, this->this$0->lPane}));
}

bug4962534$2::bug4962534$2() {
}

$Class* bug4962534$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(bug4962534$2, init$, void, $bug4962534*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4962534",
		"setJLayeredPaneEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4962534$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4962534"
	};
	$loadClass(bug4962534$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$2);
	});
	return class$;
}

$Class* bug4962534$2::class$ = nullptr;