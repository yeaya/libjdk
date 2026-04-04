#include <bug8058120$2.h>
#include <bug8058120.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $bug8058120 = ::bug8058120;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug8058120$2::init$() {
}

void bug8058120$2::run() {
	try {
		$init($bug8058120);
		$nc($bug8058120::document)->insertAfterEnd($($nc($bug8058120::document)->getElement("ab"_s)), "c"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
}

bug8058120$2::bug8058120$2() {
}

$Class* bug8058120$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8058120$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8058120$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8058120",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8058120$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8058120$2",
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
		"bug8058120"
	};
	$loadClass(bug8058120$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8058120$2);
	});
	return class$;
}

$Class* bug8058120$2::class$ = nullptr;