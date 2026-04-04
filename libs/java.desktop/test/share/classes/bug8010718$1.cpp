#include <bug8010718$1.h>
#include <bug8010718$1$1.h>
#include <bug8010718$1$2.h>
#include <bug8010718.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $bug8010718$1$1 = ::bug8010718$1$1;
using $bug8010718$1$2 = ::bug8010718$1$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFileChooser = ::javax::swing::JFileChooser;

void bug8010718$1::init$() {
}

void bug8010718$1::run() {
	$useLocalObjectStack();
	$var($JFileChooser, fileChooser, $new($JFileChooser));
	fileChooser->addChoosableFileFilter($$new($bug8010718$1$1, this));
	fileChooser->addChoosableFileFilter($$new($bug8010718$1$2, this));
	if (fileChooser->getFileFilter() == nullptr) {
		$throwNew($RuntimeException, "getFileFilter() should not return null"_s);
	}
}

bug8010718$1::bug8010718$1() {
}

$Class* bug8010718$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8010718$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8010718$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8010718",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8010718$1", nullptr, nullptr, 0},
		{"bug8010718$1$2", nullptr, nullptr, 0},
		{"bug8010718$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8010718$1",
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
		"bug8010718"
	};
	$loadClass(bug8010718$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8010718$1);
	});
	return class$;
}

$Class* bug8010718$1::class$ = nullptr;