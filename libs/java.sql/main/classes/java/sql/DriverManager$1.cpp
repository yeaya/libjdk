#include <java/sql/DriverManager$1.h>
#include <java/sql/DriverManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

void DriverManager$1::init$() {
}

$Object* DriverManager$1::run() {
	return $of($System::getProperty("jdbc.drivers"_s));
}

DriverManager$1::DriverManager$1() {
}

$Class* DriverManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DriverManager$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DriverManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.sql.DriverManager",
		"ensureDriversInitialized",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.sql.DriverManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.sql.DriverManager$1",
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
		"java.sql.DriverManager"
	};
	$loadClass(DriverManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriverManager$1);
	});
	return class$;
}

$Class* DriverManager$1::class$ = nullptr;

	} // sql
} // java