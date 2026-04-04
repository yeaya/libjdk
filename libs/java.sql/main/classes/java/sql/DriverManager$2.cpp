#include <java/sql/DriverManager$2.h>
#include <java/sql/Driver.h>
#include <java/sql/DriverManager.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Driver = ::java::sql::Driver;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace sql {

void DriverManager$2::init$() {
}

$Object* DriverManager$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($Driver);
	$var($ServiceLoader, loadedDrivers, $ServiceLoader::load($Driver::class$));
	$var($Iterator, driversIterator, $nc(loadedDrivers)->iterator());
	try {
		while ($nc(driversIterator)->hasNext()) {
			driversIterator->next();
		}
	} catch ($Throwable& t) {
	}
	return nullptr;
}

DriverManager$2::DriverManager$2() {
}

$Class* DriverManager$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DriverManager$2, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DriverManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.sql.DriverManager",
		"ensureDriversInitialized",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.sql.DriverManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.sql.DriverManager$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.sql.DriverManager"
	};
	$loadClass(DriverManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriverManager$2);
	});
	return class$;
}

$Class* DriverManager$2::class$ = nullptr;

	} // sql
} // java