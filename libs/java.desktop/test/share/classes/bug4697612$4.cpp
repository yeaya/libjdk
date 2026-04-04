#include <bug4697612$4.h>
#include <bug4697612.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4697612$4::init$($bug4697612* this$0) {
	$set(this, this$0, this$0);
}

void bug4697612$4::run() {
	$init($bug4697612);
	$nc($bug4697612::frame)->setSize(300, $bug4697612::frameHeight);
}

bug4697612$4::bug4697612$4() {
}

$Class* bug4697612$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4697612;", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4697612;)V", nullptr, 0, $method(bug4697612$4, init$, void, $bug4697612*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4697612$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4697612",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4697612$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4697612$4",
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
		"bug4697612"
	};
	$loadClass(bug4697612$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4697612$4);
	});
	return class$;
}

$Class* bug4697612$4::class$ = nullptr;