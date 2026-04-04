#include <sun/lwawt/macosx/CWarningWindow$Lock.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWarningWindow$Lock::init$() {
}

CWarningWindow$Lock::CWarningWindow$Lock() {
}

$Class* CWarningWindow$Lock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CWarningWindow$Lock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWarningWindow$Lock", "sun.lwawt.macosx.CWarningWindow", "Lock", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CWarningWindow$Lock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CWarningWindow"
	};
	$loadClass(CWarningWindow$Lock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWarningWindow$Lock);
	});
	return class$;
}

$Class* CWarningWindow$Lock::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun