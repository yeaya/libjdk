#include <bug4697612$5.h>
#include <bug4697612.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4697612$5::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4697612$5::run() {
	$init($bug4697612);
	$nc(this->val$result)->set(0, $nc($bug4697612::text)->getCaretPosition());
}

bug4697612$5::bug4697612$5() {
}

$Class* bug4697612$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$5, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", "()V", 0, $method(bug4697612$5, init$, void, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4697612$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4697612",
		"getTextCaretPosition",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4697612$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4697612$5",
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
	$loadClass(bug4697612$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4697612$5);
	});
	return class$;
}

$Class* bug4697612$5::class$ = nullptr;