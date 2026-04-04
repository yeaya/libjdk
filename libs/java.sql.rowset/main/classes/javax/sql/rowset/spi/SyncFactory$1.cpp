#include <javax/sql/rowset/spi/SyncFactory$1.h>
#include <javax/sql/rowset/spi/SyncFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

void SyncFactory$1::init$() {
}

$Object* SyncFactory$1::run() {
	return $of($System::getProperty("rowset.properties"_s));
}

SyncFactory$1::SyncFactory$1() {
}

$Class* SyncFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SyncFactory$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SyncFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.sql.rowset.spi.SyncFactory",
		"initMapIfNecessary",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.spi.SyncFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sql.rowset.spi.SyncFactory$1",
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
		"javax.sql.rowset.spi.SyncFactory"
	};
	$loadClass(SyncFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SyncFactory$1);
	});
	return class$;
}

$Class* SyncFactory$1::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax