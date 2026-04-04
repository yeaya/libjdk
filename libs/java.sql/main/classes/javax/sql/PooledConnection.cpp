#include <javax/sql/PooledConnection.h>
#include <java/sql/Connection.h>
#include <javax/sql/ConnectionEventListener.h>
#include <javax/sql/StatementEventListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $ConnectionEventListener = ::javax::sql::ConnectionEventListener;
using $StatementEventListener = ::javax::sql::StatementEventListener;

namespace javax {
	namespace sql {

$Class* PooledConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addConnectionEventListener", "(Ljavax/sql/ConnectionEventListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, addConnectionEventListener, void, $ConnectionEventListener*)},
		{"addStatementEventListener", "(Ljavax/sql/StatementEventListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, addStatementEventListener, void, $StatementEventListener*)},
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, close, void), "java.sql.SQLException"},
		{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, getConnection, $Connection*), "java.sql.SQLException"},
		{"removeConnectionEventListener", "(Ljavax/sql/ConnectionEventListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, removeConnectionEventListener, void, $ConnectionEventListener*)},
		{"removeStatementEventListener", "(Ljavax/sql/StatementEventListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PooledConnection, removeStatementEventListener, void, $StatementEventListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.PooledConnection",
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

	} // sql
} // javax