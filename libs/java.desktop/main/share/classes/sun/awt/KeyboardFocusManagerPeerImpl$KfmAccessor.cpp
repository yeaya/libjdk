#include <sun/awt/KeyboardFocusManagerPeerImpl$KfmAccessor.h>
#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;

namespace sun {
	namespace awt {

$AWTAccessor$KeyboardFocusManagerAccessor* KeyboardFocusManagerPeerImpl$KfmAccessor::instance = nullptr;

void KeyboardFocusManagerPeerImpl$KfmAccessor::init$() {
}

void KeyboardFocusManagerPeerImpl$KfmAccessor::clinit$($Class* clazz) {
	$assignStatic(KeyboardFocusManagerPeerImpl$KfmAccessor::instance, $AWTAccessor::getKeyboardFocusManagerAccessor());
}

KeyboardFocusManagerPeerImpl$KfmAccessor::KeyboardFocusManagerPeerImpl$KfmAccessor() {
}

$Class* KeyboardFocusManagerPeerImpl$KfmAccessor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/AWTAccessor$KeyboardFocusManagerAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManagerPeerImpl$KfmAccessor, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyboardFocusManagerPeerImpl$KfmAccessor, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor", "sun.awt.KeyboardFocusManagerPeerImpl", "KfmAccessor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.KeyboardFocusManagerPeerImpl"
	};
	$loadClass(KeyboardFocusManagerPeerImpl$KfmAccessor, name, initialize, &classInfo$$, KeyboardFocusManagerPeerImpl$KfmAccessor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManagerPeerImpl$KfmAccessor);
	});
	return class$;
}

$Class* KeyboardFocusManagerPeerImpl$KfmAccessor::class$ = nullptr;

	} // awt
} // sun