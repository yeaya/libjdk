#include <bug6868611$1.h>
#include <bug6868611.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $bug6868611 = ::bug6868611;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

void bug6868611$1::init$() {
}

void bug6868611$1::run() {
	$init($bug6868611);
	$$nc($FileSystemView::getFileSystemView())->getFiles($bug6868611::tempFolder, false);
}

bug6868611$1::bug6868611$1() {
}

$Class* bug6868611$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6868611$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6868611$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6868611",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6868611$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6868611$1",
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
		"bug6868611"
	};
	$loadClass(bug6868611$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6868611$1);
	});
	return class$;
}

$Class* bug6868611$1::class$ = nullptr;