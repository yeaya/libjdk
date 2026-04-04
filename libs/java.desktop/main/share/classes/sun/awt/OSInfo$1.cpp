#include <sun/awt/OSInfo$1.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OSInfo = ::sun::awt::OSInfo;

namespace sun {
	namespace awt {

void OSInfo$1::init$() {
}

$Object* OSInfo$1::run() {
	return $of($OSInfo::getOSType());
}

OSInfo$1::OSInfo$1() {
}

$Class* OSInfo$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(OSInfo$1, init$, void)},
		{"run", "()Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC, $virtualMethod(OSInfo$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.OSInfo",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.OSInfo$1", nullptr, nullptr, 0},
		{"sun.awt.OSInfo$OSType", "sun.awt.OSInfo", "OSType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.OSInfo$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/awt/OSInfo$OSType;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.OSInfo"
	};
	$loadClass(OSInfo$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OSInfo$1);
	});
	return class$;
}

$Class* OSInfo$1::class$ = nullptr;

	} // awt
} // sun