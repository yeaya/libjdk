#include <sun/lwawt/macosx/CAccessibility$32.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$32::init$() {
}

$Object* CAccessibility$32::call() {
	$useLocalObjectStack();
	$var($Component, c, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	if (c == nullptr || !($instanceOf($Accessible, c))) {
		return nullptr;
	}
	return $of($CAccessible::getCAccessible($cast($Accessible, c)));
}

CAccessibility$32::CAccessibility$32() {
}

$Class* CAccessibility$32::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CAccessibility$32, init$, void)},
		{"call", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$32, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getFocusOwner",
		"(Ljava/awt/Component;)Ljavax/accessibility/Accessible;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$32", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$32",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/Accessible;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$32);
	});
	return class$;
}

$Class* CAccessibility$32::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun