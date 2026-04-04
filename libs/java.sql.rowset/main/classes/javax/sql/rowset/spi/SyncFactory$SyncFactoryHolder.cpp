#include <javax/sql/rowset/spi/SyncFactory$SyncFactoryHolder.h>
#include <javax/sql/rowset/spi/SyncFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SyncFactory = ::javax::sql::rowset::spi::SyncFactory;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

$SyncFactory* SyncFactory$SyncFactoryHolder::factory = nullptr;

void SyncFactory$SyncFactoryHolder::init$() {
}

void SyncFactory$SyncFactoryHolder::clinit$($Class* clazz) {
	$assignStatic(SyncFactory$SyncFactoryHolder::factory, $new($SyncFactory));
}

SyncFactory$SyncFactoryHolder::SyncFactory$SyncFactoryHolder() {
}

$Class* SyncFactory$SyncFactoryHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factory", "Ljavax/sql/rowset/spi/SyncFactory;", nullptr, $STATIC | $FINAL, $staticField(SyncFactory$SyncFactoryHolder, factory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SyncFactory$SyncFactoryHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.spi.SyncFactory$SyncFactoryHolder", "javax.sql.rowset.spi.SyncFactory", "SyncFactoryHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sql.rowset.spi.SyncFactory$SyncFactoryHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sql.rowset.spi.SyncFactory"
	};
	$loadClass(SyncFactory$SyncFactoryHolder, name, initialize, &classInfo$$, SyncFactory$SyncFactoryHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SyncFactory$SyncFactoryHolder);
	});
	return class$;
}

$Class* SyncFactory$SyncFactoryHolder::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax