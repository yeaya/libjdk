#include <Test6984643$2.h>
#include <Test6984643.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

void Test6984643$2::init$() {
}

void Test6984643$2::run() {
	$new($JFileChooser);
}

Test6984643$2::Test6984643$2() {
}

$Class* Test6984643$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6984643$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6984643$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6984643",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6984643$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6984643$2",
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
		"Test6984643"
	};
	$loadClass(Test6984643$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6984643$2);
	});
	return class$;
}

$Class* Test6984643$2::class$ = nullptr;