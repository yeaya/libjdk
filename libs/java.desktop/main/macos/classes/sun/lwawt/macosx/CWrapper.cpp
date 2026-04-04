#include <sun/lwawt/macosx/CWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWrapper::init$() {
}

CWrapper::CWrapper() {
}

$Class* CWrapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CWrapper, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWrapper$NSView", "sun.lwawt.macosx.CWrapper", "NSView", $STATIC | $FINAL},
		{"sun.lwawt.macosx.CWrapper$NSWindow", "sun.lwawt.macosx.CWrapper", "NSWindow", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CWrapper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CWrapper$NSView,sun.lwawt.macosx.CWrapper$NSWindow"
	};
	$loadClass(CWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWrapper);
	});
	return class$;
}

$Class* CWrapper::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun