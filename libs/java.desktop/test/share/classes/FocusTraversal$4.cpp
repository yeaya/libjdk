#include <FocusTraversal$4.h>
#include <FocusTraversal.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $FocusTraversal = ::FocusTraversal;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FocusTraversal$4::init$() {
}

void FocusTraversal$4::run() {
	$init($FocusTraversal);
	$nc($FocusTraversal::frame)->dispose();
}

FocusTraversal$4::FocusTraversal$4() {
}

$Class* FocusTraversal$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FocusTraversal$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FocusTraversal$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FocusTraversal",
		"cleanUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FocusTraversal$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FocusTraversal$4",
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
		"FocusTraversal"
	};
	$loadClass(FocusTraversal$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusTraversal$4);
	});
	return class$;
}

$Class* FocusTraversal$4::class$ = nullptr;