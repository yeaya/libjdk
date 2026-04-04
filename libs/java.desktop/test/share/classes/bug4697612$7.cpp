#include <bug4697612$7.h>
#include <bug4697612.h>
#include <java/awt/Point.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4697612$7::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4697612$7::run() {
	$useLocalObjectStack();
	$init($bug4697612);
	$nc(this->val$result)->set(0, $nc($($$nc($nc($bug4697612::scroller)->getViewport())->getViewPosition()))->y);
}

bug4697612$7::bug4697612$7() {
}

$Class* bug4697612$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$7, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", "()V", 0, $method(bug4697612$7, init$, void, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4697612$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4697612",
		"getScrollerViewPosition",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4697612$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4697612$7",
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
	$loadClass(bug4697612$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4697612$7);
	});
	return class$;
}

$Class* bug4697612$7::class$ = nullptr;