#include <bug8041561$1.h>
#include <bug8041561.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug8041561 = ::bug8041561;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug8041561$1::init$() {
}

void bug8041561$1::run() {
	$useLocalObjectStack();
	try {
		$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
		$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
		$bug8041561::createAndShowGUI();
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	}
}

bug8041561$1::bug8041561$1() {
}

$Class* bug8041561$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8041561$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8041561$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8041561",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041561$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8041561$1",
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
		"bug8041561"
	};
	$loadClass(bug8041561$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041561$1);
	});
	return class$;
}

$Class* bug8041561$1::class$ = nullptr;