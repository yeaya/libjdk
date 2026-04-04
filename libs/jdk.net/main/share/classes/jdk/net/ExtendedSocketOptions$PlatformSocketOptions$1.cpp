#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions$1.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace net {

void ExtendedSocketOptions$PlatformSocketOptions$1::init$() {
}

$Object* ExtendedSocketOptions$PlatformSocketOptions$1::run() {
	return $of($System::getProperty("os.name"_s));
}

ExtendedSocketOptions$PlatformSocketOptions$1::ExtendedSocketOptions$PlatformSocketOptions$1() {
}

$Class* ExtendedSocketOptions$PlatformSocketOptions$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ExtendedSocketOptions$PlatformSocketOptions$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedSocketOptions$PlatformSocketOptions$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.net.ExtendedSocketOptions$PlatformSocketOptions",
		"create",
		"()Ljdk/net/ExtendedSocketOptions$PlatformSocketOptions;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions", "jdk.net.ExtendedSocketOptions", "PlatformSocketOptions", $STATIC},
		{"jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.net.ExtendedSocketOptions"
	};
	$loadClass(ExtendedSocketOptions$PlatformSocketOptions$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedSocketOptions$PlatformSocketOptions$1);
	});
	return class$;
}

$Class* ExtendedSocketOptions$PlatformSocketOptions$1::class$ = nullptr;

	} // net
} // jdk