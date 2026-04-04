#include <bug7141573.h>
#include <bug7141573$1.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug7141573$1 = ::bug7141573$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

void bug7141573::init$() {
}

void bug7141573::main($StringArray* args) {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} catch ($Exception& e) {
		$nc($System::out)->println("WindowsLookAndFeel is not supported. The test bug7141573 is skipped."_s);
		return;
	}
	$SwingUtilities::invokeAndWait($$new($bug7141573$1));
}

bug7141573::bug7141573() {
}

$Class* bug7141573::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7141573, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7141573, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7141573$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7141573",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7141573$1"
	};
	$loadClass(bug7141573, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7141573);
	});
	return class$;
}

$Class* bug7141573::class$ = nullptr;