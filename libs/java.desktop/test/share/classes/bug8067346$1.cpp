#include <bug8067346$1.h>
#include <bug8067346.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $bug8067346 = ::bug8067346;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

void bug8067346$1::init$() {
}

void bug8067346$1::run() {
	$useLocalObjectStack();
	$var($bug8067346, test, $new($bug8067346));
	try {
		$var($String, lnf, "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
		$UIManager::setLookAndFeel(lnf);
	} catch ($UnsupportedLookAndFeelException& e) {
		$bug8067346::runTest = false;
	} catch ($ClassNotFoundException& e) {
		$bug8067346::runTest = false;
	} catch ($InstantiationException& e) {
		$bug8067346::runTest = false;
	} catch ($IllegalAccessException& e) {
		$bug8067346::runTest = false;
	}
	if ($bug8067346::runTest) {
		test->createUI();
		test->performTest();
		test->dispose();
	}
}

bug8067346$1::bug8067346$1() {
}

$Class* bug8067346$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8067346$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8067346$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8067346",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8067346$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8067346$1",
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
		"bug8067346"
	};
	$loadClass(bug8067346$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8067346$1);
	});
	return class$;
}

$Class* bug8067346$1::class$ = nullptr;