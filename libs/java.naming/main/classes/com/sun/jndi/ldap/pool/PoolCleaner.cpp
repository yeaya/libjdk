#include <com/sun/jndi/ldap/pool/PoolCleaner.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $PoolArray = $Array<::com::sun::jndi::ldap::pool::Pool>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

void PoolCleaner::init$(int64_t period, $PoolArray* pools) {
	this->period = period;
	$set(this, pools, $cast($PoolArray, $nc(pools)->clone()));
}

void PoolCleaner::run() {
	int64_t threshold = 0;
	while (true) {
		$synchronized(this) {
			try {
				$of(this)->wait(this->period);
			} catch ($InterruptedException& ignore) {
			}
			threshold = $System::currentTimeMillis() - this->period;
			for (int32_t i = 0; i < $nc(this->pools)->length; ++i) {
				if (this->pools->get(i) != nullptr) {
					$nc(this->pools->get(i))->expire(threshold);
				}
			}
		}
	}
}

PoolCleaner::PoolCleaner() {
}

$Class* PoolCleaner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pools", "[Lcom/sun/jndi/ldap/pool/Pool;", nullptr, $PRIVATE | $FINAL, $field(PoolCleaner, pools)},
		{"period", "J", nullptr, $PRIVATE | $FINAL, $field(PoolCleaner, period)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J[Lcom/sun/jndi/ldap/pool/Pool;)V", nullptr, $PUBLIC, $method(PoolCleaner, init$, void, int64_t, $PoolArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PoolCleaner, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.pool.PoolCleaner",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PoolCleaner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolCleaner);
	});
	return class$;
}

$Class* PoolCleaner::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com