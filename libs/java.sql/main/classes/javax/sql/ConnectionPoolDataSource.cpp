#include <javax/sql/ConnectionPoolDataSource.h>

#include <java/sql/SQLFeatureNotSupportedException.h>
#include <javax/sql/PooledConnection.h>
#include <javax/sql/PooledConnectionBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $CommonDataSource = ::javax::sql::CommonDataSource;
using $PooledConnection = ::javax::sql::PooledConnection;
using $PooledConnectionBuilder = ::javax::sql::PooledConnectionBuilder;

namespace javax {
	namespace sql {

$MethodInfo _ConnectionPoolDataSource_MethodInfo_[] = {
	{"createPooledConnectionBuilder", "()Ljavax/sql/PooledConnectionBuilder;", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPooledConnection", "()Ljavax/sql/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getPooledConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/PooledConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConnectionPoolDataSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.ConnectionPoolDataSource",
	nullptr,
	"javax.sql.CommonDataSource",
	nullptr,
	_ConnectionPoolDataSource_MethodInfo_
};

$Object* allocate$ConnectionPoolDataSource($Class* clazz) {
	return $of($alloc(ConnectionPoolDataSource));
}

$PooledConnectionBuilder* ConnectionPoolDataSource::createPooledConnectionBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createPooledConnectionBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* ConnectionPoolDataSource::load$($String* name, bool initialize) {
	$loadClass(ConnectionPoolDataSource, name, initialize, &_ConnectionPoolDataSource_ClassInfo_, allocate$ConnectionPoolDataSource);
	return class$;
}

$Class* ConnectionPoolDataSource::class$ = nullptr;

	} // sql
} // javax