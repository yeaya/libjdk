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

$MethodInfo _PooledConnection_MethodInfo_[] = {
	{"addConnectionEventListener", "(Ljavax/sql/ConnectionEventListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addStatementEventListener", "(Ljavax/sql/StatementEventListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"removeConnectionEventListener", "(Ljavax/sql/ConnectionEventListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeStatementEventListener", "(Ljavax/sql/StatementEventListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PooledConnection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.PooledConnection",
	nullptr,
	nullptr,
	nullptr,
	_PooledConnection_MethodInfo_
};

$Object* allocate$PooledConnection($Class* clazz) {
	return $of($alloc(PooledConnection));
}

$Class* PooledConnection::load$($String* name, bool initialize) {
	$loadClass(PooledConnection, name, initialize, &_PooledConnection_ClassInfo_, allocate$PooledConnection);
	return class$;
}

$Class* PooledConnection::class$ = nullptr;

	} // sql
} // javax