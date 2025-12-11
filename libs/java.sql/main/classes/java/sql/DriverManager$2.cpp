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

$MethodInfo _DriverManager$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DriverManager$2::*)()>(&DriverManager$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DriverManager$2_EnclosingMethodInfo_ = {
	"java.sql.DriverManager",
	"ensureDriversInitialized",
	"()V"
};

$InnerClassInfo _DriverManager$2_InnerClassesInfo_[] = {
	{"java.sql.DriverManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DriverManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.sql.DriverManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DriverManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_DriverManager$2_EnclosingMethodInfo_,
	_DriverManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.sql.DriverManager"
};

$Object* allocate$DriverManager$2($Class* clazz) {
	return $of($alloc(DriverManager$2));
}

void DriverManager$2::init$() {
}

$Object* DriverManager$2::run() {
	$useLocalCurrentObjectStackCache();
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
	return $of(nullptr);
}

DriverManager$2::DriverManager$2() {
}

$Class* DriverManager$2::load$($String* name, bool initialize) {
	$loadClass(DriverManager$2, name, initialize, &_DriverManager$2_ClassInfo_, allocate$DriverManager$2);
	return class$;
}

$Class* DriverManager$2::class$ = nullptr;

	} // sql
} // java