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

$MethodInfo _PooledConnectionFactory_MethodInfo_[] = {
	{"createPooledConnection", "(Lcom/sun/jndi/ldap/pool/PoolCallback;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnectionFactory, createPooledConnection, $PooledConnection*, $PoolCallback*), "javax.naming.NamingException"},
	{}
};

$ClassInfo _PooledConnectionFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jndi.ldap.pool.PooledConnectionFactory",
	nullptr,
	nullptr,
	nullptr,
	_PooledConnectionFactory_MethodInfo_
};

$Object* allocate$PooledConnectionFactory($Class* clazz) {
	return $of($alloc(PooledConnectionFactory));
}

$Class* PooledConnectionFactory::load$($String* name, bool initialize) {
	$loadClass(PooledConnectionFactory, name, initialize, &_PooledConnectionFactory_ClassInfo_, allocate$PooledConnectionFactory);
	return class$;
}

$Class* PooledConnectionFactory::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com