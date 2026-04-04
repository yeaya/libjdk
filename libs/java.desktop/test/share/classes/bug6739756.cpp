#include <bug6739756.h>
#include <bug6739756$1.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug6739756$1 = ::bug6739756$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

void bug6739756::init$() {
}

void bug6739756::main($StringArray* args) {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	} catch ($Exception& e) {
		e->printStackTrace();
		return;
	}
	$SwingUtilities::invokeAndWait($$new($bug6739756$1));
}

bug6739756::bug6739756() {
}

$Class* bug6739756::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6739756, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6739756, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6739756$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6739756",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6739756$1"
	};
	$loadClass(bug6739756, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6739756);
	});
	return class$;
}

$Class* bug6739756::class$ = nullptr;