#include <com/sun/jndi/ldap/pool/ConnectionsRef.h>
#include <com/sun/jndi/ldap/pool/Connections.h>
#include <jcpp.h>

using $Connections = ::com::sun::jndi::ldap::pool::Connections;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

void ConnectionsRef::init$($Connections* conns) {
	$set(this, conns, conns);
}

$Connections* ConnectionsRef::getConnections() {
	return this->conns;
}

ConnectionsRef::ConnectionsRef() {
}

$Class* ConnectionsRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"conns", "Lcom/sun/jndi/ldap/pool/Connections;", nullptr, $PRIVATE | $FINAL, $field(ConnectionsRef, conns)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/ldap/pool/Connections;)V", nullptr, 0, $method(ConnectionsRef, init$, void, $Connections*)},
		{"getConnections", "()Lcom/sun/jndi/ldap/pool/Connections;", nullptr, 0, $method(ConnectionsRef, getConnections, $Connections*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.pool.ConnectionsRef",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionsRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionsRef);
	});
	return class$;
}

$Class* ConnectionsRef::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com