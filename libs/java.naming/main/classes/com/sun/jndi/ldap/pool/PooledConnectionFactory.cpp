#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>
#include <com/sun/jndi/ldap/pool/PoolCallback.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <jcpp.h>

using $PoolCallback = ::com::sun::jndi::ldap::pool::PoolCallback;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$Class* PooledConnectionFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createPooledConnection", "(Lcom/sun/jndi/ldap/pool/PoolCallback;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionFactory, createPooledConnection, $PooledConnection*, $PoolCallback*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jndi.ldap.pool.PooledConnectionFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PooledConnectionFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PooledConnectionFactory);
	});
	return class$;
}

$Class* PooledConnectionFactory::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com