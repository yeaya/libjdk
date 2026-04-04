#include <com/sun/tools/javac/resources/LauncherProperties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void LauncherProperties::init$() {
}

LauncherProperties::LauncherProperties() {
}

$Class* LauncherProperties::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LauncherProperties, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.resources.LauncherProperties$Errors", "com.sun.tools.javac.resources.LauncherProperties", "Errors", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.resources.LauncherProperties",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.resources.LauncherProperties$Errors"
	};
	$loadClass(LauncherProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LauncherProperties);
	});
	return class$;
}

$Class* LauncherProperties::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com