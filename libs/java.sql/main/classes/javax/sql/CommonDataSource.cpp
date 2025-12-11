#include <javax/sql/CommonDataSource.h>

#include <java/io/PrintWriter.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/ShardingKeyBuilder.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $ShardingKeyBuilder = ::java::sql::ShardingKeyBuilder;

namespace javax {
	namespace sql {

$MethodInfo _CommonDataSource_MethodInfo_[] = {
	{"createShardingKeyBuilder", "()Ljava/sql/ShardingKeyBuilder;", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParentLogger", "()Ljava/util/logging/Logger;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLFeatureNotSupportedException"},
	{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _CommonDataSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.CommonDataSource",
	nullptr,
	nullptr,
	nullptr,
	_CommonDataSource_MethodInfo_
};

$Object* allocate$CommonDataSource($Class* clazz) {
	return $of($alloc(CommonDataSource));
}

$ShardingKeyBuilder* CommonDataSource::createShardingKeyBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createShardingKeyBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* CommonDataSource::load$($String* name, bool initialize) {
	$loadClass(CommonDataSource, name, initialize, &_CommonDataSource_ClassInfo_, allocate$CommonDataSource);
	return class$;
}

$Class* CommonDataSource::class$ = nullptr;

	} // sql
} // javax