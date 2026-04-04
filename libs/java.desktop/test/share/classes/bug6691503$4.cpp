#include <bug6691503$4.h>
#include <bug6691503.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6691503 = ::bug6691503;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6691503$4::init$($bug6691503* this$0) {
	$set(this, this$0, this$0);
}

void bug6691503$4::run() {
	$nc(this->this$0->frame)->dispose();
}

bug6691503$4::bug6691503$4() {
}

$Class* bug6691503$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6691503;", nullptr, $FINAL | $SYNTHETIC, $field(bug6691503$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6691503;)V", nullptr, 0, $method(bug6691503$4, init$, void, $bug6691503*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6691503$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6691503",
		"stopEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6691503$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6691503$4",
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
		"bug6691503"
	};
	$loadClass(bug6691503$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6691503$4);
	});
	return class$;
}

$Class* bug6691503$4::class$ = nullptr;