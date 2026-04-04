#include <com/sun/jndi/ldap/pool/PoolCallback.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <jcpp.h>

using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$Class* PoolCallback::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"releasePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PoolCallback, releasePooledConnection, bool, $PooledConnection*)},
		{"removePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PoolCallback, removePooledConnection, bool, $PooledConnection*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jndi.ldap.pool.PoolCallback",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PoolCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolCallback);
	});
	return class$;
}

$Class* PoolCallback::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com