#include <sun/java2d/marlin/Version.h>
#include <jcpp.h>

#undef VERSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

$String* Version::VERSION = nullptr;

$String* Version::getVersion() {
	$init(Version);
	return Version::VERSION;
}

void Version::init$() {
}

Version::Version() {
}

void Version::clinit$($Class* clazz) {
	$assignStatic(Version::VERSION, "marlin-0.9.1.4-Unsafe-OpenJDK"_s);
}

$Class* Version::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Version, VERSION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Version, init$, void)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getVersion, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.marlin.Version",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Version, name, initialize, &classInfo$$, Version::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Version);
	});
	return class$;
}

$Class* Version::class$ = nullptr;

		} // marlin
	} // java2d
} // sun