#include <javax/sql/CommonDataSource.h>
#include <java/io/PrintWriter.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/ShardingKeyBuilder.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $ShardingKeyBuilder = ::java::sql::ShardingKeyBuilder;
using $Logger = ::java::util::logging::Logger;

namespace javax {
	namespace sql {

$ShardingKeyBuilder* CommonDataSource::createShardingKeyBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createShardingKeyBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* CommonDataSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createShardingKeyBuilder", "()Ljava/sql/ShardingKeyBuilder;", nullptr, $PUBLIC, $virtualMethod(CommonDataSource, createShardingKeyBuilder, $ShardingKeyBuilder*), "java.sql.SQLException"},
		{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CommonDataSource, getLogWriter, $PrintWriter*), "java.sql.SQLException"},
		{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CommonDataSource, getLoginTimeout, int32_t), "java.sql.SQLException"},
		{"getParentLogger", "()Ljava/util/logging/Logger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CommonDataSource, getParentLogger, $Logger*), "java.sql.SQLFeatureNotSupportedException"},
		{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CommonDataSource, setLogWriter, void, $PrintWriter*), "java.sql.SQLException"},
		{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CommonDataSource, setLoginTimeout, void, int32_t), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.CommonDataSource",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CommonDataSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CommonDataSource);
	});
	return class$;
}

$Class* CommonDataSource::class$ = nullptr;

	} // sql
} // javax