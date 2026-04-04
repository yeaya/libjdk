#include <javax/sql/rowset/spi/SyncFactory$2.h>
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

void SyncFactory$2::init$() {
}

$Object* SyncFactory$2::run() {
	return $of($System::getProperty("rowset.provider.classname"_s));
}

SyncFactory$2::SyncFactory$2() {
}

$Class* SyncFactory$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SyncFactory$2, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SyncFactory$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.sql.rowset.spi.SyncFactory",
		"initMapIfNecessary",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.spi.SyncFactory$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sql.rowset.spi.SyncFactory$2",
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
	$loadClass(SyncFactory$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SyncFactory$2);
	});
	return class$;
}

$Class* SyncFactory$2::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax