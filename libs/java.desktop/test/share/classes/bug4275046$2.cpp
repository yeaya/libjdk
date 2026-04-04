#include <bug4275046$2.h>
#include <bug4275046.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4275046$2::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$2::run() {
	if (this->this$0->frame != nullptr) {
		this->this$0->frame->dispose();
	}
}

bug4275046$2::bug4275046$2() {
}

$Class* bug4275046$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(bug4275046$2, init$, void, $bug4275046*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4275046$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4275046",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4275046$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4275046$2",
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
		"bug4275046"
	};
	$loadClass(bug4275046$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4275046$2);
	});
	return class$;
}

$Class* bug4275046$2::class$ = nullptr;