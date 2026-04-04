#include <bug8021253$2.h>
#include <bug8021253.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug8021253 = ::bug8021253;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8021253$2::init$() {
}

void bug8021253$2::run() {
	$init($bug8021253);
	$nc($bug8021253::fileChooser)->setSelectedFile($bug8021253::file);
}

bug8021253$2::bug8021253$2() {
}

$Class* bug8021253$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8021253$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8021253$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8021253",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8021253$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8021253$2",
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
		"bug8021253"
	};
	$loadClass(bug8021253$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8021253$2);
	});
	return class$;
}

$Class* bug8021253$2::class$ = nullptr;