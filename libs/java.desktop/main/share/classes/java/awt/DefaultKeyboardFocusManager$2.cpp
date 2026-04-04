#include <java/awt/DefaultKeyboardFocusManager$2.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void DefaultKeyboardFocusManager$2::init$() {
}

$Object* DefaultKeyboardFocusManager$2::run() {
	$init($DefaultKeyboardFocusManager);
	$DefaultKeyboardFocusManager::fxAppThreadIsDispatchThread = "true"_s->equals($($System::getProperty("javafx.embed.singleThread"_s)));
	return nullptr;
}

DefaultKeyboardFocusManager$2::DefaultKeyboardFocusManager$2() {
}

$Class* DefaultKeyboardFocusManager$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultKeyboardFocusManager$2, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultKeyboardFocusManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.DefaultKeyboardFocusManager",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.DefaultKeyboardFocusManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.DefaultKeyboardFocusManager$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.DefaultKeyboardFocusManager"
	};
	$loadClass(DefaultKeyboardFocusManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultKeyboardFocusManager$2);
	});
	return class$;
}

$Class* DefaultKeyboardFocusManager$2::class$ = nullptr;

	} // awt
} // java