#include <sun/awt/CausedFocusEvent$1.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void CausedFocusEvent$1::init$() {
	$Component::init$();
}

CausedFocusEvent$1::CausedFocusEvent$1() {
}

$Class* CausedFocusEvent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CausedFocusEvent$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.CausedFocusEvent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.CausedFocusEvent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.CausedFocusEvent$1",
		"java.awt.Component",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.CausedFocusEvent"
	};
	$loadClass(CausedFocusEvent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CausedFocusEvent$1));
	});
	return class$;
}

$Class* CausedFocusEvent$1::class$ = nullptr;

	} // awt
} // sun