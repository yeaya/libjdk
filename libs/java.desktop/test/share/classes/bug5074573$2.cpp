#include <bug5074573$2.h>
#include <bug5074573.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug5074573 = ::bug5074573;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Caret = ::javax::swing::text::Caret;

void bug5074573$2::init$() {
}

void bug5074573$2::run() {
	$init($bug5074573);
	$var($Caret, caret, $nc($bug5074573::textComponent)->getCaret());
	int32_t dot = $nc(caret)->getDot();
	$nc($bug5074573::textComponent)->select(dot, dot);
}

bug5074573$2::bug5074573$2() {
}

$Class* bug5074573$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug5074573$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug5074573$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug5074573",
		"test",
		"(Ljava/lang/Class;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5074573$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug5074573$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug5074573"
	};
	$loadClass(bug5074573$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5074573$2);
	});
	return class$;
}

$Class* bug5074573$2::class$ = nullptr;