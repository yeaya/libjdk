#include <LastNodeLowerHalfDrop$2.h>
#include <LastNodeLowerHalfDrop.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $LastNodeLowerHalfDrop = ::LastNodeLowerHalfDrop;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastNodeLowerHalfDrop$2::init$() {
}

void LastNodeLowerHalfDrop$2::run() {
	$init($LastNodeLowerHalfDrop);
	$nc($LastNodeLowerHalfDrop::f)->dispose();
}

LastNodeLowerHalfDrop$2::LastNodeLowerHalfDrop$2() {
}

$Class* LastNodeLowerHalfDrop$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LastNodeLowerHalfDrop$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastNodeLowerHalfDrop$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastNodeLowerHalfDrop",
		"cleanUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastNodeLowerHalfDrop$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastNodeLowerHalfDrop$2",
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
		"LastNodeLowerHalfDrop"
	};
	$loadClass(LastNodeLowerHalfDrop$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastNodeLowerHalfDrop$2);
	});
	return class$;
}

$Class* LastNodeLowerHalfDrop$2::class$ = nullptr;