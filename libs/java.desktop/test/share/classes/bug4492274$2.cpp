#include <bug4492274$2.h>
#include <bug4492274.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $bug4492274 = ::bug4492274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

void bug4492274$2::init$() {
}

void bug4492274$2::run() {
	try {
		$init($bug4492274);
		$assignStatic($bug4492274::page, $new($URL, $bug4492274::page, "#linkname"_s));
		$nc($bug4492274::jep)->setPage($bug4492274::page);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

bug4492274$2::bug4492274$2() {
}

$Class* bug4492274$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4492274$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4492274$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4492274",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4492274$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4492274$2",
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
		"bug4492274"
	};
	$loadClass(bug4492274$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4492274$2);
	});
	return class$;
}

$Class* bug4492274$2::class$ = nullptr;