#include <sun/lwawt/macosx/LWCToolkit$2.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void LWCToolkit$2::init$() {
}

$Object* LWCToolkit$2::run() {
	return $of($Boolean::valueOf(!$Boolean::parseBoolean($($System::getProperty("javafx.embed.singleThread"_s, "false"_s)))));
}

LWCToolkit$2::LWCToolkit$2() {
}

$Class* LWCToolkit$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LWCToolkit$2, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(LWCToolkit$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.LWCToolkit",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.LWCToolkit$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.LWCToolkit$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.LWCToolkit"
	};
	$loadClass(LWCToolkit$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCToolkit$2);
	});
	return class$;
}

$Class* LWCToolkit$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun