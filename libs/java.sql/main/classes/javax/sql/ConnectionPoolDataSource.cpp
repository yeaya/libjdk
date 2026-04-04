#include <javax/sql/ConnectionPoolDataSource.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <javax/sql/PooledConnection.h>
#include <javax/sql/PooledConnectionBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $PooledConnection = ::javax::sql::PooledConnection;
using $PooledConnectionBuilder = ::javax::sql::PooledConnectionBuilder;

namespace javax {
	namespace sql {

$PooledConnectionBuilder* ConnectionPoolDataSource::createPooledConnectionBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createPooledConnectionBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* ConnectionPoolDataSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createPooledConnectionBuilder", "()Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC, $virtualMethod(ConnectionPoolDataSource, createPooledConnectionBuilder, $PooledConnectionBuilder*), "java.sql.SQLException"},
		{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT},
		{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"getPooledConnection", "()Ljavax/sql/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionPoolDataSource, getPooledConnection, $PooledConnection*), "java.sql.SQLException"},
		{"getPooledConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionPoolDataSource, getPooledConnection, $PooledConnection*, $String*, $String*), "java.sql.SQLException"},
		{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.ConnectionPoolDataSource",
		nullptr,
		"javax.sql.CommonDataSource",
		nullptr,
		methodInfos$$
	};
	$loadClass(ConnectionPoolDataSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionPoolDataSource);
	});
	return class$;
}

$Class* ConnectionPoolDataSource::class$ = nullptr;

	} // sql
} // javax