#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$Class* PooledConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"closeConnection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, closeConnection, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jndi.ldap.pool.PooledConnection",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PooledConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PooledConnection);
	});
	return class$;
}

$Class* PooledConnection::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com