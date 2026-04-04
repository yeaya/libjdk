#include <sun/awt/FontConfiguration$3.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void FontConfiguration$3::init$() {
}

$Object* FontConfiguration$3::run() {
	return $of($System::getProperty("os.name"_s));
}

FontConfiguration$3::FontConfiguration$3() {
}

$Class* FontConfiguration$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FontConfiguration$3, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontConfiguration$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.FontConfiguration",
		"sanityCheck",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.FontConfiguration$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.FontConfiguration$3",
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
		"sun.awt.FontConfiguration"
	};
	$loadClass(FontConfiguration$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontConfiguration$3);
	});
	return class$;
}

$Class* FontConfiguration$3::class$ = nullptr;

	} // awt
} // sun